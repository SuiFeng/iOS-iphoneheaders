/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:26:53 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol WBSCompletionListItem, WBSParsecSearchSessionDelegate;
#import <WebUI/WebUI-Structs.h>
@class WBSParsecSearchClient, NSURLSession, NSMutableArray, NSMutableDictionary, WBSParsecSearchResultCache, WBSParsecSearchResult, WBSCompletionQuery;

@interface WBSParsecSearchSession : NSObject {

	WBSParsecSearchClient* _client;
	NSURLSession* _urlSession;
	time_point<std::__1::chrono::steady_clock, std::__1::chrono::duration<long long, std::__1::ratio<1, 1000000000> > > _sessionStartTimestamp;
	NSMutableArray* _feedbackActions;
	NSMutableDictionary* _resultSetPrefixCache;
	WBSParsecSearchResultCache* _searchResultCache;
	BOOL _hasRespondedToCurrentQuery;
	WBSParsecSearchResult* _lastHiddenParsecResult;
	id<WBSCompletionListItem> _lastLocalResultHidingParsecResult;
	BOOL _valid;
	id<WBSParsecSearchSessionDelegate> _delegate;
	WBSCompletionQuery* _currentQuery;
	double _uiScale;

}

@property (assign,nonatomic,__weak) id<WBSParsecSearchSessionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) WBSCompletionQuery * currentQuery;                               //@synthesize currentQuery=_currentQuery - In the implementation block
@property (getter=isValid,nonatomic,readonly) BOOL valid;                                     //@synthesize valid=_valid - In the implementation block
@property (nonatomic,readonly) WBSParsecSearchClient * client;                                //@synthesize client=_client - In the implementation block
@property (assign,setter=setUIScale:,nonatomic) double uiScale;                               //@synthesize uiScale=_uiScale - In the implementation block
-(void)dealloc;
-(void)setDelegate:(id<WBSParsecSearchSessionDelegate>)arg1 ;
-(id<WBSParsecSearchSessionDelegate>)delegate;
-(BOOL)isValid;
-(void)_invalidate;
-(void)_endSession;
-(void)setCurrentQuery:(WBSCompletionQuery *)arg1 ;
-(WBSCompletionQuery *)currentQuery;
-(id)initWithClient:(id)arg1 ;
-(WBSParsecSearchClient *)client;
-(double)uiScale;
-(void)userDidEngageWithCardShowingResult:(id)arg1 onCardOfType:(id)arg2 actionType:(id)arg3 actionTarget:(id)arg4 destination:(id)arg5 ;
-(void)userDidEngageWithCompletionListItem:(id)arg1 withCardActionDictionary:(id)arg2 ;
-(void)_sendWarmupRequest;
-(id)_searchURLForQuery:(id)arg1 ;
-(id)_urlSession;
-(double)_timeToFirstByteForDataTask:(id)arg1 ;
-(void)_generateSearchFeedbackForResponse:(id)arg1 forQuery:(id)arg2 timeToFirstByte:(double)arg3 error:(id)arg4 ;
-(id)_searchFallbackURLForQuery:(id)arg1 ;
-(unsigned long long)_addFeedbackAction:(id)arg1 ;
-(void)userDidCancelSession:(long long)arg1 ;
-(void)_addParsecAndSearchSuggestionDeltaForQuery:(id)arg1 toFeedbackDictionary:(id)arg2 ;
-(id)_searchURLForQuery:(id)arg1 baseURL:(id)arg2 ;
-(void)_respondToCurrentQueryIfNeededWithResults:(id)arg1 ;
-(id)_cachedResultSetForQuery:(id)arg1 ;
-(void)_generateCachedSearchFeedbackForQuery:(id)arg1 ;
-(void)_processBestResultSetOnMainThread:(id)arg1 forQuery:(id)arg2 ;
-(id)_searchRequestForQuery:(id)arg1 ;
-(BOOL)_canSendQuery;
-(void)_searchRequestFailedForQuery:(id)arg1 ;
-(void)_processSearchResponseOnMainThread:(id)arg1 forQuery:(id)arg2 timeToFirstByte:(double)arg3 ;
-(void)_sendGeneratedFeedback;
-(void)_cacheResultSet:(id)arg1 ;
-(void)_cacheResultsFromSearchResponse:(id)arg1 ;
-(void)didDisplayCompletionListItems:(id)arg1 hidingParsecResult:(id)arg2 inFavorOfLocalResult:(id)arg3 forQuery:(id)arg4 ;
-(void)userDidSelectCompletionListItem:(id)arg1 ;
-(void)userDidCancelSession;
-(void)didReceiveWebSuggestionsForQuery:(id)arg1 fromSearchProvider:(id)arg2 ;
-(void)didReceiveLocalResultsForQuery:(id)arg1 ;
-(void)setUIScale:(double)arg1 ;
@end

