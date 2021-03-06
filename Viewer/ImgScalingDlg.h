#pragma once


// CImgScalingDlg dialog

class CImgScalingDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CImgScalingDlg)

public:
	CImgScalingDlg(CWnd* pParent = nullptr); // standard constructor
	virtual ~CImgScalingDlg();

	// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_IMGSCALEDIALOG };
#endif
private:
	CStatic m_EditSCaleRate;

	double dScaleRate;
	int nInterpolationType;

protected:
	virtual void DoDataExchange(CDataExchange* pDX); // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	int m_radio_interp;
	afx_msg void OnBnClickedOk();
	afx_msg void OnRadioClicked(UINT msg);

	double GetScaleRate();
	int GetInterpType();
};
