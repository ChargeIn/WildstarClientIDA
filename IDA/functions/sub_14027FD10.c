#include "../winhttp.h"

//----- (000000014027FD10) ----------------------------------------------------
__int64 __fastcall sub_14027FD10(_DWORD* a1, int a2, int a3, int a4, int a5)
{
	__int64 result; // rax

	a1[1824] = dword_140AE7E70[a2];
	a1[1825] = dword_140AE7E70[a3];
	a1[1826] = dword_140AE7E70[a4];
	result = (unsigned int)dword_140AE8020[a5];
	a1[1794] |= 2u;
	a1[1827] = result;
	return result;
}
// 140AE7E70: using guessed type int dword_140AE7E70[8];
// 140AE8020: using guessed type int dword_140AE8020[8];

