/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:24:17 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class EDCollection, EDContentFormatsCollection, EDFontsCollection, EDStylesCollection, EDColorsCollection, EDLinksCollection, EDTableStylesCollection;

@interface EDResources : NSObject {

	EDCollection* mStrings;
	EDContentFormatsCollection* mContentFormats;
	EDFontsCollection* mFonts;
	EDCollection* mAlignmentInfos;
	EDStylesCollection* mStyles;
	EDColorsCollection* mColors;
	EDColorsCollection* mThemes;
	EDCollection* mNames;
	EDLinksCollection* mLinks;
	EDCollection* mBorders;
	EDCollection* mBorder;
	EDCollection* mFills;
	EDCollection* mDifferentialStyles;
	EDTableStylesCollection* mTableStyles;

}
-(void)setColors:(id)arg1 ;
-(void)setThemes:(id)arg1 ;
-(void)dealloc;
-(id)links;
-(id)strings;
-(id)colors;
-(id)names;
-(id)fonts;
-(id)borders;
-(id)fills;
-(id)contentFormats;
-(id)initWithStringOptimization:(BOOL)arg1 ;
-(id)differentialStyles;
-(id)alignmentInfos;
-(id)tableStyles;
-(id)themes;
-(id)styles;
-(id)border;
@end

