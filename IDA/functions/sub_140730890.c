#include "../winhttp.h"

//----- (0000000140730890) ----------------------------------------------------
__int64 __fastcall sub_140730890(_QWORD* a1)
{
	unsigned __int64 v2; // rsi
	__int64 v3; // rbx
	__int64 v4; // rax
	int v5; // ebp
	unsigned __int64 i; // rbx
	__int64 v7; // rdx
	__int64 v8; // rax

	v2 = *(_QWORD*)(qword_140C658A0 + 8);
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v3 = a1[2];
	v4 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v3 + 8) = 5;
	v5 = 0;
	*(_QWORD*)v3 = v4;
	a1[2] += 16i64;
	for (i = 0i64; i < v2; ++i)
	{
		v7 = *(_QWORD*)(*(_QWORD*)qword_140C658A0 + 8 * i);
		if (v7 && (*(_DWORD*)(*(_QWORD*)(v7 + 8) + 52i64) & 0x100) == 0)
		{
			v8 = a1[2];
			++v5;
			*(_DWORD*)(v8 + 8) = 3;
			*(double*)v8 = (double)v5;
			a1[2] += 16i64;
			sub_140433380(a1, v7);
			sub_14005EA50((__int64)a1, (__int64*)(a1[2] - 48i64), (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
			a1[2] -= 32i64;
		}
	}
	return 1i64;
}
// 140C658A0: using guessed type __int64 qword_140C658A0;

