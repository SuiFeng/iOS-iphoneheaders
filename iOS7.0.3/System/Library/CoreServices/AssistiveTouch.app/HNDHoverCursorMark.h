/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:03:33 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <assistivetouchd/assistivetouchd-Structs.h>
#import <UIKit/UIView.h>

@interface HNDHoverCursorMark : UIView {

	CGAffineTransform _rotationTransform;
	CGRect _originalFrame;

}

@property (assign,nonatomic) CGAffineTransform rotationTransform;              //@synthesize rotationTransform=_rotationTransform - In the implementation block
@property (assign,nonatomic) CGRect originalFrame;                             //@synthesize originalFrame=_originalFrame - In the implementation block
-(void)setRotationTransform:(CGAffineTransform)arg1 ;
-(CGAffineTransform)rotationTransform;
-(void)setOriginalFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(CGRect)originalFrame;
@end

