/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:47 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileMail/MobileMail-Structs.h>
#import <UIKit/UIButton.h>

@class UIActivityIndicatorView;

@interface MessageLoadButton : UIButton {

	unsigned _needsToSendMouseUpEvents : 1;
	char _isDownloading;
	UIActivityIndicatorView* _spinny;

}
-(void)setDownloading:(char)arg1 ;
-(float)_constrainedLabelWidth;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(int)_buttonType;
-(void)setText:(id)arg1 ;
-(void)sizeToFit;
-(void)sendAction:(SEL)arg1 to:(id)arg2 forEvent:(id)arg3 ;
@end

