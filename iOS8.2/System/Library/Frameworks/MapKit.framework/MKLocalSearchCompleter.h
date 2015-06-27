/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:34 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKSearchCompleter.h>

@protocol GEOMapServiceCompletionTicket;
@class NSArray, NSTimer;

@interface MKLocalSearchCompleter : MKSearchCompleter {

	double _lastRequestTime;
	char _dirty;
	NSArray* _results;
	NSTimer* _timer;
	id<GEOMapServiceCompletionTicket> _ticket;
	int _source;

}
-(char)isSearching;
-(void)setBoundingRegion:(SCD_Struct_MK2)arg1 ;
-(char)resultsAreCurrent;
-(void)_handleCompletion:(id)arg1 forTicket:(id)arg2 ;
-(void)_schedulePendingRequest;
-(void)_handleError:(id)arg1 forTicket:(id)arg2 ;
-(void)_cancelTimer;
-(void)_scheduleRequest;
-(void)_fireRequest;
-(void)_markDirty;
-(void)cancel;
-(void)dealloc;
-(id)init;
-(id)results;
-(int)source;
-(void)setSource:(int)arg1 ;
-(void)setFragment:(id)arg1 ;
-(void)retry;
@end
