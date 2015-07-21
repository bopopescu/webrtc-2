// Treat class-dump output as a system header.
#pragma clang system_header
//
//     Generated by class-dump 3.4 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
//

#pragma mark Named Structures

#pragma mark Typedef'd Structures

typedef struct {
    unsigned long long _field1;
    id *_field2;
    unsigned long long *_field3;
    unsigned long long _field4[5];
} CDStruct_70511ce9;

typedef struct {
    unsigned short *_field1;
    long long _field2;
} CDStruct_f444e920;

typedef struct {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
} CDStruct_d2b197d1;

typedef struct {
    double loadFactor;
    long long numberOfHashFunctions;
    long long windowWidth;
} CDStruct_fd921134;

typedef struct {
    long long expectedNumberOfInsertions;
    double loadFactor;
    long long numberOfHashFunctions;
} CDStruct_d703e233;

typedef struct {
    long long location;
    long long length;
} CDStruct_627e0f85;

typedef struct {
    int tokenType;
    int tokenAltType;
    CDStruct_627e0f85 charRange;
    char *lexeme;
    int lexemeLength;
    int outOfBand;
} CDStruct_341fcc3f;

typedef struct {
    CDStruct_d703e233 bloomFilterSpecification;
    long long windowWidth;
} CDStruct_92de0e9e;

#pragma mark Typedef'd Unions

typedef union {
    struct {
        unsigned short updateComponent;
        unsigned short minorComponent;
        unsigned int majorComponent;
    } independent;
    unsigned long long combined;
} CDUnion_7de6e739;

#pragma mark -

//
// File: /Applications/Xcode.app/Contents/SharedFrameworks/DVTFoundation.framework/Versions/A/DVTFoundation
// UUID: BD7A27A3-3DC4-3291-A2CB-9D55AE490666
//
//                           Arch: x86_64
//                Current version: 1.0.0
//          Compatibility version: 1.0.0
//                 Source version: 7714.0.0.0.0
//       Minimum Mac OS X version: 10.9.0
//                    SDK version: 10.10.0
//
// Objective-C Garbage Collection: Unsupported
//
//                       Run path: @loader_path/../../../
//                               = /Applications/Xcode.app/Contents/SharedFrameworks
//

@protocol DVTInvalidation <NSObject>
- (void)primitiveInvalidate;

@optional
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly, nonatomic, getter=isValid) BOOL valid;
- (void)invalidate;
@end

@interface DVTMixIn : NSObject
{
}

+ (void)mixInExtendClass:(Class)arg1;

@end

@interface DVTInvalidationMixIn : DVTMixIn <DVTInvalidation>
{
}

+ (void)mixInExtendClass:(Class)arg1 assertInDealloc:(BOOL)arg2;
- (void)DVTInvalidationMixIn_SoftAssertDealloc;
- (void)DVTInvalidationMixIn_dealloc;
- (void)invalidate;
- (void)primitiveInvalidate;
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

@interface DVTStackBacktrace : NSObject
{
    unsigned long long *_returnAddresses;
    unsigned long long _returnAddressesCount;
    NSMutableArray *_symbolicatedArrayRepresentation;
}

+ (unsigned long long *)_callStackReturnAddressesExcludingTopFrames:(unsigned long long)arg1 returningCount:(unsigned long long *)arg2;
+ (unsigned long long *)_callStackReturnAddressesFromNumbers:(id)arg1 excludingTopFrames:(unsigned long long)arg2 returningCount:(unsigned long long *)arg3;
+ (id)currentStackBacktrace;
+ (id)stackBacktraceWithCallStackReturnAddresses:(id)arg1;
- (id)callStackReturnAddresses;
- (id)_frameForAddress:(unsigned long long)arg1 symbolicatorPtr:(struct _CSTypeRef *)arg2 symbolPtr:(struct _CSTypeRef *)arg3;
- (id)symbolicatedStackBacktraceFrames;
- (id)stringRepresentation;
- (void)dealloc;
- (id)initWithCallStackReturnAddresses:(unsigned long long *)arg1 count:(unsigned long long)arg2;
- (id)init;

@end

@interface DVTStackBacktraceFrame : NSObject
{
    unsigned long long _stackAddress;
    unsigned long long _lineNumber;
    NSString *_symbolName;
    NSString *_fileName;
    NSString *_symbolOwnerName;
}

@property(copy) NSString *symbolOwnerName; // @synthesize symbolOwnerName=_symbolOwnerName;
@property(copy) NSString *fileName; // @synthesize fileName=_fileName;
@property(copy) NSString *symbolName; // @synthesize symbolName=_symbolName;
@property unsigned long long lineNumber; // @synthesize lineNumber=_lineNumber;
@property unsigned long long stackAddress; // @synthesize stackAddress=_stackAddress;
- (id)frameStringRepresentation;

@end

@interface NSObject (DVTInvalidation)
+ (void)dvt_setupWithInvalidationImplementingClass:(Class)arg1;
@end

@interface NSObject (DVTInvalidation2)
+ (void)dvt_synthesizeInvalidation;
@end

@interface NSObject (DVTInvalidation2Private)
+ (void)_dvt_synthesizeInvalidationWithoutDeallocAssertion;
+ (id)_dvt_invalidatableClasses;
@end

