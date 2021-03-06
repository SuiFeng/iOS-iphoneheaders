/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:52:59 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MultipeerConnectivity.framework/MultipeerConnectivity
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <MultipeerConnectivity/MultipeerConnectivity-Structs.h>
#import <CoreFoundation/NSCopying.h>
#import <CoreFoundation/NSSecureCoding.h>

@class MCPeerIDInternal, NSString;

@interface MCPeerID : NSObject <NSCopying, NSSecureCoding> {

	MCPeerIDInternal* _internal;

}

@property (nonatomic,readonly) NSString * displayName; 
+(BOOL)supportsSecureCoding;
-(id)idString;
-(id)serializedRepresentation;
-(id)initWithIDString:(id)arg1 displayName:(id)arg2 ;
-(unsigned long long)pid64;
-(id)internalDescription;
-(id)initWithPID:(unsigned)arg1 displayName:(id)arg2 ;
-(id)initWithDisplayName:(id)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)displayName;
-(id)initWithSerializedRepresentation:(id)arg1 ;
-(unsigned)pid;
@end

