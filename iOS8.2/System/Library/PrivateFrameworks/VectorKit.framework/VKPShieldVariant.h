/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:26:37 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <VectorKit/NSCopying.h>

@class NSString;

@interface VKPShieldVariant : PBCodable <NSCopying> {

	SCD_Struct_VK380 _textShadow;
	SCD_Struct_VK382* _layers;
	unsigned _layersCount;
	unsigned _layersSpace;
	SCD_Struct_VK383 _textStroke;
	SCD_Struct_VK378 _fontColor;
	SCD_Struct_VK65* _centerPoints;
	unsigned _atlasIndex;
	unsigned _backgroundColor;
	unsigned _borderColor;
	float _capWidthLeft;
	float _capWidthRight;
	float _centerOffsetX;
	NSString* _fontName;
	float _fontSize;
	unsigned _maxDigits;
	unsigned _minDigits;
	NSString* _nonDigitFontName;
	float _nonDigitFontSize;
	float _paddingLeft;
	float _paddingRight;
	unsigned _quadIndex;
	float _textBaseline;
	int _textMaskColor;
	SCD_Struct_VK384 _has;

}

@property (assign,nonatomic) char hasAtlasIndex; 
@property (assign,nonatomic) unsigned atlasIndex;                       //@synthesize atlasIndex=_atlasIndex - In the implementation block
@property (assign,nonatomic) char hasQuadIndex; 
@property (assign,nonatomic) unsigned quadIndex;                        //@synthesize quadIndex=_quadIndex - In the implementation block
@property (assign,nonatomic) char hasMinDigits; 
@property (assign,nonatomic) unsigned minDigits;                        //@synthesize minDigits=_minDigits - In the implementation block
@property (assign,nonatomic) char hasMaxDigits; 
@property (assign,nonatomic) unsigned maxDigits;                        //@synthesize maxDigits=_maxDigits - In the implementation block
@property (assign,nonatomic) char hasTextBaseline; 
@property (assign,nonatomic) float textBaseline;                        //@synthesize textBaseline=_textBaseline - In the implementation block
@property (assign,nonatomic) char hasCenterOffsetX; 
@property (assign,nonatomic) float centerOffsetX;                       //@synthesize centerOffsetX=_centerOffsetX - In the implementation block
@property (nonatomic,readonly) char hasFontName; 
@property (nonatomic,retain) NSString * fontName;                       //@synthesize fontName=_fontName - In the implementation block
@property (assign,nonatomic) char hasFontSize; 
@property (assign,nonatomic) float fontSize;                            //@synthesize fontSize=_fontSize - In the implementation block
@property (assign,nonatomic) char hasFontColor; 
@property (assign,nonatomic) SCD_Struct_VK378 fontColor;                //@synthesize fontColor=_fontColor - In the implementation block
@property (assign,nonatomic) char hasTextStroke; 
@property (assign,nonatomic) SCD_Struct_VK385 textStroke;               //@synthesize textStroke=_textStroke - In the implementation block
@property (assign,nonatomic) char hasTextShadow; 
@property (assign,nonatomic) SCD_Struct_VK386 textShadow;               //@synthesize textShadow=_textShadow - In the implementation block
@property (nonatomic,readonly) char hasNonDigitFontName; 
@property (nonatomic,retain) NSString * nonDigitFontName;               //@synthesize nonDigitFontName=_nonDigitFontName - In the implementation block
@property (assign,nonatomic) char hasNonDigitFontSize; 
@property (assign,nonatomic) float nonDigitFontSize;                    //@synthesize nonDigitFontSize=_nonDigitFontSize - In the implementation block
@property (nonatomic,readonly) unsigned centerPointsCount; 
@property (nonatomic,readonly) float* centerPoints; 
@property (nonatomic,readonly) unsigned layersCount; 
@property (nonatomic,readonly) SCD_Struct_VK382* layers; 
@property (assign,nonatomic) char hasBackgroundColor; 
@property (assign,nonatomic) unsigned backgroundColor;                  //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (assign,nonatomic) char hasBorderColor; 
@property (assign,nonatomic) unsigned borderColor;                      //@synthesize borderColor=_borderColor - In the implementation block
@property (assign,nonatomic) char hasCapWidthLeft; 
@property (assign,nonatomic) float capWidthLeft;                        //@synthesize capWidthLeft=_capWidthLeft - In the implementation block
@property (assign,nonatomic) char hasCapWidthRight; 
@property (assign,nonatomic) float capWidthRight;                       //@synthesize capWidthRight=_capWidthRight - In the implementation block
@property (assign,nonatomic) char hasPaddingLeft; 
@property (assign,nonatomic) float paddingLeft;                         //@synthesize paddingLeft=_paddingLeft - In the implementation block
@property (assign,nonatomic) char hasPaddingRight; 
@property (assign,nonatomic) float paddingRight;                        //@synthesize paddingRight=_paddingRight - In the implementation block
@property (assign,nonatomic) char hasTextMaskColor; 
@property (assign,nonatomic) int textMaskColor;                         //@synthesize textMaskColor=_textMaskColor - In the implementation block
-(void)dealloc;
-(void)setBackgroundColor:(unsigned)arg1 ;
-(unsigned)backgroundColor;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setBorderColor:(unsigned)arg1 ;
-(NSString *)fontName;
-(void)setFontSize:(float)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned)borderColor;
-(void)setFontName:(NSString *)arg1 ;
-(void)setPaddingLeft:(float)arg1 ;
-(float)paddingLeft;
-(float)paddingRight;
-(void)setPaddingRight:(float)arg1 ;
-(float)fontSize;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasPaddingLeft:(char)arg1 ;
-(char)hasPaddingLeft;
-(void)setHasPaddingRight:(char)arg1 ;
-(char)hasPaddingRight;
-(char)hasTextStroke;
-(SCD_Struct_VK385)textStroke;
-(char)hasTextShadow;
-(SCD_Struct_VK386)textShadow;
-(char)hasTextMaskColor;
-(int)textMaskColor;
-(Matrix<float, 4, 1>)_colorForMaskColor:(int)arg1 colors:(SCD_Struct_VK81*)arg2 ;
-(char)hasFontColor;
-(SCD_Struct_VK378)fontColor;
-(char)hasFontName;
-(char)hasNonDigitFontName;
-(char)hasNonDigitFontSize;
-(NSString *)nonDigitFontName;
-(float)nonDigitFontSize;
-(char)hasCapWidthLeft;
-(char)hasCapWidthRight;
-(float)capWidthLeft;
-(float)capWidthRight;
-(float)centerOffsetX;
-(float)textBaseline;
-(unsigned)centerPointsCount;
-(float)centerPointAtIndex:(unsigned)arg1 ;
-(unsigned)minDigits;
-(unsigned)maxDigits;
-(CGImageRef)newImageWithTextureAtlases:(id)arg1 atlasToImageCache:(id)arg2 contentScale:(float)arg3 colors:(SCD_Struct_VK81*)arg4 ;
-(unsigned)layersCount;
-(unsigned)atlasIndex;
-(unsigned)quadIndex;
-(SCD_Struct_VK382)layerAtIndex:(unsigned)arg1 ;
-(void)setAtlasIndex:(unsigned)arg1 ;
-(void)setQuadIndex:(unsigned)arg1 ;
-(void)setNonDigitFontName:(NSString *)arg1 ;
-(void)clearLayers;
-(void)clearCenterPoints;
-(void)addCenterPoint:(float)arg1 ;
-(void)addLayer:(SCD_Struct_VK382)arg1 ;
-(void)setHasAtlasIndex:(char)arg1 ;
-(char)hasAtlasIndex;
-(void)setHasQuadIndex:(char)arg1 ;
-(char)hasQuadIndex;
-(void)setMinDigits:(unsigned)arg1 ;
-(void)setHasMinDigits:(char)arg1 ;
-(char)hasMinDigits;
-(void)setMaxDigits:(unsigned)arg1 ;
-(void)setHasMaxDigits:(char)arg1 ;
-(char)hasMaxDigits;
-(void)setTextBaseline:(float)arg1 ;
-(void)setHasTextBaseline:(char)arg1 ;
-(char)hasTextBaseline;
-(void)setCenterOffsetX:(float)arg1 ;
-(void)setHasCenterOffsetX:(char)arg1 ;
-(char)hasCenterOffsetX;
-(void)setHasFontSize:(char)arg1 ;
-(char)hasFontSize;
-(void)setFontColor:(SCD_Struct_VK378)arg1 ;
-(void)setHasFontColor:(char)arg1 ;
-(void)setTextStroke:(SCD_Struct_VK385)arg1 ;
-(void)setHasTextStroke:(char)arg1 ;
-(void)setTextShadow:(SCD_Struct_VK386)arg1 ;
-(void)setHasTextShadow:(char)arg1 ;
-(void)setNonDigitFontSize:(float)arg1 ;
-(void)setHasNonDigitFontSize:(char)arg1 ;
-(float*)centerPoints;
-(void)setCenterPoints:(float*)arg1 count:(unsigned)arg2 ;
-(SCD_Struct_VK382*)layers;
-(void)setLayers:(SCD_Struct_VK382*)arg1 count:(unsigned)arg2 ;
-(void)setHasBackgroundColor:(char)arg1 ;
-(char)hasBackgroundColor;
-(void)setHasBorderColor:(char)arg1 ;
-(char)hasBorderColor;
-(void)setCapWidthLeft:(float)arg1 ;
-(void)setHasCapWidthLeft:(char)arg1 ;
-(void)setCapWidthRight:(float)arg1 ;
-(void)setHasCapWidthRight:(char)arg1 ;
-(void)setTextMaskColor:(int)arg1 ;
-(void)setHasTextMaskColor:(char)arg1 ;
@end

