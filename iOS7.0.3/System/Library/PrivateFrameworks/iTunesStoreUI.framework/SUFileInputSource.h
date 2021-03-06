/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:58:49 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/SUInputSource.h>

@class NSURL;

@interface SUFileInputSource : SUInputSource {

	long long _expectedLength;
	int _fd;
	NSURL* _url;

}

@property (nonatomic,readonly) NSURL * fileURL;              //@synthesize url=_url - In the implementation block
-(BOOL)open:(id*)arg1 ;
-(BOOL)hasBytesAvailable;
-(void)dealloc;
-(id)init;
-(void)close;
-(id)fileURL;
-(id)initWithFileURL:(id)arg1 ;
-(long long)expectedLength;
-(void)_close;
-(int)read:(char*)arg1 maxLength:(unsigned)arg2 error:(id*)arg3 ;
@end

