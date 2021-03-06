/*
** $Id: lparser.h,v 1.1.1.1 2003/01/18 20:14:26 tulrich Exp $
** LL(1) Parser and code generator for Lua
** See Copyright Notice in lua.h
*/

#ifndef lparser_h
#define lparser_h

#include "lobject.h"
#include "lzio.h"


void luaY_codedebugline (int line);
TProtoFunc *luaY_parser (ZIO *z);
void luaY_error (char *s);
void luaY_syntaxerror (char *s, char *token);


#endif
