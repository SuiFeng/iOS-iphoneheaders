/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:01:13 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/iPodOut.app/iPodOut
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iPodOut/LeafViewController.h>

@class MPMediaPlaylist, NSString, UIImage;

@interface SongsViewController : LeafViewController {

	BOOL showArtist;
	MPMediaPlaylist* geniusPlaylist;
	NSString* statusBarTitle;
	NSString* statusBarSubtitle;
	UIImage* statusBarImage;

}

@property (assign,nonatomic) BOOL showArtist; 
@property (nonatomic,retain) MPMediaPlaylist * geniusPlaylist; 
@property (nonatomic,copy) NSString * statusBarTitle; 
@property (nonatomic,copy) NSString * statusBarSubtitle; 
@property (nonatomic,copy) UIImage * statusBarImage; 
-(void)writeCurrentPositionIntoNavigationPathComponent:(id)arg1 ;
-(id)statusBarTitle;
-(void)selectAction:(BOOL)arg1 transition:(int)arg2 ;
-(int)restoreWithPathComponent:(id)arg1 ;
-(BOOL)enableQuickNav;
-(id)statusBarSubtitle;
-(id)statusBarImage;
-(unsigned)rowOfPathComponent:(id)arg1 ;
-(void)setStatusBarTitle:(id)arg1 ;
-(void)setShowArtist:(BOOL)arg1 ;
-(void)setGeniusPlaylist:(id)arg1 ;
-(void)setStatusBarSubtitle:(id)arg1 ;
-(void)setStatusBarImage:(id)arg1 ;
-(id)geniusPlaylist;
-(BOOL)showArtist;
-(id)init;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(float)statusBarHeight;
-(int)_style;
-(unsigned)minimumRowHeight;
-(void)loadView;
-(int)alignment;
-(id)initWithQuery:(id)arg1 ;
-(void).cxx_destruct;
@end

