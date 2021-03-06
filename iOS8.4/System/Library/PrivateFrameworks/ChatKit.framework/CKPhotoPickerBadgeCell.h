/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:21:16 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKit/UICollectionReusableView.h>

@class UIImageView;

@interface CKPhotoPickerBadgeCell : UICollectionReusableView {

	BOOL _selected;
	UIImageView* _checkmarkImageView;

}

@property (assign,getter=isSelected,nonatomic) BOOL selected;               //@synthesize selected=_selected - In the implementation block
@property (nonatomic,retain) UIImageView * checkmarkImageView;              //@synthesize checkmarkImageView=_checkmarkImageView - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(BOOL)isSelected;
-(void)setSelected:(BOOL)arg1 ;
-(void)setCheckmarkImageView:(UIImageView *)arg1 ;
-(UIImageView *)checkmarkImageView;
@end

