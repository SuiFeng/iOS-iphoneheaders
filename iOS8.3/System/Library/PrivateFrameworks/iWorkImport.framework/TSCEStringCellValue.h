/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:42:07 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCECellValue.h>

@interface TSCEStringCellValue : TSCECellValue {

	TSCEStringValue* mStringValue;

}
-(void)encodeToArchive:(StringCellValueArchive*)arg1 ;
-(id)initWithStringValue:(TSCEStringValue*)arg1 locale:(id)arg2 ;
-(char)isEqualToCellValue:(id)arg1 ;
-(id)initWithArchive:(const StringCellValueArchive*)arg1 locale:(id)arg2 ;
-(id)initWithString:(id)arg1 locale:(id)arg2 ;
-(void)dealloc;
-(id)displayString;
-(id)copyWithZone:(NSZone*)arg1 ;
-(TSCEStringValue*)stringValue;
-(SCD_Struct_TS66)formatStruct;
@end

