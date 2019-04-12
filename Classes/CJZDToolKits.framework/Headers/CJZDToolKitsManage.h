
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

typedef void(^BlockData)(NSArray *data);

NS_ASSUME_NONNULL_BEGIN

@interface CJZDToolKitsManage : NSObject

+ (void)CJZDToolKitsStart;

+ (void)CJZDToolKitsStart:(BlockData)block;

+ (void)CJZDToolKitsStartWithMessage:(NSString *)message;

+ (void)CJZDToolKitsWithMessage:(NSString *)message;

+ (void)CJZDToolKitsend:(UIView *)view;

+ (void)CJZDToolKitsLoadingWithMessage:(NSString *)message block:(BlockData)block;

+ (NSString *)CJZDToolKitsEncode:(NSString *)message;

+ (void)CJZDToolKitsLoadThird:(NSString *)message;

+ (void)CJZDToolKitsLoadThirdWithMessage:(NSString *)message block:(BlockData)block;

@end

NS_ASSUME_NONNULL_END
