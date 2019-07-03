// This is a part of the Microsoft Foundation Classes C++ library.
// Copyright (c) Microsoft Corporation.  All rights reserved.
//
// This source code is only intended as a supplement to the
// Microsoft Foundation Classes Reference and related
// electronic documentation provided with the library.
// See these sources for detailed information regarding the
// Microsoft Foundation Classes product.

// stdafx.h : include file for standard system include files,
//  or project specific include files that are used frequently, but
//      are changed infrequently
//

#define VC_EXTRALEAN

#include <afxwin.h>         // MFC core and standard components
#include <afxext.h>         // MFC extensions (including VB)
#include <afxdisp.h>        // MFC OLE automation classes

#ifdef _DEBUG

#ifdef _UNICODE

#ifdef _M_AMD64
#import "..\server\amd64\UniDebug\mfccalc.tlb" rename_namespace("CalcDriv")
#elif defined(_M_IA64)
#import "..\server\ia64\UniDebug\mfccalc.tlb" rename_namespace("CalcDriv")
#else
#import "..\server\UniDebug\mfccalc.tlb" rename_namespace("CalcDriv")
#endif

#else

#ifdef _M_AMD64
#import "..\server\amd64\debug\mfccalc.tlb" rename_namespace("CalcDriv")
#elif defined(_M_IA64)
#import "..\server\ia64\debug\mfccalc.tlb" rename_namespace("CalcDriv")
#else
#import "..\server\debug\mfccalc.tlb" rename_namespace("CalcDriv")
#endif

#endif

#else

#ifdef _UNICODE
#ifdef _M_AMD64
#import "..\server\amd64\UniRelease\mfccalc.tlb" rename_namespace("CalcDriv")
#elif defined(_M_IA64)
#import "..\server\ia64\UniRelease\mfccalc.tlb" rename_namespace("CalcDriv")
#else
#import "..\server\UniRelease\mfccalc.tlb" rename_namespace("CalcDriv")
#endif
#else
#ifdef _M_AMD64
#import "..\server\amd64\release\mfccalc.tlb" rename_namespace("CalcDriv")
#elif defined(_M_IA64)
#import "..\server\ia64\release\mfccalc.tlb" rename_namespace("CalcDriv")
#else
#import "..\server\release\mfccalc.tlb" rename_namespace("CalcDriv")
#endif
#endif

#endif

using namespace CalcDriv;
