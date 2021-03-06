/* Generated by RuntimeBrowser.
 */

@protocol VKCameraController <NSObject>

@required

- (double)altitude;
- (BOOL)canZoomInForTileSize:(int)arg1;
- (BOOL)canZoomOutForTileSize:(int)arg1;
- (struct { double x1; double x2; })centerCoordinate;
- (double)currentZoomLevelForTileSize:(int)arg1;
- (double)distanceFromCenterCoordinate;
- (double)heading;
- (BOOL)isFullyPitched;
- (BOOL)isPitched;
- (BOOL)isRotated;
- (GEOMapRegion *)mapRegion;
- (double)maxPitch;
- (double)maximumZoomLevelForTileSize:(int)arg1;
- (double)minimumZoomLevelForTileSize:(int)arg1;
- (double)pitch;
- (BOOL)restoreViewportFromInfo:(VKViewportInfo *)arg1;
- (void)setCenterCoordinate:(struct { double x1; double x2; })arg1;
- (void)setDistanceFromCenterCoordinate:(double)arg1;
- (void)setHeading:(double)arg1;
- (void)setPitch:(double)arg1;
- (double)topDownMinimumZoomLevelForTileSize:(int)arg1;
- (VKViewportInfo *)viewportInfo;
- (double)zoomLevelAdjustmentForTileSize:(int)arg1;

@end
