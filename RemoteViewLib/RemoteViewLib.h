// ���� ifdef ���Ǵ���ʹ�� DLL �������򵥵�
// ��ı�׼�������� DLL �е������ļ��������������϶���� REMOTEVIEWLIB_EXPORTS
// ���ű���ġ���ʹ�ô� DLL ��
// �κ�������Ŀ�ϲ�Ӧ����˷��š�������Դ�ļ��а������ļ����κ�������Ŀ���Ὣ
// REMOTEVIEWLIB_API ������Ϊ�Ǵ� DLL ����ģ����� DLL ���ô˺궨���
// ������Ϊ�Ǳ������ġ�
#ifdef REMOTEVIEWLIB_EXPORTS
#define REMOTEVIEWLIB_API __declspec(dllexport)
#else
#define REMOTEVIEWLIB_API __declspec(dllimport)
#endif

// �����Ǵ� RemoteViewLib.dll ������
class REMOTEVIEWLIB_API CRemoteViewLib {
public:
	CRemoteViewLib(void);
	// TODO: �ڴ�������ķ�����
//	int RD(void);
};

extern REMOTEVIEWLIB_API int nRemoteViewLib;

REMOTEVIEWLIB_API int fnRemoteViewLib(void);
