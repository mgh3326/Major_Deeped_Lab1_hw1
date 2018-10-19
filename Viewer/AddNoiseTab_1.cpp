// AddNoiseTab_1.cpp : implementation file
//

#include "stdafx.h"
#include "Viewer.h"
#include "AddNoiseTab_1.h"
#include "afxdialogex.h"


// CAddNoiseTab_1 dialog

IMPLEMENT_DYNAMIC(CAddNoiseTab_1, CDialogEx)

CAddNoiseTab_1::CAddNoiseTab_1(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_ADDNOISE_TAB1, pParent)
{
}

CAddNoiseTab_1::~CAddNoiseTab_1()
{
}

void CAddNoiseTab_1::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_EDIT_GNMEAN, Edit_GN_Mean);
	DDX_Control(pDX, IDC_EDIT_GNSTDEV, Edit_GN_Stdev); //왜 여기서 뜨지
}


BEGIN_MESSAGE_MAP(CAddNoiseTab_1, CDialogEx)
END_MESSAGE_MAP()


// CAddNoiseTab_1 message handlers
