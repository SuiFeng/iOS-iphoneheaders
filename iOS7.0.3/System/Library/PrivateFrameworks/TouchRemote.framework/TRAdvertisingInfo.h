/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:54 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <TouchRemote/TouchRemote-Structs.h>
#import <CoreFoundation/NSCopying.h>
#import <CoreFoundation/NSMutableCopying.h>
#import <CoreFoundation/NSSecureCoding.h>

@class NSData;

@interface TRAdvertisingInfo : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {

	NSData* _pairingPublicKey;
	NSData* _wirelessProximityIdentifier;

}

@property (nonatomic,readonly) NSData * pairingPublicKey;                         //@synthesize pairingPublicKey=_pairingPublicKey - In the implementation block
@property (nonatomic,readonly) NSData * wirelessProximityIdentifier;              //@synthesize wirelessProximityIdentifier=_wirelessProximityIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)mutableCopyWithZone:(NSZoneRef)arg1 ;
-(id)_initWithTXTRecordRepresentation:(id)arg1 ;
-(id)pairingPublicKey;
-(id)_TXTRecordRepresentation;
-(id)wirelessProximityIdentifier;
-(void).cxx_destruct;
@end
