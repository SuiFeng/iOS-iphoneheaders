/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:00 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <WebCore/WAKView.h>

@class WebNodeHighlight, NSMutableArray;

@interface WebNodeHighlightView : WAKView {

	WebNodeHighlight* _webNodeHighlight;
	NSMutableArray* _layers;

}
-(void)_removeAllLayers;
-(void)dealloc;
-(bool)isFlipped;
-(void)layoutSublayers:(id)arg1 ;
-(id)initWithWebNodeHighlight:(id)arg1 ;
-(void)detachFromWebNodeHighlight;
-(void)_attach:(id)arg1 numLayers:(unsigned long long)arg2 ;
-(void)_layoutForNodeHighlight:(Highlight*)arg1 parent:(id)arg2 ;
-(void)_layoutForRectsHighlight:(Highlight*)arg1 parent:(id)arg2 ;
-(id)webNodeHighlight;
@end

