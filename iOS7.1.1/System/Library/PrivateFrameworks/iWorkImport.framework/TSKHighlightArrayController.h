/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:45 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSKPulseAnimationControllerProtocol.h>

@protocol TSKHighlightArrayControllerProtocol;
@class NSMutableArray, NSArray;

@interface TSKHighlightArrayController : NSObject <TSKPulseAnimationControllerProtocol> {

	NSMutableArray* _layers;
	NSMutableArray* _controllers;
	double _zOrder;
	<TSKHighlightArrayControllerProtocol>* _delegate;
	bool _creatingLayers;
	CGAffineTransform _canvasTransform;
	CGAffineTransform _layerTransform;
	bool _shouldPulsate;
	bool _pulsating;
	bool _autohide;
	double _viewScale;

}

@property (assign,nonatomic) CGAffineTransform transform; 
@property (assign,nonatomic) double viewScale;                         //@synthesize viewScale=_viewScale - In the implementation block
@property (nonatomic,readonly) NSArray * layers;                       //@synthesize layers=_layers - In the implementation block
@property (assign,nonatomic) bool shouldPulsate;                       //@synthesize shouldPulsate=_shouldPulsate - In the implementation block
@property (assign,nonatomic) bool pulsating;                           //@synthesize pulsating=_pulsating - In the implementation block
@property (assign,nonatomic) bool autohide;                            //@synthesize autohide=_autohide - In the implementation block
-(double)viewScale;
-(void)pulseAnimationDidStopForPulse:(id)arg1 ;
-(bool)pulsating;
-(void)setPulsating:(bool)arg1 ;
-(bool)autohide;
-(void)setAutohide:(bool)arg1 ;
-(void)setCanvasTransform:(CGAffineTransform)arg1 layerTransform:(CGAffineTransform)arg2 ;
-(id)initWithZOrder:(double)arg1 delegate:(id)arg2 ;
-(id)buildHighlightsForSearchReferences:(id)arg1 contentsScaleForLayers:(double)arg2 ;
-(bool)shouldPulsate;
-(void)setShouldPulsate:(bool)arg1 ;
-(void)dealloc;
-(CGAffineTransform)transform;
-(void)setTransform:(CGAffineTransform)arg1 ;
-(void)startAnimating;
-(void)reset;
-(void)stop;
-(void)disconnect;
-(void)setViewScale:(double)arg1 ;
-(id)layers;
@end

