/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppPreference.framework/AppPreference
 */

@interface APRAppPreference : NSObject <APRAppPreferenceInterface, NSXPCListenerDelegate> {
    NSXPCListener * _listener;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (void)getAppConnectionAppsInto:(id /* block */)arg1;
- (void)getAppPredictionsForIntent:(id)arg1 reply:(id /* block */)arg2;
- (void)getFeedbackForIntent:(id)arg1 forResponse:(id)arg2 forFeedback:(int)arg3;
- (id)init;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;

@end
