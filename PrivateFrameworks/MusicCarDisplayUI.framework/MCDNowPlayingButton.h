/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
 */

@class CALayer;

@interface MCDNowPlayingButton : UIButton {
    CALayer *_focusColorLayer;
    BOOL _hidesLeftBorder;
    CALayer *_leftBorder;
}

@property BOOL hidesLeftBorder;

+ (id)buttonWithHeight:(float)arg1;

- (void).cxx_destruct;
- (void)_focusStateDidChange;
- (BOOL)_isFocusableElement;
- (BOOL)hidesLeftBorder;
- (void)layoutSubviews;
- (void)setHidesLeftBorder:(BOOL)arg1;
- (void)sizeToFit;

@end