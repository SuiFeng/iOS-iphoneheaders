/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:31:20 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class AVAssetInspectorLoader, NSURL, NSArray, AVAssetResourceLoader, NSObject, AVAssetCache;

@interface AVURLAssetInternal : NSObject {

	AVAssetInspectorLoader* loader;
	NSURL* URL;
	NSArray* tracks;
	AVAssetResourceLoader* resourceLoader;
	long makeOneResourceLoaderOnly;
	NSObject*<OS_dispatch_queue> tracksAccessQueue;
	AVAssetCache* assetCache;
	char shouldMatchDataInCacheByURLPathComponentOnly;
	char shouldMatchDataInCacheByURLWithoutQueryComponent;
	char shouldOptimizeAccessForLinearMoviePlayback;
	NSURL* downloadDestinationURL;
	unsigned referenceRestrictions;

}
@end

