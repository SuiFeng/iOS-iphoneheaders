/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:40 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKit/UITextView.h>
#import <ChatKit/NSLayoutManagerDelegate.h>

@class NSAttributedString, NSString;

@interface CKBalloonTextView : UITextView <NSLayoutManagerDelegate> {

	char _singleLine;
	NSAttributedString* _attributedText;
	float _capOffsetFromBoundsTop;
	float _lastLineBaselineOffsetFromBoundsTop;

}

@property (assign,nonatomic) float capOffsetFromBoundsTop;                           //@synthesize capOffsetFromBoundsTop=_capOffsetFromBoundsTop - In the implementation block
@property (assign,nonatomic) float lastLineBaselineOffsetFromBoundsTop;              //@synthesize lastLineBaselineOffsetFromBoundsTop=_lastLineBaselineOffsetFromBoundsTop - In the implementation block
@property (assign,getter=isSingleLine,nonatomic) char singleLine;                    //@synthesize singleLine=_singleLine - In the implementation block
@property (nonatomic,copy) NSAttributedString * attributedText;                      //@synthesize attributedText=_attributedText - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)didMoveToWindow;
-(char)canBecomeFirstResponder;
-(void)setAttributedText:(NSAttributedString *)arg1 ;
-(NSAttributedString *)attributedText;
-(id)initReadonlyAndUnselectableWithFrame:(CGRect)arg1 textContainer:(id)arg2 ;
-(char)isSingleLine;
-(CGSize)sizeThatFits:(CGSize)arg1 textAlignmentInsets:(UIEdgeInsets*)arg2 isSingleLine:(char*)arg3 ;
-(float)capOffsetFromBoundsTop;
-(void)setCapOffsetFromBoundsTop:(float)arg1 ;
-(float)lastLineBaselineOffsetFromBoundsTop;
-(void)setLastLineBaselineOffsetFromBoundsTop:(float)arg1 ;
-(void)setSingleLine:(char)arg1 ;
@end

