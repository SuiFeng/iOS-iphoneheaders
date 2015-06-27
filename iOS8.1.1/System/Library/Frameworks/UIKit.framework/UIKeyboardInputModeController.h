/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:29:23 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol UIKeyboardInputModeControllerDelegate;
@class UIKeyboardInputMode, NSArray, NSString;

@interface UIKeyboardInputModeController : NSObject {

	UIKeyboardInputMode* _currentInputMode;
	NSArray* _inputModesWithoutHardwareSupport;
	NSArray* _allExtensions;
	NSArray* _allowedExtensions;
	BOOL _skipExtensionInputModes;
	BOOL _cacheNeedsRefresh;
	NSArray* keyboardInputModes;
	NSArray* keyboardInputModeIdentifiers;
	NSArray* enabledInputModes;
	NSArray* normalizedInputModes;
	NSArray* defaultKeyboardInputModes;
	NSArray* defaultRawInputModes;
	NSArray* defaultInputModes;
	NSArray* defaultNormalizedInputModes;
	UIKeyboardInputMode* _lastUsedInputMode;
	NSString* _inputModeContextIdentifier;
	id<UIKeyboardInputModeControllerDelegate> _delegate;
	UIKeyboardInputMode* _nextInputModeToUse;
	UIKeyboardInputMode* _currentUsedInputMode;

}

