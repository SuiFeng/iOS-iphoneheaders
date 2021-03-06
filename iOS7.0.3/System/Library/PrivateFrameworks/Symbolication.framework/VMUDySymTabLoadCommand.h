/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:45 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Symbolication/VMULoadCommand.h>

@interface VMUDySymTabLoadCommand : VMULoadCommand {

	unsigned _ilocalsym;
	unsigned _nlocalsym;
	unsigned _iextdefsym;
	unsigned _nextdefsym;
	unsigned _iundefsym;
	unsigned _nundefsym;
	unsigned _tocoff;
	unsigned _ntoc;
	unsigned _modtaboff;
	unsigned _nmodtab;
	unsigned _extrefsymoff;
	unsigned _nextrefsyms;
	unsigned _indirectsymoff;
	unsigned _nindirectsyms;
	unsigned _extreloff;
	unsigned _nextrel;
	unsigned _locreloff;
	unsigned _nlocrel;

}
-(id)initWithMemory:(id)arg1 ;
-(BOOL)isDySymTab;
-(unsigned)indirectsymoff;
-(unsigned)nindirectsyms;
@end

