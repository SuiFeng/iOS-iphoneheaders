/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:43 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/StarkSuggestionSource.h>

@class RTRoutineManager;

@interface StarkPredictedLocation : StarkSuggestionSource {

	RTRoutineManager* _routineManager;

}
-(void)requestForLocation:(id)arg1 timePeriod:(id)arg2 suggestionHandler:(/*^block*/id)arg3 finishedHandler:(/*^block*/id)arg4 ;
-(void)_handlePredictedLocationsOfInterest:(id)arg1 forLocation:(id)arg2 withHandler:(/*^block*/id)arg3 ;
-(id)initWithRoutineManager:(id)arg1 ;
@end
