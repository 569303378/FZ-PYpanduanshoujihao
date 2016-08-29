//
//  NSString+SayHi.h
//  LessonCategory
//
//  Created by lanouhn on 16/1/11.
//  Copyright (c) 2016年 lanouhn. All rights reserved.
//

#import <Foundation/Foundation.h>
//Category(分类 类目):为没有源代码的类扩充方法,并且只能扩充方法
//一旦方法添加之后,这些方法就是该类自己的方法,由该类或者该类对象调用即可(需要在其他文件中导入Category)
//扩充方法,可以继承
@interface NSString (SayHi)


//练习:添加获取字符串首字母的方法,如果不是大写,改成大写
- (NSString *)getFirstLetter;
//:添加获取字符串尾字母的方法,如果不是小写,改成小写
- (NSString *)getLastLetter;

//邮箱
+ (BOOL) validateEmail:(NSString *)email;

//手机号码验证
+ (BOOL) validateMobile:(NSString *)mobile;

//车牌号验证
+ (BOOL) validateCarNo:(NSString *)carNo;

//车型
+ (BOOL) validateCarType:(NSString *)CarType;

//昵称
+ (BOOL) validateNickname:(NSString *)nickname;

//身份证号
+ (BOOL) validateIdentityCard: (NSString *)identityCard;

//用户名
+ (BOOL) validateUserName:(NSString *)name;

//密码
+ (BOOL) validatePassword:(NSString *)passWord;
@end




