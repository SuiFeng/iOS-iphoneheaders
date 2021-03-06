/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:53 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray, NSMutableDictionary, CIBurstYUVImage;

@interface CIBurstThumbnailCluster : NSObject {

	NSMutableArray* burstImages;
	NSMutableDictionary* imageProps;
	CIBurstYUVImage* image;
	/*^block*/ id completionBlock;

}

@property (assign) NSMutableArray * burstImages; 
@property (assign) NSMutableDictionary * imageProps; 
@property (assign) CIBurstYUVImage * image; 
@property (assign) id completionBlock; 
-(id)burstImages;
-(void)setImageProps:(id)arg1 ;
-(void)releaseImage;
-(id)initWithImageData:(id)arg1 dict:(id)arg2 identifier:(id)arg3 imageProps:(id)arg4 completionBlock:(/*^block*/ id)arg5 ;
-(void)addItemsFromCluster:(id)arg1 ;
-(float)computeMergeCost:(id)arg1 :(int*)arg2 :(int)arg3 ;
-(void)setBurstImages:(id)arg1 ;
-(id)imageProps;
-(void)dealloc;
-(void)setImage:(id)arg1 ;
-(id)init;
-(id)image;
-(void)setCompletionBlock:(/*^block*/ id)arg1 ;
-(/*^block*/ id)completionBlock;
@end

