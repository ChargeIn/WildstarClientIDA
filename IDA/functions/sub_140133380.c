#include "../winhttp.h"

//----- (0000000140133380) ----------------------------------------------------
__int64 __fastcall sub_140133380(_QWORD* a1)
{
	int v2; // edi
	__int64 v3; // rsi
	__int64 v4; // rax
	bool v5; // zf
	int v6; // eax
	_DWORD* v7; // rcx
	__int64 result; // rax

	v2 = 0;
	if ((unsigned int)sub_140133220((__int64)a1, 1))
		v3 = sub_1401334C0(a1, 1u);
	else
		v3 = 0i64;
	if ((unsigned int)sub_140133220((__int64)a1, 2))
		v4 = sub_1401334C0(a1, 2u);
	else
		v4 = 0i64;
	if (!v3 || !v4 || (v5 = v3 == v4, v6 = 1, !v5))
		v6 = 0;
	v7 = (_DWORD*)a1[2];
	LOBYTE(v2) = v6 != 0;
	v7[2] = 1;
	result = 1i64;
	*v7 = v2;
	a1[2] += 16i64;
	return result;
}

