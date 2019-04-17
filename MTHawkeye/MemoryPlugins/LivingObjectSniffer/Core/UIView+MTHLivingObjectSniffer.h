//
// Copyright (c) 2008-present, Meitu, Inc.
// All rights reserved.
//
// This source code is licensed under the license found in the LICENSE file in
// the root directory of this source tree.
//
// Created on: 29/06/2017
// Created by: EuanC
//


#import <UIKit/UIKit.h>
#import "MTHLivingObjectShadow.h"

@interface UIView (MTHLivingObjectSniffer) <MTHLivingObjectShadowing>

+ (void)mthl_livingObjectSnifferSetup;

@end
