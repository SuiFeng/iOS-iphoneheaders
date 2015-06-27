/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:38 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/QLPreviewItem.h>

@protocol CKFileTransfer;
@class NSURL, NSString, NSData, NSDictionary;

@interface CKMediaObject : NSObject <QLPreviewItem> {

	id<CKFileTransfer> _transfer;

}

@property (nonatomic,copy,readonly) NSURL * fileURL; 
@property (nonatomic,retain) id<CKFileTransfer> transfer;                           //@synthesize transfer=_transfer - In the implementation block
@property (nonatomic,copy,readonly) NSString * transferGUID; 
@property (nonatomic,copy,readonly) NSData * data; 
@property (nonatomic,copy,readonly) NSString * filename; 
@property (nonatomic,copy,readonly) NSDictionary * transcoderUserInfo; 
@property (nonatomic,copy,readonly) NSString * mimeType; 
@property (nonatomic,copy,readonly) NSString * UTIType; 
@property (nonatomic,readonly) int mediaType; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSURL * previewItemURL; 
@property (readonly) NSString * previewItemTitle; 
+(id)iconCache;
+(id)UTITypes;
+(id)fallbackFilenamePrefix;
+(id)attachmentSummary:(unsigned)arg1 ;
+(char)shouldScaleUpPreview;
+(char)isPreviewable;
+(Class)__ck_attachmentItemClass;
+(char)shouldShadePreview;
-(id)icon;
-(void)dealloc;
-(NSString *)description;
-(id)title;
-(NSData *)data;
-(id)subtitle;
-(id)location;
-(NSString *)mimeType;
-(NSURL *)previewItemURL;
-(NSURL *)fileURL;
-(NSString *)transferGUID;
-(NSString *)UTIType;
-(id)pasteboardItem;
-(void)export:(id)arg1 ;
-(id)previewForWidth:(float)arg1 orientation:(char)arg2 ;
-(Class)balloonViewClassForWidth:(float)arg1 orientation:(char)arg2 ;
-(id)composeImages;
-(id<CKFileTransfer>)transfer;
-(char)shouldShowViewer;
-(char)canExport;
-(char)shouldBeQuickLooked;
-(void)setTransfer:(id<CKFileTransfer>)arg1 ;
-(NSDictionary *)transcoderUserInfo;
-(id)initWithTransfer:(id)arg1 ;
-(id)generateThumbnailFillToSize:(CGSize)arg1 contentAlignmentInsets:(UIEdgeInsets)arg2 ;
-(char)isPreviewable;
-(CGSize)bbSize;
-(id)generateThumbnailForWidth:(float)arg1 orientation:(char)arg2 ;
-(Class)coloredBalloonViewClass;
-(id)previewCacheKeyWithOrientation:(char)arg1 ;
-(id)previewDispatchCache;
-(id)previewCachesFileURLWithOrientation:(char)arg1 extension:(id)arg2 ;
-(id)savedPreviewFromURL:(id)arg1 forOrientation:(char)arg2 ;
-(id)generatePreviewFromThumbnail:(id)arg1 width:(float)arg2 orientation:(char)arg3 ;
-(void)savePreview:(id)arg1 toURL:(id)arg2 forOrientation:(char)arg3 ;
-(Class)previewBalloonViewClass;
-(id)bbPreviewFillToSize:(CGSize)arg1 ;
-(char)shouldShowDisclosure;
-(id)fileSizeString;
-(id)downloadProgressImage;
-(id)downloadProgressString;
-(void)_sampleImageEdges:(id)arg1 usingRect:(CGRect)arg2 forMostlyWhitePixels:(unsigned*)arg3 otherPixels:(unsigned*)arg4 ;
-(id)JPEGDataFromImage:(id)arg1 ;
-(NSString *)filename;
-(id)fileManager;
-(int)mediaType;
@end
