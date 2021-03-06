/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:39 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface QLDisplayBundleLoader : NSObject {

	NSMutableDictionary* _displayBundlesById;

}
+(id)sharedLoader;
-(void)_lookForDisplayBundles;
-(Class)loadDisplayBundle:(id)arg1 ;
-(Class)displayBundleClassForDocumentType:(id)arg1 ;
-(id)copyDisplayBundleWithPreviewItem:(id)arg1 displayBundleIdentifier:(id)arg2 ;
-(void)dealloc;
-(id)init;
@end

