/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:19 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@interface TSWPCTTypesetterCache : NSObject {

	map<unsigned int, boost::shared_ptr<TSWPParagraphTypesetter>, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, boost::shared_ptr<TSWPParagraphTypesetter> > > >* _typesetters;

}
-(void)removeTypesetterForParagraphIndex:(unsigned)arg1 ;
-(shared_ptr<TSWPParagraphTypesetter>*)cachedTypesetterForParagraphIdentifier:(unsigned)arg1 ;
-(void)addTypesetterForParagraphIdentifier:(unsigned)arg1 typesetter:(shared_ptr<TSWPParagraphTypesetter>*)arg2 ;
-(void)p_limitCacheSize:(unsigned)arg1 ;
-(void)dealloc;
-(void)clearCache;
@end
