// ImgScalingDlg.cpp : implementation file
//

#include "stdafx.h"
#include "Viewer.h"
#include "ImgScalingDlg.h"
#include "afxdialogex.h"


// CImgScalingDlg dialog

IMPLEMENT_DYNAMIC(CImgScalingDlg, CDialogEx)

CImgScalingDlg::CImgScalingDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_IMGSCALEDIALOG, pParent)
	, m_radio_interp(0)
{
}

CImgScalingDlg::~CImgScalingDlg()
{
}

void CImgScalingDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_EDIT_SCALERATE, m_EditSCaleRate);
	DDX_Radio(pDX, IDC_RADIO_BININEARS_S, m_radio_interp);
}


BEGIN_MESSAGE_MAP(CImgScalingDlg, CDialogEx)
	ON_BN_CLICKED(IDOK, &CImgScalingDlg::OnBnClickedOk)
	ON_CONTROL_RANGE(BN_CLICKED, IDC_RADIO_BININEARS_S, IDC_RADIO_BICUBIC_S, OnRadioClicked)
END_MESSAGE_MAP()


// CImgScalingDlg message handlers


void CImgScalingDlg::OnBnClickedOk()
{
	CString cstrTemp;

	// TODO: Add your control notification handler code here
	m_EditSCaleRate.GetWindowTextA(cstrTemp);
	dScaleRate = atof(cstrTemp);
	CDialogEx::OnOK();
}

void CImgScalingDlg::OnRadioClicked(UINT msg)
{
	UpdateData(TRUE);
	switch (m_radio_interp)
	{
	case 0:
		nInterpolationType = 0;
		break;
	case 1:
		nInterpolationType = 1;
		break;
	}
}

double CImgScalingDlg::GetScaleRate() { return dScaleRate; };
int CImgScalingDlg::GetInterpType() { return nInterpolationType; };
