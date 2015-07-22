/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:27:21 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <iWorkImport/iWorkImport-Structs.h>
@class TSPObjectContext, NSObject, NSMutableOrderedSet, NSMutableDictionary;

@interface TSPDescriptionGenerator : NSObject {

	TSPObjectContext* _context;
	unsigned long long _options;
	NSObject*<OS_dispatch_queue> _accessQueue;
	NSMutableOrderedSet* _components;
	map<long long, TSP::DescriptionPrinterMessage, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, TSP::DescriptionPrinterMessage> > >* _messageMap;
	NSMutableDictionary* _objects;
	NSMutableDictionary* _uuidMap;
	NSMutableDictionary* _inverseUUIDMap;
	NSMutableDictionary* _dataMap;

}
+(BOOL)dumpMessagesForDocument:(id)arg1 decryptionKey:(id)arg2 toURL:(id)arg3 ;
+(id)directoryForDocumentUUID:(id)arg1 versionUUID:(id)arg2 ;
+(id)filenameForPackageIdentifier:(unsigned char)arg1 ;
-(hash_map<const long long, bool, TSP::IdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, bool> > >*)_strongReferencesFromArchiver:(id)arg1 ;
-(map<unsigned long long, std::__1::tuple<std::__1::shared_ptr<google::protobuf::Message>, std::__1::shared_ptr<__gnu_cxx::hash_map<const TSP::FieldPath, TSP::FieldInfo_Rule, TSP::FieldPathHash, TSP::FieldPathEqualTo, std::__1::allocator<std::__1::pair<const TSP::FieldPath, TSP::FieldInfo_Rule> > > >, std::__1::shared_ptr<__gnu_cxx::hash_map<const long long, bool, TSP::IdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, bool> > > > >, std::__1::less<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, std::__1::tuple<std::__1::shared_ptr<google::protobuf::Message>, std::__1::shared_ptr<__gnu_cxx::hash_map<const TSP::FieldPath, TSP::FieldInfo_Rule, TSP::FieldPathHash, TSP::FieldPathEqualTo, std::__1::allocator<std::__1::pair<const TSP::FieldPath, TSP::FieldInfo_Rule> > > >, std::__1::shared_ptr<__gnu_cxx::hash_map<const long long, bool, TSP::IdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, bool> > > > > > > >*)_messageAlternateMapFromAlternateArchivers:(id)arg1 ;
-(void)processPackageMetadataMessage:(shared_ptr<google::protobuf::Message>*)arg1 ;
-(/*^block*/id)newObjectIdentifierForUUIDHandler;
-(/*^block*/id)newPrinterCustomPropertiesHandler;
-(/*^block*/id)newDataDigestHandler;
-(BOOL)dumpMessagesToFilePath:(id)arg1 ;
-(ReferencePrinter*)newReferencePrinter;
-(BOOL)dumpComponentMessages:(id)arg1 printNewLine:(BOOL)arg2 withPrinter:(ReferencePrinter*)arg3 outputStream:(FileOutputStream*)arg4 ;
-(void)performPrintOperationBlock:(/*^block*/id)arg1 ;
-(void)addUUIDMapEntriesForComponent:(id)arg1 ;
-(void)addMessage:(const Message*)arg1 withStrongReferencesMap:(hash_map<const long long, bool, TSP::IdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, bool> > >*)arg2 forObjectIdentifier:(long long)arg3 ;
-(void)addArchiver:(id)arg1 ;
-(BOOL)dumpMessagesForDocumentUUID:(id)arg1 versionUUID:(id)arg2 packageIdentifier:(unsigned char)arg3 ;
-(id)descriptionForIdentifier:(long long)arg1 ;
-(id)initWithContext:(id)arg1 options:(unsigned long long)arg2 ;
-(id)init;
-(void)addObject:(id)arg1 ;
-(void)addComponent:(id)arg1 ;
@end
