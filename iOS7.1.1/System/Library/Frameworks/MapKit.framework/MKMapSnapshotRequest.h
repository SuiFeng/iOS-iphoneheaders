/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:22 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <MapKit/MapKit-Structs.h>
@class UIImage, NSString, MKMapSnapshotCreator, VKMapSnapshotCreator;

@interface MKMapSnapshotRequest : NSObject {

	id _requester;
	id _context;
	SCD_Struct_MK1 _coordinate;
	unsigned long long _zoomLevel;
	CGSize _size;
	UIImage* _image;
	NSString* _attributionString;
	MKMapSnapshotCreator* _delegate;
	VKMapSnapshotCreator* _snapshotCreator;

}

@property (nonatomic,retain) id context;                                          //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) id requester;                                        //@synthesize requester=_requester - In the implementation block
@property (nonatomic,retain) NSString * attributionString;                        //@synthesize attributionString=_attributionString - In the implementation block
@property (assign,nonatomic) SCD_Struct_MK1 coordinate;                           //@synthesize coordinate=_coordinate - In the implementation block
@property (assign,nonatomic) unsigned long long zoomLevel;                        //@synthesize zoomLevel=_zoomLevel - In the implementation block
@property (assign,nonatomic) CGSize size;                                         //@synthesize size=_size - In the implementation block
@property (assign,nonatomic,__weak) MKMapSnapshotCreator * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UIImage * image;                                   //@synthesize image=_image - In the implementation block
-(id)attributionString;
-(void)setAttributionString:(id)arg1 ;
-(CGSize)size;
-(void)setDelegate:(id)arg1 ;
-(id)description;
-(id)delegate;
-(id)image;
-(void)setSize:(CGSize)arg1 ;
-(id)context;
-(void)setContext:(id)arg1 ;
-(void)cancel;
-(void)start;
-(void).cxx_destruct;
-(id)requester;
-(void)setRequester:(id)arg1 ;
-(SCD_Struct_MK1)coordinate;
-(unsigned long long)zoomLevel;
-(void)setCoordinate:(SCD_Struct_MK1)arg1 ;
-(void)setZoomLevel:(unsigned long long)arg1 ;
@end
