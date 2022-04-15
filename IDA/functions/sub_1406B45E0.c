#include "../winhttp.h"

//----- (00000001406B45E0) ----------------------------------------------------
__int64 __fastcall sub_1406B45E0(_QWORD* a1)
{
	__int64 v2; // rbx
	__int64 v3; // rax
	__int64 v4; // rax
	unsigned __int64 v5; // rsi
	unsigned __int64 v6; // rbx
	__int64 v7; // rdx
	__int64 v8; // rcx

	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v2 = a1[2];
	v3 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v2 + 8) = 5;
	*(_QWORD*)v2 = v3;
	a1[2] += 16i64;
	v4 = qword_140C65898;
	v5 = *(_QWORD*)(qword_140C65898 + 27632);
	v6 = 0i64;
	if (v5)
	{
		while (1)
		{
			v7 = v6 >= *(_QWORD*)(v4 + 27632) ? 0i64 : *(_QWORD*)(*(_QWORD*)(v4 + 27624) + 8 * v6);
			v8 = a1[2];
			*(_DWORD*)(v8 + 8) = 3;
			*(double*)v8 = (double)((int)v6 + 1);
			a1[2] += 16i64;
			sub_1406B5ED0(a1, *(_QWORD*)(v7 + 8));
			sub_14005EA50((__int64)a1, (__int64*)(a1[2] - 48i64), (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
			a1[2] -= 32i64;
			if (++v6 >= v5)
				break;
			v4 = qword_140C65898;
		}
	}
	return 1i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;

