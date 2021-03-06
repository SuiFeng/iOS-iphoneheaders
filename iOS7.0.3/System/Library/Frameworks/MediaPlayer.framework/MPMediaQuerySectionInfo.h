/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:52:50 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <CoreFoundation/NSCopying.h>
#import <CoreFoundation/NSMutableCopying.h>
#import <CoreFoundation/NSSecureCoding.h>

@class NSArray;

@interface MPMediaQuerySectionInfo : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {

	NSArray* _sections;
	NSArray* _sectionIndexTitles;

}

@property (nonatomic,readonly) NSArray * sections;                    //@synthesize sections=_sections - In the implementation block
@property (nonatomic,copy) NSArray * sectionIndexTitles;              //@synthesize sectionIndexTitles=_sectionIndexTitles - In the implementation block
@property (nonatomic,readonly) unsigned count; 
+(BOOL)supportsSecureCoding;
-(void)setSectionIndexTitles:(id)arg1 ;
-(unsigned)indexOfSectionForSectionIndexTitleAtIndex:(unsigned)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned)count;
-(id)description;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)sectionIndexTitles;
-(id)mutableCopyWithZone:(NSZoneRef)arg1 ;
-(id)sections;
-(void).cxx_destruct;
@end

