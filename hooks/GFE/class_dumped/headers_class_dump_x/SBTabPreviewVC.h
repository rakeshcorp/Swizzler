/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookAddRecord.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class SBMainViewController, SBWebScreenshotManager, UITableView;

@interface SBTabPreviewVC : _ABAddressBookAddRecord <UITableViewDataSource, UITableViewDelegate>
{
    BOOL _appeared;
    UITableView *_tableView;
    int _newTabToAdd;
    SBWebScreenshotManager *_screenshotManager;
    SBMainViewController *_mainVC;
}

- (void)setMainVC:(id)fp8;
- (id)mainVC;
- (void)setScreenshotManager:(id)fp8;
- (id)screenshotManager;
- (void)setNewTabToAdd:(int)fp8;
- (int)newTabToAdd;
- (void)setTableView:(id)fp8;
- (id)tableView;
- (void)tableView:(id)fp8 didDeselectRowAtIndexPath:(id)fp12;
- (void)tableView:(id)fp8 didSelectRowAtIndexPath:(id)fp12;
- (id)tableView:(id)fp8 cellForRowAtIndexPath:(id)fp12;
- (float)tableView:(id)fp8 heightForRowAtIndexPath:(id)fp12;
- (int)numberOfSectionsInTableView:(id)fp8;
- (int)tableView:(id)fp8 numberOfRowsInSection:(int)fp12;
- (void)vcAlertPendingAbortNotification:(id)fp8;
- (void)vcAlertPendingNotification:(id)fp8;
- (void)vcDidFinishLoadPageNotification:(id)fp8;
- (void)vcDidLoadPageNotification:(id)fp8;
- (void)addTabAction;
- (void)refreshCellForVC:(id)fp8;
- (void)reloadCellForVC:(id)fp8 animType:(int)fp12;
- (void)reloadScreenshots;
- (void)closeTabWithTabIndex:(int)fp8;
- (void)selectTabForVC:(id)fp8;
- (void)addTabForVC:(id)fp8;
- (id)indexPathForVC:(id)fp8;
- (void)limitNumberOfTabs;
- (void)reloadData;
- (void)selectActiveRow;
- (void)viewDidDisappear:(BOOL)fp8;
- (void)viewDidAppear:(BOOL)fp8;
- (void)dealloc;
- (void)viewDidUnload;
- (void)viewDidLoad;
- (id)initWithNibName:(id)fp8 bundle:(id)fp12;

@end

