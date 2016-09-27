#pragma once
#pragma once

//请在此处添加系统头文件
#include <windows.h>   //添加windows头文件  windows编程


//添加dulib头文件，引用对应版本的lib文件

#include <UIlib.h>     //这里工程需要包含这个文件所在目录，在工程属性VC++目录
using namespace DuiLib;
//32位工程
#ifdef _DEBUG
#   ifdef _UNICODE
#       pragma comment(lib, "DuiLib_ud_32.lib")
#   else
#       pragma comment(lib, "DuiLib_d_32.lib")
#   endif
#else
#   ifdef _UNICODE
#       pragma comment(lib, "DuiLib_u_32.lib")
#   else
#       pragma comment(lib, "DuiLib_32.lib")
#   endif
#endif

//64位工程
//#ifdef _DEBUG
//#   ifdef _UNICODE
//#       pragma comment(lib, "DuiLib_ud_64.lib")
//#   else
//#       pragma comment(lib, "DuiLib_d_64.lib")
//#   endif
//#else
//#   ifdef _UNICODE
//#       pragma comment(lib, "DuiLib_u_64.lib")
//#   else
//#       pragma comment(lib, "DuiLib_64.lib")
//#   endif
//#endif


#include "MainFrame.h"