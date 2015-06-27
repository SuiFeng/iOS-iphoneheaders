/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:37:04 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSDictionary, NSArray, NSString, DownloadDataConsumer, NSError, NSURLRequest;

@interface PrepareDownloadResponse : NSObject {

	int _automaticType;
	NSDictionary* _AVAssetDownloadSessionOptions;
	NSArray* _backgroundOperations;
	NSString* _clientIdentifier;
	NSString* _clientSecondaryIdentifier;
	DownloadDataConsumer* _dataConsumer;
	NSString* _destinationPath;
	char _discretionary;
	long long _downloadIdentifier;
	NSError* _error;
	char _ignoresDownloadHandler;
	long long _mediaAssetIdentifier;
	long long _mediaAssetSize;
	char _requiresDownloadHandler;
	char _requiresPowerPluggedIn;
	int _result;
	long long _taskPriority;
	double _transferProgressFraction;
	NSURLRequest* _URLRequest;

}

@property (assign,nonatomic) int result;                                              //@synthesize result=_result - In the implementation block
@property (assign,nonatomic) long long downloadIdentifier;                            //@synthesize downloadIdentifier=_downloadIdentifier - In the implementation block
@property (assign,nonatomic) long long mediaAssetIdentifier;                          //@synthesize mediaAssetIdentifier=_mediaAssetIdentifier - In the implementation block
@property (assign,nonatomic) int automaticType;                                       //@synthesize automaticType=_automaticType - In the implementation block
@property (nonatomic,copy) NSArray * backgroundOperations;                            //@synthesize backgroundOperations=_backgroundOperations - In the implementation block
@property (nonatomic,retain) NSError * error;                                         //@synthesize error=_error - In the implementation block
@property (assign,nonatomic) char ignoresDownloadHandler;                             //@synthesize ignoresDownloadHandler=_ignoresDownloadHandler - In the implementation block
@property (assign,nonatomic) char requiresDownloadHandler;                            //@synthesize requiresDownloadHandler=_requiresDownloadHandler - In the implementation block
@property (assign,nonatomic) long long mediaAssetSize;                                //@synthesize mediaAssetSize=_mediaAssetSize - In the implementation block
@property (assign,nonatomic) double transferProgressFraction;                         //@synthesize transferProgressFraction=_transferProgressFraction - In the implementation block
@property (nonatomic,readonly) NSString * URLSessionIdentifier; 
@property (nonatomic,copy) NSDictionary * AVAssetDownloadSessionOptions;              //@synthesize AVAssetDownloadSessionOptions=_AVAssetDownloadSessionOptions - In the implementation block
@property (nonatomic,copy) NSString * clientIdentifier;                               //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (nonatomic,copy) NSString * clientSecondaryIdentifier;                      //@synthesize clientSecondaryIdentifier=_clientSecondaryIdentifier - In the implementation block
@property (nonatomic,retain) DownloadDataConsumer * dataConsumer;                     //@synthesize dataConsumer=_dataConsumer - In the implementation block
@property (assign,getter=isDiscretionary,nonatomic) char discretionary;               //@synthesize discretionary=_discretionary - In the implementation block
@property (nonatomic,copy) NSString * destinationPath;                                //@synthesize destinationPath=_destinationPath - In the implementation block
@property (assign,nonatomic) char requiresPowerPluggedIn;                             //@synthesize requiresPowerPluggedIn=_requiresPowerPluggedIn - In the implementation block
@property (assign,nonatomic) long long taskPriority;                                  //@synthesize taskPriority=_taskPriority - In the implementation block
@property (nonatomic,copy) NSURLRequest * URLRequest;                                 //@synthesize URLRequest=_URLRequest - In the implementation block
-(long long)mediaAssetIdentifier;
-(void)setMediaAssetIdentifier:(long long)arg1 ;
-(int)automaticType;
-(void)setAutomaticType:(int)arg1 ;
-(char)requiresDownloadHandler;
-(void)setRequiresDownloadHandler:(char)arg1 ;
-(double)transferProgressFraction;
-(void)setTransferProgressFraction:(double)arg1 ;
-(NSString *)URLSessionIdentifier;
-(id)sessionTaskWithSession:(id)arg1 ;
-(char)ignoresDownloadHandler;
-(long long)mediaAssetSize;
-(NSArray *)backgroundOperations;
-(void)setIgnoresDownloadHandler:(char)arg1 ;
-(void)setTaskPriority:(long long)arg1 ;
-(void)setMediaAssetSize:(long long)arg1 ;
-(void)setDestinationPath:(NSString *)arg1 ;
-(void)setRequiresPowerPluggedIn:(char)arg1 ;
-(void)setClientSecondaryIdentifier:(NSString *)arg1 ;
-(void)setBackgroundOperations:(NSArray *)arg1 ;
-(void)setAVAssetDownloadSessionOptions:(NSDictionary *)arg1 ;
-(NSDictionary *)AVAssetDownloadSessionOptions;
-(NSString *)clientSecondaryIdentifier;
-(char)requiresPowerPluggedIn;
-(long long)taskPriority;
-(char)isDiscretionary;
-(NSString *)clientIdentifier;
-(long long)downloadIdentifier;
-(void)setDownloadIdentifier:(long long)arg1 ;
-(NSURLRequest *)URLRequest;
-(void)setClientIdentifier:(NSString *)arg1 ;
-(int)result;
-(NSError *)error;
-(void)setDiscretionary:(char)arg1 ;
-(id)sessionConfiguration;
-(void)setResult:(int)arg1 ;
-(void)setDataConsumer:(DownloadDataConsumer *)arg1 ;
-(DownloadDataConsumer *)dataConsumer;
-(void)setError:(NSError *)arg1 ;
-(NSString *)destinationPath;
-(void)setURLRequest:(NSURLRequest *)arg1 ;
@end
