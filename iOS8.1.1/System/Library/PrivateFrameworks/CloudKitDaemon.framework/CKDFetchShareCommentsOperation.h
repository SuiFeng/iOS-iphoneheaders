/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:31:03 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDOperation.h>

@class CKCommentCursor, CKCommentQuery;

@interface CKDFetchShareCommentsOperation : CKDOperation {

	/*^block*/id _commentFetchedProgressBlock;
	CKCommentCursor* _nextCursor;
	CKCommentQuery* _query;
	CKCommentCursor* _cursor;
	unsigned long long _resultsLimit;

}

@property (nonatomic,copy) id commentFetchedProgressBlock;                 //@synthesize commentFetchedProgressBlock=_commentFetchedProgressBlock - In the implementation block
@property (nonatomic,retain) CKCommentCursor * nextCursor;                 //@synthesize nextCursor=_nextCursor - In the implementation block
@property (nonatomic,retain) CKCommentQuery * query;                       //@synthesize query=_query - In the implementation block
@property (nonatomic,retain) CKCommentCursor * cursor;                     //@synthesize cursor=_cursor - In the implementation block
@property (assign,nonatomic) unsigned long long resultsLimit;              //@synthesize resultsLimit=_resultsLimit - In the implementation block
-(CKCommentQuery *)query;
-(void)setQuery:(CKCommentQuery *)arg1 ;
-(CKCommentCursor *)cursor;
-(void)setCursor:(CKCommentCursor *)arg1 ;
-(void)main;
-(void)setResultsLimit:(unsigned long long)arg1 ;
-(id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 ;
-(void)setCommentFetchedProgressBlock:(id)arg1 ;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(Class)operationResultClass;
-(void)fillOutOperationResult:(id)arg1 ;
-(unsigned long long)resultsLimit;
-(CKCommentCursor *)nextCursor;
-(void)setNextCursor:(CKCommentCursor *)arg1 ;
-(id)commentFetchedProgressBlock;
-(void)_handleCommentFetched:(id)arg1 responseCode:(id)arg2 ;
@end

