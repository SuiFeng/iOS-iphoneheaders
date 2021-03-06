/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 12:56:08 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWNodeFileWriterStatusDelegate.h>
#import <Celestial/BWStillImageCaptureStatusDelegate.h>
#import <Celestial/BWRemoteQueueSinkNodeDelegate.h>
#import <Celestial/BWNodeRenderDelegate.h>
#import <Celestial/BWImageQueueSinkNodePreviewTapDelegate.h>
#import <Celestial/BWGraphStatusDelegate.h>
#import <Celestial/BWSourceNodeErrorDelegate.h>

@class NSString;

@interface BWFigCaptureSession : NSObject <BWNodeFileWriterStatusDelegate, BWStillImageCaptureStatusDelegate, BWRemoteQueueSinkNodeDelegate, BWNodeRenderDelegate, BWImageQueueSinkNodePreviewTapDelegate, BWGraphStatusDelegate, BWSourceNodeErrorDelegate> {

	OpaqueFigCaptureSessionRef _captureSession;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)fileWriter:(id)arg1 startedRecordingForSettingsID:(unsigned long long)arg2 ;
-(void)fileWriter:(id)arg1 pausedRecordingForSettingsID:(unsigned long long)arg2 ;
-(void)fileWriter:(id)arg1 resumedRecordingForSettingsID:(unsigned long long)arg2 ;
-(void)fileWriter:(id)arg1 stoppedRecordingForSettingsID:(unsigned long long)arg2 withError:(long)arg3 thumbnailSurface:(IOSurfaceRef)arg4 ;
-(void)node:(id)arg1 format:(id)arg2 didBecomeLiveForOutput:(id)arg3 ;
-(void)stillImageCoordinator:(id)arg1 willCapturePhotoForSettingsID:(unsigned long long)arg2 sisActive:(char)arg3 ;
-(void)stillImageCoordinator:(id)arg1 didCapturePhotoForSettingsID:(unsigned long long)arg2 ;
-(void)stillImageCoordinator:(id)arg1 willPrepareStillImageBracketWithSettings:(id)arg2 clientInitiated:(char)arg3 ;
-(void)remoteQueueSinkNode:(id)arg1 queueBecameReady:(remoteQueueSenderOpaqueRef)arg2 ;
-(void)node:(id)arg1 format:(id)arg2 didBecomeLiveForInput:(id)arg3 ;
-(void)node:(id)arg1 willRenderSampleBuffer:(opaqueCMSampleBufferRef)arg2 forInput:(id)arg3 ;
-(void)imageQueueSinkNode:(id)arg1 didEnqueuePreviewSampleBuffer:(opaqueCMSampleBufferRef)arg2 ;
-(void)graph:(id)arg1 didFinishStartingWithError:(long)arg2 ;
-(void)sourceNode:(id)arg1 didEncounterError:(long)arg2 ;
-(id)initWithFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
@end

