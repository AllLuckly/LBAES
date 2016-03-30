//
//  NSString+AES.h
//  AES_256
//
//  Created by Mac Mini 10.10 on 16/3/30.
//  Copyright © 2016年 Bison. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "NSData+AES.h"

@interface NSString (AES)

//加密
- (NSString *) AES256_Encrypt:(NSString *)key;

//解密
- (NSString *) AES256_Decrypt:(NSString *)key;

@end
