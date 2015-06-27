/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:11 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class SUScriptCanvasContext, NSString, UIImage;

@interface SUScriptSegmentedControlItem : SUScriptObject {

	SUScriptCanvasContext* _canvas;
	NSString* _identifier;
	UIImage* _image;
	NSString* _imageURLString;
	NSString* _title;
	id _userInfo;

}

@property (nonatomic,readonly) UIImage * image;                 //@synthesize image=_image - In the implementation block
@property (retain) SUScriptCanvasContext * canvas; 
@property (retain) NSString * identifier; 
@property (retain) NSString * imageURL; 
@property (retain) NSString * title; 
@property (retain) id userInfo; 
+(void)initialize;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(void)_setImage:(id)arg1 ;
-(void)dealloc;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)identifier;
-(NSString *)title;
-(void)setUserInfo:(id)arg1 ;
-(UIImage *)image;
-(id)userInfo;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setImageURL:(NSString *)arg1 ;
-(NSString *)imageURL;
-(id)scriptAttributeKeys;
-(id)_className;
-(id)_segmentedControl;
-(void)setCanvas:(SUScriptCanvasContext *)arg1 ;
-(SUScriptCanvasContext *)canvas;
-(id)attributeKeys;
-(void)_reloadUserInterface;
-(id)newPageSection;
-(id)initWithPageSection:(id)arg1 ;
@end
