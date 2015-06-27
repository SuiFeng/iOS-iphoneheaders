/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:32:39 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVKit/AVKit-Structs.h>
#import <AVKit/NSCopying.h>

@class UIImage, NSString;

@interface AVChapter : NSObject <NSCopying> {

	UIImage* _image;
	/*^block*/id _imageBlock;
	unsigned _number;
	NSString* _title;
	double _startTime;
	double _duration;

}

@property (readonly) double startTime;                   //@synthesize startTime=_startTime - In the implementation block
@property (readonly) double duration;                    //@synthesize duration=_duration - In the implementation block
@property (readonly) unsigned number;                    //@synthesize number=_number - In the implementation block
@property (copy,readonly) NSString * title;              //@synthesize title=_title - In the implementation block
@property (readonly) UIImage * image;                    //@synthesize image=_image - In the implementation block
+(id)playbackChapterWithStartTime:(double)arg1 duration:(double)arg2 number:(unsigned)arg3 title:(id)arg4 imageFaultBlock:(/*^block*/id)arg5 ;
+(id)chapterAtTime:(double)arg1 inChapters:(id)arg2 ;
+(void)initialize;
-(id)initWithStartTime:(double)arg1 duration:(double)arg2 number:(unsigned)arg3 title:(id)arg4 imageFaultBlock:(/*^block*/id)arg5 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(double)duration;
-(NSString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(UIImage *)image;
-(double)startTime;
-(unsigned)number;
@end
