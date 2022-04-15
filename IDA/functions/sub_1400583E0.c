#include "../winhttp.h"

//----- (00000001400583E0) ----------------------------------------------------
_BOOL8 __fastcall sub_1400583E0(__int64 a1, int a2)
{
	_DWORD* v2; // rax

	v2 = sub_1400580E0(a1, a2);
	return v2 != dword_140A12138 && (unsigned int)(v2[2] - 3) <= 1;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

