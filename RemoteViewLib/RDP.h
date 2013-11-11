#pragma once
class CRDP
{
public:
	CRDP(void);
	~CRDP(void);
	// RDP数据发送
	int Send(void);
	// RDP数据接收
	int Recive(void);
};

