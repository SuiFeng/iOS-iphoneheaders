/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:27 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSURL, NSString;

@interface PLImageDataInfo : NSObject {

	char _deliveredPlaceholder;
	char _canDownloadFromCloud;
	int _deliveredFormat;
	NSURL* _URL;
	NSString* _sandboxExtensionToken;
	NSString* _UTI;
	int _EXIFOrientation;

}

@property (assign) int deliveredFormat;                           //@synthesize deliveredFormat=_deliveredFormat - In the implementation block
@property (assign) char deliveredPlaceholder;                     //@synthesize deliveredPlaceholder=_deliveredPlaceholder - In the implementation block
@property (assign) char canDownloadFromCloud;                     //@synthesize canDownloadFromCloud=_canDownloadFromCloud - In the implementation block
@property (retain) NSURL * URL;                                   //@synthesize URL=_URL - In the implementation block
@property (retain) NSString * sandboxExtensionToken;              //@synthesize sandboxExtensionToken=_sandboxExtensionToken - In the implementation block
@property (retain) NSString * UTI;                                //@synthesize UTI=_UTI - In the implementation block
@property (assign) int EXIFOrientation;                           //@synthesize EXIFOrientation=_EXIFOrientation - In the implementation block
-(int)deliveredFormat;
-(char)canDownloadFromCloud;
-(int)EXIFOrientation;
-(NSString *)sandboxExtensionToken;
-(void)setSandboxExtensionToken:(NSString *)arg1 ;
-(void)dealloc;
-(NSURL *)URL;
-(void)setURL:(NSURL *)arg1 ;
-(NSString *)UTI;
-(void)setUTI:(NSString *)arg1 ;
-(void)setDeliveredFormat:(int)arg1 ;
-(void)setCanDownloadFromCloud:(char)arg1 ;
-(void)setEXIFOrientation:(int)arg1 ;
-(char)deliveredPlaceholder;
-(void)setDeliveredPlaceholder:(char)arg1 ;
@end

