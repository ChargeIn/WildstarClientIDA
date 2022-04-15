#include "../winhttp.h"

//----- (000000014006A0D0) ----------------------------------------------------
__int64 __fastcall sub_14006A0D0(__int64* a1, int a2, int a3)
{
	int v3; // r8d
	_DWORD* v4; // r11
	__int64 result; // rax

	v3 = a3 - a2;
	v4 = (_DWORD*)(*(_QWORD*)(*a1 + 24) + 4i64 * a2);
	if ((int)abs32(v3 - 1) > 0x1FFFF)
		sub_140062CF0(a1[3], aControlStructu, *(_DWORD*)(a1[3] + 16));
	*v4 &= 0x3FFFu;
	result = (unsigned int)((v3 + 131070) << 14);
	*v4 |= result;
	return result;
}

