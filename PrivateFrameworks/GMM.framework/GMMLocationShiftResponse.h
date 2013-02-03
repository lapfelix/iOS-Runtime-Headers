/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class GMMMapPoint;

@interface GMMLocationShiftResponse : PBCodable {
    struct { 
        long long *list; 
        unsigned int count; 
        unsigned int size; 
    int _cacheSquareLength;
    } _coefficients;
    BOOL _hasCacheSquareLength;
    BOOL _hasValidSquareLength;
    GMMMapPoint *_originalPoint;
    int _status;
    int _validSquareLength;
}

@property int cacheSquareLength;
@property(readonly) long long* coefficients;
@property(readonly) unsigned int coefficientsCount;
@property BOOL hasCacheSquareLength;
@property(readonly) BOOL hasOriginalPoint;
@property BOOL hasValidSquareLength;
@property(retain) GMMMapPoint * originalPoint;
@property int status;
@property int validSquareLength;

- (void)addCoefficient:(long long)arg1;
- (int)cacheSquareLength;
- (void)clearCoefficients;
- (long long)coefficientAtIndex:(unsigned int)arg1;
- (long long*)coefficients;
- (unsigned int)coefficientsCount;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasCacheSquareLength;
- (BOOL)hasOriginalPoint;
- (BOOL)hasValidSquareLength;
- (id)originalPoint;
- (BOOL)readFrom:(id)arg1;
- (void)setCacheSquareLength:(int)arg1;
- (void)setCoefficients:(long long*)arg1 count:(unsigned int)arg2;
- (void)setHasCacheSquareLength:(BOOL)arg1;
- (void)setHasValidSquareLength:(BOOL)arg1;
- (void)setOriginalPoint:(id)arg1;
- (void)setStatus:(int)arg1;
- (void)setValidSquareLength:(int)arg1;
- (int)status;
- (int)validSquareLength;
- (void)writeTo:(id)arg1;

@end