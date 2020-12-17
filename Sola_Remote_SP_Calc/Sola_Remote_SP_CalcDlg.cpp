
// Sola_Remote_SP_CalcDlg.cpp : implementation file
//

#include "pch.h"
#include "framework.h"
#include "Sola_Remote_SP_Calc.h"
#include "Sola_Remote_SP_CalcDlg.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CAboutDlg dialog used for App About

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ABOUTBOX };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

// Implementation
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(IDD_ABOUTBOX)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()


// CSolaRemoteSPCalcDlg dialog



CSolaRemoteSPCalcDlg::CSolaRemoteSPCalcDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_SOLA_REMOTE_SP_CALC_DIALOG, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CSolaRemoteSPCalcDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_RADIO1, m_btn_Radio01);
	DDX_Control(pDX, IDC_RADIO2, m_btn_Radio02);
	DDX_Control(pDX, IDC_EDIT1, m_Edit01);
	CString ss;
	m_Edit01.GetWindowTextW(ss);
	double xx = _wtof(ss);
	DDV_MinMaxDouble(pDX, xx, 60.0L, 190.0L);
	DDX_Control(pDX, IDC_EDIT2, m_Edit02);
	m_Edit02.GetWindowTextW(ss);
	xx = _wtof(ss);
	DDV_MinMaxDouble(pDX, xx, 60.0L, 190.0L);
	DDX_Control(pDX, IDC_EDIT3, m_Edit03);
	m_Edit03.GetWindowTextW(ss);
	xx = _wtof(ss);
	DDV_MinMaxDouble(pDX, xx, 60.0L, 190.0L);
	DDX_Control(pDX, IDC_EDIT4, m_Edit04);
	m_Edit04.GetWindowTextW(ss);
	xx = _wtof(ss);
	DDV_MinMaxDouble(pDX, xx, 60.0L, 190.0L);
}

BEGIN_MESSAGE_MAP(CSolaRemoteSPCalcDlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON1, &CSolaRemoteSPCalcDlg::OnBnClickedButton1)
END_MESSAGE_MAP()


// CSolaRemoteSPCalcDlg message handlers

BOOL CSolaRemoteSPCalcDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// Add "About..." menu item to system menu.

	// IDM_ABOUTBOX must be in the system command range.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != nullptr)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon

	// TODO: Add extra initialization here
	m_btn_Radio01.SetCheck(TRUE);
	m_Edit01.SetWindowTextW(_T("60.0"));
	m_Edit02.SetWindowTextW(_T("190.0"));
	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CSolaRemoteSPCalcDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CSolaRemoteSPCalcDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

// The system calls this function to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CSolaRemoteSPCalcDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void CSolaRemoteSPCalcDlg::OnBnClickedButton1()
{
	// TODO: Add your control notification handler code here
	this->UpdateData(TRUE);
}
