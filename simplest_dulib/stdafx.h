#pragma once
#pragma once

//���ڴ˴����ϵͳͷ�ļ�
#include <windows.h>   //���windowsͷ�ļ�  windows���


//���dulibͷ�ļ������ö�Ӧ�汾��lib�ļ�

#include <UIlib.h>     //���﹤����Ҫ��������ļ�����Ŀ¼���ڹ�������VC++Ŀ¼
using namespace DuiLib;
//32λ����
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

//64λ����
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