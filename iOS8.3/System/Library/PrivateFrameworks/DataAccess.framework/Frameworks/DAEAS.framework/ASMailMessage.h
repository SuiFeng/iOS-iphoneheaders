/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:24:19 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DataAccess/DAMailMessage.h>

@class ASEmailItem;

@interface ASMailMessage : DAMailMessage {

	ASEmailItem* _ASEmailItem;

}
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)date;
-(id)body;
-(id)attachments;
-(id)subject;
-(id)messageClass;
-(id)from;
-(int)importance;
-(int)bodyTruncated;
-(id)initWithASEmailItem:(id)arg1 ;
-(id)replyTo;
-(id)displayTo;
-(id)threadTopic;
-(id)conversationIndex;
-(id)to;
-(id)remoteID;
-(id)cc;
-(id)folderID;
-(int)bodySize;
-(id)meetingRequestUUID;
-(id)longID;
-(char)readIsSet;
-(char)flaggedIsSet;
-(char)flagged;
-(char)verbIsSet;
-(int)lastVerb;
-(int)smimeType;
-(id)meetingRequestMetaData;
-(char)meetingRequestIsActionable;
-(id)conversationId;
-(id)rfc822Data;
-(char)read;
@end
