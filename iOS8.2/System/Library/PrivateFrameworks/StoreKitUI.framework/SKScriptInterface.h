/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:08 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptInterface.h>

@class SKProductPageViewController;

@interface SKScriptInterface : SUScriptInterface {

	SKProductPageViewController* _parentProductPageViewController;

}

@property (assign,nonatomic,__weak) SKProductPageViewController * parentProductPageViewController;              //@synthesize parentProductPageViewController=_parentProductPageViewController - In the implementation block
+(void)initialize;
+(id)webScriptNameForSelector:(SEL)arg1 ;
-(void)setParentProductPageViewController:(SKProductPageViewController *)arg1 ;
-(id)makeStoreSheetRequest;
-(void)showStoreSheetWithRequest:(id)arg1 animated:(char)arg2 ;
-(SKProductPageViewController *)parentProductPageViewController;
@end
