/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:58 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITextRange.h>

@class DOMRange;

@interface UITextRangeImpl : UITextRange {

	DOMRange* _domRange;
	long long _affinityIfCollapsed;

}

@property (nonatomic,retain) DOMRange * domRange;              //@synthesize domRange=_domRange - In the implementation block
@property (assign,nonatomic) long long affinity;               //@synthesize affinityIfCollapsed=_affinityIfCollapsed - In the implementation block
+(id)wrapDOMRange:(id)arg1 withAffinity:(long long)arg2 ;
+(id)wrapDOMRange:(id)arg1 ;
-(void)dealloc;
-(bool)isEqual:(id)arg1 ;
-(id)description;
-(bool)isEmpty;
-(id)start;
-(id)end;
-(long long)affinity;
-(id)domRange;
-(void)setDomRange:(id)arg1 ;
-(void)setAffinity:(long long)arg1 ;
-(void)adjustAffinityOfPosition:(id)arg1 isStart:(bool)arg2 ;
@end

