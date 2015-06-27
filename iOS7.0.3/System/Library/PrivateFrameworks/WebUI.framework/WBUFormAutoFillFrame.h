/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:58:34 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <WebUI/WebUI-Structs.h>
#import <WebUI/WBSFormAutoFillFrame.h>

@class WebFrame;

@interface WBUFormAutoFillFrame : NSObject <WBSFormAutoFillFrame> {

	WebFrame* _webFrame;

}

@property (nonatomic,readonly) WebFrame * webFrame;              //@synthesize webFrame=_webFrame - In the implementation block
+(id)autoFillFrameWithWebFrame:(id)arg1 ;
-(void)dealloc;
-(id)webFrame;
-(id)initWithWebFrame:(id)arg1 ;
-(OpaqueFormAutoFillFrameRef)frameRef;
-(OpaqueJSContextRef)jsContextForMetadataControllerScriptWorld;
-(OpaqueJSValueRef)jsWrapperInMetadataControllerScriptWorldForNode:(id)arg1 ;
-(id)committedURL;
-(void)enumerateChildFramesUsingBlock:(/*^block*/ id)arg1 ;
-(BOOL)containsAnyFormElements;
@end
