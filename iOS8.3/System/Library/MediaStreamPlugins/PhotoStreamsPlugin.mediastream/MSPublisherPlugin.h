/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 11:31:12 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/MediaStreamPlugins/PhotoStreamsPlugin.mediastream/PhotoStreamsPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MSPublisherPlugin <MSPublisherDelegate>
@optional
-(void)publisherWillAssignPluginAsDelegateOfPublisher:(id)arg1;
-(void)publisherWillDeassignPluginAsDelegateOfPublisher:(id)arg1;

@required
+(id)publisherPluginForPersonID:(id)arg1;

@end
