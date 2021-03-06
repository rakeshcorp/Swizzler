/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "KLEventViewController.h"

#import "GeoCoderHelperDelegate-Protocol.h"
#import "GoodContactViewerDelegate-Protocol.h"
#import "UIActionSheetDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "UITextViewDelegate-Protocol.h"
#import "UIWebViewDelegate-Protocol.h"

@class AppointmentWrapper, GeoCoderHelper, GoodPersonViewer, KLCalendarModel, KLGenericViewController, NSArray, NSMutableArray, NSMutableDictionary, NSString, NSTimer, UIActionSheet, UIActivityIndicatorView, UIPopoverController, UIView, UIWebView;

@interface KLMeetingResponseController : KLEventViewController <UITableViewDelegate, UITableViewDataSource, GoodContactViewerDelegate, UIWebViewDelegate, UIActionSheetDelegate, UITextViewDelegate, GeoCoderHelperDelegate>
{
    KLCalendarModel *model;
    KLGenericViewController *controller;
    UIView *myMainView;
    AppointmentWrapper *appWrapperAlert;
    AppointmentWrapper *appWrapperAlertTmp;
    BOOL appointmentDeleted;
    NSMutableDictionary *cellTypeArray;
    GoodPersonViewer *goodPersonViewer;
    BOOL forAllOccurrences;
    int meetingResponse;
    BOOL meetingResponseWithEmail;
    NSString *meetingResponseEmailBody;
    BOOL showDetails;
    NSString *prefix;
    NSString *suffix;
    BOOL addBarButtonDone;
    NSString *originalLocation;
    BOOL gpsValid;
    NSArray *phoneNumbers;
    NSArray *phoneNumbersTitle;
    NSArray *phoneNumbersLocation;
    NSArray *phoneNumbersRoom;
    NSArray *phoneNumbersNotes;
    UIWebView *titleView;
    UIWebView *locationView;
    UIWebView *roomView;
    UIWebView *notesView;
    BOOL useWebViewForTitle;
    BOOL useWebViewForLocation;
    BOOL useWebViewForRoom;
    BOOL useWebViewForNotes;
    UIActivityIndicatorView *activityIndicatorView;
    NSMutableArray *webViewList;
    BOOL gpsValidActivityIndicator;
    BOOL stopActivityIndicator;
    BOOL refreshAfterRotate;
    BOOL resovlingGeoAddress;
    NSTimer *dismissTimer;
    BOOL disappearing;
    BOOL responseComment;
    NSString *_theTitle;
    NSString *_theLocation;
    NSString *_theRoom;
    NSString *_theNotes;
    GeoCoderHelper *_geoCoder;
    BOOL _isReplyForwardForCalendarEventsAvaliable;
    int _numberOfSection;
    BOOL _iPhoneShowAsModal;
    BOOL _refreshAfterFontSizeChange;
    UIActionSheet *currentActionSheet;
    UIPopoverController *_currentPopoverController;
}

