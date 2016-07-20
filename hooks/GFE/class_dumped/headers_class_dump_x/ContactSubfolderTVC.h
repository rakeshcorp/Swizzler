/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "GUTableViewController.h"

@class ContactDrawerViewController, NSMutableArray, NSTimer;

@interface ContactSubfolderTVC : GUTableViewController
{
    struct UIAListener *subfolderListener;
    NSTimer *refreshDataTimer;
    _Bool dataRefreshInProgress;
    _Bool dataRefreshPending;
    NSMutableArray *rows;
    ContactDrawerViewController *drawerController;
}

- (void)setDrawerController:(id)fp8;
- (id)drawerController;
- (void)setRows:(id)fp8;
- (id)rows;
- (void)tableView:(id)fp8 didSelectRowAtIndexPath:(id)fp12;
- (int)numberOfSectionsInTableView:(id)fp8;
- (void)reloadRows;
- (id)tableView:(id)fp8 cellForRowAtIndexPath:(id)fp12;
- (int)tableView:(id)fp8 numberOfRowsInSection:(int)fp12;
- (void)releaseListener;
- (void)contactsFoldersEventReceived:(id)fp8;
- (void)InvokeRefreshData:(id)fp8;
- (void)viewWillAppear:(BOOL)fp8;
- (void)viewDidLoad;
- (void)dealloc;
- (void)initializeListener:(id)fp8;
- (id)initWithNibName:(id)fp8 bundle:(id)fp12;

@end
