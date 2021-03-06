/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:02 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSMutableDictionary, NSMutableArray, NSBundle;

@interface SCROMobileBrailleDisplayInputManagerCacheObject : NSObject {

	NSString* _driverIdentifier;
	NSString* _modelIdentifier;
	int _brailleInputMode;
	NSMutableDictionary* _commandDictionary;
	NSMutableArray* _orderedIdentifiers;
	NSBundle* _bundle;

}

@property (nonatomic,retain) NSString * modelIdentifier;                           //@synthesize modelIdentifier=_modelIdentifier - In the implementation block
@property (assign,nonatomic) int brailleInputMode;                                 //@synthesize brailleInputMode=_brailleInputMode - In the implementation block
@property (nonatomic,retain) NSString * driverIdentifier;                          //@synthesize driverIdentifier=_driverIdentifier - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * commandDictionary;              //@synthesize commandDictionary=_commandDictionary - In the implementation block
@property (nonatomic,retain) NSMutableArray * orderedIdentifiers;                  //@synthesize orderedIdentifiers=_orderedIdentifiers - In the implementation block
@property (nonatomic,retain) NSBundle * bundle;                                    //@synthesize bundle=_bundle - In the implementation block
-(void)dealloc;
-(id)bundle;
-(void)setBundle:(id)arg1 ;
-(id)modelIdentifier;
-(void)setModelIdentifier:(id)arg1 ;
-(void)setBrailleInputMode:(int)arg1 ;
-(void)setDriverIdentifier:(id)arg1 ;
-(id)commandDictionary;
-(void)setCommandDictionary:(id)arg1 ;
-(id)orderedIdentifiers;
-(void)setOrderedIdentifiers:(id)arg1 ;
-(int)brailleInputMode;
-(id)driverIdentifier;
@end

