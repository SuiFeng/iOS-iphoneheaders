/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:28:58 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Social/Social-Structs.h>
#import <Social/SLSheetImagePreviewView.h>

@class UIView, UIImageView, UILabel;

@interface SLSheetVideoPreviewView : SLSheetImagePreviewView {

	UIView* _infoBar;
	UIImageView* _videoGlyphView;
	UILabel* _durationLabel;

}
-(void)setVideoDuration:(double)arg1 ;
-(void)_applyConstraints;
-(id)initWithFrame:(CGRect)arg1 ;
@end
