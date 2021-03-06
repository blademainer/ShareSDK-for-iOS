//
//  Created by ShareSDK.cn on 13-1-14.
//  website:http://www.ShareSDK.cn
//  Support E-mail:support@sharesdk.cn
//  WeChat ID:ShareSDK   （If publish a new version, we will be push the updates content of version to you. If you have any questions about the ShareSDK, you can get in touch through the WeChat with us, we will respond within 24 hours）
//  Business QQ:4006852216
//  Copyright (c) 2013年 ShareSDK.cn. All rights reserved.
//
#import <Foundation/Foundation.h>

/**
 *	@brief	Education Reader.
 */
@interface SSTencentWeiboEduReader : NSObject
{
@private
    NSDictionary *_sourceData;
}

/**
 *	@brief	Raw data.
 */
@property (nonatomic,readonly) NSDictionary *sourceData;

/**
 *	@brief	Department id.
 */
@property (nonatomic,readonly) NSInteger departmentid;

/**
 *	@brief	Education id.
 */
@property (nonatomic,readonly) NSInteger Id;

/**
 *	@brief	level.
 */
@property (nonatomic,readonly) NSInteger level;

/**
 *	@brief	School id.
 */
@property (nonatomic,readonly) NSInteger schoolid;

/**
 *	@brief	Year.
 */
@property (nonatomic,readonly) NSInteger year;

/**
 *	@brief	Initialize reader.
 *
 *	@param 	sourceData 	Raw data.
 *
 *	@return	Reader object.
 */
- (id)initWithSourceData:(NSDictionary *)sourceData;

/**
 *	@brief	Create an education Reader.
 *
 *	@param 	sourceData 	Raw data.
 *
 *	@return	Reader object.
 */
+ (SSTencentWeiboEduReader *)readerWithSourceData:(NSDictionary *)sourceData;

@end
