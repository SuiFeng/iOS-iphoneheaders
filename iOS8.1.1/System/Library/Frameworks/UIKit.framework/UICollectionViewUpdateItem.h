/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:29:27 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSIndexPath;

@interface UICollectionViewUpdateItem : NSObject {

	NSIndexPath* _initialIndexPath;
	NSIndexPath* _finalIndexPath;
	long long _updateAction;
	id _gap;

}

@property (nonatomic,readonly) NSIndexPath * indexPathBeforeUpdate;                                                 //@synthesize initialIndexPath=_initialIndexPath - In the implementation block
@property (nonatomic,readonly) NSIndexPath * indexPathAfterUpdate;                                                  //@synthesize finalIndexPath=_finalIndexPath - In the implementation block
@property (nonatomic,readonly) long long updateAction;                                                              //@synthesize updateAction=_updateAction - In the implementation block
@property (getter=_action,nonatomic,readonly) long long action; 
@property (getter=_indexPath,nonatomic,readonly) NSIndexPath * indexPath; 
@property (assign,setter=_setGap:,getter=_gap,nonatomic) id gap; 
@property (getter=_isSectionOperation,nonatomic,readonly) BOOL isSectionOperation; 
@property (setter=_setNewIndexPath:,getter=_newIndexPath,nonatomic,retain) NSIndexPath * newIndexPath; 
-(void)dealloc;
-(id)description;
-(long long)inverseCompareIndexPaths:(id)arg1 ;
-(long long)compareIndexPaths:(id)arg1 ;
-(id)_indexPath;
-(id)initWithOldIndexPath:(id)arg1 newIndexPath:(id)arg2 ;
-(long long)_action;
-(id)_gap;
-(id)_newIndexPath;
-(BOOL)_isSectionOperation;
-(void)_setGap:(id)arg1 ;
-(id)initWithAction:(long long)arg1 forIndexPath:(id)arg2 ;
-(id)initWithInitialIndexPath:(id)arg1 finalIndexPath:(id)arg2 updateAction:(long long)arg3 ;
-(void)_setNewIndexPath:(id)arg1 ;
-(long long)updateAction;
-(NSIndexPath *)indexPathBeforeUpdate;
-(NSIndexPath *)indexPathAfterUpdate;
@end

