// This is a part of the Microsoft Foundation Classes C++ library.
// Copyright (C) Microsoft Corporation
// All rights reserved.
//
// This source code is only intended as a supplement to the
// Microsoft Foundation Classes Reference and related
// electronic documentation provided with the library.
// See these sources for detailed information regarding the
// Microsoft Foundation Classes product.

#pragma once

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols
#include "FavoritesManager.h"

// CIEDemoApp:
// See IEDemo.cpp for the implementation of this class
//

class CIEDemoApp : public CWinAppEx
{
public:
	CIEDemoApp();

	// Override from CWorkspace
	virtual void PreLoadState ();

	CFavoritesManager	m_Favorites;

// Overrides
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// Implementation
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CIEDemoApp theApp;
