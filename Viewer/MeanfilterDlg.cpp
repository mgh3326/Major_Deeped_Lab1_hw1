// MeanfilterDlg.cpp : implementation file
//

#include "stdafx.h"
#include "Viewer.h"
#include "MeanfilterDlg.h"
#include "afxdialogex.h"


// CMeanfilterDlg dialog

IMPLEMENT_DYNAMIC(CMeanfilterDlg, CDialogEx)

CMeanfilterDlg::CMeanfilterDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_MEANFILTERDIALOG, pParent)
{

}

CMeanfilterDlg::~CMeanfilterDlg()
{
}

void CMeanfilterDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_EDIT_MF_FILTERSIZE, Edit_FilterSize);
	DDX_Control(pDX, IDC_EDIT_Q, Edit_Q);
	DDX_Radio(pDX, IDC_RADIO_ARITHMETIC, m_radio_mf);
}


BEGIN_MESSAGE_MAP(CMeanfilterDlg, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON_OK_MF, &CMeanfilterDlg::OnOkMfButtonClicked)
	ON_CONTROL_RANGE(BN_CLICKED, IDC_RADIO_ARITHMETIC, IDC_RADIO_CONTRA, &CMeanfilterDlg::OnRadioClicked)
END_MESSAGE_MAP()


// CMeanfilterDlg message handlers

void CMeanfilterDlg::OnOkMfButtonClicked()
{
	CString strTemp1, strTemp2;

	Edit_FilterSize.GetWindowTextA(strTemp1);
	Edit_Q.GetWindowTextA(strTemp2);

	nFilterSize = atoi(strTemp1);
	Q = atoi(strTemp2);

	CDialog::OnOK();
}

void CMeanfilterDlg::OnRadioClicked(UINT msg)
{
	UpdateData(TRUE);
	nMeanFilterType = 0;
	switch (m_radio_mf)
	{
	case 0:
		nMeanFilterType = 0;
		break;
	case 1:
		nMeanFilterType = 1;
		break;
	case 2:
		nMeanFilterType = 2;
		break;
	case 3:
		nMeanFilterType = 3;
		break;
	}
}

int CMeanfilterDlg::GetFilterSize() { return nFilterSize; }
int CMeanfilterDlg::GetMeanFilterType() { return nMeanFilterType; }
int CMeanfilterDlg::GetQ() { return Q; }

// CMeanfilterDlg 메시지 처리기입니다.
void CMeanfilterDlg::OnBnClickedButtonOkMf()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	CString strTemp1, strTemp2;

	Edit_FilterSize.GetWindowTextA(strTemp1);
	Edit_Q.GetWindowTextA(strTemp2);

	nFilterSize = atoi(strTemp1);
	Q = atoi(strTemp2);

	CDialog::OnOK();
}

