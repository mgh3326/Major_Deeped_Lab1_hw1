#pragma once
#include "RawInfoDlg.h"
#include "ViewerDlg.h"

// CPSNRDlg dialog

class CPSNRDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CPSNRDlg)
private:
	unsigned char** Ori, **Dst;
	int nHeight_Ori, nWidth_Ori;
	int nHeight_Dst, nWidth_Dst;

	CEdit Edit_File_Ori, Edit_File_Dst, Edit_PSNR;
	double GetPSNR(unsigned char** Ori, unsigned char** Dst, int nHeight, int nWidth);


public:
	CPSNRDlg(CWnd* pParent = nullptr);   // standard constructor
	virtual ~CPSNRDlg();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_PSNRDIALOG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnOriopenButtonClicked();
	afx_msg void OnNoiseopenButtonClicked();
	afx_msg void OnGetpsnrButtonClicked();
	afx_msg void OnBnClickedClose();
};
