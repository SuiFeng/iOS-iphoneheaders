/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:15 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IMFoundation/IMFoundation-Structs.h>
#import <IMFoundation/IMItem.h>
#import <IMFoundation/NSCoding.h>
#import <IMFoundation/NSCopying.h>
#import <IMFoundation/IMRemoteObjectCoding.h>

@class NSString;

@interface IMParticipantChangeItem : IMItem <NSCoding, NSCopying, IMRemoteObjectCoding> {

	long long _changeType;
	NSString* _otherCountryCode;
	NSString* _otherHandle;
	NSString* _otherUnformattedID;

}

@property (assign,nonatomic) long long changeType;                       //@synthesize changeType=_changeType - In the implementation block
@property (nonatomic,retain) NSString * otherHandle;                     //@synthesize otherHandle=_otherHandle - In the implementation block
@property (nonatomic,retain) NSString * otherUnformattedID;              //@synthesize otherUnformattedID=_otherUnformattedID - In the implementation block
@property (nonatomic,retain) NSString * otherCountryCode;                //@synthesize otherCountryCode=_otherCountryCode - In the implementation block
-(id)_newChatItems;
-(id)copyDictionaryRepresentation;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)otherHandle;
-(NSString *)otherUnformattedID;
-(void)setOtherUnformattedID:(NSString *)arg1 ;
-(void)setOtherHandle:(NSString *)arg1 ;
-(NSString *)otherCountryCode;
-(void)setOtherCountryCode:(NSString *)arg1 ;
-(void)setChangeType:(long long)arg1 ;
-(long long)changeType;
@end

