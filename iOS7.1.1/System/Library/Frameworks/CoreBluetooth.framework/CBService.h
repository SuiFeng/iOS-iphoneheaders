/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:45 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class CBPeripheral, CBUUID, NSArray, NSNumber;

@interface CBService : NSObject {

	CBPeripheral* _peripheral;
	CBUUID* _UUID;
	bool _isPrimary;
	NSArray* _includedServices;
	NSArray* _characteristics;
	NSNumber* _startHandle;
	NSNumber* _endHandle;

}

@property (nonatomic,readonly) CBPeripheral * peripheral;              //@synthesize peripheral=_peripheral - In the implementation block
@property (nonatomic,readonly) CBUUID * UUID;                          //@synthesize UUID=_UUID - In the implementation block
@property (nonatomic,readonly) bool isPrimary;                         //@synthesize isPrimary=_isPrimary - In the implementation block
@property (retain) NSArray * includedServices;                         //@synthesize includedServices=_includedServices - In the implementation block
@property (retain) NSArray * characteristics;                          //@synthesize characteristics=_characteristics - In the implementation block
@property (nonatomic,readonly) NSNumber * startHandle;                 //@synthesize startHandle=_startHandle - In the implementation block
@property (nonatomic,readonly) NSNumber * endHandle;                   //@synthesize endHandle=_endHandle - In the implementation block
-(bool)isPrimary;
-(id)initWithPeripheral:(id)arg1 dictionary:(id)arg2 ;
-(id)startHandle;
-(id)endHandle;
-(id)includedServices;
-(void)setIncludedServices:(id)arg1 ;
-(id)peripheral;
-(id)handleIncludedServicesDiscovered:(id)arg1 ;
-(id)handleCharacteristicsDiscovered:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(void)invalidate;
-(id)UUID;
-(void)setCharacteristics:(id)arg1 ;
-(id)characteristics;
@end
