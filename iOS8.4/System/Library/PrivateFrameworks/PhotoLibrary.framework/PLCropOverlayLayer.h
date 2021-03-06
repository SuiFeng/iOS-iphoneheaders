/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:24:33 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <UIKit/UIView.h>

@class UIView;

@interface PLCropOverlayLayer : UIView {

	CGRect _cropRect;
	UIView* _topOpaqueLayer;
	UIView* _bottomOpaqueLayer;
	UIView* _rightOpaqueLayer;
	UIView* _leftOpaqueLayer;
	UIView* _topEdgeLayer;
	UIView* _bottomEdgeLayer;
	UIView* _rightEdgeLayer;
	UIView* _leftEdgeLayer;
	UIView* _topLeftCornerLayer;
	UIView* _topRightCornerLayer;
	UIView* _bottomRightCornerLayer;
	UIView* _bottomLeftCornerLayer;
	UIView* _topThirdLayer;
	UIView* _bottomThirdLayer;
	UIView* _rightThirdLayer;
	UIView* _leftThirdLayer;
	UIView* _straightenHorizontalLayers[6];
	UIView* _straightenVerticalLayers[6];
	unsigned _showsCropRect : 1;
	unsigned _showThirdsGrid : 1;
	unsigned _showsStraightenGrid : 1;
	unsigned _thirdsVisible : 1;
	unsigned _highlighted : 1;

}
-(CGRect)cropRect;
-(void)setCropRect:(CGRect)arg1 ;
-(void)_updateLayout;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setHighlighted:(BOOL)arg1 ;
-(BOOL)isHighlighted;
-(void)_updateCropRectVisibility;
-(void)setShowsCropRect:(BOOL)arg1 ;
-(BOOL)showsCropRect;
-(void)showThirdsGrid:(BOOL)arg1 ;
-(BOOL)showsThirdsGrid;
-(void)showStraightenGrid:(BOOL)arg1 ;
-(BOOL)showsStraightenGrid;
@end

