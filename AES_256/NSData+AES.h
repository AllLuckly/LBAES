//
//  NSData+AES.h
//  AES_256
//
//  Created by Mac Mini 10.10 on 16/3/30.
//  Copyright © 2016年 Bison. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CommonCrypto/CommonDigest.h>
#import <CommonCrypto/CommonCryptor.h>

@interface NSData (AES)

//加密
- (NSData *) AES256_Encrypt:(NSString *)key;

//解密
- (NSData *) AES256_Decrypt:(NSString *)key;

//追加64编码
- (NSString *)newStringInBase64FromData;

//同上64编码
+ (NSString*)base64encode:(NSString*)str;


@end
