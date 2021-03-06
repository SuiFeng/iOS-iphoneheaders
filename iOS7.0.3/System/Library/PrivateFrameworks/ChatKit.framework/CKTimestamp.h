/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:54:27 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKTranscriptDataRowObject.h>

@protocol CKMessage;
@class NSDate, NSString, NSAttributedString;

@interface CKTimestamp : NSObject <CKTranscriptDataRowObject> {

	NSDate* _date;
	<CKMessage>* _message;

}

@property (nonatomic,retain) NSDate * date;                                                //@synthesize date=_date - In the implementation block
@property (nonatomic,retain) <CKMessage> * message;                                        //@synthesize message=_message - In the implementation block
@property (nonatomic,readonly) NSString * guid; 
@property (nonatomic,readonly) NSAttributedString * attributedTranscriptText; 
+(id)thePastDateFormatter;
+(id)thisYearDateFormatter;
+(id)thisWeekRelativeDateFormatter;
+(id)timestampWithDate:(id)arg1 message:(id)arg2 ;
-(id)now;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)date;
-(id)message;
-(void)setDate:(id)arg1 ;
-(void)setMessage:(id)arg1 ;
-(id)attributedTranscriptText;
-(id)initWithDate:(id)arg1 message:(id)arg2 ;
-(id)timestampCache;
-(id)__ck_displayGUIDWithMessage:(id)arg1 ;
-(Class)__ck_displayCellClass;
-(id)__ck_displayCellIdentifier;
-(void)__ck_prewarmForDisplay;
-(id)__ck_displayContactImage;
-(UIEdgeInsets)__ck_displayContentAlignmentInsets;
-(BOOL)__ck_displayTranscriptOrientation;
-(BOOL)__ck_transcriptUsesTextAlignmentInsets;
-(BOOL)__ck_displayDuringSend;
-(BOOL)__ck_wantsDrawerLayout;
-(CGSize)__ck_displaySize:(UIEdgeInsets*)arg1 ;
-(id)guid;
@end

