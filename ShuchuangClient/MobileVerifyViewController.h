//
//  MobileVerifyViewController.h
//  ShuchuangClient
//
//  Created by 黄建 on 1/6/16.
//  Copyright © 2016 Shuchuang Tech. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MobileVerifyViewController : UIViewController <UITextFieldDelegate>
@property (weak, nonatomic) NSString *phoneNumber;
@property (nonatomic) BOOL registerNewUser;
@end