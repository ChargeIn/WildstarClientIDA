#include "../winhttp.h"

//----- (00000001401218F0) ----------------------------------------------------
__int64 __fastcall sub_1401218F0(_QWORD* a1)
{
	_DWORD* v1; // rax
	unsigned int v2; // eax
	__int64 v3; // rax
	__int64 v4; // rcx

	v1 = (_DWORD*)a1[3];
	if ((unsigned __int64)v1 >= a1[2] || v1 == dword_140A12138 || (int)v1[2] <= 0)
		v2 = 0;
	else
		v2 = sub_140056D60(a1, 1u);
	v3 = sub_140235D00(v2);
	if (v3)
	{
		v4 = *(_QWORD*)(qword_140C63650 + 1832);
		if (v4)
			(*(void(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)v4 + 16i64))(
				v4,
				*(unsigned int*)(v3 + 16),
				0i64,
				0i64,
				0i64,
				0i64,
				0i64);
	}
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C63650: using guessed type __int64 qword_140C63650;

