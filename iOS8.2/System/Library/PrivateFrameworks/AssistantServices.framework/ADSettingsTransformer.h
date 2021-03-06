/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:25:01 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/assistantd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <assistantd/ADAceRequestTransformer.h>
#import <assistantd/ADAceResponseTransformer.h>

@class NSString;

@interface ADSettingsTransformer : NSObject <ADAceRequestTransformer, ADAceResponseTransformer>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)getSiriRequestForClientBoundAceCommand:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)aceCommandForSiriResponse:(id)arg1 responseError:(id)arg2 forRequestCommand:(id)arg3 ;
@end

