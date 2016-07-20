//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//
// SDK Root: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS7.1.sdk/
//

#import "UIViewController.h"

#import "GoodContactAccessorDelegate.h"
#import "GoodContactViewerDelegate.h"
#import "GoodEmailPickerDelegate.h"
#import "UIActionSheetDelegate.h"
#import "UISearchBarDelegate.h"
#import "UISearchDisplayDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class AddressBookAccessor, GUBarButtonItem, NSArray, NSMutableArray, NSString, UISearchBar, UISearchDisplayController, UITableView, UIView;

@interface ContactViewController : UIViewController <UISearchDisplayDelegate, UITableViewDelegate, UITableViewDataSource, UIActionSheetDelegate, UISearchBarDelegate, GoodEmailPickerDelegate, GoodContactViewerDelegate, GoodContactAccessorDelegate>
{
    AddressBookAccessor *addressBookAccessor;
    NSString *displayFilter;
    UISearchDisplayController *searchController;
    NSString *phoneNumberToCall;
    int currentScope;
    BOOL didShowPopup;
    BOOL isEmailPicker;
    BOOL isGalSearchEnabled;
    BOOL isGalSearchRequested;
    BOOL isLocalSearchRequested;
    BOOL newEmailPickerSession;
    BOOL inited;
    BOOL abUpdated;
    BOOL isGALLookupInProgress;
    BOOL sentEmailFromThisView;
    BOOL isSearchView;
    int numberOfSections;
    int _folderToShow;
    id <GoodEmailPickerDelegate> goodEmailPickerDelegate;
    BOOL theViewIsVisible;
    UISearchBar *_searchBar;
    UITableView *_tableView;
    NSArray *_scopeButtonTitles;
    BOOL isGalSearchDone;
    BOOL _searchBarCouldBeBroken;
    BOOL _wasInBackground;
    NSMutableArray *_synchingFoldersFromPrefs;
    UIView *_headerView;
    BOOL _needsReload;
    GUBarButtonItem *addButton;
    int cellDisplayMode;
    NSString *_currentSizeCategoryForRowHeights;
    float _cellHeightForCurrentSizeCategory;
}

+ (void)initialize;
@property(nonatomic) float cellHeightForCurrentSizeCategory; // @synthesize cellHeightForCurrentSizeCategory=_cellHeightForCurrentSizeCategory;
@property(copy, nonatomic) NSString *currentSizeCategoryForRowHeights; // @synthesize currentSizeCategoryForRowHeights=_currentSizeCategoryForRowHeights;
@property(readonly, nonatomic) int currentFolder; // @synthesize currentFolder=_folderToShow;
@property(nonatomic) int cellDisplayMode; // @synthesize cellDisplayMode;
@property(retain, nonatomic) GUBarButtonItem *addButton; // @synthesize addButton;
@property(retain, nonatomic) NSArray *scopeButtonTitles; // @synthesize scopeButtonTitles=_scopeButtonTitles;
@property(nonatomic) int currentScope; // @synthesize currentScope;
@property(nonatomic) BOOL newEmailPickerSession; // @synthesize newEmailPickerSession;
@property(retain, nonatomic) UISearchDisplayController *searchController; // @synthesize searchController;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UISearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(nonatomic) BOOL sentEmailFromThisView; // @synthesize sentEmailFromThisView;
@property(nonatomic) id <GoodEmailPickerDelegate> goodEmailPickerDelegate; // @synthesize goodEmailPickerDelegate;
@property(retain, nonatomic) AddressBookAccessor *addressBookAccessor; // @synthesize addressBookAccessor;
@property(retain, nonatomic) NSString *phoneNumberToCall; // @synthesize phoneNumberToCall;
@property(retain, nonatomic) NSString *displayFilter; // @synthesize displayFilter;
- (void)updateCellHeightForCurrentContentSizeCategory:(id)arg1;
- (void)updateTableViewRowHeight;
- (float)estimatedRowHeight;
@property(readonly, nonatomic) float rowVerticalMargin;
- (void)setNeedsReload;
- (void)reloadIfNeeded;
- (void)showHeaderView;
- (void)hideHeaderView;
- (void)dealloc;
- (void)viewDidUnload;
- (void)didReceiveMemoryWarning;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)shouldAutorotate;
- (void)changeFolder:(unsigned long)arg1;
- (void)syncSubfolder;
- (void)setTableViewFooterAsSpinner;
- (void)setTableViewFooterAsMoreIndicator;
- (void)setTableViewFooterAsCounter;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)subscriptionCellForTable:(id)arg1;
- (int)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(int)arg3;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)setDefaultSectionAndRow:(BOOL)arg1;
- (void)clearUpFoldersFromPrefs;
- (void)resetTableViewFooter;
- (void)searchDisplayController:(id)arg1 didHideSearchResultsTableView:(id)arg2;
- (void)searchDisplayControllerDidEndSearch:(id)arg1;
- (void)searchDisplayControllerWillBeginSearch:(id)arg1;
- (BOOL)searchDisplayController:(id)arg1 shouldReloadTableForSearchScope:(int)arg2;
- (BOOL)searchDisplayController:(id)arg1 shouldReloadTableForSearchString:(id)arg2;
- (BOOL)searchBarShouldBeginEditing:(id)arg1;
- (void)searchBar:(id)arg1 selectedScopeButtonIndexDidChange:(int)arg2;
- (void)goodContactViewerShouldComposeAnEmail:(id)arg1;
- (void)goodContactViewerDidDismiss;
- (void)goodContactViewerDidUpdate;
- (void)goodContactViewerDidDelete:(int)arg1;
- (void)goodEmailPickerSelectedPeople:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)foldersChangedInPreferences:(id)arg1;
- (BOOL)didHandledAsEmailPicker:(id)arg1;
- (void)optionsNotifReceived:(id)arg1;
- (void)enableGal:(BOOL)arg1;
- (void)updateGalEnablingWithForceUpdate:(BOOL)arg1;
- (void)cancelPicker;
- (void)galContactsLookupEnded:(BOOL)arg1;
- (void)forceEndLookup;
- (void)galContactsLookupStarted;
- (void)galContactsShouldBePublished:(id)arg1;
- (void)scrollToSearchResultTop;
- (void)goodContactDataHaveBeenRefreshed;
- (void)goodFolderWasRemoved:(unsigned long)arg1;
- (void)refreshData;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)redrawSearchBarAfterBackground;
- (void)willEnterForeground:(id)arg1;
- (void)clearSearch;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)addNewContact;
- (void)prepareForReSync;
- (void)doUiInit;
- (void)doInit;
- (void)reSyncDone;
- (id)init;
- (id)initWithEmailPickerMode:(BOOL)arg1;
- (id)getDefaultAutomationScreenName;

@end
