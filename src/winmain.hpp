/*
    Copyright 2000, 2001, 2002, 2003 Slingshot Game Technology, Inc.

    This file is part of The Soul Ride Engine, see http://soulride.com

    The Soul Ride Engine is free software; you can redistribute it
    and/or modify it under the terms of the GNU General Public License
    as published by the Free Software Foundation; either version 2 of
    the License, or (at your option) any later version.

    The Soul Ride Engine is distributed in the hope that it will be
    useful, but WITHOUT ANY WARRANTY; without even the implied
    warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
    See the GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with Foobar; if not, write to the Free Software
    Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
*/
// winmain.hpp	-thatcher 2/7/1998 Copyright Thatcher Ulrich

// Main:: declarations that involve Windows-specific stuff.  It's a back-door
// interface to Main for things like DirectX that need certain Windows-related
// info.


#ifndef WINMAIN_HPP
#define WINMAIN_HPP


#include <windows.h>


namespace Main {
	HWND	GetMainWindow();
	HINSTANCE	GetAppInstance();
	HWND	GetGameWindow();
};


#endif // WINMAIN_HPP
