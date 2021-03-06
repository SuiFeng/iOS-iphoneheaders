/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:21:19 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudDocs/BROperation.h>

@class CKShare;

@interface BRShareSaveOperation : BROperation {

	CKShare* _share;
	/*^block*/id _shareSaveCompletionBlock;

}

@property (copy) id shareSaveCompletionBlock;              //@synthesize shareSaveCompletionBlock=_shareSaveCompletionBlock - In the implementation block
@property (nonatomic,retain) CKShare * share;              //@synthesize share=_share - In the implementation block
-(void)dealloc;
-(void)main;
-(id)shareSaveCompletionBlock;
-(void)setShareSaveCompletionBlock:(id)arg1 ;
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
-(void)setShare:(CKShare *)arg1 ;
-(CKShare *)share;
-(id)initWithShare:(id)arg1 ;
@end

