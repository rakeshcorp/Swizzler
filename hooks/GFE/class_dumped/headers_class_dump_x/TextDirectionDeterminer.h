/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookAddRecord.h"

@class NSMutableSet;

@interface TextDirectionDeterminer : _ABAddressBookAddRecord
{
    NSMutableSet *rightToLeftLanguagesCharsets;
}

+ (id)getInstance;
+ (void)initialize;
- (id)rightToLeftLanguagesCharsets;
- (int)getTextDirection:(id)fp8;
- (void)registerRightToLeftCharacterSet:(id)fp8;
- (id)initSingleton;

@end

