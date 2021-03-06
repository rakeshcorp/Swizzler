/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookAddRecord.h"

#import "SBResourceDataContextUIEventReceiver-Protocol.h"
#import "SBWebViewProtocol-Protocol.h"
#import "UrlInterceptor-Protocol.h"

@class NSMutableArray, NSMutableSet, NSURLRequest, SBHintViewNotificationQueue, UIView;

@interface SBMainViewControllerBase : _ABAddressBookAddRecord <SBWebViewProtocol, SBResourceDataContextUIEventReceiver, UrlInterceptor>
{
    int _activeTabTag;
    NSMutableArray *_tabsArray;
    NSMutableSet *_tabsTagPool;
    BOOL _protocolRegistered;
    BOOL _homePageLoaded;
    BOOL _isBookmarkVcOnHistoryState;
    unsigned int _maxTabCount;
    NSURLRequest *_incomingRequest;
    BOOL _closingTab;
    BOOL _isGoingToAddNewTab;
    UIView *_commonMainView;
    BOOL _startupHomePageLoaded;
    BOOL isAnimating;
    SBHintViewNotificationQueue *_hintViewNotificationQueue;
}

- (id)commonMainView;
- (BOOL)isBookmarkVcOnHistoryState;
- (void)setIsGoingToAddNewTab:(BOOL)fp8;
- (BOOL)isGoingToAddNewTab;
- (void)setClosingTab:(BOOL)fp8;
- (BOOL)closingTab;
- (id)hintViewNotificationQueue;
- (void)setStartupHomePageLoaded:(BOOL)fp8;
- (BOOL)startupHomePageLoaded;
- (int)activeTabTag;
- (void)setTabsTagPool:(id)fp8;
- (id)tabsTagPool;
- (void)setTabsArray:(id)fp8;
- (id)tabsArray;
- (void)handleResourceDataContextUIEvent:(id)fp8;
- (void)releaseInterception;
- (void)cancelResourceDownloader;
- (BOOL)isResourceDownloadInProgress;
- (void)ensureProtocolUnregisteredWithReleaseUrlInterception:(BOOL)fp8;
- (void)ensureProtocolRegistered;
- (void)enableGMAInterceptionWithVC:(id)fp8;
- (void)stopPagesLoading;
- (void)openUrlInNewTab:(id)fp8 animated:(BOOL)fp12;
- (void)updateTitleInActiveVc;
- (void)openUrlInActiveVc:(id)fp8;
- (void)reloadCurrentUrlOfActiveVc;
- (void)onDataDownloadingInDisplayerProtocol:(id)fp8;
- (void)prepareForReSync;
- (void)onAboutLoadingFullPageDocument:(id)fp8;
- (void)onRedirection:(id)fp8;
- (void)didFailWithError:(id)fp8;
- (void)didFinishLoadingWithTag:(int)fp8 fromWebView:(id)fp12 withPageSource:(id)fp16;
- (BOOL)shouldLoadPageWithTag:(int)fp8 fromWebView:(id)fp12 withRequest:(id)fp16 navigationType:(int)fp20;
- (void)animateTabCloseForVC:(id)fp8 completion:(id)fp(null);
- (void)animateTabAddFromVC:(id)fp8 toVC:(id)fp12 completion:(id)fp(null);
- (void)animateTabSelectFromVC:(id)fp8 toVC:(id)fp12 completion:(id)fp(null);
- (void)updateButtonsForAllTabs;
- (void)onTabCountChanged;
- (BOOL)closeOldestTab;
- (id)oldestTabByAccessDate;
- (BOOL)canCloseTab:(int)fp8;
- (BOOL)canOpenNewTabs;
- (int)numberOfOpenedTabs;
- (BOOL)closeTabWithTag:(int)fp8 completion:(id)fp(null);
- (id)selectTabWithTag:(int)fp8;
- (id)addTabForRequest:(id)fp8;
- (BOOL)isAnimating;
- (void)callBlockOnEveryVc:(id)fp(null);
- (int)tagForTabIndex:(int)fp8;
- (int)tagForVC:(id)fp8;
- (id)vcForIndex:(int)fp8;
- (id)activeVc;
- (id)vcForTag:(int)fp8;
- (int)tabIndexForTag:(int)fp8;
- (int)tabIndexForVC:(id)fp8;
- (void)unregisterVC:(id)fp8;
- (int)registerVC:(id)fp8;
- (void)hintViewCCErrorNotif:(id)fp8;
- (void)hintViewCCConnectedNotif:(id)fp8;
- (void)hintViewCCConnectingNotif:(id)fp8;
- (void)switchViewControllerToParentMode:(id)fp8;
- (void)switchViewControlleToChildMode:(id)fp8 title:(id)fp12;
- (void)vcSwitchToParentModeNotification:(id)fp8;
- (void)vcSwitchToChildModeNotification:(id)fp8;
- (void)vcPrepareSwitchingToChildModeNotification:(id)fp8;
- (id)vcForPopupLoadingUrl:(id)fp8;
- (id)vcForTag:(int)fp8 forUrlStr:(id)fp12;
- (void)vcOpenNewTabNotification:(id)fp8;
- (void)vcWasRedirectedNotification:(id)fp8;
- (void)vcAlertPendingAbortNotification:(id)fp8;
- (void)vcAlertPendingNotification:(id)fp8;
- (void)willShowBookmarksNotification:(id)fp8;
- (void)willCloseTabNotification:(id)fp8;
- (void)lockScreenWasShownNotification:(id)fp8;
- (BOOL)closeTabAndSelectNext:(int)fp8;
- (void)vcDidLoadPageNotification:(id)fp8;
- (void)vcDidFinishLoadPageNotification:(id)fp8;
- (void)vcDidStartLoadPageNotification:(id)fp8;
- (void)loadPendingConstantConnURLs;
- (void)updateSubviewsToBounds:(struct CGRect)fp8;
- (void)viewDidUnload;
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (void)unregisterNotifications;
- (void)registerNotifications;
- (void)dealloc;
- (id)initWithNibName:(id)fp8 bundle:(id)fp12;

@end

