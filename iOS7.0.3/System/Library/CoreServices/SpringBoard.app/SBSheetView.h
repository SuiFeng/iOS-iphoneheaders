/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:03:49 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class SBProxyRemoteView, SBApplication, SBFakeStatusBarView;

@interface SBSheetView : UIView {

	SBProxyRemoteView* _remoteProxyView;
	SBApplication* _app;
	SBFakeStatusBarView* _fakeStatusBarView;
	BOOL _wasPresentedAnimated;

}
-(id)fakeStatusBarView;
-(void)noteSheetDidEnd;
-(id)initWithRemoteViewIdentifier:(id)arg1 application:(id)arg2 shouldFakeStatusBar:(BOOL)arg3 wasPresentedAnimated:(BOOL)arg4 ;
-(BOOL)wasPresentedAnimated;
-(void)dealloc;
-(id)remoteViewIdentifier;
-(id)application;
@end

