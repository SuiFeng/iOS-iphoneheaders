/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:07:09 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/IAP.framework/Support/iapd
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@interface IAPGroupedCommands : NSObject {

	BOOL _videoOutSettingsChanged;
	BOOL _lineOutEnabled;
	BOOL _lineOutChanged;
	BOOL _cancelled;

}

@property (assign,nonatomic) BOOL videoOutSettingChanged;              //@synthesize videoOutSettingsChanged=_videoOutSettingsChanged - In the implementation block
@property (assign,nonatomic) BOOL lineOutEnabled;                      //@synthesize lineOutEnabled=_lineOutEnabled - In the implementation block
@property (assign,nonatomic) BOOL lineOutChanged;                      //@synthesize lineOutChanged=_lineOutChanged - In the implementation block
@property (assign,nonatomic) BOOL cancelled;                           //@synthesize cancelled=_cancelled - In the implementation block
-(BOOL)videoOutSettingChanged;
-(void)setVideoOutSettingChanged:(BOOL)arg1 ;
-(BOOL)lineOutEnabled;
-(void)setLineOutEnabled:(BOOL)arg1 ;
-(BOOL)lineOutChanged;
-(void)setLineOutChanged:(BOOL)arg1 ;
-(BOOL)cancelled;
-(void)setCancelled:(BOOL)arg1 ;
@end

