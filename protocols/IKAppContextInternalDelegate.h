/* Generated by RuntimeBrowser.
 */

@protocol IKAppContextInternalDelegate <IKAppContextDelegate>

@required

- (BOOL)shouldForceIgnoreHTTPCacheForAppContext:(IKAppContext *)arg1;

@optional

- (void)appContext:(IKAppContext *)arg1 didStartWithOptions:(NSDictionary *)arg2 validatedJSString:(NSString *)arg3;
- (BOOL)appContext:(IKAppContext *)arg1 shouldStartWithScript:(NSString *)arg2 scriptURL:(NSURL *)arg3 loadedFromFallback:(BOOL)arg4;

@end
