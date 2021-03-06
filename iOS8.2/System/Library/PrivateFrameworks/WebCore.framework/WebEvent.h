/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:26 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <WebCore/WebCore-Structs.h>
@class NSString, NSArray;

@interface WebEvent : NSObject {

	int _type;
	double _timestamp;
	CGPoint _locationInWindow;
	NSString* _characters;
	NSString* _charactersIgnoringModifiers;
	unsigned _modifierFlags;
	char _keyRepeating;
	char _popupVariant;
	unsigned _keyboardFlags;
	unsigned short _keyCode;
	char _tabKey;
	int _characterSet;
	float _deltaX;
	float _deltaY;
	unsigned _touchCount;
	NSArray* _touchLocations;
	NSArray* _touchIdentifiers;
	NSArray* _touchPhases;
	char _isGesture;
	float _gestureScale;
	float _gestureRotation;
	char _wasHandled;

}

@property (nonatomic,readonly) int type;                                                   //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) double timestamp;                                           //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) CGPoint locationInWindow; 
@property (nonatomic,retain,readonly) NSString * characters; 
@property (nonatomic,retain,readonly) NSString * charactersIgnoringModifiers; 
@property (nonatomic,readonly) unsigned modifierFlags; 
@property (getter=isKeyRepeating,nonatomic,readonly) char keyRepeating; 
@property (getter=isPopupVariant,nonatomic,readonly) char popupVariant; 
@property (nonatomic,readonly) unsigned keyboardFlags; 
@property (nonatomic,readonly) unsigned short keyCode; 
@property (getter=isTabKey,nonatomic,readonly) char tabKey; 
@property (nonatomic,readonly) int characterSet; 
@property (nonatomic,readonly) float deltaX; 
@property (nonatomic,readonly) float deltaY; 
@property (nonatomic,readonly) unsigned touchCount; 
@property (nonatomic,retain,readonly) NSArray * touchLocations; 
@property (nonatomic,retain,readonly) NSArray * touchIdentifiers; 
@property (nonatomic,retain,readonly) NSArray * touchPhases; 
@property (nonatomic,readonly) char isGesture; 
@property (nonatomic,readonly) float gestureScale; 
@property (nonatomic,readonly) float gestureRotation; 
@property (assign,nonatomic) char wasHandled;                                              //@synthesize wasHandled=_wasHandled - In the implementation block
-(void)dealloc;
-(id)description;
-(double)timestamp;
-(int)type;
-(unsigned)modifierFlags;
-(id)initWithKeyEventType:(int)arg1 timeStamp:(double)arg2 characters:(id)arg3 charactersIgnoringModifiers:(id)arg4 modifiers:(unsigned)arg5 isRepeating:(char)arg6 withFlags:(unsigned)arg7 keyCode:(unsigned short)arg8 isTabKey:(char)arg9 characterSet:(int)arg10 ;
-(id)initWithMouseEventType:(int)arg1 timeStamp:(double)arg2 location:(CGPoint)arg3 ;
-(char)wasHandled;
-(id)initWithScrollWheelEventWithTimeStamp:(double)arg1 location:(CGPoint)arg2 deltaX:(float)arg3 deltaY:(float)arg4 ;
-(CGPoint)locationInWindow;
-(NSArray *)touchLocations;
-(NSArray *)touchIdentifiers;
-(NSArray *)touchPhases;
-(NSString *)characters;
-(id)initWithTouchEventType:(int)arg1 timeStamp:(double)arg2 location:(CGPoint)arg3 modifiers:(unsigned)arg4 touchCount:(unsigned)arg5 touchLocations:(id)arg6 touchIdentifiers:(id)arg7 touchPhases:(id)arg8 isGesture:(char)arg9 gestureScale:(float)arg10 gestureRotation:(float)arg11 ;
-(id)_typeDescription;
-(int)characterSet;
-(unsigned short)keyCode;
-(float)deltaX;
-(float)deltaY;
-(void)setWasHandled:(char)arg1 ;
-(NSString *)charactersIgnoringModifiers;
-(float)gestureScale;
-(float)gestureRotation;
-(char)isGesture;
-(unsigned)touchCount;
-(char)isKeyRepeating;
-(id)_touchPhaseDescription:(int)arg1 ;
-(id)_characterSetDescription;
-(id)_touchLocationsDescription:(id)arg1 ;
-(id)_touchIdentifiersDescription;
-(id)_touchPhasesDescription;
-(id)_eventDescription;
-(id)initWithKeyEventType:(int)arg1 timeStamp:(double)arg2 characters:(id)arg3 charactersIgnoringModifiers:(id)arg4 modifiers:(unsigned)arg5 isRepeating:(char)arg6 isPopupVariant:(char)arg7 keyCode:(unsigned short)arg8 isTabKey:(char)arg9 characterSet:(int)arg10 ;
-(id)_modiferFlagsDescription;
-(char)isPopupVariant;
-(unsigned)keyboardFlags;
-(char)isTabKey;
@end

