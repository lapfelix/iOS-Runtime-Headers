/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSArray, AVCompositionInternal;

@interface AVComposition : AVAsset <NSMutableCopying> {
    AVCompositionInternal *_priv;
}

@property(readonly) NSArray * tracks;
@property(readonly) struct CGSize { float width; float height; } naturalSize;

+ (void)initialize;

- (void)finalize;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (struct OpaqueFigMutableComposition { }*)_mutableComposition;
- (id)_initWithComposition:(id)arg1;
- (id)_newTrackForIndex:(long)arg1;
- (id)_mutableTracks;
- (long)_createEmptyMutableCompositionIfNeeded;
- (void)_setNaturalSize:(struct CGSize { float x1; float x2; })arg1;
- (id)_assetInspector;
- (struct CGSize { float x1; float x2; })naturalSize;
- (id)tracks;
- (struct OpaqueFigFormatReader { }*)_formatReader;
- (id)init;
- (void)dealloc;

@end