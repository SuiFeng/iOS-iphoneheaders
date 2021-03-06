/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:06 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface GEOGeocodeProvider : NSObject {

	/*^block*/id _successHandler;
	/*^block*/id _batchSuccessHandler;
	/*^block*/id _errorHandler;

}

@property (nonatomic,copy) id successHandler;                   //@synthesize successHandler=_successHandler - In the implementation block
@property (nonatomic,copy) id batchSuccessHandler;              //@synthesize batchSuccessHandler=_batchSuccessHandler - In the implementation block
@property (nonatomic,copy) id errorHandler;                     //@synthesize errorHandler=_errorHandler - In the implementation block
+(id)providerName;
-(void)cancel;
-(void)dealloc;
-(void)setErrorHandler:(id)arg1 ;
-(id)errorHandler;
-(void)forwardGeocode:(id)arg1 success:(/*^block*/id)arg2 networkActivity:(/*^block*/id)arg3 error:(/*^block*/id)arg4 ;
-(void)reverseGeocode:(id)arg1 success:(/*^block*/id)arg2 error:(/*^block*/id)arg3 ;
-(void)batchReverseGeocode:(id)arg1 success:(/*^block*/id)arg2 error:(/*^block*/id)arg3 ;
-(id)successHandler;
-(void)setSuccessHandler:(id)arg1 ;
-(id)batchSuccessHandler;
-(void)setBatchSuccessHandler:(id)arg1 ;
@end

