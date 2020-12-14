
// Sola_Remote_SP_Calc.h : main header file for the PROJECT_NAME application
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'pch.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CSolaRemoteSPCalcApp:
// See Sola_Remote_SP_Calc.cpp for the implementation of this class
//

class CSolaRemoteSPCalcApp : public CWinApp
{
public:
	CSolaRemoteSPCalcApp();

// Overrides
public:
	virtual BOOL InitInstance();

// Implementation

	DECLARE_MESSAGE_MAP()
};

extern CSolaRemoteSPCalcApp theApp;
