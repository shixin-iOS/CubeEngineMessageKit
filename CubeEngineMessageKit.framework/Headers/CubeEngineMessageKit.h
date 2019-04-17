//
//  CubeEngineMessageKit.h
//  CubeEngineMessageKit
//
//  Created by jianchengpan on 2019/3/22.
//  Copyright © 2019 CubeTeam. All rights reserved.
//

#import <UIKit/UIKit.h>

//! Project version number for CubeEngineMessageKit.
FOUNDATION_EXPORT double CubeEngineMessageKitVersionNumber;

//! Project version string for CubeEngineMessageKit.
FOUNDATION_EXPORT const unsigned char CubeEngineMessageKitVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <CubeEngineMessageKit/PublicHeader.h>

//dependence
#import <CubeEngineFoundationKit/CubeEngineFoundationKit.h>

// messsages
#import <CubeEngineMessageKit/CubeMessageEntity.h>
#import <CubeEngineMessageKit/CubeTextMessage.h>
#import <CubeEngineMessageKit/CubeFileMessage.h>
#import <CubeEngineMessageKit/CubeImageMessage.h>
#import <CubeEngineMessageKit/CubeVoiceClipMessage.h>
#import <CubeEngineMessageKit/CubeVideoClipMessage.h>
#import <CubeEngineMessageKit/CubeCustomMessage.h>
#import <CubeEngineMessageKit/CubeCardContent.h>
#import <CubeEngineMessageKit/CubeCardMessage.h>
#import <CubeEngineMessageKit/CubeReplyMessage.h>
#import <CubeEngineMessageKit/CubeHistoryMessage.h>
#import <CubeEngineMessageKit/CubeWhiteBoardMessage.h>
#import <CubeEngineMessageKit/CubeWhiteBoardClipMessage.h>
#import <CubeEngineMessageKit/CubeRichContentMessage.h>
#import <CubeEngineMessageKit/CubeLocationMessage.h>
#import <CubeEngineMessageKit/CubeReceiptMessage.h>

//utils
#import <CubeEngineMessageKit/CubeMessageUtil.h>

//enum
#import <CubeEngineMessageKit/CubeMessageType.h>
#import <CubeEngineMessageKit/CubeMessageStatus.h>
#import <CubeEngineMessageKit/CubeMessageDirection.h>
#import <CubeEngineMessageKit/CubeMessageAttachmentType.h>
