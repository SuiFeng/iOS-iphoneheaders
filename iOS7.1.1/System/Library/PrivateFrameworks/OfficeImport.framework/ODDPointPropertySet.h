/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:09 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSObject;

@interface ODDPointPropertySet : NSObject {

	NSString* mLayoutTypeId;
	NSString* mPresentationName;
	NSString* mPresentationStyleLabel;
	int mPresentationStyleIndex;
	int mPresentationStyleCount;
	NSObject* mPresentationAssociatedId;
	bool mCustomVerticalFlip;
	double mCustomScaleX;
	double mCustomScaleY;
	double mCustomOffsetX;
	double mCustomOffsetY;

}
-(void)dealloc;
-(id)layoutTypeId;
-(void)setPresentationName:(id)arg1 ;
-(id)presentationName;
-(id)presentationStyleLabel;
-(int)presentationStyleIndex;
-(double)customScaleX;
-(double)customScaleY;
-(double)customOffsetX;
-(double)customOffsetY;
-(void)setLayoutTypeId:(id)arg1 ;
-(void)setPresentationStyleLabel:(id)arg1 ;
-(void)setPresentationStyleIndex:(int)arg1 ;
-(int)presentationStyleCount;
-(void)setPresentationStyleCount:(int)arg1 ;
-(id)presentationAssociatedId;
-(void)setPresentationAssociatedId:(id)arg1 ;
-(bool)customVerticalFlip;
-(void)setCustomVerticalFlip:(bool)arg1 ;
-(void)setCustomScaleX:(double)arg1 ;
-(void)setCustomScaleY:(double)arg1 ;
-(void)setCustomOffsetX:(double)arg1 ;
-(void)setCustomOffsetY:(double)arg1 ;
@end

