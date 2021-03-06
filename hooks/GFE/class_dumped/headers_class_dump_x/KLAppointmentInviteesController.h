/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookAddRecord.h"

#import "ContactInputMgrDelegate-Protocol.h"
#import "ContactTypeDownAddressingMatchesTableViewMgrDelegate-Protocol.h"
#import "GoodEmailPickerDelegate-Protocol.h"
#import "UIActionSheetDelegate-Protocol.h"
#import "UIApplicationDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class AppointmentWrapper, ContactBubbledTextInputMgr, ContactTypeDownAddressingMatchesTableViewMgr, ContactTypeDownAddressingMgr, InviteeDetails, NSMutableArray, NSString, UIButton, UIScrollView, UITextField, UIView;

@interface KLAppointmentInviteesController : _ABAddressBookAddRecord <UIApplicationDelegate, UITextFieldDelegate, ContactInputMgrDelegate, ContactTypeDownAddressingMatchesTableViewMgrDelegate, UIActionSheetDelegate, GoodEmailPickerDelegate>
{
    AppointmentWrapper *appWrapper;
    AppointmentWrapper *appWrapperTmp;
    NSString *category;
    int availId;
    BOOL doDone;
    float keyboardHeight;
    UIScrollView *scrollView;
    UITextField *textField;
    UIView *textFieldContainer;
    UIButton *pickerButton;
    ContactBubbledTextInputMgr *bubbledTextInputMngr;
    BOOL tdaMatchViewOn;
    struct CGRect originalContainerRect;
    NSMutableArray *people;
    InviteeDetails *originalOrganizer;
    NSMutableArray *otherInvitees;
    NSMutableArray *favoriteRooms;
    ContactTypeDownAddressingMgr *_typeDownAddressingMgr;
    ContactTypeDownAddressingMatchesTableViewMgr *_matchesTableMgr;
}

+ (id)inviteeDetailsArrayFromPeopleArray:(id)fp8;
+ (id)peopleWrapperFromInviteeDetails:(id)fp8;
+ (id)inviteeDetailsFromPeopleWrapper:(id)fp8;
- (void)setFavoriteRooms:(id)fp8;
- (id)favoriteRooms;
- (void)setOtherInvitees:(id)fp8;
- (id)otherInvitees;
- (void)setOriginalOrganizer:(id)fp8;
- (id)originalOrganizer;
- (void)setPeople:(id)fp8;
- (id)people;
- (void)setBubbledTextInputMngr:(id)fp8;
- (id)bubbledTextInputMngr;
- (void)setDoDone:(BOOL)fp8;
- (BOOL)doDone;
- (void)setAvailId:(int)fp8;
- (int)availId;
- (void)setCategory:(id)fp8;
- (id)category;
- (void)setAppWrapperTmp:(id)fp8;
- (id)appWrapperTmp;
- (void)setAppWrapper:(id)fp8;
- (id)appWrapper;
- (id).cxx_construct;
- (void)fontSizeChanged;
- (void)updateScrollAndTableViewFrame;
- (void)keyboardDidHide:(id)fp8;
- (void)keyboardDidShow:(id)fp8;
- (id)peopleArrayOfCurrentBubbles;
- (void)showBottomOfView;
- (void)handleSizeChange;
- (void)contactSelected:(id)fp8;
- (void)typeDownAddressingCompletedWithMatches:(id)fp8 inputMgr:(id)fp12;
- (void)restoreContainerAfterTda;
- (void)positionForTda;
- (void)invokePositionForTda:(id)fp8;
- (void)goodEmailPickerSelectedPeople:(id)fp8;
- (void)goodContactPickerDidCancel;
- (void)invokePicker:(id)fp8;
- (BOOL)textFieldShouldReturn:(id)fp8;
- (BOOL)textField:(id)fp8 shouldChangeCharactersInRange:(struct _NSRange)fp12 replacementString:(id)fp20;
- (void)dealloc;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(BOOL)fp8;
- (void)viewDidAppear:(BOOL)fp8;
- (void)viewWillAppear:(BOOL)fp8;
- (void)didRotateFromInterfaceOrientation:(int)fp8;
- (void)finalizeRotation;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)fp8;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)shouldAutorotate;
- (void)done;
- (void)showFavoriteRooms:(id)fp8;
- (void)loadView;
- (void)redrawBubbles;
- (id)init;

@end

