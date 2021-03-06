// OrderstatisticsDlg.cpp : implementation file
//

#include "stdafx.h"
#include "Viewer.h"
#include "OrderstatisticsDlg.h"
#include "afxdialogex.h"


// COrderstatisticsDlg dialog

IMPLEMENT_DYNAMIC(COrderstatisticsDlg, CDialogEx)

COrderstatisticsDlg::COrderstatisticsDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_ORDERSTATISTICSDIALOG, pParent)
{

}

COrderstatisticsDlg::~COrderstatisticsDlg()
{
}

void COrderstatisticsDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Radio(pDX, IDC_RADIO_MEDIANF, m_radio_osf);
	DDX_Control(pDX, IDC_EDIT_FILTERSIZE_OSF, Edit_FilterSize1);
	DDX_Control(pDX, IDC_EDIT_MAXFILTERSIZE_OSF, Edit_FilterSize2);
}


BEGIN_MESSAGE_MAP(COrderstatisticsDlg, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON_OK_OSF, &COrderstatisticsDlg::OnOkOsfButtonClicked)
	ON_CONTROL_RANGE(BN_CLICKED, IDC_RADIO_APAPTIVEMEDIANF, IDC_RADIO_MEDIANF, OnRadioClicked)

END_MESSAGE_MAP()


// COrderstatisticsDlg message handlers

void COrderstatisticsDlg::OnOkOsfButtonClicked()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	CString strTemp1, strTemp2;

	Edit_FilterSize1.GetWindowTextA(strTemp1);
	Edit_FilterSize2.GetWindowTextA(strTemp2);

	nFilterSize1 = atoi(strTemp1);
	nFilterSize2 = atoi(strTemp2);

	CDialogEx::OnOK();
}


void COrderstatisticsDlg::OnRadioClicked(UINT msg)
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.

	UpdateData(TRUE);
	switch (m_radio_osf)
	{
	case 0:

		nOSFType = 4;
		break;

	case 1:

		nOSFType = 5;
		break;
	}
	/*if (m_radio_osf == 0)	MessageBox("median");
	else if (m_radio_osf == 1)MessageBox("adpative");*/
}

int COrderstatisticsDlg::GetFilterSize1() { return nFilterSize1; }
int COrderstatisticsDlg::GetFilterSize2() { return nFilterSize2; }
int COrderstatisticsDlg::GetOSFType() { return nOSFType; }
// OrderstatisticsDlg.cpp : 구현 파일입니다.
//
