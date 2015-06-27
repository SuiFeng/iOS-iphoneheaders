/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:25 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebCore/DOMObject.h>

@class NSString, DOMNode, DOMMediaList;

@interface DOMStyleSheet : DOMObject

@property (copy,readonly) NSString * type; 
@property (assign) char disabled; 
@property (readonly) DOMNode * ownerNode; 
@property (readonly) DOMStyleSheet * parentStyleSheet; 
@property (copy,readonly) NSString * href; 
@property (copy,readonly) NSString * title; 
@property (readonly) DOMMediaList * media; 
-(void)dealloc;
-(NSString *)type;
-(NSString *)title;
-(NSString *)href;
-(char)disabled;
-(void)setDisabled:(char)arg1 ;
-(void)finalize;
-(DOMMediaList *)media;
-(DOMStyleSheet *)parentStyleSheet;
-(DOMNode *)ownerNode;
@end
