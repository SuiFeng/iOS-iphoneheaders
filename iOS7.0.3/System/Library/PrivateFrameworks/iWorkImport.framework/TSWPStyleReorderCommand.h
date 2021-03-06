/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:10:11 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSWPStyleBaseCommand.h>

@interface TSWPStyleReorderCommand : TSWPStyleBaseCommand {

	unsigned _newPresetIndex;
	unsigned _oldPresetIndex;

}

@property (assign,nonatomic) unsigned newPresetIndex;              //@synthesize newPresetIndex=_newPresetIndex - In the implementation block
@property (assign,nonatomic) unsigned oldPresetIndex;              //@synthesize oldPresetIndex=_oldPresetIndex - In the implementation block
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(void)saveToMessage:(StyleReorderCommandArchive*)arg1 archiver:(id)arg2 ;
-(void)loadFromMessage:(const StyleReorderCommandArchive*)arg1 unarchiver:(id)arg2 ;
-(unsigned)oldPresetIndex;
-(unsigned)newPresetIndex;
-(void)p_CommitAndRedo;
-(id)initWithTheme:(id)arg1 style:(id)arg2 newPresetIndex:(unsigned)arg3 ;
-(void)setNewPresetIndex:(unsigned)arg1 ;
-(void)setOldPresetIndex:(unsigned)arg1 ;
-(void)dealloc;
-(void)undo;
-(void)redo;
-(void)commit;
-(id)actionString;
@end

