/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:58:09 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKModelObject.h>
#import <VectorKit/VKMapLayer.h>
#import <VectorKit/VKStylesheetObserver.h>

@protocol VKAnnotationModelDelegate;
@class NSMutableArray, VKAnnotationMarker, NSMutableSet, VKMapModel, NSArray, VKStylesheet;

@interface VKAnnotationModel : VKModelObject <VKMapLayer, VKStylesheetObserver> {

	NSMutableArray* _annotationMarkers;
	VKAnnotationMarker* _selectedAnnotationMarker;
	NSMutableSet* _animatingMarkers;
	NSMutableArray* _markersToAnimate;
	<VKAnnotationModelDelegate>* _delegate;
	VKAnnotationMarker* _draggingAnnotationMarker;
	BOOL _didDragMarker;
	BOOL _hasEverDrawnSomething;
	SCD_Struct_VK123 _styleTransitionState;
	/*^block*/ id _annotationMarkerDeselectionCallback;
	VKMapModel* _mapModel;

}

@property (assign,nonatomic) <VKAnnotationModelDelegate> * delegate;                       //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) SCD_Struct_VK123 styleTransitionState;                        //@synthesize styleTransitionState=_styleTransitionState - In the implementation block
@property (nonatomic,readonly) NSArray * annotationMarkers;                                //@synthesize annotationMarkers=_annotationMarkers - In the implementation block
@property (nonatomic,readonly) VKAnnotationMarker * selectedAnnotationMarker; 
@property (nonatomic,readonly) BOOL needsLayout; 
@property (nonatomic,copy) id annotationMarkerDeselectionCallback;                         //@synthesize annotationMarkerDeselectionCallback=_annotationMarkerDeselectionCallback - In the implementation block
@property (assign,nonatomic) VKMapModel * mapModel;                                        //@synthesize mapModel=_mapModel - In the implementation block
@property (nonatomic,readonly) VKStylesheet * stylesheet; 
+(BOOL)reloadOnStylesheetChange;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(BOOL)needsLayout;
-(id).cxx_construct;
-(unsigned)mapLayerPosition;
-(id)stylesheet;
-(/*^block*/ id)annotationMarkerDeselectionCallback;
-(void)setAnnotationMarkerDeselectionCallback:(/*^block*/ id)arg1 ;
-(id)selectedAnnotationMarker;
-(id)annotationMarkers;
-(void)removeAnnotationMarker:(id)arg1 ;
-(void)addAnnotationMarker:(id)arg1 allowAnimation:(BOOL)arg2 ;
-(void)selectAnnotationMarker:(id)arg1 ;
-(void)deselectAnnotationMarker:(id)arg1 ;
-(/*^block*/ id)annotationRectTest;
-(/*^block*/ id)annotationCoordinateTest;
-(void)setMapModel:(id)arg1 ;
-(void)layoutScene:(id)arg1 withContext:(id)arg2 ;
-(id)annotationMarkerForSelectionAtPoint:(VKPoint)arg1 avoidCurrent:(BOOL)arg2 canvasSize:(CGSize)arg3 ;
-(unsigned)supportedRenderPasses;
-(void)drawScene:(id)arg1 withContext:(id)arg2 ;
-(void)setStyleTransitionState:(SCD_Struct_VK123)arg1 ;
-(SCD_Struct_VK123)styleTransitionState;
-(void)stylesheetDidChange;
-(id)mapModel;
-(void)anchorPositionChangedForMarker:(id)arg1 ;
@end

