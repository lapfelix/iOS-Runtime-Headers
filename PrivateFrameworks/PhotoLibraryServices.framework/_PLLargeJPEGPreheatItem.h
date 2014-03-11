/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface _PLLargeJPEGPreheatItem : PLJPEGPreheatItem {
    struct CGSize { 
        float width; 
        float height; 
    BOOL _forceBGRA;
    int _format;
    } _imageSize;
}

+ (id)dataLoadQueue;

- (struct __CFDictionary { }*)decodeSessionOptions;
- (id)initWithImagePath:(id)arg1 imageSize:(struct CGSize { float x1; float x2; })arg2 format:(int)arg3 options:(unsigned int)arg4;
- (void)loadPreheatDataWithHandler:(id)arg1;
- (id)preheatData;

@end