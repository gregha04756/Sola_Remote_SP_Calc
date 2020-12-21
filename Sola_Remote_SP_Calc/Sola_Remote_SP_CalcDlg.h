
// Sola_Remote_SP_CalcDlg.h : header file
//

#pragma once

#include "NumericEdit.h"

// CSolaRemoteSPCalcDlg dialog
class CSolaRemoteSPCalcDlg : public CDialogEx
{
// Construction
public:
	CSolaRemoteSPCalcDlg(CWnd* pParent = nullptr);	// standard constructor

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_SOLA_REMOTE_SP_CALC_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
public:
	CButton m_btn_Radio01;
	CButton m_btn_Radio02;
	// Enter 4mADC and 20mADC temperatures
	CNumericEdit m_Edit01;
	CNumericEdit m_Edit02;
	// mADC input value
	CNumericEdit m_Edit03;
	// Calculated setpoint temperature
	CEdit m_Edit05;
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedRadio1();
	afx_msg void OnBnClickedRadio2();
	DECLARE_MESSAGE_MAP()
};
