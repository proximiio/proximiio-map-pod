//
//  ProximiioMap.h
//  ProximiioMap
//
//  Created by Matej Drzik on 20/06/2017.
//  Copyright © 2017 Proximi.io. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ProximiioMarker.h"
#import "ProximiioFloor.h"

FOUNDATION_EXPORT double ProximiioMapVersionNumber;
FOUNDATION_EXPORT const unsigned char ProximiioMapVersionString[];

@interface ProximiioMap : NSObject

- (ProximiioMap *)initWithFrame:(CGRect)frame token:(NSString *)token delegate:(id)delegate;
- (BOOL)isLoaded;

- (void)setTintColor:(UIColor *)tintColor;
- (void)setDisplayHeadingCalibration:(BOOL)display;
- (void)setEnableRotate:(BOOL)enabled;
- (void)setEnablePitch:(BOOL)enabled;
- (void)setMaximumZoomLevel:(int)zoomLevel;
- (void)setMinimumZoomLevel:(int)zoomLevel;
- (void)setZoomLevel:(int)zoomLevel animated:(BOOL)animated;
- (void)setZoomLevel:(int)zoomLevel;
- (void)setDirection:(CLLocationDirection)direction;
- (void)setDirection:(CLLocationDirection)direction animated:(BOOL)animated;
- (void)setCenter:(CLLocationCoordinate2D)coordinate;
- (void)addFloorPlanForFloor:(ProximiioFloor *)floor;
- (void)removeFloorPlanForFloor:(ProximiioFloor *)floor;

- (void)addMarker:(ProximiioMarker *)marker;
- (void)removeMarker:(ProximiioMarker *)marker;

- (void)addCircleWithIdentifier:(NSString *)identifier coordinate:(CLLocationCoordinate2D)coordinate radius:(float)radius;
- (void)removeCircleWithIdentifier:(NSString *)identifier;

- (void)setUserLocation:(ProximiioLocation *)location;
- (void)setCenter:(CLLocationCoordinate2D)coordinate animated:(BOOL)animated;
- (void)setCenter:(CLLocationCoordinate2D)coordinate zoomLevel:(int)zoomLevel animated:(BOOL)animated;


// Routing
- (void)routeTo:(ProximiioLocation *)location levelFrom:(int)levelFrom levelTo:(int)levelTo;
- (void)setRouteColor:(UIColor *)routeColor;
- (void)setRouteColorAlpha:(float)routeAlpha;
- (void)setRouteLineWidth:(float)routeLineWidth;

// Data Access
- (void)addPOI:(NSString *)identifier title:(NSString *)title description:(NSString *)desc latitude:(double)latitude longitude:(double)longitude;
- (void)removePOI:(NSString *)identifier;
- (NSArray *)allFeatures;

@property (weak) id delegate;
@property BOOL showPoi;
@property (nonatomic, strong) UIView *view;
@property (nonatomic, strong) NSArray *features;
@property (nonatomic, strong) NSMutableArray *customFeatures;

@end

@protocol ProximiioMapDelegate

- (void)mapDidLoad:(ProximiioMap *)map;

@end
