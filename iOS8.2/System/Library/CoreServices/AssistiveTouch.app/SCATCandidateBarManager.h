/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:23:13 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <assistivetouchd/SCATSimpleElementManager.h>

@protocol SCATCandidateBarManagerDelegate;
@class NSArray;

@interface SCATCandidateBarManager : SCATSimpleElementManager {

	id<SCATCandidateBarManagerDelegate> _delegate;
	NSArray* _typingCandidates;

}

@property (assign,nonatomic) id<SCATCandidateBarManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSArray * typingCandidates;                                //@synthesize typingCandidates=_typingCandidates - In the implementation block
-(void)driver:(id)arg1 willFocusOnContext:(id)arg2 ;
-(char)handleInputAction:(int)arg1 withElement:(id)arg2 ;
-(void)setTypingCandidates:(NSArray *)arg1 ;
-(char)canBeActiveElementManager;
-(id)allElements;
-(void)didFetchElements:(id)arg1 foundNewElements:(char)arg2 currentFocusContext:(id)arg3 didChangeActiveElementManager:(char)arg4 ;
-(void)dealloc;
-(void)setDelegate:(id<SCATCandidateBarManagerDelegate>)arg1 ;
-(id<SCATCandidateBarManagerDelegate>)delegate;
-(NSArray *)typingCandidates;
@end

