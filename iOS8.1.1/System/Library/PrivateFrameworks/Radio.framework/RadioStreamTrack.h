/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:33:33 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Radio/RadioTrack.h>

@class NSURL;

@interface RadioStreamTrack : RadioTrack

@property (nonatomic,retain,readonly) NSURL * certificateURL; 
@property (nonatomic,retain,readonly) NSURL * contentURL; 
@property (nonatomic,retain,readonly) NSURL * keyServerURL; 
@property (getter=isSkipable,nonatomic,readonly) BOOL skipable; 
-(NSURL *)contentURL;
-(BOOL)isSkipable;
-(NSURL *)keyServerURL;
-(NSURL *)certificateURL;
@end

