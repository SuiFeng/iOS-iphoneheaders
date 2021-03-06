/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:28:47 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/PassKit.framework/passd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <passd/NSSecureCoding.h>

@class NSMutableSet, PKDiff, NSDate, NSString, NSArray;

@interface PDPassUpdateBulletinRecord : NSObject <NSSecureCoding> {

	NSMutableSet* _diffs;
	PKDiff* _seedDiff;
	NSDate* _date;
	NSString* _recordID;

}

@property (nonatomic,readonly) BOOL hasDiffs; 
@property (nonatomic,readonly) PKDiff * seedDiff;                            //@synthesize seedDiff=_seedDiff - In the implementation block
@property (nonatomic,readonly) NSDate * date;                                //@synthesize date=_date - In the implementation block
@property (nonatomic,readonly) NSArray * passUniqueIdentifiers; 
@property (nonatomic,readonly) NSString * recordID;                          //@synthesize recordID=_recordID - In the implementation block
+(id)passUpdateBulletinRecordWithDiff:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(id)initWithDiff:(id)arg1 ;
-(void)_removeDiffs:(id)arg1 ;
-(BOOL)addDiff:(id)arg1 ;
-(BOOL)removeDiffsConflictingWithDiff:(id)arg1 ;
-(BOOL)removeDiffsForPassUniqueIdentifier:(id)arg1 ;
-(NSArray *)passUniqueIdentifiers;
-(PKDiff *)seedDiff;
-(BOOL)hasDiffs;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)description;
-(NSDate *)date;
-(NSString *)recordID;
@end

