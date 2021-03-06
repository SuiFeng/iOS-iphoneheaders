/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:38 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
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
-(void)dealloc;
-(void)setColors:(id)arg1 ;
-(id)links;
-(id)strings;
-(id)colors;
-(id)names;
-(id)fonts;
-(id)borders;
-(id)fills;
-(id)contentFormats;
-(id)initWithStringOptimization:(BOOL)arg1 ;
-(id)themes;
-(id)differentialStyles;
-(id)alignmentInfos;
-(id)tableStyles;
-(void)setThemes:(id)arg1 ;
-(id)styles;
-(id)border;
@end

