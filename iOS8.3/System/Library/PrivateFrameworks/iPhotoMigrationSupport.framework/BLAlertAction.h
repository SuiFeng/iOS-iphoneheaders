/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:33:26 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/iPhotoMigrationSupport.framework/iPhotoMigrationSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface BLAlertAction : NSObject {

	/*^block*/id _block;
	NSString* _name;

}

@property (readonly) id block;                     //@synthesize block=_block - In the implementation block
@property (readonly) NSString * name;              //@synthesize name=_name - In the implementation block
+(id)cancelAction;
+(id)actionWithName:(id)arg1 andBlock:(/*^block*/id)arg2 ;
-(NSString *)name;
-(id)block;
-(id)initWithName:(id)arg1 andBlock:(/*^block*/id)arg2 ;
@end

