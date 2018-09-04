// RawInfoDlg.cpp : implementation file
//

#include "stdafx.h"
#include "Viewer.h"
#include "RawInfoDlg.h"
#include "afxdialogex.h"


// CRawInfoDlg dialog

IMPLEMENT_DYNAMIC(CRawInfoDlg, CDialogEx)

CRawInfoDlg::CRawInfoDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_RAWINFODIALOG, pParent)
	, m_radio_rawFileInfo(0)
{

}

CRawInfoDlg::~CRawInfoDlg()
{
}

void CRawInfoDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Radio(pDX, IDC_RADIO_GRAYFORMAT, m_radio_rawFileInfo);
}


BEGIN_MESSAGE_MAP(CRawInfoDlg, CDialogEx)
	
	ON_BN_CLICKED(IDOK, &CRawInfoDlg::OnBnClickedOk)
END_MESSAGE_MAP()


// CRawInfoDlg message handlers


void CRawInfoDlg::OnBnClickedOk()
{
	// TODO: Add your control notification handler code here
	CDialogEx::OnOK();
}
