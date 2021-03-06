/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookAddRecord.h"

@class CALayer, NSDate, NSString, SBHintViewNotificationQueue, UIButton, UILabel, UIView;

@interface SBHintView : _ABAddressBookAddRecord
{
    BOOL _roundedCorners;
    NSString *_explanationMessage;
    NSString *_actionDescription;
    UILabel *_explanationMessageLabel;
    UILabel *_actionDescriptionLabel;
    UIButton *_iconButton;
    UIView *_messageView;
    UIView *_indicatorView;
    CALayer *_cornerLayer;
    SBHintViewNotificationQueue *_notificationQueue;
    NSDate *_beginingOfStartDisplying;
}

+ (void)hideCurrentHintPostNotification;
+ (void)showHintPostNotification;
+ (id)dictionaryToHideCurrentHint;
+ (id)dictionaryToShowHint;
+ (id)dictionaryToShowHintWithMessage:(id)fp8 action:(id)fp12 autoHide:(BOOL)fp16;
- (void)setBeginingOfStartDisplying:(id)fp8;
- (id)beginingOfStartDisplying;
- (id)notificationQueue;
- (void)setCornerLayer:(id)fp8;
- (id)cornerLayer;
- (void)set_indicatorView:(id)fp8;
- (id)_indicatorView;
- (void)set_messageView:(id)fp8;
- (id)_messageView;
- (void)set_iconButton:(id)fp8;
- (id)_iconButton;
- (void)set_actionDescriptionLabel:(id)fp8;
- (id)_actionDescriptionLabel;
- (void)set_explanationMessageLabel:(id)fp8;
- (id)_explanationMessageLabel;
- (BOOL)roundedCorners;
- (id)actionDescription;
- (id)explanationMessage;
- (void)showIfNeeded;
- (void)pushIncomingData:(id)fp8;
- (void)setActionDescription:(id)fp8;
- (void)setExplanationMessage:(id)fp8;
- (void)hideMessage;
- (void)showMessage;
- (void)updatePositionWithScrollOffset:(struct CGPoint)fp8 andToolbarHeight:(float)fp16;
- (void)setRoundedCorners:(BOOL)fp8;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithNotificationQueue:(id)fp8;

@end

