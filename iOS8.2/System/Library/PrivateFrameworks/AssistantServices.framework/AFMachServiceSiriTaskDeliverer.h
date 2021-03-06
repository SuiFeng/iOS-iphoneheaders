/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:27 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AssistantServices/AFSiriTaskDelivering.h>

@class NSString;

@interface AFMachServiceSiriTaskDeliverer : NSObject <AFSiriTaskDelivering> {

	NSString* _machServiceName;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)machServiceSiriTaskDelivererForAppWithBundleIdentifier:(id)arg1 ;
-(NSString *)description;
-(id)initWithMachServiceName:(id)arg1 ;
-(void)deliverSiriTask:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

