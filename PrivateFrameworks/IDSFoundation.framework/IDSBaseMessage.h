/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSArray, NSData, NSDate, NSDictionary, NSMutableArray, NSString;

@interface IDSBaseMessage : NSObject <NSCopying> {
    NSDictionary *_cachedBody;
    NSDictionary *_clientInfo;
    id _completionBlock;
    id _context;
    NSDate *_creationDate;
    NSString *_dataUsageBundleIdentifier;
    id _deliveryAcknowledgementBlock;
    NSString *_dsAuthID;
    BOOL _forceCellular;
    BOOL _highPriority;
    NSDictionary *_responseAlert;
    NSData *_serviceData;
    double _timeSent;
    double _timeout;
    int _timeoutRetries;
    NSString *_topic;
    unsigned int _uniqueID;
    NSDictionary *_userInfo;
    BOOL _usingOutgoingPush;
    BOOL _wantsBinaryPush;
    BOOL _wantsIntegerUniqueIDs;
    BOOL _wantsResponse;
}

@property(readonly) NSData * IDCertificate;
@property(setter=_setCachedBody:,retain) NSDictionary * _cachedBody;
@property(setter=_setUsingOutgoingPush:) BOOL _usingOutgoingPush;
@property(readonly) NSDictionary * additionalMessageHeaders;
@property(readonly) NSDictionary * additionalMessageHeadersForOutgoingPush;
@property(readonly) NSDictionary * additionalQueryStringParameters;
@property(readonly) NSString * bagKey;
@property(copy) NSMutableArray * certDataArray;
@property(copy) NSDictionary * clientInfo;
@property(readonly) int command;
@property(copy) id completionBlock;
@property(retain) id context;
@property(retain) NSDate * creationDate;
@property(readonly) double customRetryInterval;
@property(readonly) NSString * dataUsageBundleIdentifier;
@property(copy) id deliveryAcknowledgementBlock;
@property(setter=setDSAuthID:,copy) NSString * dsAuthID;
@property BOOL forceCellular;
@property BOOL highPriority;
@property(readonly) struct __SecKey { }* identityPrivateKey;
@property(readonly) struct __SecKey { }* identityPublicKey;
@property(readonly) BOOL ignoresNetworkConnectivity;
@property(readonly) BOOL isValidMessage;
@property(readonly) int maxTimeoutRetries;
@property(readonly) NSDictionary * messageBody;
@property(readonly) NSDictionary * messageBodyUsingCache;
@property(readonly) NSDictionary * nonStandardMessageHeadersForOutgoingPush;
@property(readonly) BOOL payloadCanBeLogged;
@property(copy) NSMutableArray * privateKeyArray;
@property(copy) NSMutableArray * publicKeyArray;
@property(copy) NSData * pushCertificate;
@property struct __SecKey { }* pushPrivateKey;
@property struct __SecKey { }* pushPublicKey;
@property(copy) NSData * pushToken;
@property(readonly) NSArray * requiredKeys;
@property(copy) NSDictionary * responseAlertInfo;
@property(readonly) int responseCommand;
@property(copy) NSData * serviceData;
@property double timeSent;
@property double timeout;
@property int timeoutRetries;
@property(retain) NSString * topic;
@property unsigned int uniqueID;
@property(readonly) NSString * uniqueIDString;
@property(readonly) NSString * userAgentHeaderString;
@property(copy) NSMutableArray * userIDArray;
@property(copy) NSDictionary * userInfo;
@property(readonly) BOOL wantsAPSRetries;
@property(readonly) BOOL wantsBagKey;
@property BOOL wantsBinaryPush;
@property(readonly) BOOL wantsBodySignature;
@property(readonly) BOOL wantsCFNetworkTimeout;
@property(readonly) BOOL wantsCompressedBody;
@property(readonly) BOOL wantsCustomRetryInterval;
@property(readonly) BOOL wantsExtraTimeoutRetry;
@property(readonly) BOOL wantsHTTPGet;
@property(readonly) BOOL wantsHTTPHeaders;
@property BOOL wantsIntegerUniqueIDs;
@property(readonly) BOOL wantsJSONBody;
@property(readonly) BOOL wantsManagedRetries;
@property BOOL wantsResponse;
@property(readonly) BOOL wantsSignature;
@property(readonly) BOOL wantsUserAgentInHeaders;

