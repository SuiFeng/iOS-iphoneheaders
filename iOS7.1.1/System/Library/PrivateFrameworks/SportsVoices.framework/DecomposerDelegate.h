/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:07 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/SportsVoices.framework/SportsVoices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SportsVoices/DecomposerDelegateProtocol.h>

@class NSDictionary;

@interface DecomposerDelegate : NSObject <DecomposerDelegateProtocol> {

	NSDictionary* _overridesForWhole;
	NSDictionary* _overridesForParts;

}
-(id)decomposer:(id)arg1 decompositionOf:(id)arg2 isSubsetOfWhole:(bool)arg3 ;
-(id)initWithWholeOverrides:(id)arg1 partOverrides:(id)arg2 ;
-(void)dealloc;
@end
