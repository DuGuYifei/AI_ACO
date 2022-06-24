// SA.h : main header file for the SA application
//

#if !defined(AFX_SA_H__6D08E089_CFDB_4AC2_AA6F_130C998BD437__INCLUDED_)
#define AFX_SA_H__6D08E089_CFDB_4AC2_AA6F_130C998BD437__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CSAApp:
// See SA.cpp for the implementation of this class
//

class CSAApp : public CWinApp
{
public:
	CSAApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CSAApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CSAApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SA_H__6D08E089_CFDB_4AC2_AA6F_130C998BD437__INCLUDED_)
