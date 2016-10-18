//
//  PECaptureReceiptViewController.h
//  PurchEaseKit
//
//  Created by Ludovic Galabru on 4/16/12.
//  Copyright (c) 2012 Skerou. All rights reserved.
//

#import <UIKit/UIKit.h>

@class PECaptureReceiptViewController;

@protocol PECaptureReceiptViewControllerDelegate

/**
 This callback is triggered when the controller close after shooting a receipt.
 
 @param controller The controller which trigger the callback
 
 @param receiptUUID The newly created receipt universal unique identifier. This identifier will be used by the PurchEase's server to communicate with the host application's server about the receipt.
 */
- (void)controller:(PECaptureReceiptViewController *)controller didCloseAfterCreatingReceiptWithUUID:(NSString *)receiptUUID;

@end

@interface PECaptureReceiptViewController : UINavigationController

/**
 The object which will receive the newly created receipt UUID after shooting
 */
@property (weak, nonatomic) id receiptCreationDelegate;

/**
 Initialize the controller with an array of EANs.
 
 @param eans Those EANs will be transmitted to PurchEase's server in order to specify which products we are looking for on the receipt.
 */
- (id)initWithEANs:(NSArray<NSString *> *)eans;

@end
