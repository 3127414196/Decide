#pragma once


// CLinkDlg �Ի���

class CLinkDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CLinkDlg)

public:
	CLinkDlg(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CLinkDlg();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_LINKDLG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	DWORD localIP;
	DWORD groupIP;
	UINT localPort;
	UINT groupPort;
	afx_msg void OnBnClickedOk();
};
