/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:25:51 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/AccessibilityBundles/GuidedAccess.axuiservice/GuidedAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIButton.h>

@class GAXStyleProvider;

@interface GAXOptionsDoneButton : UIButton {

	GAXStyleProvider* _styleProvider;

}

@property (nonatomic,retain) GAXStyleProvider * styleProvider;              //@synthesize styleProvider=_styleProvider - In the implementation block
+(id)optionsDoneButtonWithTitle:(id)arg1 styleProvider:(id)arg2 ;
-(id)initWithTitle:(id)arg1 styleProvider:(id)arg2 ;
-(GAXStyleProvider *)styleProvider;
-(void)setStyleProvider:(GAXStyleProvider *)arg1 ;
-(void)dealloc;
-(void)setHighlighted:(BOOL)arg1 ;
@end
