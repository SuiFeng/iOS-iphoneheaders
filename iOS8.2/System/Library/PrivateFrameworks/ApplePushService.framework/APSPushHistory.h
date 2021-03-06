/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:24:59 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/ApplePushService.framework/apsd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class APSEnvironment, NSMutableDictionary;

@interface APSPushHistory : NSObject {

	APSEnvironment* _environment;
	NSMutableDictionary* _history;

}
-(id)timestampForTopic:(id)arg1 token:(id)arg2 ;
-(char)hasPayload:(id)arg1 forTopic:(id)arg2 token:(id)arg3 ;
-(void)receivedPushWithTopic:(id)arg1 token:(id)arg2 payload:(id)arg3 timestamp:(id)arg4 ;
-(id)_keyForTopic:(id)arg1 token:(id)arg2 ;
-(void)_pruneHistory;
-(void)dealloc;
-(id)initWithEnvironment:(id)arg1 ;
@end

