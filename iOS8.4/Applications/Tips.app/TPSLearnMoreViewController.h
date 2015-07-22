/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:16 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Tips.app/Tips
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Tips/TPSViewController.h>
#import <UIKit/UIWebViewDelegate.h>

@class UIWebView, TPSTip, NSURL, NSString;

@interface TPSLearnMoreViewController : TPSViewController <UIWebViewDelegate> {

	UIWebView* _webView;
	TPSTip* _tip;
	NSURL* _url;

}

@property (nonatomic,copy) TPSTip * tip;                            //@synthesize tip=_tip - In the implementation block
@property (nonatomic,copy) NSURL * url;                             //@synthesize url=_url - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(TPSTip *)tip;
-(void)setTip:(TPSTip *)arg1 ;
-(void)connectionChanged;
-(id)initWithURL:(id)arg1 tip:(id)arg2 ;
-(void)dealloc;
-(NSURL *)url;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(char)arg1 ;
-(void)setUrl:(NSURL *)arg1 ;
-(void)webView:(id)arg1 didFailLoadWithError:(id)arg2 ;
-(char)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(int)arg3 ;
-(void)webViewDidFinishLoad:(id)arg1 ;
-(void)dismiss:(id)arg1 ;
@end
