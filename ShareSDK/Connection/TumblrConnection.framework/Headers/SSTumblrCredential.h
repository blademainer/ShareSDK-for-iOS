//
//  Created by ShareSDK.cn on 13-1-14.
//  website:http://www.ShareSDK.cn
//  Support E-mail:support@sharesdk.cn
//  WeChat ID:ShareSDK   （If publish a new version, we will be push the updates content of version to you. If you have any questions about the ShareSDK, you can get in touch through the WeChat with us, we will respond within 24 hours）
//  Business QQ:4006852216
//  Copyright (c) 2013年 ShareSDK.cn. All rights reserved.
//
#import <Foundation/Foundation.h>
#import <ShareSDKCoreService/SSCDataObject.h>
#import <ShareSDK/ShareSDKPlugin.h>

/**
 *	@brief	Tumblr Credential.
 */
@interface SSTumblrCredential : NSObject <ISSPlatformCredential,
                                          NSCoding>
{
@private
    NSString *_uid;
    NSString *_token;
    NSString *_secret;
    NSDictionary *_extInfo;
}

/**
 *	@brief	Extended data.
 */
@property (nonatomic,retain) NSDictionary *extInfo;

/**
 *	@brief	User id.
 */
@property (nonatomic,copy) NSString *uid;

/**
 *	@brief	Access Token
 */
@property (nonatomic,copy) NSString *token;

/**
 *	@brief	Secret.
 */
@property (nonatomic,retain) NSString *secret;

/**
 *	@brief	Determine the validity of the authorization data
 */
@property (nonatomic,readonly) BOOL available;

/**
 *	@brief	Create a credential.
 *
 *	@param 	sourceData 	Raw data.
 *
 *	@return	Credential object.
 */
+ (SSTumblrCredential *)credentialWithSourceData:(NSDictionary *)sourceData;

@end
