/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:59:44 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/StarkSuggestionProvider.h>

@class PKPassLibrary;

@interface StarkPassbook : NSObject <StarkSuggestionProvider> {

	PKPassLibrary* _passLibrary;

}
-(void)updateForLocation:(id)arg1 timePeriod:(id)arg2 distanceThreshold:(double)arg3 handler:(/*^block*/ id)arg4 ;
-(id)initWithPassLibrary:(id)arg1 ;
-(void)dealloc;
@end

