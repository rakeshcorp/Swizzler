/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "GTSwipeSubNavigator.h"

#import "TaskViewDelegate-Protocol.h"

@class GMMTask, GmmTasksTVC;

@interface GMMTasksRootVC : GTSwipeSubNavigator <TaskViewDelegate>
{
    struct UIAListener *_tasksDbListener;
    BOOL _viewIsVisible;
    BOOL _editing;
    GmmTasksTVC *_completedTVC;
    GmmTasksTVC *_dueDateTVC;
    GmmTasksTVC *_noDueDateTVC;
    GMMTask *_newTask;
}

- (void)setNewTask:(id)fp8;
- (id)newTask;
- (void)setNoDueDateTVC:(id)fp8;
- (id)noDueDateTVC;
- (void)setDueDateTVC:(id)fp8;
- (id)dueDateTVC;
- (void)setCompletedTVC:(id)fp8;
- (id)completedTVC;
- (void)selectedViewControllerChangedFrom:(id)fp8 to:(id)fp12;
- (void)updateNavigatorFrame:(id)fp8;
- (void)setEditingMode:(BOOL)fp8;
- (void)editingModeChanged:(id)fp8;
- (void)didRotateFromInterfaceOrientation:(int)fp8;
- (void)willAnimateRotationToInterfaceOrientation:(int)fp8 duration:(double)fp12;
- (void)canceledEditing;
- (void)doneWithEditing:(BOOL)fp8;
- (void)dealloc;
- (void)reloadTasksTables;
- (void)tasksDBChangedNotification:(id)fp8;
- (void)stopListeningToNotifications;
- (void)listenToNotifications;
- (void)viewDidDisappear:(BOOL)fp8;
- (void)viewDidAppear:(BOOL)fp8;
- (void)viewWillAppear:(BOOL)fp8;
- (void)saveDefaults;
- (void)viewDidLoad;
- (void)addNewTask;
- (id)init;

@end

