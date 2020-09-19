//
//  AIErrorCode.h
//  AiParkToC
//
//  Created by lanbiao on 2018/8/1.
//  Copyright © 2018年 lanbiao. All rights reserved.
//

#ifndef AIErrorCode_h
#define AIErrorCode_h

//接口请求成功的状态码
#define     AI_SUCCESS              0

/**********************************1-999之间是保留**********************************/
//网络请求超时
#define     AI_REQUEST_TIMEROUT             1

//定位错误,可能无网，可能未打开定位
#define     AI_LOCATION_ERROR               2

//未定义的错误
#define     AI_REQUEST_OTHER_ERROR          999
/**********************************1-999之间是保留**********************************/


/**********************************1000-1999之间是用户信息相关的错误***********************************/
#define     AI_ERROR_USERINFO               1000

/**********************************1000-1009之间是用户信息相关的错误***********************************/


/**********************************2000-2999之间是信息相关的错误***********************************/
#define     AI_ERROR_REQUEST_PARAM          2000
/**********************************2000-2009之间是信息相关的错误***********************************/


#endif /* AIErrorCode_h */