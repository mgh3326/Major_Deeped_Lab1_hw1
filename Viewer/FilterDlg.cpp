// FilterDlg.cpp : implementation file
//

#include "stdafx.h"
#include "Viewer.h"
#include "FilterDlg.h"
#include "afxdialogex.h"


// CFilterDlg dialog

IMPLEMENT_DYNAMIC(CFilterDlg, CDialogEx)

CFilterDlg::CFilterDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_FILTERDIALOG, pParent)
{
}

CFilterDlg::~CFilterDlg()
{
}

void CFilterDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Radio(pDX, IDC_AVERAGEFILTERRADIO, m_radio_Filtertype);
	DDX_Control(pDX, IDC_EDIT_FILTERSIZE, m_EditFilterSize);
}


BEGIN_MESSAGE_MAP(CFilterDlg, CDialogEx)
	ON_BN_CLICKED(IDOK, &CFilterDlg::OnOkbuttonClicked)
	ON_BN_CLICKED(IDCANCEL, &CFilterDlg::OnCancelbuttonClicked)
	ON_CONTROL_RANGE(BN_CLICKED, IDC_SMOOTHFILTERRADIO, IDC_GAUSSIANFILTERRADIO, OnClickedRadio)
	//뭐지  IDC_AVERAGEFILTERRADIO
END_MESSAGE_MAP()


// CFilterDlg message handlers

void CFilterDlg::OnOkbuttonClicked()
{
	CString cstrTemp;
	m_EditFilterSize.GetWindowTextA(cstrTemp);
	nFilterSize = atoi(cstrTemp);

	CDialog::OnOK();
}

void CFilterDlg::OnCancelbuttonClicked()
{
	CDialog::OnCancel();
}

void CFilterDlg::OnClickedRadio(UINT msg)
{
	UpdateData(TRUE);
	switch (m_radio_Filtertype)
	{
	case 0:
		nFilterType = 0;
		break;
	case 1:
		nFilterType = 1;
		break;
	case 2:
		nFilterType = 2;
		break;
	case 3:
		nFilterType = 3;
		break;
	}
}

int CFilterDlg::getFilterSize() { return nFilterSize; }
int CFilterDlg::getFilterType() { return nFilterType; }

