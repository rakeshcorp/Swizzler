//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//
// SDK Root: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS7.1.sdk/
//

#import "UIViewController.h"

#import "UIScrollViewDelegate.h"

@class NSMutableArray, UIButton, UIScrollView, UIView;

@interface GTSwipeSubNavigator : UIViewController <UIScrollViewDelegate>
{
    UIView *_titleBar;
    NSMutableArray *_titleBars;
    UIButton *_previous;
    UIButton *_next;
    NSMutableArray *_titleButtons;
    NSMutableArray *_dividers;
    UIScrollView *_scrollView;
    NSMutableArray *_viewControllers;
    unsigned int _selectedIndex;
    BOOL _swipeDisabled;
}

@property(nonatomic) BOOL swipeDisabled; // @synthesize swipeDisabled=_swipeDisabled;
@property(retain, nonatomic) NSMutableArray *viewControllers; // @synthesize viewControllers=_viewControllers;
@property(nonatomic) unsigned int selectedIndex; // @synthesize selectedIndex=_selectedIndex;
- (void)selectedViewControllerChangedFrom:(id)arg1 to:(id)arg2;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)changePage:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)selectPage:(unsigned int)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)shouldAutorotate;
- (void)viewDidAppear:(BOOL)arg1;
- (void)adjustContentOffSetAsNecessary;
- (void)alignPages:(int)arg1;
- (void)viewDidLoad;
- (void)createViewHierarchy;
- (id)buttonWithImage:(id)arg1;
- (void)layoutViewHierarchy;
- (void)layoutScrollView;
- (void)layoutTitleBar;
- (void)updateArrows;
- (void)layoutViewHierarchyForiPadLandscape;
- (void)viewDidUnload;
- (void)dealloc;
- (id)initWithViewControllers:(id)arg1;
- (void)changeSelectedIndexTo:(unsigned int)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

