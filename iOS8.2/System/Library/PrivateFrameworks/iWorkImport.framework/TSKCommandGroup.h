/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:15 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSKCommand.h>
#import <iWorkImport/TSDPropagatableCommand.h>
#import <iWorkImport/TSKInnerCommandsProvider.h>

@class NSMutableArray, NSMutableIndexSet, NSString, NSArray;

@interface TSKCommandGroup : TSKCommand <TSDPropagatableCommand, TSKInnerCommandsProvider> {

	NSMutableArray* _commands;
	NSMutableIndexSet* _processResults;
	NSMutableArray* _committedCommands;
	NSString* _actionString;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) char isEmpty; 
@property (readonly) NSArray * commands;                            //@synthesize commands=_commands - In the implementation block
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(void)saveToArchive:(CommandGroupArchive*)arg1 archiver:(id)arg2 ;
-(void)addCommand:(id)arg1 ;
-(void)loadFromArchive:(const CommandGroupArchive*)arg1 unarchiver:(id)arg2 ;
-(char)modifiesAnyObjectPassingTest:(/*^block*/id)arg1 ;
-(void)populateChangePropagationMapAfterCommit:(id)arg1 ;
-(char)shouldBePropagated;
-(void)populateChangePropagationMapBeforeCommit:(id)arg1 ;
-(id)i_uncommittedCommands;
-(void)i_commitRemainingCommands;
-(void)setCommandController:(id)arg1 ;
-(char)shouldRunSynchronously;
-(id)i_removeCommittedCommandAtIndex:(unsigned)arg1 ;
-(void)i_addCommittedCommand:(id)arg1 ;
-(const CommandGroupArchive*)commandGroupArchiveFromUnarchiver:(id)arg1 ;
-(void)addCommandIfNotNil:(id)arg1 ;
-(void)addCommandsFromArray:(id)arg1 ;
-(void)dealloc;
-(void)undo;
-(void)redo;
-(char)isEmpty;
-(void)commit;
-(id)initWithContext:(id)arg1 ;
-(NSArray *)commands;
-(char)process;
-(id)actionString;
-(void)setActionString:(id)arg1 ;
@end

