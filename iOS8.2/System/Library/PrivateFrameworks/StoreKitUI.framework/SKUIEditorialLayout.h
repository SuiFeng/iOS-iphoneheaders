/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:10 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class SKUIEditorialComponent, SKUILayoutCache;

@interface SKUIEditorialLayout : NSObject {

	SKUIEditorialComponent* _editorial;
	int _landscapeLinkLayoutIndex;
	int _landscapeTextLayoutIndex;
	int _landscapeTitleLayoutIndex;
	float _landscapeWidth;
	int _portraitLinkLayoutIndex;
	int _portraitTextLayoutIndex;
	int _portraitTitleLayoutIndex;
	float _portraitWidth;
	SKUILayoutCache* _textLayoutCache;

}

@property (nonatomic,readonly) SKUIEditorialComponent * editorialComponent;              //@synthesize editorial=_editorial - In the implementation block
-(void)enqueueLayoutRequests;
-(id)initWithEditorial:(id)arg1 layoutCache:(id)arg2 ;
-(void)setLayoutWidth:(float)arg1 forOrientation:(int)arg2 ;
-(id)bodyTextLayoutForOrientation:(int)arg1 ;
-(float)layoutHeightForOrientation:(int)arg1 expanded:(char)arg2 ;
-(id)titleTextLayoutForOrientation:(int)arg1 ;
-(id)linkLayoutForOrientation:(int)arg1 ;
-(id)_bodyTextLayoutRequestWithTotalWidth:(float)arg1 ;
-(id)_titleTextLayoutRequestWithTotalWidth:(float)arg1 ;
-(id)_linkLayoutRequestWithTotalWidth:(float)arg1 ;
-(SKUIEditorialComponent *)editorialComponent;
@end
