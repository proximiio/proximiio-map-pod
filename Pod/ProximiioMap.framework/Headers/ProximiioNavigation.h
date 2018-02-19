//
//  ProximiioNavigation.h
//  ProximiioMap
//
//  Created by Matej Drzik on 09/02/2018.
//  Copyright © 2018 Proximi.io. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>
#import "ProximiioLeveledPolyline.h"
#import "ProximiioRouteResponse.h"

@interface ProximiioNavigation : NSObject

- (id)initWithToken:(NSString *)token;
- (void)setCurrentLocation:(CLLocation *)location;
- (void)setCurrentLevel:(int)level;
- (void)setTargetLocation:(CLLocation *)location;
- (void)setTargetLevel:(int)level;
- (void)update:(void(^)(ProximiioRouteResponse *))onComplete;
- (CLLocation *)targetLocation;
- (int)targetLevel;

@end

@protocol ProximiioNavigationDelegate

- (void)didUpdateInstructions:(NSArray *)instructions;
- (void)didUpdateRoutingLine:(ProximiioLeveledPolyline *)polyline;

@end
