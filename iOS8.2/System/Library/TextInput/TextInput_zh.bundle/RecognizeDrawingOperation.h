/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:34 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/TextInput/TextInput_zh.bundle/TextInput_zh
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class TIHandwritingStrokes, NSArray, NSString, TIInputManagerHandwriting;

@interface RecognizeDrawingOperation : NSOperation {

	TIHandwritingStrokes* _strokes;
	int _recognitionType;
	NSArray* _candidates;
	NSString* _history;
	TIInputManagerHandwriting* _im;

}

@property (nonatomic,retain) NSArray * candidates;                             //@synthesize candidates=_candidates - In the implementation block
@property (nonatomic,retain) TIInputManagerHandwriting * manager;              //@synthesize im=_im - In the implementation block
@property (nonatomic,retain) NSString * history;                               //@synthesize history=_history - In the implementation block
+(id)recognitionResultsForStrokes:(id)arg1 withRecognitionType:(int)arg2 history:(id)arg3 shouldCancel:(/*^block*/id)arg4 ;
-(void)dealloc;
-(NSArray *)candidates;
-(void)setCandidates:(NSArray *)arg1 ;
-(void)main;
-(TIInputManagerHandwriting *)manager;
-(void)setManager:(TIInputManagerHandwriting *)arg1 ;
-(id)initWithInputManager:(id)arg1 strokes:(id)arg2 history:(id)arg3 ;
-(NSString *)history;
-(void)setHistory:(NSString *)arg1 ;
@end
