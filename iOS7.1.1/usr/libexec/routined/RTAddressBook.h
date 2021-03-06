/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 7:34:29 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /usr/libexec/routined
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray;

@interface RTAddressBook : NSObject {

	void* _addressBook;
	NSArray* _meCards;

}

@property (nonatomic,retain) NSArray * meCards;              //@synthesize meCards=_meCards - In the implementation block
+(id)entryTypeToString:(int)arg1 ;
-(id)getMeCardPlaceResultsOfType:(int)arg1 ;
-(id)getMeCardAddressDictionariesOfType:(int)arg1 ;
-(id)getMeCardLocationsOfType:(int)arg1 ;
-(void)dealloc;
-(id)init;
-(void).cxx_destruct;
-(id)meCards;
-(void)setMeCards:(id)arg1 ;
@end

