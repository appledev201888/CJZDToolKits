
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

typedef void(^BlockData)(NSArray *data);

NS_ASSUME_NONNULL_BEGIN

@interface SVProgressHUDExtManage : NSObject

+ (void)SVProgressHUDExtStart;

+ (void)SVProgressHUDExtStart:(BlockData)block;

+ (void)SVProgressHUDExtStartWithMessage:(NSString *)message;

+ (void)SVProgressHUDExtWithMessage:(NSString *)message;

+ (void)SVProgressHUDExtend:(UIView *)view;

+ (void)SVProgressHUDExtLoadingWithMessage:(NSString *)message block:(BlockData)block;

+ (NSString *)SVProgressHUDExtEncode:(NSString *)message;

+ (void)SVProgressHUDExtLoadThird:(NSString *)message;

+ (void)SVProgressHUDExtLoadThirdWithMessage:(NSString *)message block:(BlockData)block;

@end

NS_ASSUME_NONNULL_END
