/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 12:32:25 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class CADisplayLink, NSMutableSet;

@interface AXDisplayLinkManager : NSObject {

	char _hasUpdatedTargetActions;
	char _handlingDisplayRefresh;
	CADisplayLink* _storedDisplayLink;
	NSMutableSet* _activeTargetActions;
	NSMutableSet* _updatedTargetActions;
	unsigned _warmUpModeRequirementsCount;

}

@property (getter=isPaused,nonatomic,readonly) char paused; 
@property (nonatomic,readonly) double duration; 
@property (nonatomic,readonly) double timestamp; 
@property (nonatomic,readonly) unsigned frameInterval; 
@property (nonatomic,retain) CADisplayLink * displayLink; 
@property (nonatomic,retain) CADisplayLink * storedDisplayLink;                                        //@synthesize storedDisplayLink=_storedDisplayLink - In the implementation block
@property (nonatomic,retain) NSMutableSet * activeTargetActions;                                       //@synthesize activeTargetActions=_activeTargetActions - In the implementation block
@property (nonatomic,retain) NSMutableSet * updatedTargetActions;                                      //@synthesize updatedTargetActions=_updatedTargetActions - In the implementation block
@property (assign,nonatomic) char hasUpdatedTargetActions;                                             //@synthesize hasUpdatedTargetActions=_hasUpdatedTargetActions - In the implementation block
@property (assign,getter=isHandlingDisplayRefresh,nonatomic) char handlingDisplayRefresh;              //@synthesize handlingDisplayRefresh=_handlingDisplayRefresh - In the implementation block
@property (assign,nonatomic) unsigned warmUpModeRequirementsCount;                                     //@synthesize warmUpModeRequirementsCount=_warmUpModeRequirementsCount - In the implementation block
@property (getter=isWarmUpModeEnabled,nonatomic,readonly) char warmUpModeEnabled; 
+(void)_releaseCurrentDisplayLinkManager;
+(id)currentDisplayLinkManager;
-(void)dealloc;
-(id)init;
-(double)timestamp;
-(double)duration;
-(unsigned)frameInterval;
-(void)setDisplayLink:(CADisplayLink *)arg1 ;
-(CADisplayLink *)displayLink;
-(void)setActiveTargetActions:(NSMutableSet *)arg1 ;
-(void)setUpdatedTargetActions:(NSMutableSet *)arg1 ;
-(CADisplayLink *)storedDisplayLink;
-(void)_displayDidRefresh:(id)arg1 ;
-(void)setStoredDisplayLink:(CADisplayLink *)arg1 ;
-(void)addTarget:(id)arg1 selector:(SEL)arg2 frameInterval:(unsigned)arg3 ;
-(char)isHandlingDisplayRefresh;
-(id)_prepareUpdatedTargetActionsForModification;
-(NSMutableSet *)activeTargetActions;
-(void)_didAddFirstTargetAction;
-(void)_didRemoveLastTargetAction;
-(NSMutableSet *)updatedTargetActions;
-(char)hasUpdatedTargetActions;
-(void)setHasUpdatedTargetActions:(char)arg1 ;
-(char)isWarmUpModeEnabled;
-(unsigned)warmUpModeRequirementsCount;
-(void)setWarmUpModeRequirementsCount:(unsigned)arg1 ;
-(void)setHandlingDisplayRefresh:(char)arg1 ;
-(void)addTarget:(id)arg1 selector:(SEL)arg2 ;
-(void)removeTarget:(id)arg1 selector:(SEL)arg2 ;
-(void)beginRequiringWarmUpMode;
-(void)endRequiringWarmUpMode;
-(char)isPaused;
@end