- (id)IDCertificate;
- (void)_cacheBody;
- (id)_cachedBody;
- (void)_setCachedBody:(id)arg1;
- (void)_setUsingOutgoingPush:(BOOL)arg1;
- (BOOL)_usingOutgoingPush;
- (id)additionalMessageHeaders;
- (id)additionalMessageHeadersForOutgoingPush;
- (id)additionalQueryStringParameters;
- (id)bagKey;
- (id)certDataArray;
- (id)clientInfo;
- (int)command;
- (id)completionBlock;
- (id)context;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)creationDate;
- (double)customRetryInterval;
- (id)dataUsageBundleIdentifier;
- (void)dealloc;
- (id)deliveryAcknowledgementBlock;
- (id)dsAuthID;
- (BOOL)forceCellular;
- (void)handleResponseDictionary:(id)arg1;
- (void)handleResponseHeaders:(id)arg1;
- (BOOL)hasRequiredKeys:(id*)arg1;
- (BOOL)highPriority;
- (struct __SecKey { }*)identityPrivateKey;
- (struct __SecKey { }*)identityPublicKey;
- (BOOL)ignoresNetworkConnectivity;
- (id)init;
- (BOOL)isValidMessage;
- (int)maxTimeoutRetries;
- (id)messageBody;
- (id)messageBodyUsingCache;
- (id)nonStandardMessageHeadersForOutgoingPush;
- (BOOL)payloadCanBeLogged;
- (id)privateKeyArray;
- (id)publicKeyArray;
- (id)pushCertificate;
- (struct __SecKey { }*)pushPrivateKey;
- (struct __SecKey { }*)pushPublicKey;
- (id)pushToken;
- (id)requiredKeys;
- (id)responseAlertInfo;
- (int)responseCommand;
- (id)serviceData;
- (void)setCertDataArray:(id)arg1;
- (void)setClientInfo:(id)arg1;
- (void)setCompletionBlock:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setCreationDate:(id)arg1;
- (void)setDSAuthID:(id)arg1;
- (void)setDeliveryAcknowledgementBlock:(id)arg1;
- (void)setForceCellular:(BOOL)arg1;
- (void)setHighPriority:(BOOL)arg1;
- (void)setPrivateKeyArray:(id)arg1;
- (void)setPublicKeyArray:(id)arg1;
- (void)setPushCertificate:(id)arg1;
- (void)setPushPrivateKey:(struct __SecKey { }*)arg1;
- (void)setPushPublicKey:(struct __SecKey { }*)arg1;
- (void)setPushToken:(id)arg1;
- (void)setResponseAlertInfo:(id)arg1;
- (void)setServiceData:(id)arg1;
- (void)setTimeSent:(double)arg1;
- (void)setTimeout:(double)arg1;
- (void)setTimeoutRetries:(int)arg1;
- (void)setTopic:(id)arg1;
- (void)setUniqueID:(unsigned int)arg1;
- (void)setUserIDArray:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (void)setWantsBinaryPush:(BOOL)arg1;
- (void)setWantsIntegerUniqueIDs:(BOOL)arg1;
- (void)setWantsResponse:(BOOL)arg1;
- (double)timeSent;
- (double)timeout;
- (int)timeoutRetries;
- (id)topic;
- (unsigned int)uniqueID;
- (id)uniqueIDString;
- (id)userAgentHeaderString;
- (id)userIDArray;
- (id)userInfo;
- (BOOL)wantsAPSRetries;
- (BOOL)wantsBagKey;
- (BOOL)wantsBinaryPush;
- (BOOL)wantsBodySignature;
- (BOOL)wantsCFNetworkTimeout;
- (BOOL)wantsCompressedBody;
- (BOOL)wantsCustomRetryInterval;
- (BOOL)wantsExtraTimeoutRetry;
- (BOOL)wantsHTTPGet;
- (BOOL)wantsHTTPHeaders;
- (BOOL)wantsIntegerUniqueIDs;
- (BOOL)wantsJSONBody;
- (BOOL)wantsManagedRetries;
- (BOOL)wantsResponse;
- (BOOL)wantsSignature;
- (BOOL)wantsUserAgentInHeaders;

@end