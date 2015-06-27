/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:00:16 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileNotes.app/MobileNotes
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIPageViewController.h>
#import <MobileNotes/NotePresenter.h>
#import <MobileNotes/NotesStateArchiving.h>
#import <UIKit/UIPageViewControllerDelegate.h>

@class UIToolbar, UIBarButtonItem;

@interface NotesPageViewController : UIPageViewController <NotePresenter, NotesStateArchiving, UIPageViewControllerDelegate> {

	UIToolbar* _toolbar;
	UIBarButtonItem* _deleteButtonItem;

}
-(id)currentNoteDisplayController;
-(void)noteContentLayer:(id)arg1 setEditing:(BOOL)arg2 animated:(BOOL)arg3 ;
-(void)saveNote;
-(id)archivedConfiguration;
-(void)terminateFindSession;
-(void)highlightTermString:(id)arg1 ;
-(BOOL)noteNeedsSaving;
-(void)discardChanges;
-(BOOL)noteContainsNonWhitespaceCharacters;
-(void)updateBottomNavigationButtons;
-(BOOL)isAutosaving;
-(BOOL)willTransitionOut;
-(BOOL)noteContentLayerShouldBeginEditing:(id)arg1 ;
-(void)noteContentLayerContentDidChange:(id)arg1 updatedTitle:(BOOL)arg2 ;
-(void)noteContentLayer:(id)arg1 containsCJK:(BOOL)arg2 ;
-(void)applyArchivedConfiguration:(id)arg1 ;
-(void)notesButtonClicked:(id)arg1 ;
-(void)setupNavBar;
-(void)shareButtonClicked:(id)arg1 ;
-(void)updateNewNoteButtonEnableStateForViewControllers:(id)arg1 ;
-(void)completeDeletionActionFinal;
-(void)completeDeletionAction;
-(void)deleteButtonClicked:(id)arg1 ;
-(id)note;
-(void)addButtonClicked:(id)arg1 ;
-(BOOL)isEditing;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)endEditing;
-(void)loadView;
-(id)initWithTransitionStyle:(int)arg1 navigationOrientation:(int)arg2 options:(id)arg3 ;
-(void)pageViewController:(id)arg1 willTransitionToViewControllers:(id)arg2 ;
-(void)setViewControllers:(id)arg1 direction:(int)arg2 animated:(BOOL)arg3 completion:(/*^block*/ id)arg4 ;
-(void)scrollToTop;
-(void).cxx_destruct;
@end
