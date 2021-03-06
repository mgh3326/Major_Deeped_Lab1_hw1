#pragma once
#include "AddNoiseTab_1.h"
#include "AddNoiseTab_2.h"

// CAddNoiseDlg dialog

class CAddNoiseDlg : public CDialogEx
{
DECLARE_DYNAMIC(CAddNoiseDlg)

public:
	CAddNoiseDlg(CWnd* pParent = nullptr); // standard constructor
	virtual ~CAddNoiseDlg();

	// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ADDNOISEDIALOG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX); // DDX/DDV support

DECLARE_MESSAGE_MAP()
public:
	CTabCtrl m_mainTab;
private:
	CAddNoiseTab_1 Tab1;
	CAddNoiseTab_2 Tab2;

	CWnd* m_pwndShow;

	float value_1;
	float value_2;
	int NoiseType;
public:
	float GetVal_1();
	float GetVal_2();
	int GetNoiseType();
	BOOL OnInitDialog();
	//	afx_msg void OnTcnSelchangeTab1(NMHDR *pNMHDR, LRESULT *pResult);
	afx_msg void OnTcnSelchangeAddnoisetab(NMHDR* pNMHDR, LRESULT* pResult);
	afx_msg void OnOkAnButtonClicked();
};

