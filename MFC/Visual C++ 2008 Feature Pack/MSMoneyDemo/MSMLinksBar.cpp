// This is a part of the Microsoft Foundation Classes C++ library.
// Copyright (c) Microsoft Corporation.  All rights reserved.
//
// This source code is only intended as a supplement to the
// Microsoft Foundation Classes Reference and related
// electronic documentation provided with the library.
// See these sources for detailed information regarding the
// Microsoft Foundation Classes product.

// MSMLinkssBar.cpp : implementation file
//

#include "stdafx.h"
#include "MSMoneyDemo.h"
#include "MSMLinksBar.h"
#include "MSMLinksBarButton.h"

#include "MSMVisualManager.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMSMLinksBar

IMPLEMENT_DYNCREATE(CMSMLinksBar, CMSMToolBar)

CMSMLinksBar::CMSMLinksBar ()
{
	m_CurrentCommand = 0;
}

CMSMLinksBar::~CMSMLinksBar ()
{
}

BEGIN_MESSAGE_MAP(CMSMLinksBar, CMSMToolBar)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMSMLinksBar message handlers
