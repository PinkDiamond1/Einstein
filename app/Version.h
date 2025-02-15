// ==============================
// File:			Version.h
// Project:			Einstein
//
// Copyright 2003-2022 by Paul Guyot (pguyot@kallisys.net).
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation; either version 2 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License along
// with this program; if not, write to the Free Software Foundation, Inc.,
// 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
// ==============================
// $Id$
// ==============================

#ifndef _VERSION_H
#define _VERSION_H

// When building with CMake, we pull the items below in the configuration phase.
#ifdef USE_CMAKE
#include "Version_CMake.h"
#else
#define PROJECT_NAME "Einstein"
#define PROJECT_VER "2022.4.16"
#define PROJECT_VER_MAJOR "2022"
#define PROJECT_VER_MINOR "4"
#define PROJECT_VER_PATCH "16"
#define COMPILE_TIME_YYYY 2022
#define COMPILE_TIME_MM 1
#define COMPILE_TIME_DD 1
#endif

#define VERSION_STRING PROJECT_NAME " " PROJECT_VER
#define VERSION_STRING_SHORT PROJECT_VER
#define COPYRIGHT_STRING "Copyright 2003-2022 by Paul Guyot and contributors"

#endif
// _VERSION_H

// ============================================================================ //
// The numbering system originated as a response to customer irrationality. :-)
// Because each patch applies to a single ROM image, there are multiple patches
// that produce the same end result. The exact numbers may be off, but let's say
// the OMP had version 1.0 software, then the MP100 came out with version 1.1.
// We released an update for the OMP that brought it up to date, and gave
// it version 1.01.
//
// The problem here is that even though 1.01 and 1.1 are functionally
// equivalent, people with OMPs were unhappy because their version number was
// lower. There was lots of misinformation floating around about "upgrading"
// 1.01 to 1.1, meaningless though that actually was. It got even worse when
// 1.1 was patched, so you had 1.03 vs. 1.12.
//
// To address this, we had to distinguish between the actual version number that
// tells tech support what software the customer has and the end-user version
// number that tells the customer what functionality they have. The six-digit
// number is unique to a particular update (software version), and the x.y
// number indicates what functionality you get when the update is
// applied (end-user version).
//
// Unfortunately, some customers are a little too smart to fall for that, so
// there's still all sorts of consternation over the supposedly meaningless
// system update numbers.
//
// The actual scheme is some combination of the ROM version the update applies
// to and the date the patch was generated.
//
//   -- Walter Smith
// ============================================================================ //
