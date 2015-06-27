/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:26:38 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Assistant/UIPlugins/GeneralKnowledge.siriUIBundle/GeneralKnowledge
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeneralKnowledge/GeneralKnowledge-Structs.h>
#import <GeneralKnowledge/SiriGKView.h>

@class UILabel;

@interface SiriGKPropertyView : SiriGKView {

	UILabel* _leftLabel;
	UILabel* _rightLabel;

}
-(id)_decoratedString:(id)arg1 forRegions:(id)arg2 ;
-(id)_labelFontForHighlighted:(BOOL)arg1 ;
-(CGSize)_sizeThatFits:(CGSize)arg1 setFrames:(BOOL)arg2 ;
-(id)initWithAnswerProperty:(id)arg1 ;
-(double)_bottomMargin;
-(double)_lineHeight;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end
