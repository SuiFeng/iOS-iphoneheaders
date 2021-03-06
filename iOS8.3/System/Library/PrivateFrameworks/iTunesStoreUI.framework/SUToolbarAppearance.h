/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:40:01 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <iTunesStoreUI/NSCopying.h>

@class NSMutableDictionary, UIColor;

@interface SUToolbarAppearance : NSObject <NSCopying> {

	NSMutableDictionary* _backgroundImages;
	NSMutableDictionary* _shadowImages;
	UIColor* _tintColor;

}

@property (nonatomic,retain) UIColor * tintColor;              //@synthesize tintColor=_tintColor - In the implementation block
+(id)defaultToolbarAppearance;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(UIColor *)tintColor;
-(void)setTintColor:(UIColor *)arg1 ;
-(void)styleToolbar:(id)arg1 ;
-(void)setBackgroundImage:(id)arg1 forPosition:(int)arg2 barMetrics:(int)arg3 ;
-(void)enumerateBackgroundImagesUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateShadowImagesUsingBlock:(/*^block*/id)arg1 ;
-(id)backgroundImageForPosition:(int)arg1 barMetrics:(int)arg2 ;
-(void)setShadowImage:(id)arg1 forPosition:(int)arg2 ;
-(id)shadowImageForPosition:(int)arg1 ;
@end

