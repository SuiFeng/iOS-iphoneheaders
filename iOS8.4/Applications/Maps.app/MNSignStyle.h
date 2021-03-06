/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:39 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Maps/Maps-Structs.h>
@class NSString, UIColor, UIImage;

@interface MNSignStyle : NSObject

@property (nonatomic,readonly) NSString * distanceFontName; 
@property (nonatomic,readonly) NSString * majorInstructionFontName; 
@property (nonatomic,readonly) NSString * instructionsFontName; 
@property (nonatomic,readonly) char capitalizeInstructions; 
@property (nonatomic,readonly) NSString * recalculatingFontName; 
@property (nonatomic,readonly) UIColor * backgroundColor; 
@property (nonatomic,readonly) UIColor * foregroundColor; 
@property (nonatomic,readonly) UIColor * bannerTextColor; 
@property (nonatomic,readonly) UIColor * accentColor; 
@property (nonatomic,readonly) UIColor * dividerColor; 
@property (nonatomic,readonly) UIColor * lockscreenForegroundColor; 
@property (nonatomic,readonly) UIColor * lockscreenDividerColor; 
@property (nonatomic,readonly) int desiredFraming; 
@property (nonatomic,readonly) UIImage * squareSignImage; 
@property (nonatomic,readonly) float secondarySignWidthScale; 
@property (nonatomic,readonly) float secondarySignYOverlapAmount; 
@property (nonatomic,readonly) float secondarySignLeftContentInset; 
@property (nonatomic,readonly) float secondarySignRightContentInset; 
@property (nonatomic,readonly) float secondarySignManeuverAreaWidth; 
@property (nonatomic,readonly) float secondarySignManeuverAreaMargin; 
@property (nonatomic,readonly) float secondarySignShieldAreaMargin; 
@property (nonatomic,readonly) float secondarySignTopBorderHeight; 
@property (nonatomic,readonly) float secondarySignBottomBorderHeight; 
+(SCD_Struct_MN5)arrowMetricsForStyle:(int)arg1 scaledToMatchReferenceSize:(CGSize)arg2 forView:(id)arg3 ;
+(id)sharedSignStyle;
+(SCD_Struct_MN5)arrowMetricsForStyle:(int)arg1 ;
+(SCD_Struct_MN5)_defaultArrowMetricsForStyle:(int)arg1 ;
+(SCD_Struct_MN5)_arrowMetricsByApplyingScale:(float)arg1 toMetrics:(SCD_Struct_MN5)arg2 forView:(id)arg3 ;
-(int)desiredFraming;
-(char)wantCentering;
-(char)wantBlur;
-(float)topMarginForVariant:(int)arg1 isCombinedSign:(char)arg2 ;
-(UIColor *)accentColor;
-(float)maximumWidthForVariant:(int)arg1 forScreenWidth:(float)arg2 ;
-(NSString *)instructionsFontName;
-(float)instructionsFontSizeForVariant:(int)arg1 ;
-(UIColor *)lockscreenForegroundColor;
-(NSString *)distanceFontName;
-(float)distanceFontSizeForVariant:(int)arg1 ;
-(float)distanceNumericFontSizeForVariant:(int)arg1 ;
-(UIColor *)lockscreenDividerColor;
-(float)reroutingOnlyLabelYOffsetForVariant:(int)arg1 ;
-(float)instructionsLabelYOffsetForVariant:(int)arg1 ;
-(float)labelBottomMarginForVariant:(int)arg1 ;
-(float)reroutingLabelHeightForVariant:(int)arg1 ;
-(id)borderImageForSize:(CGSize)arg1 ;
-(UIEdgeInsets)borderInsetsForSize:(CGSize)arg1 ;
-(float)internalMargin;
-(float)maneuverAreaWidthForVariant:(int)arg1 ;
-(float)distanceLabelHeightForVariant:(int)arg1 ;
-(float)distanceLabelYOffsetForVariant:(int)arg1 ;
-(NSString *)recalculatingFontName;
-(float)recalculatingFontSizeForVariant:(int)arg1 ;
-(float)absentSideAreaWidth;
-(float)shieldAreaWidthForVariant:(int)arg1 ;
-(float)shieldAreaMargin;
-(float)minimumWidthForVariant:(int)arg1 ;
-(char)capitalizeInstructions;
-(float)secondarySignWidthScale;
-(float)secondarySignHeightForVariant:(int)arg1 ;
-(float)secondarySignYOverlapAmount;
-(float)secondarySignManeuverAreaWidth;
-(float)secondarySignTopBorderHeight;
-(float)secondarySignBottomBorderHeight;
-(float)secondarySignManeuverAreaMargin;
-(id)dimmedForegroundColor;
-(UIImage *)squareSignImage;
-(id)innerBackgroundImageForSize:(CGSize)arg1 ;
-(float)innerBorderRadiusForSize:(CGSize)arg1 ;
-(id)outerBackgroundImageForSize:(CGSize)arg1 ;
-(float)outerBorderRadiusForSize:(CGSize)arg1 ;
-(UIColor *)bannerTextColor;
-(NSString *)majorInstructionFontName;
-(float)majorInstructionFontSizeForVariant:(int)arg1 ;
-(float)sideMarginForVariant:(int)arg1 ;
-(float)secondarySignLeftContentInset;
-(float)secondarySignRightContentInset;
-(float)secondarySignManeuverAreaWidthForVariant:(int)arg1 ;
-(float)secondarySignShieldAreaMargin;
-(UIColor *)backgroundColor;
-(UIColor *)foregroundColor;
-(UIColor *)dividerColor;
-(char)isDimmed;
@end

