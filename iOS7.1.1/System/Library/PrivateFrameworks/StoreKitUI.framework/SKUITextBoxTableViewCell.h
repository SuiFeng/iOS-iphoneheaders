/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:23 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUITableViewCell.h>

@class SKUITextBoxView;

@interface SKUITextBoxTableViewCell : SKUITableViewCell {

	SKUITextBoxView* _textBoxView;
	UIEdgeInsets _textBoxInsets;

}

@property (nonatomic,readonly) SKUITextBoxView * textBoxView;              //@synthesize textBoxView=_textBoxView - In the implementation block
@property (assign,nonatomic) UIEdgeInsets textBoxInsets;                   //@synthesize textBoxInsets=_textBoxInsets - In the implementation block
-(void)setBackgroundColor:(id)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)prepareForReuse;
-(void).cxx_destruct;
-(id)textBoxView;
-(void)setTextBoxInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)textBoxInsets;
@end
