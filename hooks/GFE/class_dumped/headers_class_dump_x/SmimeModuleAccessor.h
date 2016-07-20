/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookAddRecord.h"

#import "SmimeUiCallbackProtocol-Protocol.h"

@interface SmimeModuleAccessor : _ABAddressBookAddRecord <SmimeUiCallbackProtocol>
{
    struct ISmimeUiAdapter *smimeAdapter;
    id <EmailSmimeAdapterFactoryProtocol> adapterFactory;
    BOOL _composeScreenActive;
}

- (void)showRetrievingCACCertificatesProgress:(BOOL)fp8;
- (void)validationImpSoftTokenResult:(id)fp8;
- (void)requestToResetAttachments:(unsigned short)fp8;
- (void)requestToUpdateDataAttach:(unsigned short)fp8;
- (void)requestToUpdateDataBody:(unsigned short)fp8;
- (void)requestToShowDialog:(id)fp8;
- (void)requestToUpdateStatusForSmimeActionResult:(int)fp8;
- (void)requestToUpdateDownloadProgress:(float)fp8;
- (void)resetSmimeUICallback;
- (int)areSoftTokensToBeInstalled;
- (void)requestToInstallImportedSoftTokens;
- (id)getOwnerEmailAddress;
- (void)softTokenInstalled:(BOOL)fp8 withFileName:(const struct GxString *)fp12;
- (BOOL)exportSoftToken:(const struct GxSecureString *)fp8;
- (BOOL)validateAndExportSoftToken:(const struct GxSecureString *)fp8 filePath:(const struct GxString *)fp12 validateCert:(BOOL)fp16;
- (BOOL)validateImportedSoftToken:(const struct GxSecureString *)fp8 filePath:(const struct GxString *)fp12 validateCert:(BOOL)fp16;
- (BOOL)isSoftTokenSigImported;
- (BOOL)isSoftTokenEncImported;
- (void)setTokenPreference:(int)fp8;
- (int)getTokenPreference;
- (void)SetMessageClassificationOption:(BOOL)fp8;
- (BOOL)GetMessageClassificationOption;
- (void)SetDefaultMessageClassification:(int)fp8;
- (BOOL)canDecodeInitialBody:(unsigned short)fp8;
- (void)DestroyEncodedOutputData:(int)fp8;
- (_Bool)GetShowSecurityIconOption;
- (void)SetShowSecurityIconOption:(_Bool)fp8;
- (void)SetSecurityChoice:(int)fp8;
- (id)getCertificateDetails:(unsigned short)fp8;
- (int)GetSecurityChoice:(unsigned long)fp8;
- (int)GetITForceSecurityChoice;
- (BOOL)sendTrustCertificateAlways:(unsigned short)fp8;
- (BOOL)sendTrustCertificateOnce:(unsigned short)fp8;
- (BOOL)RemoveListenerToSecureEmailEngine:(struct AListener *)fp8;
- (BOOL)ListenToSecureEmailEngine:(struct AListener *)fp8;
- (unsigned int)StartLookupCertificate:(unsigned long)fp8 emailAdress:(struct GxUTF8String *)fp12 contactName:(struct GxUTF8String *)fp16 contactId:(unsigned long)fp20;
- (BOOL)sendCancelDecryptingEmail:(unsigned short)fp8;
- (BOOL)sendCancelDownloadingEmailContent:(unsigned short)fp8;
- (BOOL)handleEncodeOutgoingMail:(unsigned short)fp8;
- (BOOL)checkDownloadEntireMessage:(unsigned short)fp8;
- (BOOL)sendDecodeMsgOnHandheldRequest:(unsigned short)fp8 downloadEntireMsg:(_Bool)fp12;
- (BOOL)sendVerifyOnHandheldRequest:(unsigned short)fp8;
- (BOOL)sendVerifyOnServerRequest:(unsigned short)fp8;
- (void)setCurrentServedRecordNumber:(unsigned short)fp8;
- (unsigned int)PurgeCertificateCache:(const struct GxUTF8String *)fp8;
- (BOOL)isLoaded;
- (void)setComposeScreenActive:(BOOL)fp8;
- (BOOL)isComposeScreenActive;
- (void)dealloc;
- (id)initWithEmailSmimeAdapterFactory:(id)fp8;
- (void)closeRetrievingCACCertificatesProgressInMainThread;
- (void)showRetrievingCACCertificatesProgressInMainThread;
- (void)validationImpSoftTokenResultInMainThread:(id)fp8;
- (void)requestToShowDialogInMainThread:(id)fp8;
- (void)requestToUpdateEmailViewInMainThread:(id)fp8;
- (void)requestToUpdateStatusForSmimeActionResultInMainThread:(id)fp8;
- (void)requestToUpdateDownloadProgressInMainThread:(id)fp8;

@end
