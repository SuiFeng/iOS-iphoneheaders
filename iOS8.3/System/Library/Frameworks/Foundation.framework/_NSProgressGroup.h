/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:50:43 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSProgress, NSMutableSet, _NSProgressFraction;

@interface _NSProgressGroup : NSObject {

	NSProgress* _parent;
	long long _portionOfParent;
	NSMutableSet* _children;
	_NSProgressFraction* _childrenFraction;
	unsigned long long _finishedChildrenCount;
	char _closed;

}
-(void)prioritize;
-(id)_indentedDescription:(unsigned)arg1 ;
-(id)initWithParent:(id)arg1 portion:(long long)arg2 ;
-(void)updateChildWithOldFraction:(id)arg1 newFraction:(id)arg2 ;
-(void)stopNotifications;
-(void)cancel;
-(void)dealloc;
-(id)description;
-(void)close;
-(void)pause;
-(void)addChild:(id)arg1 ;
-(id)parent;
@end

