/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:53:49 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@interface UIActivityItemImageRep : NSObject {

	id _asset;
	/*^block*/ id _thumbnailProvider;
	/*^block*/ id _dataProvider;

}

@property (nonatomic,retain) id asset;                        //@synthesize asset=_asset - In the implementation block
@property (nonatomic,copy) id thumbnailProvider;              //@synthesize thumbnailProvider=_thumbnailProvider - In the implementation block
@property (nonatomic,copy) id dataProvider;                   //@synthesize dataProvider=_dataProvider - In the implementation block
+(id)activityItemImageRepWithAsset:(id)arg1 thumbnailProvider:(/*^block*/ id)arg2 dataProvider:(/*^block*/ id)arg3 ;
-(void)dealloc;
-(id)data;
-(void)setAsset:(id)arg1 ;
-(id)asset;
-(id)thumbnail;
-(void)setThumbnailProvider:(/*^block*/ id)arg1 ;
-(void)setDataProvider:(/*^block*/ id)arg1 ;
-(/*^block*/ id)thumbnailProvider;
-(/*^block*/ id)dataProvider;
@end

