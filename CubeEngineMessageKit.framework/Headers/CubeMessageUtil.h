//
//  CubeMessageUtil.h
//  CubeEngineMessageKit
//
//  Created by jianchengpan on 2018/5/14.
//  Copyright © 2018年 CubeTeam. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CubeEngineMessageKit/CubeMessageType.h>
#import <CubeEngineMessageKit/CubeMessageStatus.h>

@interface CubeMessageUtil : NSObject

#pragma mark - SN

/**
 生成一个SN
 
 @return SN
 */
+(long long)generateSN;

#pragma mark - type

/**
 消息类型转字符串

 @param type 类型枚举
 @return 类型字符串
 */
+(NSString *)messageTypeToString:(CubeMessageType)type;

/**
 字符串转消息类型

 @param typeString 类型字符串
 @return 类型枚举
 */
+(CubeMessageType)messageTypeFromString:(NSString *)typeString;

/**
 获取消息类型对应的类

 @param type 消息类型
 @return 消息对应的类
 */
+(Class)messageClassForType:(CubeMessageType)type;

#pragma mark - state

/**
 消息状态转字符串

 @param messageStatus 消息状态
 @return 状态字符串
 */
+(NSString *)messageStatusToSting:(CubeMessageStatus)messageStatus;

@end
