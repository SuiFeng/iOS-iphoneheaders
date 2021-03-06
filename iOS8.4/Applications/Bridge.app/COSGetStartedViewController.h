/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:24 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Bridge.app/Bridge
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Bridge/Bridge-Structs.h>
#import <UIKit/UINavigationController.h>
#import <Bridge/COSGetStartedDelegate.h>

@protocol COSGetStartedViewControllerDelegate;
@class COSGetStartedInternalViewController, COSUnpairingViewController, NSString;

@interface COSGetStartedViewController : UINavigationController <COSGetStartedDelegate> {

	id<COSGetStartedViewControllerDelegate> _getStartedDelegate;
	COSGetStartedInternalViewController* _internalController;
	COSUnpairingViewController* _unpairingVC;

}

@property (assign,nonatomic,__weak) id<COSGetStartedViewControllerDelegate> getStartedDelegate;              //@synthesize getStartedDelegate=_getStartedDelegate - In the implementation block
@property (nonatomic,retain) COSGetStartedInternalViewController * internalController;                       //@synthesize internalController=_internalController - In the implementation block
@property (nonatomic,retain) COSUnpairingViewController * unpairingVC;                                       //@synthesize unpairingVC=_unpairingVC - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)nanoRegistryStatusChanged:(id)arg1 ;
-(void)presentUnpairingViewControllerAnimated:(char)arg1 ;
-(void)_setOrientationModeForSize:(CGSize)arg1 ;
-(void)tappedStartInternal;
-(void)userTappedStart;
-(void)showConnectivityAlert;
-(id<COSGetStartedViewControllerDelegate>)getStartedDelegate;
-(void)setGetStartedDelegate:(id<COSGetStartedViewControllerDelegate>)arg1 ;
-(COSGetStartedInternalViewController *)internalController;
-(void)setInternalController:(COSGetStartedInternalViewController *)arg1 ;
-(COSUnpairingViewController *)unpairingVC;
-(void)setUnpairingVC:(COSUnpairingViewController *)arg1 ;
-(id)init;
-(unsigned)supportedInterfaceOrientations;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)stopAnimating;
-(void)startAnimating;
@end

