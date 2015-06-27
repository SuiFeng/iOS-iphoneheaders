/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:00 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class GQDRoot;

@interface GQDSStylesheet : NSObject {

	GQDRoot* mRoot;
	GQDSStylesheet* mParent;
	CFDictionaryRef mIdentifiedStyles;
	CFArrayRef mStylesNeedingParentResolutionInParent;
	CFArrayRef mStylesNeedingParentResolution;

}
-(char)addStyle:(id)arg1 withOwnedXmlUid:(char*)arg2 ;
-(id)styleWithIdentifier:(const char*)arg1 ;
-(id)initWithRoot:(id)arg1 ;
-(void)addStyle:(id)arg1 withOwnedIdentifier:(char*)arg2 ;
-(id)styleWithXmlUid:(const char*)arg1 ;
-(void)addStyle:(id)arg1 needingParentResolution:(const char*)arg2 resolveInParent:(char)arg3 ;
-(void)resolveStyleParents;
-(CFArrayRef)retainedArrayOfIdentifiedStyles;
-(void)dealloc;
-(id)parent;
@end
