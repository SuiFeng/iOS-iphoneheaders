/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:46 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Symbolication/Symbolication-Structs.h>
#import <Symbolication/VMUAddressRange.h>
#import <CoreFoundation/NSCoding.h>
#import <CoreFoundation/NSCopying.h>

@class VMUSymbolOwner, NSString;

@interface VMURegion : VMUAddressRange <NSCoding, NSCopying> {

	VMUSymbolOwner* _owner;
	NSString* _name;

}
+(id)regionWithOwner:(id)arg1 name:(id)arg2 addressRange:(VMURange)arg3 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)name;
-(int)compare:(id)arg1 ;
-(id)owner;
-(VMURange)addressRange;
-(id)initWithOwner:(id)arg1 name:(id)arg2 addressRange:(VMURange)arg3 ;
-(BOOL)isEqualToRegion:(id)arg1 ;
-(void)setOwner:(id)arg1 ;
@end

