/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:10:17 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVGetTask.h>

@class NSFileHandle;

@interface CoreDAVGetToFileTask : CoreDAVGetTask {

	NSFileHandle* _destinationFile;

}

@property (nonatomic,retain) NSFileHandle * destinationFile;              //@synthesize destinationFile=_destinationFile - In the implementation block
-(void)dealloc;
-(char)shouldLogResponseBody;
-(id)copyDefaultParserForContentType:(id)arg1 ;
-(NSFileHandle *)destinationFile;
-(id)initWithURL:(id)arg1 destinationFile:(id)arg2 ;
-(void)setDestinationFile:(NSFileHandle *)arg1 ;
@end

