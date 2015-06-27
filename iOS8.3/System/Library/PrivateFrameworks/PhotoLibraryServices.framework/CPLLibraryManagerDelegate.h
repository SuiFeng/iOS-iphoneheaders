/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:03:50 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol CPLLibraryManagerDelegate <NSObject>
@optional
-(void)libraryManagerDidChangeConfiguration:(id)arg1;
-(id)displayableName;

@required
-(void)libraryManagerStatusDidChange:(id)arg1;
-(void)libraryManagerDidStartSynchronization:(id)arg1;
-(void)libraryManagerHasChangesToPull:(id)arg1;

@end
