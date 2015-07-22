/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:15:53 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Assistant/Plugins/NanoAppSync.assistantBundle/NanoAppSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <NanoAppSync/NanoAppSync-Structs.h>
@class NASAppSyncState, NSArray, NSObject;

@interface NASAppSyncMetaDataSource : NSObject {

	NASAppSyncState* _state;
	NSArray* _metaData;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,copy,readonly) NSArray * metaData;                   //@synthesize metaData=_metaData - In the implementation block
@property (nonatomic,copy,readonly) NASAppSyncState * state;              //@synthesize state=_state - In the implementation block
+(SCD_Struct_NA1)_createSourceInfoForLastState:(id)arg1 startAnchor:(id)arg2 keyAnchor:(id)arg3 validity:(id)arg4 workspaceInfo:(id)arg5 ;
-(void)waitUntilReady;
-(id)initWithLastState:(id)arg1 startAnchor:(id)arg2 keyAnchor:(id)arg3 validity:(id)arg4 observer:(id)arg5 workspaceInfo:(id)arg6 ;
-(void)dealloc;
-(NASAppSyncState *)state;
-(NSArray *)metaData;
@end
