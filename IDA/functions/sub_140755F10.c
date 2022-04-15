#include "../winhttp.h"

//----- (0000000140755F10) ----------------------------------------------------
__int64 __fastcall sub_140755F10(_QWORD* a1)
{
	unsigned int v2; // eax
	_DWORD* v3; // rax
	__int64 result; // rax
	int v5; // eax
	_DWORD* v6; // rcx
	bool v7; // zf

	if (!qword_140C659B0)
		return 0i64;
	v2 = sub_140056D60(a1, 1u);
	if (!v2)
	{
		v3 = (_DWORD*)a1[2];
		*v3 = 0;
		v3[2] = 1;
		a1[2] += 16i64;
		return 0i64;
	}
	v5 = sub_1404A7F50(qword_140C659B0, v2);
	v6 = (_DWORD*)a1[2];
	v7 = v5 == 0;
	v6[2] = 1;
	result = 1i64;
	*v6 = !v7;
	a1[2] += 16i64;
	return result;
}
// 140C659B0: using guessed type __int64 qword_140C659B0;

