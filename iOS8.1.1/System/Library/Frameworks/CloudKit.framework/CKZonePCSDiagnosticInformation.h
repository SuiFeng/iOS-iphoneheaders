/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:27:49 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKit/NSSecureCoding.h>

@class NSString, NSError;

@interface CKZonePCSDiagnosticInformation : NSObject <NSSecureCoding> {

	BOOL _wasRepaired;
	int _pcsStatus;
	NSString* _pcsDiagnosticString;
	NSError* _pcsError;

}

@property (assign,nonatomic) BOOL wasRepaired;                            //@synthesize wasRepaired=_wasRepaired - In the implementation block
@property (assign,nonatomic) int pcsStatus;                               //@synthesize pcsStatus=_pcsStatus - In the implementation block
@property (nonatomic,retain) NSString * pcsDiagnosticString;              //@synthesize pcsDiagnosticString=_pcsDiagnosticString - In the implementation block
@property (nonatomic,retain) NSError * pcsError;                          //@synthesize pcsError=_pcsError - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)wasRepaired;
-(NSString *)pcsDiagnosticString;
-(NSError *)pcsError;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setPcsError:(NSError *)arg1 ;
-(void)setPcsStatus:(int)arg1 ;
-(void)setPcsDiagnosticString:(NSString *)arg1 ;
-(int)pcsStatus;
-(void)setWasRepaired:(BOOL)arg1 ;
@end

