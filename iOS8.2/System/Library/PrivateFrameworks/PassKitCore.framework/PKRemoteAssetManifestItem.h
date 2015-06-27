/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:42 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PassKitCore/NSSecureCoding.h>

@class NSURL, NSString, NSNumber;

@interface PKRemoteAssetManifestItem : NSObject <NSSecureCoding> {

	NSURL* _localURL;
	NSURL* _remoteURL;
	NSURL* _passURL;
	NSString* _sha1Hex;
	NSNumber* _size;

}

@property (nonatomic,copy) NSURL * localURL;                              //@synthesize localURL=_localURL - In the implementation block
@property (nonatomic,copy) NSURL * remoteURL;                             //@synthesize remoteURL=_remoteURL - In the implementation block
@property (nonatomic,copy) NSURL * passURL;                               //@synthesize passURL=_passURL - In the implementation block
@property (nonatomic,copy) NSString * sha1Hex;                            //@synthesize sha1Hex=_sha1Hex - In the implementation block
@property (nonatomic,copy) NSNumber * size;                               //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) NSString * relativeLocalPath; 
+(char)supportsSecureCoding;
+(id)itemWithLocalURL:(id)arg1 passURL:(id)arg2 dictionary:(id)arg3 error:(id*)arg4 ;
-(void)setLocalURL:(NSURL *)arg1 ;
-(void)dealloc;
-(NSNumber *)size;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setSize:(NSNumber *)arg1 ;
-(NSURL *)localURL;
-(NSString *)sha1Hex;
-(void)setPassURL:(NSURL *)arg1 ;
-(NSString *)relativeLocalPath;
-(NSURL *)remoteURL;
-(void)setRemoteURL:(NSURL *)arg1 ;
-(void)setSha1Hex:(NSString *)arg1 ;
-(id)initWithLocalURL:(id)arg1 passURL:(id)arg2 dictionary:(id)arg3 error:(id*)arg4 ;
-(NSURL *)passURL;
@end
