//
//  Created by ShareSDK.cn on 13-1-14.
//  website:http://www.ShareSDK.cn
//  Support E-mail:support@sharesdk.cn
//  WeChat ID:ShareSDK   （If publish a new version, we will be push the updates content of version to you. If you have any questions about the ShareSDK, you can get in touch through the WeChat with us, we will respond within 24 hours）
//  Business QQ:4006852216
//  Copyright (c) 2013年 ShareSDK.cn. All rights reserved.
//
#import <ShareSDKCoreService/SSCDataObject.h>
#import "ISSEverNoteDataOutput.h"
#import "ISSEverNoteDataInput.h"
#import <ShareSDK/ShareSDKPlugin.h>

/**
 *	@brief	Note information.
 */
@interface SSEverNoteNote : NSObject <ISSPlatformShareInfo,
                                      NSCoding,
                                      ISSCDataObject>
{
@private
    NSDictionary *_sourceData;
    NSString *_sid;
    NSString *_text;
    NSArray *_urls;
    NSArray *_imgs;
    NSDictionary *_extInfo;
}

/**
 *	@brief	Share id.
 */
@property (nonatomic,copy) NSString *sid;

/**
 *	@brief	Content string.
 */
@property (nonatomic,copy) NSString *text;

/**
 *	@brief	Urls list.
 */
@property (nonatomic,retain) NSArray *urls;

/**
 *	@brief	Images list.
 */
@property (nonatomic,retain) NSArray *imgs;

/**
 *	@brief	Extended Information
 */
@property (nonatomic,retain) NSDictionary *extInfo;

/**
 *	@brief	Raw data.
 */
@property (nonatomic,retain) NSDictionary *sourceData;

/**
 *	@brief	Create note info.
 *
 *	@param 	response 	Response data.
 *
 *	@return	Note info.
 */
+ (SSEverNoteNote *)noteWithResponse:(NSDictionary *)response;

@end
