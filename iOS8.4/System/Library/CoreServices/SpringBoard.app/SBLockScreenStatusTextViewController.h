/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:16:32 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class _UILegibilityLabel;

@interface SBLockScreenStatusTextViewController : UIViewController {

	_UILegibilityLabel* _textLabel;

}
-(id)statusTextView;
-(void)_restoreStateChanged:(id)arg1 ;
-(id)_legalString;
-(id)_restoreString;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)loadView;
-(void)didMoveToParentViewController:(id)arg1 ;
-(void)updateTextView;
@end
