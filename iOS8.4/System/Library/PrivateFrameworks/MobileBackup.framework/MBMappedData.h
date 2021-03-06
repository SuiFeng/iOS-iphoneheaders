/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:23:39 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileBackup/MobileBackup-Structs.h>
#import <CoreFoundation/NSData.h>

@class NSNumber, NSString, NSData;

@interface MBMappedData : NSData {

	BOOL _personallyMappedFile;
	BOOL _removeFileOnClose;
	void* _mappedFile;
	NSNumber* _fileSize;
	NSString* _path;
	NSData* _mappedData;

}

@property (assign,nonatomic) BOOL removeFileOnClose;              //@synthesize removeFileOnClose=_removeFileOnClose - In the implementation block
-(NSRange)rangeOfData:(id)arg1 options:(unsigned long long)arg2 range:(NSRange)arg3 ;
-(void)getBytes:(void*)arg1 ;
-(void)dealloc;
-(unsigned long long)length;
-(BOOL)writeToFile:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)writeToFile:(id)arg1 atomically:(BOOL)arg2 ;
-(BOOL)writeToURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)writeToURL:(id)arg1 atomically:(BOOL)arg2 ;
-(const void*)bytes;
-(void)getBytes:(void*)arg1 length:(unsigned long long)arg2 ;
-(id)initWithContentsOfFile:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(void)close;
-(void)getBytes:(void*)arg1 range:(NSRange)arg2 ;
-(id)base64EncodedStringWithOptions:(unsigned long long)arg1 ;
-(BOOL)isEqualToData:(id)arg1 ;
-(id)subdataWithRange:(NSRange)arg1 ;
-(id)base64EncodedDataWithOptions:(unsigned long long)arg1 ;
-(void)enumerateByteRangesUsingBlock:(/*^block*/id)arg1 ;
-(id)base64Encoding;
-(BOOL)mapFile:(id)arg1 ;
-(BOOL)removeFileOnClose;
-(void)setRemoveFileOnClose:(BOOL)arg1 ;
@end

