//
//  WechatGrop.h
//  DaJiaBaoMall
//
//  Created by 大家保 on 2017/4/15.
//  Copyright © 2017年 大家保. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface WechatGrop : NSObject
//id
@property (nonatomic,assign) NSInteger uId;
//群二维码图片
@property (nonatomic,copy) NSString *images;
//群主号
@property (nonatomic,copy) NSString *name;
//标题
@property (nonatomic,copy) NSString *title;



@end
