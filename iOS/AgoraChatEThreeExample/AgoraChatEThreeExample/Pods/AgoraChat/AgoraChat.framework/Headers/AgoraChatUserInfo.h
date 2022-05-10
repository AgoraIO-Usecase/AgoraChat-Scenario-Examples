//
//  AgoraChatUserInfo.h
//  libHyphenateSDK.a
//
//  Created by lixiaoming on 2021/3/17.
//  Copyright © 2021 easemob.com. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 *  \~chinese
 *  用户属性枚举类型。
 *
 *
 *  \~english
 *  The user information type.
 */
typedef NS_ENUM(NSInteger, AgoraChatUserInfoType) {
    AgoraChatUserInfoTypeNickName = 0, /** \~chinese 用户昵称。 *\~english The user nickname. */
    AgoraChatUserInfoTypeAvatarURL,    /** \~chinese 用户头像地址。  *\~english The user avatar address.*/
    AgoraChatUserInfoTypePhone,        /** \~chinese 用户联系方式。 *\~english The user contact. */
    AgoraChatUserInfoTypeMail,         /** \~chinese 用户邮箱地址。 *\~english The user email address. */
    AgoraChatUserInfoTypeGender,       /** \~chinese 用户性别。    *\~english The user gender. */
    AgoraChatUserInfoTypeSign,         /** \~chinese 用户签名。 *\~english The user signature. */
    AgoraChatUserInfoTypeBirth,        /** \~chinese 用户生日。 *\~english The user birthday. */
    AgoraChatUserInfoTypeExt = 100,    /** \~chinese 扩展字段。 *\~english The extension field. */
};
/**
 *  \~chinese
 *  用户属性信息。
 *
 *  \~english
 *  The userInfo class.
 */
@interface AgoraChatUserInfo : NSObject<NSCopying>

/**
 *  \~chinese 用户 ID。
 *
 *  \~english The user ID.
 */
@property (nonatomic,copy) NSString *userId;

/**
 *  \~chinese 用户昵称。
 *
 *  \~english The user's nickname.
 */
@property (nonatomic,copy) NSString *nickname;

/**
 *  \~chinese 用户头像地址。
 *
 *  \~english The user's avatar file uri.
 */
@property (nonatomic,copy) NSString *avatarUrl;

/**
 *  \~chinese 用户邮箱地址。
 *
 *  \~english The user's mail address.
 */
@property (nonatomic,copy) NSString *mail;

/**
 *  \~chinese 用户联系方式。
 *
 *  \~english The user's phone number.
 */
@property (nonatomic,copy) NSString *phone;

/**
 *  \~chinese 用户性别，0 为未设置。SDK 没有取值限制，你可以自己定义取值，例如指定 1：男；2：女。
 *
 *  \~english The user's gender. If you didn't set, the default value is 0.  For example you can set 1 for male and 2 for female.
 */
@property (nonatomic) NSInteger gender;

/**
 *  \~chinese 用户签名。
 *
 *  \~english The user's personal status.
 */
@property (nonatomic,copy) NSString* sign;

/**
 *  \~chinese 用户生日。
 *
 *  \~english The user's birth date.
 */
@property (nonatomic,copy) NSString* birth;

/**
 *  \~chinese 扩展字段。
 *
 *  \~english The extention information.
 */
@property (nonatomic,copy) NSString *ext;

#pragma mark - EM_DEPRECATED_IOS 3.8.8

/**
 *  \~chinese 用户昵称。
 *
 *  \~english The user's nickname.
 */
@property (nonatomic,copy) NSString *nickName
__deprecated_msg("Use nickname instead");

@end
