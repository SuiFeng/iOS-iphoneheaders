/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:48 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <CoreFoundation/NSCopying.h>

@class UIFont;

@interface UITextRenderingAttributes : NSObject <NSCopying> {

	UIFont* _font;
	double _minimumFontSize;
	double _actualFontSize;
	double _lineSpacing;
	long long _lineBreakMode;
	long long _baselineAdjustment;
	double _trackingAdjustment;
	double _minimumTrackingAdjustment;
	double _actualTrackingAdjustment;
	long long _alignment;
	bool _includeEmoji;
	CGRect _truncationRect;
	bool _drawUnderline;

}
-(id)init;
-(id)copyWithZone:(NSZone)arg1 ;
@end

