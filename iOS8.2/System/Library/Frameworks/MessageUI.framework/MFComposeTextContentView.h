/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:40 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MessageUI/MessageUI-Structs.h>
#import <UIKit/UITextContentView.h>

@interface MFComposeTextContentView : UITextContentView {

	int _preventScrollSelectionToVisible;
	char _keepScrollPosition;
	CGPoint _scrollPosition;

}
-(void)beginPreventingScrollSelectionToVisible;
-(void)endPreventingScrollSelectionToVisible;
-(void)increaseQuoteLevel;
-(void)decreaseQuoteLevel;
-(void)showQuoteLevelOptions;
-(char)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(id)targetForAction:(SEL)arg1 withSender:(id)arg2 ;
-(char)resignFirstResponder;
-(char)becomeFirstResponder;
-(void)scrollSelectionToVisible:(char)arg1 ;
-(void)ensureSelection;
-(id)supportedPasteboardTypesForCurrentSelection;
-(id)enclosingScrollView;
@end

