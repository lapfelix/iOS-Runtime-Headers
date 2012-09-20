/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class NSArray, NSLock;

@interface _MFMailAccountProxySource : NSObject  {
    NSLock *_lock;
    NSArray *_accountProxies;
    BOOL _registeredForNotifications;
}

+ (id)defaultInstance;

- (void)dealloc;
- (id)init;
- (void)_applicationDidEnterBackground:(id)arg1;
- (id)accountProxies;
- (void)_resetAccountsChanged:(BOOL)arg1;
- (void)_registerForNotifications_nts;
- (void)_deregisterForNotifications_nts;

@end