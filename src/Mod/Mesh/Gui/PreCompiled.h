/***************************************************************************
 *   Copyright (c) 2003 Werner Mayer <wmayer[at]users.sourceforge.net>     *
 *                                                                         *
 *   This file is part of the FreeCAD CAx development system.              *
 *                                                                         *
 *   This library is free software; you can redistribute it and/or         *
 *   modify it under the terms of the GNU Library General Public           *
 *   License as published by the Free Software Foundation; either          *
 *   version 2 of the License, or (at your option) any later version.      *
 *                                                                         *
 *   This library  is distributed in the hope that it will be useful,      *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU Library General Public License for more details.                  *
 *                                                                         *
 *   You should have received a copy of the GNU Library General Public     *
 *   License along with this library; see the file COPYING.LIB. If not,    *
 *   write to the Free Software Foundation, Inc., 59 Temple Place,         *
 *   Suite 330, Boston, MA  02111-1307, USA                                *
 *                                                                         *
 ***************************************************************************/


#ifndef MESHGUI_PRECOMPILED_H
#define MESHGUI_PRECOMPILED_H

#include <FCConfig.h>

// Importing of App classes
#ifdef FC_OS_WIN32
# define MeshExport    __declspec(dllimport)
# define MeshGuiExport __declspec(dllexport)
#else // for Linux
# define MeshExport
# define MeshGuiExport
#endif

// here get the warnings of too long specifiers disabled (needed for VC6)
#ifdef _MSC_VER
#   pragma warning( disable : 4005 )
#   pragma warning( disable : 4251 )
#   pragma warning( disable : 4503 )
#   pragma warning( disable : 4275 )
#   pragma warning( disable : 4273 )
#   pragma warning( disable : 4786 )  // specifier longer then 255 chars
#endif

#ifdef _PreComp_

// Gts
#ifdef FC_USE_GTS
#  include <gts.h>
#endif
// standard
#include <stdio.h>
#include <assert.h>

// STL
#include <algorithm>
#include <bitset>
#include <iostream>
#include <fstream>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <vector>

#include <Python.h>
#ifdef FC_OS_WIN32
# include <windows.h>
#endif

// Qt Toolkit
#ifndef __QtAll__
# include <Gui/QtAll.h>
#endif

// Inventor
#ifndef __InventorAll__
# include <Gui/InventorAll.h>
# include <Inventor/annex/ForeignFiles/SoSTLFileKit.h>
#endif

#elif defined(FC_OS_WIN32)
#ifndef NOMINMAX
#define NOMINMAX
#endif
#include <Windows.h>
#endif  //_PreComp_

#endif // MESHGUI_PRECOMPILED_H 
