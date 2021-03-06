/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:27:23 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSPStreamDataStorage.h>

@protocol TSPCryptoInfo;
@class NSString, TSPFilePackage;

@interface TSPFilePackageDataStorage : TSPStreamDataStorage {

	NSString* _path;
	id<TSPCryptoInfo> _decryptionInfo;
	TSPFilePackage* _package;
	unsigned long long _encodedLength;
	unsigned _CRC;
	struct {
		unsigned didCalculateIsReadable : 1;
		unsigned didCalculateEncodedLength : 1;
		unsigned didCalculateCRC : 1;
		unsigned isReadable : 1;
		unsigned isMissingData : 1;
	}  _flags;

}
-(unsigned)CRC;
-(id)packageLocator;
-(unsigned char)packageIdentifier;
-(void)performIOChannelReadWithAccessor:(/*^block*/id)arg1 ;
-(id)decryptionInfo;
-(BOOL)isMissingData;
-(BOOL)copyToTemporaryURL:(id)arg1 encryptionInfo:(id)arg2 ;
-(void)setIsMissingData:(BOOL)arg1 ;
-(void)didInitializeFromDocumentURL:(id)arg1 ;
-(id)initWithPath:(id)arg1 package:(id)arg2 decryptionInfo:(id)arg3 ;
-(id)bookmarkDataWithOptions:(unsigned long long)arg1 ;
-(BOOL)bookmarkDataNeedsWriteWithOptions:(unsigned long long)arg1 ;
-(BOOL)isInPackage:(id)arg1 ;
-(id)writeData:(id)arg1 toPackageWriter:(id)arg2 infoMessage:(DataInfo*)arg3 preferredFilename:(id)arg4 ;
-(id)streamReadChannel;
-(unsigned long long)length;
-(unsigned long long)encodedLength;
-(BOOL)isReadable;
-(void)resetFlags;
@end

