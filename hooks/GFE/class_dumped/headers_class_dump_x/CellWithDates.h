/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookAddRecord.h"

@class UILabel;

@interface CellWithDates : _ABAddressBookAddRecord
{
    UILabel *leavingDateKeyLabel;
    UILabel *returningDateKeyLabel;
    UILabel *leavingDateValueLabel;
    UILabel *returningDateValueLabel;
}

+ (float)defaultHeight;
+ (id)cellFromNib;
- (void)setReturningDateValueLabel:(id)fp8;
- (id)returningDateValueLabel;
- (void)setLeavingDateValueLabel:(id)fp8;
- (id)leavingDateValueLabel;
- (void)setReturningDateKeyLabel:(id)fp8;
- (id)returningDateKeyLabel;
- (void)setLeavingDateKeyLabel:(id)fp8;
- (id)leavingDateKeyLabel;
- (void)dealloc;

@end
