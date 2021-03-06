/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:15:17 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ITMLKit/IKCollectionElement.h>

@class NSString;

@interface IKGridElement : IKCollectionElement {

	char _paged;

}

@property (nonatomic,readonly) unsigned columnCount; 
@property (nonatomic,readonly) NSString * rowHeight; 
@property (getter=isPaged,nonatomic,readonly) char paged;              //@synthesize paged=_paged - In the implementation block
@property (nonatomic,readonly) unsigned rowCount; 
-(NSString *)rowHeight;
-(unsigned)columnCount;
-(char)isPaged;
-(unsigned)rowCount;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
@end

