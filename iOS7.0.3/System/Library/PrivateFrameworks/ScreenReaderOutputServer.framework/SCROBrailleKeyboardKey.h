/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:19 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderOutputServer.framework/ScreenReaderOutputServer
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <ScreenReaderOutputServer/SCROBrailleKey.h>

@class NSString;

@interface SCROBrailleKeyboardKey : SCROBrailleKey {

	NSString* _keyString;
	unsigned _modifiers;

}
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(void)setKeyString:(id)arg1 ;
-(id)keyString;
-(unsigned)modifiers;
-(void)setModifiers:(unsigned)arg1 ;
@end
