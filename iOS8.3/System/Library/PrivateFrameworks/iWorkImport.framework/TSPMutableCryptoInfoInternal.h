/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:42:04 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/TSPCryptoInfoInternal.h>
#import <iWorkImport/TSPMutableCryptoInfo.h>

@class NSString, SFUCryptoKey, NSArray;

@interface TSPMutableCryptoInfoInternal : TSPCryptoInfoInternal <TSPMutableCryptoInfo>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) SFUCryptoKey * cryptoKey; 
@property (nonatomic,readonly) unsigned long preferredBlockSize; 
@property (nonatomic,readonly) NSArray * blockInfos; 
@property (nonatomic,readonly) unsigned long decodedLength; 
-(id)initWithCryptoKey:(id)arg1 preferredBlockSize:(unsigned long)arg2 blockInfos:(id)arg3 decodedLength:(unsigned long)arg4 ;
-(void)addBlockInfo:(id)arg1 ;
-(void)incrementDecodedLengthBy:(unsigned long)arg1 ;
-(void)reset;
@end

