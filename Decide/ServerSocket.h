#pragma once

// CServerSocket ����Ŀ��

class CServerSocket : public CSocket
{
public:
	CServerSocket();
	virtual ~CServerSocket();
	virtual void OnAccept(int nErrorCode);
};


