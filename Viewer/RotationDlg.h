#pragma once


// CRotationDlg dialog

class CRotationDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CRotationDlg)

public:
	CRotationDlg(CWnd* pParent = nullptr); // standard constructor
	virtual ~CRotationDlg();
private:
	CStatic m_EditRoateAngle;

	int nAngle;
	int nInterpolationType;

	// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_IMGROTATIONDLG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX); // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	int m_radio_interp;
	afx_msg void OnBnClickedOk();
	afx_msg void OnRadioClicked(UINT msg);

	int GetAngle();
	int GetInterpolationType();
};
