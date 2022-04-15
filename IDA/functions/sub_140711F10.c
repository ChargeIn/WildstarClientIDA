#include "../winhttp.h"

//----- (0000000140711F10) ----------------------------------------------------
__int64 __fastcall sub_140711F10(_QWORD* a1)
{
	_DWORD* v1; // rax
	int v2; // eax
	_DWORD v4[6]; // [rsp+20h] [rbp-18h] BYREF

	v1 = (_DWORD*)a1[3];
	if ((unsigned __int64)v1 < a1[2] && v1 != dword_140A12138 && (int)v1[2] > 0)
	{
		v2 = sub_140056D60(a1, 1u);
		if (v2)
		{
			v4[1] = 15;
			v4[2] = 0;
			v4[0] = v2;
			sub_1403F4900(qword_140C65898, 0xC5u, (__int64)v4);
		}
	}
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C65898: using guessed type __int64 qword_140C65898;

