/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:42 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSSetupController.h>

@class NSString;

@interface PSInternationalLanguageSetupController : PSSetupController {

	NSString* _languageToSet;

}
-(void)dealloc;
-(void)commit;
-(void)setupController;
-(void)rotateView:(id)arg1 toOrientation:(long long)arg2 ;
-(void)didFinishCommit;
-(void)showBlackViewWithLabel:(id)arg1 ;
-(void)setLanguage:(id)arg1 specifier:(id)arg2 ;
-(id)language:(id)arg1 ;
@end
