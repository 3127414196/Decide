#pragma once
#include "MSG.h"
// CClientSocket ����Ŀ��

class CClientSocket : public CSocket
{
public:
	CClientSocket();
	virtual ~CClientSocket();
	virtual void OnClose(int nErrorCode);
	virtual void OnReceive(int nErrorCode);
	BOOL SendMSG(LPSTR pBuff, MSGHEAD* msg);
};


