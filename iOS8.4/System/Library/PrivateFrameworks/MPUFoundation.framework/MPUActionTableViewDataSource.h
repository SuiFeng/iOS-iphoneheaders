/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:23:19 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MPUActionTableViewDataSource <UITableViewDataSource>
@required
+(id)actionCellConfigurationClasses;
+(id)actionCellConfigurationClassesForLocation:(unsigned long long)arg1;
-(void)reloadActionRowsAnimated:(BOOL)arg1;
-(Class)cellConfigurationForIndexPath:(id)arg1;
-(long long)numberOfTopActionRowsInTableView:(id)arg1;
-(long long)numberOfBottomActionRowsInTableView:(id)arg1;
-(BOOL)shouldShowActionCellConfiguration:(Class)arg1;
-(long long)numberOfActionRowsInTableView:(id)arg1;

@end
