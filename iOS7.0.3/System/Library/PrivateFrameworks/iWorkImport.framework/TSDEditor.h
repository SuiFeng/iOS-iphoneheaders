/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:09:48 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol TSDEditor <NSObject>
@property (nonatomic,retain) TSKSelection * selection; 
@property (nonatomic,readonly) NSSet * selectedObjectsSupportingFill; 
@property (nonatomic,readonly) NSSet * selectedObjectsSupportingStroke; 
@property (nonatomic,readonly) NSSet * selectedObjectsSupportingShadow; 
@property (nonatomic,readonly) NSSet * selectedObjectsSupportingReflection; 
@property (nonatomic,readonly) NSSet * selectedObjectsSupportingOpacity; 
@property (nonatomic,readonly) NSSet * selectedObjectsSupportingTextInset; 
@property (nonatomic,readonly) NSSet * selectedObjectsSupportingConnectionLineAttributes; 
@property (nonatomic,readonly) NSSet * selectedObjectsSupportingEndpoints; 
@property (nonatomic,readonly) NSSet * selectedObjectsSupportingSmartShapeAttributes; 
@property (nonatomic,readonly) NSSet * selectedObjectsSupportingResize; 
@property (nonatomic,readonly) NSSet * selectedObjectsSupportingShrinkTextToFit; 
@optional
-(int)canPerformEditorAction:(SEL)arg1 withSender:(id)arg2;
-(void)setSelection:(id)arg1 withFlags:(unsigned)arg2;
-(void)didBecomeCurrentEditor;
-(void)willResignCurrentEditor;
-(BOOL)shouldEndEditingToBeginEditingRep:(id)arg1;
-(void)setSelectionWithSearchReference:(id)arg1;
-(id)editingSearchReference;
-(float)viewScaleForSelectionWithTargetPointSize:(float)arg1;
-(id)topLevelInspectorViewControllers;
-(id)topLevelInspectorAutosaveName;
-(BOOL)ignoreSetSelection:(id)arg1 onInfo:(id)arg2;
-(BOOL)suppressAutozoom;
-(float)targetPointSizeForSelectionWithViewScale:(float)arg1;
-(CGRect*)zoomRectForSelection:(id)arg1;
-(CGRect*)targetRectForEditMenu;
-(BOOL)shouldProhibitAction:(SEL)arg1;
-(void)didResignTextInputEditor;
-(void)willResignTextInputEditor;
-(void)didBecomeTextInputEditor;
-(BOOL)canAddOrShowComment;
-(BOOL)wantsToBePushedBackOntoStackForSelection:(id)arg1;
-(BOOL)canBeginPathEditing;
-(BOOL)canBeginEditingRepOnDoubleTap:(id)arg1;
-(id)selectedObjectsSupportingFill;
-(id)selectedObjectsSupportingStroke;
-(id)selectedObjectsSupportingShadow;
-(id)selectedObjectsSupportingReflection;
-(id)selectedObjectsSupportingOpacity;
-(id)selectedObjectsSupportingTextInset;
-(id)selectedObjectsSupportingConnectionLineAttributes;
-(id)selectedObjectsSupportingEndpoints;
-(id)selectedObjectsSupportingSmartShapeAttributes;
-(id)selectedObjectsSupportingResize;
-(id)selectedObjectsSupportingShrinkTextToFit;
-(CGRect*)coachingTipManager:(id)arg1 coachingTipView:(id)arg2 canvasRectForKey:(id)arg3;
-(id)inspectorTabTipKey;
-(CGSize*)topLevelInspectorPreferredPopoverSize;
-(id)level2InspectorViewControllers;
-(id)extraMenuItems;
-(id)wrapInspectorController;
-(void)reverseDirection:(id)arg1;
-(void)addContextualMenuItemsToArray:(id)arg1;
-(id)canvasCoachingTips;
-(id)selection;
-(void)setSelection:(id)arg1;
-(void)selectAll:(id)arg1;
-(void)cut:(id)arg1;
-(void)copy:(id)arg1;
-(void)paste:(id)arg1;
-(void)select:(id)arg1;
-(id)model;
-(void)delete:(id)arg1;
-(void)willEnterForeground;
-(void)didEnterBackground;

@required
-(id)documentRoot;
@end

