//
//  PEPurchEaseKit.h
//  PEPurchEaseKit
//
//  Created by Cyril's Mac on 26/09/16.
//  Copyright © 2016 PurchEase. All rights reserved.
//


#ifndef PurchEaseKit_PurchEaseKit_h
#define PurchEaseKit_PurchEaseKit_h

/**
 ** API Client
 ** Used to identify the host application and to authenticate user
 */

#import "PEAPIClient.h"

/**
 ** Controllers
 **
 ** PECaptureReceiptViewController
 ** Used to launch the Shooter in order to capture receipts and send pictures to PurchEase's server
 */

#import "PECaptureReceiptViewController.h"

/**
 ** Notifications by chronological order
 ** Used to catch events about the receipt upload
 **
 ** Notifications can embed parameters in their userInfo property
 ** All of them have at least the receipt-UUID in their userInfo (accessible with [notification.userInfo objectForKey:RECEIPT_UUID_KEY]), but some of them have other information
 */

/**
 ** Here are the different keys used to access the notification parameters :
 */

// Param (NSString *) : The receipt's UUID which the notification is about
#define RECEIPT_UUID_KEY @"receipt_uuid"

// Param (NSNumber *) : Give the index of the subpicture which the notification is about (indexes start from 1)
#define SUBPICTURE_INDEX_KEY @"subpicture_id"

// Param (NSError *) : Given for error notifications
#define ERROR_KEY @"error"

/**
 ** Posted when the Shooter (PECaptureReceiptViewController) appears
 ** Params : RECEIPT_UUID_KEY
 */
extern NSString * const PECaptureDidBegin;

/**
 ** Posted when the user is done shooting and choose to upload its receipt
 ** Params : RECEIPT_UUID_KEY
 */
extern NSString * const PEUserOrderedReceiptUpload;

/**
 ** Posted if the user quit the Shooter without sending any picture
 ** Params : RECEIPT_UUID_KEY
 */
extern NSString * const PEReceiptCaptureAborted;

/**
 ** Posted when the creation of the receipt on PurchEase's server succeeded
 ** Params : RECEIPT_UUID_KEY
 */
extern NSString * const PEReceiptCreationDidSucceed;

/**
 ** Posted when the creation of the receipt on PurchEase's server failed
 ** Params : RECEIPT_UUID_KEY, ERROR_KEY
 */
extern NSString * const PEReceiptCreationDidFail;

/**
 ** Posted when a receipt subpicture (not the last) have successfully uploaded
 ** Params : RECEIPT_UUID_KEY, SUBPICTURE_INDEX_KEY
 */
extern NSString * const PEReceiptSubpictureUploadDidSucceed;

/**
 ** Posted when the upload of a receipt subpicture failed
 ** Params : RECEIPT_UUID_KEY, SUBPICTURE_INDEX_KEY, ERROR_KEY
 */
extern NSString * const PEReceiptSubpictureUploadDidFail;

/**
 ** Posted when all receipt subpictures have successfully uploaded
 ** Params : RECEIPT_UUID_KEY
 */
extern NSString * const PEAllReceiptSubpicturesUploadDidSucceed;

#endif
