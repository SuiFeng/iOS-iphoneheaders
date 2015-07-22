/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:17:12 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBookUI/IDSIDQueryControllerDelegate.h>

@class NSArray, NSString;

@interface ABPropertyIDSRequest : NSObject <IDSIDQueryControllerDelegate> {

	NSArray* _propertyItems;
	NSString* _listenerID;
	NSString* _service;
	/*^block*/id _requestResultBlock;
	/*^block*/id _idQueryResultHandler;

}

@property (nonatomic,retain) NSArray * propertyItems;               //@synthesize propertyItems=_propertyItems - In the implementation block
@property (nonatomic,retain) NSString * listenerID;                 //@synthesize listenerID=_listenerID - In the implementation block
@property (nonatomic,retain) NSString * service;                    //@synthesize service=_service - In the implementation block
@property (nonatomic,copy) id requestResultBlock;                   //@synthesize requestResultBlock=_requestResultBlock - In the implementation block
@property (nonatomic,copy) id idQueryResultHandler;                 //@synthesize idQueryResultHandler=_idQueryResultHandler - In the implementation block
@property (nonatomic,readonly) BOOL cancelled; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)propertyItems;
-(id)initWithPropertyItems:(id)arg1 service:(id)arg2 postToMainQueue:(BOOL)arg3 resultBlock:(/*^block*/id)arg4 ;
-(void)setPropertyItems:(NSArray *)arg1 ;
-(void)setListenerID:(NSString *)arg1 ;
-(void)setRequestResultBlock:(id)arg1 ;
-(NSString *)listenerID;
-(void)_requestStatusOnMainQueue:(BOOL)arg1 ;
-(id)requestResultBlock;
-(id)idQueryResultHandler;
-(void)setIdQueryResultHandler:(id)arg1 ;
-(void)idStatusUpdatedForDestinations:(id)arg1 service:(id)arg2 ;
-(void)cancel;
-(void)dealloc;
-(BOOL)cancelled;
-(NSString *)service;
-(void)setService:(NSString *)arg1 ;
@end
