/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:56:07 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class ODDPointPropertySet, OADShapeProperties, OADTextBody;

@interface ODDPoint : NSObject {

	int mType;
	ODDPointPropertySet* mPropertySet;
	OADShapeProperties* mShapeProperties;
	OADTextBody* mText;

}
+(void)addConnectionToPoint:(id)arg1 order:(unsigned)arg2 array:(id*)arg3 ;
-(void)dealloc;
-(id)init;
-(void)setType:(int)arg1 ;
-(int)type;
-(id)text;
-(void)setText:(id)arg1 ;
-(id)shapeProperties;
-(id)propertySet;
@end

