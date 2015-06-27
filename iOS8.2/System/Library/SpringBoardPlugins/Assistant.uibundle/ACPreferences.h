/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:33 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/SpringBoardPlugins/Assistant.uibundle/Assistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Assistant/AFUIPreferencesDelegate.h>

@class AFUIPreferences, NSString;

@interface ACPreferences : NSObject <AFUIPreferencesDelegate> {

	AFUIPreferences* _internalPreferences;

}

@property (assign,nonatomic) char siriDidActivate; 
@property (assign,nonatomic) char tourGuideWasDisplayed; 
@property (assign,nonatomic) char listenOnActivation; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)preferences;
-(id)init;
-(char)_boolForKey:(id)arg1 ;
-(void)preferences:(id)arg1 didChangeValueForKey:(id)arg2 ;
-(void)_setBool:(char)arg1 forKey:(id)arg2 ;
-(char)siriDidActivate;
-(void)setSiriDidActivate:(char)arg1 ;
-(char)listenOnActivation;
-(void)setListenOnActivation:(char)arg1 ;
-(char)tourGuideWasDisplayed;
-(void)setTourGuideWasDisplayed:(char)arg1 ;
@end
