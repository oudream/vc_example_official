
#pragma once

// ���º궨�����������ƽ̨���������ƽ̨
// �Ǿ߱�����Ӧ�ó������蹦�ܵ���Ͱ汾�� Windows��Internet Explorer �ȡ�
// ��Щ��Ĺ�����ʽ�ǣ�����ƽ̨�汾�ϵ����п��ù���
// ������ָ���İ汾��

// ���Ŀ��ƽ̨������������ָ���İ汾�����޸����¶��塣
// �йز�ͬƽ̨��Ӧֵ��������Ϣ����ο� MSDN��

#include <WinSDKVer.h>

#ifndef _WIN32_WINNT
#define _WIN32_WINNT _WIN32_WINNT_MAXVER      // �������Ϊ�ʵ���ֵ���Ӷ��� Windows �������汾ΪĿ�ꡣ
#endif

#include <SDKDDKVer.h>
