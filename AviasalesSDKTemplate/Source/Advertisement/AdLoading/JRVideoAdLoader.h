//
//  JRVideoAdLoader.h
//
//  Copyright 2016 Go Travel Un Limited
//  This code is distributed under the terms and conditions of the MIT license.
//

#import <Foundation/Foundation.h>

@class APDMediaView, APDNativeAd;

@interface JRVideoAdLoader : NSObject

@property (weak, nonatomic) UIViewController *rootViewController;
- (void)loadVideoAd:(void(^)(APDMediaView *, APDNativeAd *))callback;

@end
