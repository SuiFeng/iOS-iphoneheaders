/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 11:05:37 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/PassKit.framework/passd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol PKSecureElementConsistencyCheckerDelegate <NSObject>
@required
-(id)paymentApplications;
-(id)paymentPasses;
-(id)secureElementCards;
-(void)scheduleConsistencyCheck:(id)arg1 pluggedIn:(char)arg2;
-(void)deleteCardsWithAIDs:(id)arg1;
-(char)synchronizeWithTSM;
-(void)didDownloadPaymentPass:(id)arg1;

@end
