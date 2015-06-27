/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:33:53 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SplashBoard/SplashBoard-Structs.h>
#import <SplashBoard/BSXPCCoding.h>

@class NSString, UIImage;

@interface XBLaunchImageInfo : NSObject <BSXPCCoding> {

	BOOL _isSnapshot;
	BOOL _isOpaque;
	BOOL _isDownscaled;
	long long _orientation;
	double _scale;
	NSString* _path;
	UIImage* _image;
	CGSize _size;

}

@property (assign,nonatomic) long long orientation;                 //@synthesize orientation=_orientation - In the implementation block
@property (assign,nonatomic) CGSize size;                           //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) double scale;                          //@synthesize scale=_scale - In the implementation block
@property (assign,nonatomic) BOOL isSnapshot;                       //@synthesize isSnapshot=_isSnapshot - In the implementation block
@property (assign,nonatomic) BOOL isOpaque;                         //@synthesize isOpaque=_isOpaque - In the implementation block
@property (nonatomic,retain) NSString * path;                       //@synthesize path=_path - In the implementation block
@property (nonatomic,retain) UIImage * image;                       //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) BOOL isDownscaled;                     //@synthesize isDownscaled=_isDownscaled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(CGSize)size;
-(void)setImage:(UIImage *)arg1 ;
-(NSString *)description;
-(long long)orientation;
-(double)scale;
-(NSString *)path;
-(UIImage *)image;
-(void)setSize:(CGSize)arg1 ;
-(BOOL)isOpaque;
-(void)setScale:(double)arg1 ;
-(void)setOrientation:(long long)arg1 ;
-(void)setPath:(NSString *)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(BOOL)isSnapshot;
-(void)setIsSnapshot:(BOOL)arg1 ;
-(void)setIsOpaque:(BOOL)arg1 ;
-(BOOL)isDownscaled;
-(void)setIsDownscaled:(BOOL)arg1 ;
@end
