/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:56 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebCore/DOMUIEvent.h>

@interface DOMGestureEvent : DOMUIEvent

@property (readonly) <DOMEventTarget> * target; 
@property (readonly) float scale; 
@property (readonly) float rotation; 
@property (readonly) bool ctrlKey; 
@property (readonly) bool shiftKey; 
@property (readonly) bool altKey; 
@property (readonly) bool metaKey; 
-(float)scale;
-(id)target;
-(float)rotation;
-(bool)ctrlKey;
-(bool)shiftKey;
-(bool)altKey;
-(bool)metaKey;
-(void)initGestureEvent:(id)arg1 canBubble:(bool)arg2 cancelable:(bool)arg3 view:(id)arg4 detail:(int)arg5 screenX:(int)arg6 screenY:(int)arg7 clientX:(int)arg8 clientY:(int)arg9 ctrlKey:(bool)arg10 altKey:(bool)arg11 shiftKey:(bool)arg12 metaKey:(bool)arg13 target:(id)arg14 scale:(float)arg15 rotation:(float)arg16 ;
@end

