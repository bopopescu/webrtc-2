# Copyright 2014 The Chromium Authors. All rights reserved.
# Use of this source code is governed by a BSD-style license that can be
# found in the LICENSE file.

{
  'targets': [
    {
      # GN version: //components/omnibox
      'target_name': 'omnibox',
      'type': 'static_library',
      'dependencies': [
        '../base/base.gyp:base',
        '../base/base.gyp:base_i18n',
        '../net/net.gyp:net',
        '../sql/sql.gyp:sql',
        '../third_party/protobuf/protobuf.gyp:protobuf_lite',
        '../ui/base/ui_base.gyp:ui_base',
        '../url/url.gyp:url_lib',
        'bookmarks_browser',
        'component_metrics_proto',
        'components_resources.gyp:components_resources',
        'components_strings.gyp:components_strings',
        'history_core_browser',
        'keyed_service_core',
        'omnibox_in_memory_url_index_cache_proto',
        'query_parser',
        'search',
        'search_engines',
        'url_fixer',
        'variations_http_provider',
      ],
      'export_dependent_settings': [
        'component_metrics_proto',
      ],
      'include_dirs': [
        '..',
      ],
      'sources': [
        # Note: sources list duplicated in GN build.
        'omnibox/answers_cache.cc',
        'omnibox/answers_cache.h',
        'omnibox/autocomplete_input.cc',
        'omnibox/autocomplete_input.h',
        'omnibox/autocomplete_match.cc',
        'omnibox/autocomplete_match.h',
        'omnibox/autocomplete_match_type.cc',
        'omnibox/autocomplete_match_type.h',
        'omnibox/autocomplete_provider.cc',
        'omnibox/autocomplete_provider.h',
        'omnibox/autocomplete_provider_client.h',
        'omnibox/autocomplete_provider_listener.h',
        'omnibox/autocomplete_result.cc',
        'omnibox/autocomplete_result.h',
        'omnibox/autocomplete_scheme_classifier.h',
        'omnibox/base_search_provider.cc',
        'omnibox/base_search_provider.h',
        'omnibox/bookmark_provider.cc',
        'omnibox/bookmark_provider.h',
        'omnibox/history_provider.cc',
        'omnibox/history_provider.h',
        'omnibox/history_quick_provider.cc',
        'omnibox/history_quick_provider.h',
        'omnibox/history_url_provider.cc',
        'omnibox/history_url_provider.h',
        'omnibox/in_memory_url_index.cc',
        'omnibox/in_memory_url_index.h',
        'omnibox/in_memory_url_index_types.cc',
        'omnibox/in_memory_url_index_types.h',
        'omnibox/keyword_extensions_delegate.cc',
        'omnibox/keyword_extensions_delegate.h',
        'omnibox/keyword_provider.cc',
        'omnibox/keyword_provider.h',
        'omnibox/omnibox_field_trial.cc',
        'omnibox/omnibox_field_trial.h',
        'omnibox/omnibox_log.cc',
        'omnibox/omnibox_log.h',
        'omnibox/omnibox_switches.cc',
        'omnibox/omnibox_switches.h',
        'omnibox/scored_history_match.cc',
        'omnibox/scored_history_match.h',
        'omnibox/search_provider.cc',
        'omnibox/search_provider.h',
        'omnibox/search_suggestion_parser.cc',
        'omnibox/search_suggestion_parser.h',
        'omnibox/shortcuts_backend.cc',
        'omnibox/shortcuts_backend.h',
        'omnibox/shortcuts_database.cc',
        'omnibox/shortcuts_database.h',
        'omnibox/suggestion_answer.cc',
        'omnibox/suggestion_answer.h',
        'omnibox/url_index_private_data.cc',
        'omnibox/url_index_private_data.h',
        'omnibox/url_prefix.cc',
        'omnibox/url_prefix.h',
      ],
    },
    {
      # Protobuf compiler / generator for the InMemoryURLIndex caching
      # protocol buffer.
      # GN version: //components/omnibox:in_memory_url_index_cache_proto
      'target_name': 'omnibox_in_memory_url_index_cache_proto',
      'type': 'static_library',
      'sources': [ 'omnibox/in_memory_url_index_cache.proto', ],
      'variables': {
        'proto_in_dir': 'omnibox',
        'proto_out_dir': 'components/omnibox',
      },
      'includes': [ '../build/protoc.gypi', ],
    },
    {
      # GN version: //components/omnibox:test_support
      'target_name': 'omnibox_test_support',
      'type': 'static_library',
      'dependencies': [
        '../base/base.gyp:base',
        'omnibox',
        'component_metrics_proto',
      ],
      'include_dirs': [
        '..',
      ],
      'sources': [
        # Note: sources list duplicated in GN build.
        'omnibox/test_scheme_classifier.cc',
        'omnibox/test_scheme_classifier.h',
      ],
    },
  ],
}
