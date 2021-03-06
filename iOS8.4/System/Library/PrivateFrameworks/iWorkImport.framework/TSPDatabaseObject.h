/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:27:21 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSURL;

@interface TSPDatabaseObject : NSObject {

	int _classType;
	long long _identifier;

}

@property (nonatomic,readonly) long long identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) int classType;                     //@synthesize classType=_classType - In the implementation block
@property (nonatomic,readonly) BOOL hasDataState; 
@property (nonatomic,readonly) long long dataState; 
@property (nonatomic,readonly) BOOL hasFileState; 
@property (nonatomic,readonly) NSString * fileState; 
@property (nonatomic,readonly) NSURL * fileURL; 
+(id)databaseObjectWithIdentifier:(long long)arg1 classType:(int)arg2 dataState:(long long)arg3 ;
+(id)databaseObjectWithIdentifier:(long long)arg1 classType:(int)arg2 fileState:(id)arg3 packageURL:(id)arg4 ;
-(BOOL)hasDataState;
-(long long)dataState;
-(id)initWithIdentifier:(long long)arg1 classType:(int)arg2 ;
-(BOOL)hasFileState;
-(NSString *)fileState;
-(int)classType;
-(id)init;
-(long long)identifier;
-(NSURL *)fileURL;
@end

