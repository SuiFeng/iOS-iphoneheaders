/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:05 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SplashBoard/SplashBoard-Structs.h>
#import <SplashBoard/BSXPCCoding.h>

@class NSString, UIImage;

@interface XBLaunchImageInfo : NSObject <BSXPCCoding> {

	char _isSnapshot;
	char _isOpaque;
	char _isDownscaled;
	int _orientation;
	float _scale;
	NSString* _path;
	UIImage* _image;
	CGSize _size;

}

@property (assign,nonatomic) int orientation;                       //@synthesize orientation=_orientation - In the implementation block
@property (assign,nonatomic) CGSize size;                           //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) float scale;                           //@synthesize scale=_scale - In the implementation block
@property (assign,nonatomic) char isSnapshot;                       //@synthesize isSnapshot=_isSnapshot - In the implementation block
@property (assign,nonatomic) char isOpaque;                         //@synthesize isOpaque=_isOpaque - In the implementation block
@property (nonatomic,retain) NSString * path;                       //@synthesize path=_path - In the implementation block
@property (nonatomic,retain) UIImage * image;                       //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) char isDownscaled;                     //@synthesize isDownscaled=_isDownscaled - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(CGSize)size;
-(void)setImage:(UIImage *)arg1 ;
-(NSString *)description;
-(int)orientation;
-(float)scale;
-(NSString *)path;
-(UIImage *)image;
-(void)setSize:(CGSize)arg1 ;
-(char)isOpaque;
-(void)setScale:(float)arg1 ;
-(void)setOrientation:(int)arg1 ;
-(void)setPath:(NSString *)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(char)isSnapshot;
-(void)setIsSnapshot:(char)arg1 ;
-(void)setIsOpaque:(char)arg1 ;
-(char)isDownscaled;
-(void)setIsDownscaled:(char)arg1 ;
@end

