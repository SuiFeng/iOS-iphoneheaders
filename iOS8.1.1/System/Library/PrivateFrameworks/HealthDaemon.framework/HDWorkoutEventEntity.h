/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:00 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HealthDaemon/HDHealthEntity.h>

@interface HDWorkoutEventEntity : HDHealthEntity
+(void)load;
+(id)insertWorkoutEventWithWorkoutID:(id)arg1 date:(id)arg2 eventType:(long long)arg3 database:(id)arg4 ;
+(id)workoutEventsWithWorkoutID:(id)arg1 database:(id)arg2 ;
+(id)createTableSQL;
+(long long)protectionClass;
+(BOOL)insertWorkoutEventsFromWorkout:(id)arg1 entity:(id)arg2 database:(id)arg3 ;
+(void)removeWorkoutEventsForWorkoutEntity:(id)arg1 database:(id)arg2 ;
+(id)workoutEventsWithWorkoutID:(id)arg1 healthDatabase:(id)arg2 error:(id*)arg3 ;
+(id)databaseTable;
@end

