/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:04:31 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <identityservicesd/identityservicesd-Structs.h>
@class IDSSockAddrWrapper, NSString, NSData;

@interface IDSInterfaceAddress : NSObject {

	IDSSockAddrWrapper* _address;
	IDSSockAddrWrapper* _external;
	IDSSockAddrWrapper* _netmask;
	IDSSockAddrWrapper* _destination;
	NSString* _name;
	unsigned _index;
	NSData* _bssid;
	char _AWDL;
	char _Expensive;

}

@property (readonly) unsigned IPVersion; 
@property (readonly) IDSSockAddrWrapper * address;                   //@synthesize address=_address - In the implementation block
@property (copy) IDSSockAddrWrapper * external;                      //@synthesize external=_external - In the implementation block
@property (readonly) IDSSockAddrWrapper * netmask;                   //@synthesize netmask=_netmask - In the implementation block
@property (readonly) IDSSockAddrWrapper * destination;               //@synthesize destination=_destination - In the implementation block
@property (readonly) NSString * name;                                //@synthesize name=_name - In the implementation block
@property (readonly) unsigned index;                                 //@synthesize index=_index - In the implementation block
@property (readonly) NSData * bssid;                                 //@synthesize bssid=_bssid - In the implementation block
@property (getter=isAWDL,readonly) char AWDL;                        //@synthesize AWDL=_AWDL - In the implementation block
@property (getter=isExpensive,readonly) char Expensive;              //@synthesize Expensive=_Expensive - In the implementation block
+(id)interfaceAddress:(ifaddrs*)arg1 eflags:(unsigned long long)arg2 ;
+(id)BSSIDWithInterfaceName:(id)arg1 ;
+(id)interfaceAddressWithTransmittedBytes:(char*)arg1 length:(long)arg2 withLocalInterfaceName:(id)arg3 ;
-(IDSSockAddrWrapper *)external;
-(void)setExternal:(IDSSockAddrWrapper *)arg1 ;
-(id)initWithInterfaceAddress:(ifaddrs*)arg1 bflags:(unsigned char)arg2 bssid:(char*)arg3 bssidLength:(unsigned char)arg4 ;
-(unsigned)IPVersion;
-(long)getTransmittableBytes:(char*)arg1 withPrefixByte:(unsigned char)arg2 ;
-(IDSSockAddrWrapper *)netmask;
-(char)isAWDL;
-(char)isExpensive;
-(NSData *)bssid;
-(IDSSockAddrWrapper *)address;
-(void)dealloc;
-(id)description;
-(NSString *)name;
-(unsigned)index;
-(IDSSockAddrWrapper *)destination;
@end
