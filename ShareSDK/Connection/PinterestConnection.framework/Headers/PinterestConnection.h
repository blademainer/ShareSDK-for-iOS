//
//  Created by ShareSDK.cn on 13-1-14.
//  website:http://www.ShareSDK.cn
//  Support E-mail:support@sharesdk.cn
//  WeChat ID:ShareSDK   （If publish a new version, we will be push the updates content of version to you. If you have any questions about the ShareSDK, you can get in touch through the WeChat with us, we will respond within 24 hours）
//  Business QQ:4006852216
//  Copyright (c) 2013年 ShareSDK.cn. All rights reserved.
//
#import <UIKit/UIKit.h>
#import "ISSPinterestApp.h"
#import <ShareSDK/ShareSDKPlugin.h>

/**
 *	@brief	Pinterest Connection.
 */
@interface PinterestConnection : NSObject <ISSPlatform>

/**
 *	@brief	Create an app configuration information.
 *
 *	@param 	clientId 	Client id.
 *
 *	@return	App configuration information.
 */
- (NSDictionary *)appInfoWithClientId:(NSString *)clientId;


@end
