/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:07:37 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CommunicationsSetupUI/CommunicationsSetupUI-Structs.h>
#import <UIKit/UIView.h>

@class UIBezierPath, UIImage;

@interface CNFRegShadowView : UIView {

	CGRect _cachedBounds;
	UIBezierPath* _cachedPath;
	UIImage* _shadowImage;

}

@property (assign,nonatomic) CGRect cachedBounds;                    //@synthesize cachedBounds=_cachedBounds - In the implementation block
@property (nonatomic,retain) UIBezierPath * cachedPath;              //@synthesize cachedPath=_cachedPath - In the implementation block
@property (nonatomic,retain) UIImage * shadowImage;                  //@synthesize shadowImage=_shadowImage - In the implementation block
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
-(UIImage *)shadowImage;
-(void)setShadowImage:(UIImage *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 shadowImage:(id)arg2 ;
-(CGRect)cachedBounds;
-(void)setCachedPath:(UIBezierPath *)arg1 ;
-(UIBezierPath *)cachedPath;
-(void)setCachedBounds:(CGRect)arg1 ;
@end
