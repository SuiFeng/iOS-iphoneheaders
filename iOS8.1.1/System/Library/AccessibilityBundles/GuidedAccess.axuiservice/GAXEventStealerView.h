/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:25:50 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/AccessibilityBundles/GuidedAccess.axuiservice/GuidedAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GuidedAccess/GuidedAccess-Structs.h>
#import <UIKit/UIView.h>

@protocol GAXEventStealerViewDelegate;
@interface GAXEventStealerView : UIView {

	BOOL _shouldStealAllEvents;
	id<GAXEventStealerViewDelegate> _eventStealerViewDelegate;

}

@property (assign,nonatomic) BOOL shouldStealAllEvents;                                             //@synthesize shouldStealAllEvents=_shouldStealAllEvents - In the implementation block
@property (assign,nonatomic) id<GAXEventStealerViewDelegate> eventStealerViewDelegate;              //@synthesize eventStealerViewDelegate=_eventStealerViewDelegate - In the implementation block
-(id<GAXEventStealerViewDelegate>)eventStealerViewDelegate;
-(BOOL)shouldStealAllEvents;
-(void)setShouldStealAllEvents:(BOOL)arg1 ;
-(void)setEventStealerViewDelegate:(id<GAXEventStealerViewDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)_commonInit;
@end
