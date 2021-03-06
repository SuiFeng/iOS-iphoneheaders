/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:55 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSArray, SALocalSearchBusiness2;

@interface SAMovieMovieTheaterShowtimes : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSArray * movieShowtimes; 
@property (nonatomic,copy) NSArray * showtimes; 
@property (nonatomic,retain) SALocalSearchBusiness2 * theater; 
+(id)movieTheaterShowtimes;
+(id)movieTheaterShowtimesWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(id)movieShowtimes;
-(void)setMovieShowtimes:(id)arg1 ;
-(id)showtimes;
-(void)setShowtimes:(id)arg1 ;
-(id)theater;
-(void)setTheater:(id)arg1 ;
@end

