/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:30:16 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ATFoundation/NSXPCListenerDelegate.h>

@protocol ATMessageLink;
@class NSXPCListener, NSString;

@interface ATMessageLinkProxyListener : NSObject <NSXPCListenerDelegate> {

	NSXPCListener* _listener;
	id<ATMessageLink> _messageLink;

}

@property (nonatomic,retain) id<ATMessageLink> messageLink;              //@synthesize messageLink=_messageLink - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)start;
-(void)stop;
-(id)endpoint;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(id<ATMessageLink>)messageLink;
-(void)setMessageLink:(id<ATMessageLink>)arg1 ;
-(id)initWithMessageLink:(id)arg1 ;
@end