+ (id)currentInstance;
- (void)setCurrentPopoverController:(id)fp8;
- (id)currentPopoverController;
- (void)setRefreshAfterFontSizeChange:(BOOL)fp8;
- (BOOL)refreshAfterFontSizeChange;
- (void)setIPhoneShowAsModal:(BOOL)fp8;
- (BOOL)iPhoneShowAsModal;
- (void)setRefreshAfterRotate:(BOOL)fp8;
- (BOOL)refreshAfterRotate;
- (void)setAddBarButtonDone:(BOOL)fp8;
- (BOOL)addBarButtonDone;
- (void)setUseWebViewForNotes:(BOOL)fp8;
- (BOOL)useWebViewForNotes;
- (void)setUseWebViewForRoom:(BOOL)fp8;
- (BOOL)useWebViewForRoom;
- (void)setUseWebViewForLocation:(BOOL)fp8;
- (BOOL)useWebViewForLocation;
- (void)setUseWebViewForTitle:(BOOL)fp8;
- (BOOL)useWebViewForTitle;
- (void)setTheNotes:(id)fp8;
- (id)theNotes;
- (void)setTheRoom:(id)fp8;
- (id)theRoom;
- (void)setTheLocation:(id)fp8;
- (id)theLocation;
- (void)setTheTitle:(id)fp8;
- (id)theTitle;
- (void)setPhoneNumbersNotes:(id)fp8;
- (id)phoneNumbersNotes;
- (void)setPhoneNumbersRoom:(id)fp8;
- (id)phoneNumbersRoom;
- (void)setPhoneNumbersLocation:(id)fp8;
- (id)phoneNumbersLocation;
- (void)setPhoneNumbersTitle:(id)fp8;
- (id)phoneNumbersTitle;
- (void)setPhoneNumbers:(id)fp8;
- (id)phoneNumbers;
- (void)setGpsValid:(BOOL)fp8;
- (BOOL)gpsValid;
- (void)setOriginalLocation:(id)fp8;
- (id)originalLocation;
- (void)setMeetingResponseEmailBody:(id)fp8;
- (id)meetingResponseEmailBody;
- (void)setMeetingResponseWithEmail:(BOOL)fp8;
- (BOOL)meetingResponseWithEmail;
- (void)setMeetingResponse:(int)fp8;
- (int)meetingResponse;
- (void)setCurrentActionSheet:(id)fp8;
- (id)currentActionSheet;
- (void)setIsReplyForwardForCalendarEventsAvaliable:(BOOL)fp8;
- (BOOL)isReplyForwardForCalendarEventsAvaliable;
- (void)setDismissTimer:(id)fp8;
- (id)dismissTimer;
- (void)setResovlingGeoAddress:(BOOL)fp8;
- (BOOL)resovlingGeoAddress;
- (void)setSuffix:(id)fp8;
- (id)suffix;
- (void)setPrefix:(id)fp8;
- (id)prefix;
- (void)setShowDetails:(BOOL)fp8;
- (BOOL)showDetails;
- (void)setForAllOccurrences:(BOOL)fp8;
- (BOOL)forAllOccurrences;
- (void)setCellTypeArray:(id)fp8;
- (id)cellTypeArray;
- (void)setAppWrapperAlertTmp:(id)fp8;
- (id)appWrapperAlertTmp;
- (void)setAppWrapperAlert:(id)fp8;
- (id)appWrapperAlert;
- (void)setMyMainView:(id)fp8;
- (id)myMainView;
- (void)setController:(id)fp8;
- (id)controller;
- (void)setModel:(id)fp8;
- (id)model;
- (void)fontSizeChanged;
- (void)geoCoderHelper:(id)fp8 resolveAddressString:(id)fp12 didComplete:(BOOL)fp16;
- (BOOL)webView:(id)fp8 shouldStartLoadWithRequest:(id)fp12 navigationType:(int)fp16;
- (void)webView:(id)fp8 didFailLoadWithError:(id)fp12;
- (void)webViewDidFinishLoad:(id)fp8;
- (void)onStopActivityIndicatorTimerElapsed:(id)fp8;
- (void)onWebViewLoaded:(id)fp8;
- (void)goodContactViewerShouldComposeAnEmail:(id)fp8;
- (void)goodContactViewerDidCancel;
- (void)viewRecipient:(id)fp8;
- (void)eventButtonClickedForComposeType:(int)fp8;
- (void)selectShowDetails:(id)fp8;
- (void)appointmentShouldBeDeleted;
- (void)currentDateShouldChangeTo:(id)fp8;
- (void)showActionSheet:(id)fp8;
- (BOOL)shouldShowReplyAllButton;
- (void)buttonPress:(id)fp8;
- (void)replyToAllAttendees;
- (void)locationButton:(id)fp8 event:(id)fp12;
- (void)addTextViewToCell:(id)fp8 inRect:(struct CGRect)fp12 withConstraintSize:(struct CGSize)fp28 onRow:(int)fp36 withText:(id)fp40 font:(id)fp44 dataDetector:(unsigned int)fp48 selected:(BOOL)fp52;
- (BOOL)textViewShouldBeginEditing:(id)fp8;
- (void)tableView:(id)fp8 didSelectRowAtIndexPath:(id)fp12;
- (void)selectCell:(id)fp8 row:(int)fp12;
- (id)tableView:(id)fp8 cellForRowAtIndexPath:(id)fp12;
- (void)setupInviteesWithTableViewCell:(id)fp8;
- (void)initTableViewCell:(id)fp8 row:(int)fp12 selected:(BOOL)fp16;
- (float)tableView:(id)fp8 heightForRowAtIndexPath:(id)fp12;
- (float)tableView:(id)fp8 heightForFooterInSection:(int)fp12;
- (int)tableView:(id)fp8 numberOfRowsInSection:(int)fp12;
- (void)showCommonSectionArray:(id)fp8;
- (int)numberOfSectionsInTableView:(id)fp8;
- (int)cellTypeFromIndexPath:(id)fp8;
- (void)callMeetingResponseCommentsController:(id)fp8;
- (void)callInviteResponse:(id)fp8;
- (void)actionSheet:(id)fp8 clickedButtonAtIndex:(int)fp12;
- (void)decline;
- (void)tentative;
- (void)accept;
- (void)askForAllOccurrences;
- (void)askForAllOcuurrencesForEventForward;
- (void)askForAllOcuurrencesForEventReplyAll;
- (void)askForAllOcuurrencesForEventReply;
- (void)inviteResponse;
- (void)changeAlert;
- (void)scheduledDismissNoAnimated:(id)fp8;
- (void)scheduledDismiss:(id)fp8;
- (void)sendInviteResponse;
- (void)viewWillDisappear:(BOOL)fp8;
- (void)stopActivityIndicator;
- (void)resetRefreshAfterRotate:(id)fp8;
- (void)didRotateFromInterfaceOrientation:(int)fp8;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)fp8;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)shouldAutorotate;
- (void)setToolbar;
- (void)viewDidAppear:(BOOL)fp8;
- (void)viewWillAppear:(BOOL)fp8;
- (id)itemsForToolbar;
- (void)dismissActionSheet;
- (void)viewDidUnload;
- (void)viewDidLoad;
- (void)resetWebviews;
- (void)prepareFieldsWithLink:(int)fp8;
- (void)prepareFieldsWithLink:(int)fp8 withFont:(id)fp12;
- (void)onAddressGeoResolved;
- (void)testGpsValid:(id)fp8;
- (void)addActivityIndicatorForUIWebView:(id)fp8;
- (void)onButtonDone;
- (void)setUpWebView:(id)fp8 text:(id)fp12 fontSizeStr:(id)fp16 colorString:(id)fp20;
- (void)dealloc;
- (BOOL)isLandscape;

@end

