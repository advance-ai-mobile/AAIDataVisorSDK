//
//  AAIDataVisorOC.h
//  AAIDataVisor
//
//  Created by loong on 2026/1/15.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface AAIDataVisorCore : NSObject

+ (void)setCustomDomain:(NSString *)domain;

+ (BOOL)initTokenWith:(NSString *)accessKey
                  accessSecret:(NSString *)accessSecret
                      userData:(nullable NSDictionary<NSString *, id> *)userData
                        result:(void (^)(NSString * _Nullable, NSInteger))result;

+ (NSString *)sdkVersion;

@end

NS_ASSUME_NONNULL_END
