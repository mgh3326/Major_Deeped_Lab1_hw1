#pragma once


// CFilterDlg dialog

class CFilterDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CFilterDlg)

public:
	CFilterDlg(CWnd* pParent = nullptr); // standard constructor
	virtual ~CFilterDlg();
private:
	CStatic m_EditFilterSize;

	int nFilterSize;
	int nFilterType;
protected:
	virtual void DoDataExchange(CDataExchange* pDX);

	DECLARE_MESSAGE_MAP()
public:
	int m_radio_Filtertype;
	afx_msg void OnOkbuttonClicked();
	afx_msg void OnCancelbuttonClicked();
	afx_msg void OnClickedRadio(UINT msg);

	int getFilterSize();
	int getFilterType();
	// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_FILTERDIALOG };
#endif

	//protected:
	//	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//
	//	DECLARE_MESSAGE_MAP()
};
