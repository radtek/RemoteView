// RemoteViewLib.cpp : ���� DLL Ӧ�ó���ĵ���������
//

#include "stdafx.h"
#include "RemoteViewLib.h"


// ���ǵ���������һ��ʾ��
REMOTEVIEWLIB_API int nRemoteViewLib=0;

// ���ǵ���������һ��ʾ����
REMOTEVIEWLIB_API int fnRemoteViewLib(void)
{
	return 42;
}

// �����ѵ�����Ĺ��캯����
// �й��ඨ�����Ϣ������� RemoteViewLib.h
CRemoteViewLib::CRemoteViewLib()
{
	return;
}


//int CRemoteViewLib::RD(void)
//{
//	return 0;
//}
