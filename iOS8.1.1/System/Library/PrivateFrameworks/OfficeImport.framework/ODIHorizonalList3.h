/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:58 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class ODIState;

@interface ODIHorizonalList3 : NSObject {

	unsigned mMaxPointCount;
	ODIState* mState;

}
+(BOOL)mapIdentifier:(id)arg1 state:(id)arg2 ;
-(id)initWithState:(id)arg1 ;
-(void)mapRoofStyleFromPoint:(id)arg1 shape:(id)arg2 ;
-(void)mapOnePillarStyleFromPoint:(id)arg1 shape:(id)arg2 ;
-(void)mapPillarPoints:(id)arg1 bounds:(CGRect)arg2 ;
-(void)mapBaseStyleFromPoint:(id)arg1 shape:(id)arg2 ;
-(void)setMaxPointCount:(unsigned)arg1 ;
-(void)map;
@end