@property (readonly) NSArray * supportedInputModeIdentifiers; 
@property (readonly) NSArray * inputModesWithoutHardwareSupport; 
@property (readonly) NSArray * enabledInputModeIdentifiers; 
@property (readonly) NSArray * normalizedEnabledInputModeIdentifiers; 
@property (readonly) NSArray * enabledInputModeLanguages; 
@property (readonly) NSArray * activeInputModeIdentifiers; 
@property (retain) UIKeyboardInputMode * currentInputMode; 
@property (assign,nonatomic) UIKeyboardInputMode * currentInputModeInPreference; 
@property (nonatomic,retain) UIKeyboardInputMode * lastUsedInputMode;                         //@synthesize lastUsedInputMode=_lastUsedInputMode - In the implementation block
@property (nonatomic,readonly) UIKeyboardInputMode * hardwareInputMode; 
@property (nonatomic,readonly) UIKeyboardInputMode * currentSystemInputMode; 
@property (nonatomic,readonly) UIKeyboardInputMode * currentPublicInputMode; 
@property (nonatomic,readonly) BOOL containsDictationSupportedInputMode; 
@property (nonatomic,copy) NSString * inputModeContextIdentifier;                             //@synthesize inputModeContextIdentifier=_inputModeContextIdentifier - In the implementation block
@property (assign,nonatomic) id<UIKeyboardInputModeControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSArray * allowedExtensions;                                   //@synthesize allowedExtensions=_allowedExtensions - In the implementation block
@property (retain) NSArray * keyboardInputModes; 
@property (retain) NSArray * keyboardInputModeIdentifiers; 
@property (retain) NSArray * enabledInputModes; 
@property (retain) NSArray * normalizedInputModes; 
@property (retain) NSArray * defaultKeyboardInputModes; 
@property (nonatomic,copy) NSArray * defaultRawInputModes; 
@property (retain) NSArray * defaultInputModes; 
@property (retain) NSArray * defaultNormalizedInputModes; 
@property (nonatomic,retain) UIKeyboardInputMode * nextInputModeToUse;                        //@synthesize nextInputModeToUse=_nextInputModeToUse - In the implementation block
@property (nonatomic,retain) UIKeyboardInputMode * currentUsedInputMode;                      //@synthesize currentUsedInputMode=_currentUsedInputMode - In the implementation block
+(id)sharedInputModeController;
-(NSArray *)normalizedEnabledInputModeIdentifiers;
-(id)identifiersFromInputModes:(id)arg1 ;
-(BOOL)identifierIsValidSystemInputMode:(id)arg1 ;
-(NSArray *)enabledInputModeIdentifiers;
-(NSArray *)supportedInputModeIdentifiers;
-(id)enabledInputModeIdentifiers:(BOOL)arg1 ;
-(NSArray *)inputModesWithoutHardwareSupport;
-(NSArray *)enabledInputModeLanguages;
-(void)dealloc;
-(void)setDelegate:(id<UIKeyboardInputModeControllerDelegate>)arg1 ;
-(id)init;
-(id<UIKeyboardInputModeControllerDelegate>)delegate;
-(UIKeyboardInputMode *)hardwareInputMode;
-(UIKeyboardInputMode *)currentPublicInputMode;
-(UIKeyboardInputMode *)currentSystemInputMode;
-(id)activeInputModes;
-(NSString *)inputModeContextIdentifier;
-(UIKeyboardInputMode *)currentInputMode;
-(id)preferredLanguages;
-(NSArray *)activeInputModeIdentifiers;
-(UIKeyboardInputMode *)currentInputModeInPreference;
-(id)nextInputModeFromList:(id)arg1 withFilter:(unsigned long long)arg2 withTraits:(id)arg3 ;
-(void)setCurrentInputModeInPreference:(UIKeyboardInputMode *)arg1 ;
-(void)updateCurrentAndNextInputModes;
-(id)nextInputModeInPreferenceListForTraits:(id)arg1 ;
-(void)_clearAllExtensionIfNeeded;
-(void)performWithoutExtensionInputModes:(/*^block*/id)arg1 ;
-(void)updateLastUsedInputMode:(id)arg1 ;
-(void)setInputModeContextIdentifier:(NSString *)arg1 ;
-(void)setCurrentInputMode:(UIKeyboardInputMode *)arg1 ;
-(id)nextInputModeToUseForTraits:(id)arg1 ;
-(id)extensionInputModes;
-(void)setKeyboardInputModes:(NSArray *)arg1 ;
-(void)setKeyboardInputModeIdentifiers:(NSArray *)arg1 ;
-(void)setEnabledInputModes:(NSArray *)arg1 ;
-(void)setNormalizedInputModes:(NSArray *)arg1 ;
-(void)setDefaultKeyboardInputModes:(NSArray *)arg1 ;
-(void)setDefaultRawInputModes:(NSArray *)arg1 ;
-(void)setDefaultInputModes:(NSArray *)arg1 ;
-(void)setDefaultNormalizedInputModes:(NSArray *)arg1 ;
-(void)didEnterBackground:(id)arg1 ;
-(NSArray *)keyboardInputModes;
-(NSArray *)keyboardInputModeIdentifiers;
-(void)updateCurrentInputMode:(id)arg1 ;
-(UIKeyboardInputMode *)lastUsedInputMode;
-(id)_systemInputModePassingTest:(/*^block*/id)arg1 ;
-(void)_setCurrentInputMode:(id)arg1 force:(BOOL)arg2 ;
-(NSArray *)normalizedInputModes;
-(NSArray *)enabledInputModes;
-(id)suggestedInputModesForCurrentLocale:(BOOL)arg1 fallbackToDefaultInputModes:(BOOL)arg2 ;
-(NSArray *)defaultRawInputModes;
-(NSArray *)defaultNormalizedInputModes;
-(NSArray *)defaultInputModes;
-(BOOL)verifyKeyboardExtensionsWithApp;
-(id)_MCFilteredExtensionIdentifiers;
-(UIKeyboardInputMode *)nextInputModeToUse;
-(void)setNextInputModeToUse:(UIKeyboardInputMode *)arg1 ;
-(UIKeyboardInputMode *)currentUsedInputMode;
-(void)setLastUsedInputMode:(UIKeyboardInputMode *)arg1 ;
-(void)setCurrentUsedInputMode:(UIKeyboardInputMode *)arg1 ;
-(void)startDictationConnectionForFileAtURL:(id)arg1 forInputModeIdentifier:(id)arg2 ;
-(id)inputModeWithIdentifier:(id)arg1 ;
-(BOOL)containsDictationSupportedInputMode;
-(BOOL)currentLocaleRequiresExtendedSetup;
-(id)defaultEnabledInputModesForCurrentLocale:(BOOL)arg1 ;
-(id)suggestedInputModesForCurrentLocale;
-(id)suggestedInputModesForPreferredLanguages;
-(BOOL)deviceStateIsLocked;
-(void)switchToCurrentSystemInputMode;
-(void)performWithForcedExtensionInputModes:(/*^block*/id)arg1 ;
-(void)startConnectionForFileAtURL:(id)arg1 forInputModeIdentifier:(id)arg2 ;
-(NSArray *)defaultKeyboardInputModes;
-(NSArray *)allowedExtensions;
@end
