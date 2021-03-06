/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:00:28 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <MobileSafari/MobileSafari-Structs.h>
#import <UIKit/UITableViewCellLayoutManager.h>

@class NSCache;

@interface ReadingListTableViewCellLayoutManager : UITableViewCellLayoutManager {

	NSCache* _textLabelSizeCache;
	NSCache* _detailLabelSizeCache;
	NSCache* _siteNameLabelSizeCache;

}
+(id)sharedManager;
-(id)_detailLabelFont;
-(id)_titleLabelFont;
-(id)_labelForLayoutMetricsWithFont:(id)arg1 numberOfLines:(int)arg2 ;
-(id)_siteNameFont;
-(void)_getTitleLabelOffsetY:(float*)arg1 domainLabelOffsetY:(float*)arg2 detailLabelOffsetY:(float*)arg3 ;
-(CGSize)_sizeForLabel:(id)arg1 maxSize:(CGSize)arg2 usingCache:(id)arg3 ;
-(id)init;
-(void)layoutSubviewsOfCell:(id)arg1 ;
-(id)textLabelForCell:(id)arg1 ;
-(id)detailTextLabelForCell:(id)arg1 ;
-(CGRect)textRectForCell:(id)arg1 ;
@end

