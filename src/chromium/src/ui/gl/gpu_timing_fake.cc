// Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "ui/gl/gpu_timing_fake.h"

#include "testing/gtest/include/gtest/gtest.h"
#include "ui/gl/gl_mock.h"

namespace gfx {

using ::testing::_;
using ::testing::AtLeast;
using ::testing::AtMost;
using ::testing::Exactly;
using ::testing::Invoke;
using ::testing::NotNull;

GPUTimingFake::GPUTimingFake() {
  Reset();
}

GPUTimingFake::~GPUTimingFake() {
}

void GPUTimingFake::Reset() {
  current_time_ = 0;
  next_query_id_ = 23;
  allocated_queries_.clear();
  query_results_.clear();
  current_elapsed_query_.Reset();
}

void GPUTimingFake::SetCurrentGLTime(GLint64 current_time) {
  current_time_ = current_time;
}

void GPUTimingFake::SetDisjoint() {
  disjointed_ = true;
}

void GPUTimingFake::ExpectGetErrorCalls(MockGLInterface& gl) {
  EXPECT_CALL(gl, GetError()).Times(AtLeast(0))
      .WillRepeatedly(Invoke(this, &GPUTimingFake::FakeGLGetError));
}

void GPUTimingFake::ExpectDisjointCalls(MockGLInterface& gl) {
  EXPECT_CALL(gl, GetIntegerv(GL_GPU_DISJOINT_EXT, _)).Times(AtLeast(1))
      .WillRepeatedly(Invoke(this, &GPUTimingFake::FakeGLGetIntegerv));
}

void GPUTimingFake::ExpectNoDisjointCalls(MockGLInterface& gl) {
  EXPECT_CALL(gl, GetIntegerv(GL_GPU_DISJOINT_EXT, _)).Times(Exactly(0));
}

void GPUTimingFake::ExpectGPUTimerQuery(
    MockGLInterface& gl, bool elapsed_query) {
  EXPECT_CALL(gl, GenQueries(1, NotNull())).Times(AtLeast(2))
      .WillRepeatedly(Invoke(this, &GPUTimingFake::FakeGLGenQueries));

  if (!elapsed_query) {
    // Time Stamp based queries.
    EXPECT_CALL(gl, GetInteger64v(GL_TIMESTAMP, _))
        .WillRepeatedly(
            Invoke(this, &GPUTimingFake::FakeGLGetInteger64v));

    EXPECT_CALL(gl, QueryCounter(_, GL_TIMESTAMP)).Times(AtLeast(1))
        .WillRepeatedly(
             Invoke(this, &GPUTimingFake::FakeGLQueryCounter));
  }

  // Time Elapsed based queries.
  EXPECT_CALL(gl, BeginQuery(GL_TIME_ELAPSED, _))
      .WillRepeatedly(
          Invoke(this, &GPUTimingFake::FakeGLBeginQuery));

  EXPECT_CALL(gl, EndQuery(GL_TIME_ELAPSED))
      .WillRepeatedly(Invoke(this, &GPUTimingFake::FakeGLEndQuery));

  EXPECT_CALL(gl, GetQueryObjectiv(_, GL_QUERY_RESULT_AVAILABLE,
                                        NotNull()))
      .WillRepeatedly(
          Invoke(this, &GPUTimingFake::FakeGLGetQueryObjectiv));

  EXPECT_CALL(gl, GetQueryObjectui64v(_, GL_QUERY_RESULT, NotNull()))
      .WillRepeatedly(
           Invoke(this, &GPUTimingFake::FakeGLGetQueryObjectui64v));

  EXPECT_CALL(gl, DeleteQueries(1, NotNull())).Times(AtLeast(2))
      .WillRepeatedly(
           Invoke(this, &GPUTimingFake::FakeGLDeleteQueries));
}

void GPUTimingFake::ExpectOffsetCalculationQuery(
    MockGLInterface& gl) {
  EXPECT_CALL(gl, GetInteger64v(GL_TIMESTAMP, NotNull()))
      .Times(AtMost(1))
      .WillRepeatedly(
          Invoke(this, &GPUTimingFake::FakeGLGetInteger64v));
}

void GPUTimingFake::ExpectNoOffsetCalculationQuery(
    MockGLInterface& gl) {
  EXPECT_CALL(gl, GetInteger64v(GL_TIMESTAMP, NotNull())).Times(Exactly(0));
}

void GPUTimingFake::FakeGLGenQueries(GLsizei n, GLuint* ids) {
  for (GLsizei i = 0; i < n; i++) {
    ids[i] = next_query_id_++;
    allocated_queries_.insert(ids[i]);
  }
}

void GPUTimingFake::FakeGLDeleteQueries(GLsizei n, const GLuint* ids) {
  for (GLsizei i = 0; i < n; i++) {
    allocated_queries_.erase(ids[i]);
    query_results_.erase(ids[i]);
    if (current_elapsed_query_.query_id_ == ids[i])
      current_elapsed_query_.Reset();
  }
}

void GPUTimingFake::FakeGLBeginQuery(GLenum target, GLuint id) {
  switch(target) {
    case GL_TIME_ELAPSED:
      ASSERT_FALSE(current_elapsed_query_.active_);
      current_elapsed_query_.Reset();
      current_elapsed_query_.active_ = true;
      current_elapsed_query_.query_id_ = id;
      current_elapsed_query_.begin_time_ = current_time_;
      break;
    default:
      FAIL() << "Invalid target passed to BeginQuery: " << target;
  }
}

void GPUTimingFake::FakeGLEndQuery(GLenum target) {
  switch(target) {
    case GL_TIME_ELAPSED: {
      ASSERT_TRUE(current_elapsed_query_.active_);
      QueryResult& query = query_results_[current_elapsed_query_.query_id_];
      query.type_ = QueryResult::kQueryResultType_Elapsed;
      query.begin_time_ = current_elapsed_query_.begin_time_;
      query.value_ = current_time_;
      current_elapsed_query_.active_ = false;
    } break;
    default:
      FAIL() << "Invalid target passed to BeginQuery: " << target;
  }
}

void GPUTimingFake::FakeGLGetQueryObjectiv(GLuint id, GLenum pname,
                                                    GLint* params) {
  switch (pname) {
    case GL_QUERY_RESULT_AVAILABLE: {
      std::map<GLuint, QueryResult>::iterator it = query_results_.find(id);
      if (it != query_results_.end() && it->second.value_ <= current_time_)
        *params = 1;
      else
        *params = 0;
    } break;
    default:
      FAIL() << "Invalid variable passed to GetQueryObjectiv: " << pname;
  }
}

void GPUTimingFake::FakeGLQueryCounter(GLuint id, GLenum target) {
  switch (target) {
    case GL_TIMESTAMP: {
      ASSERT_TRUE(allocated_queries_.find(id) != allocated_queries_.end());
      QueryResult& query = query_results_[id];
      query.type_ = QueryResult::kQueryResultType_TimeStamp;
      query.value_ = current_time_;
    } break;

    default:
      FAIL() << "Invalid variable passed to QueryCounter: " << target;
  }
}

void GPUTimingFake::FakeGLGetInteger64v(GLenum pname, GLint64 * data) {
  switch (pname) {
    case GL_TIMESTAMP:
      *data = current_time_;
      break;
    default:
      FAIL() << "Invalid variable passed to GetInteger64v: " << pname;
  }
}

void GPUTimingFake::FakeGLGetQueryObjectui64v(GLuint id, GLenum pname,
                                                       GLuint64* params) {
  switch (pname) {
    case GL_QUERY_RESULT: {
      std::map<GLuint, QueryResult>::iterator it = query_results_.find(id);
      ASSERT_TRUE(it != query_results_.end());
      switch (it->second.type_) {
        case QueryResult::kQueryResultType_TimeStamp:
          *params = it->second.value_;
          break;
        case QueryResult::kQueryResultType_Elapsed:
          *params = it->second.value_ - it->second.begin_time_;
          break;
        default:
          FAIL() << "Invalid Query Result Type: " << it->second.type_;
      }
    } break;
    default:
      FAIL() << "Invalid variable passed to GetQueryObjectui64v: " << pname;
  }
}

void GPUTimingFake::FakeGLGetIntegerv(GLenum pname, GLint* params) {
  switch (pname) {
    case GL_GPU_DISJOINT_EXT:
      *params = static_cast<GLint>(disjointed_);
      disjointed_ = false;
      break;
    default:
      FAIL() << "Invalid variable passed to GetIntegerv: " << pname;
  }
}

GLenum GPUTimingFake::FakeGLGetError() {
  return GL_NO_ERROR;
}

}  // namespace gfx
