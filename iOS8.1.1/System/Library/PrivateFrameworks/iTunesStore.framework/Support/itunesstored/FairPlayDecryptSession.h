/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:04 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSData;

@interface FairPlayDecryptSession : NSObject {

	NSData* _dpInfo;
	void* _decryptSession;

}
-(id)initWithDPInfo:(id)arg1 ;
-(id)decryptBytes:(id)arg1 error:(id*)arg2 ;
-(void)dealloc;
@end
