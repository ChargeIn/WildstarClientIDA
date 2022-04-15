#include "../winhttp.h"

//----- (0000000140705730) ----------------------------------------------------
__int64 __fastcall sub_140705730(_QWORD* a1)
{
	unsigned int v2; // eax
	__int64 v3; // rsi
	unsigned int v4; // edi
	int v5; // eax
	int v6; // edx
	int v7; // eax
	_DWORD* v8; // rcx
	__int64 result; // rax

	v2 = sub_140056D60(a1, 1u);
	v3 = qword_140C65898;
	v4 = v2;
	v5 = sub_1403AC840(qword_140C65898 + 160, 2, v2);
	v6 = 0;
	if (v5)
	{
		*(_DWORD*)(v3 + 32624) = v4;
		v7 = 0;
	}
	else
	{
		v7 = -2147467259;
	}
	v8 = (_DWORD*)a1[2];
	LOBYTE(v6) = v7 >= 0;
	v8[2] = 1;
	result = 1i64;
	*v8 = v6;
	a1[2] += 16i64;
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

