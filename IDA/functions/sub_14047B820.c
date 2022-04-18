#include "../winhttp.h"

//----- (000000014047B820) ----------------------------------------------------
__int64 __fastcall sub_14047B820(__int64 a1, __int64 a2, double a3, double a4)
{
	int v4; // ebp
	unsigned __int64 v6; // rcx
	unsigned __int64 v8; // r9
	int v9; // edx
	__int64 v10; // r8
	__int64 v11; // r8
	__int64 v12; // rax
	__int64 v13; // rax
	_DWORD* v14; // rbx
	__int64 v15; // rcx
	__int64 v16; // rax

	v4 = 0;
	v6 = *(_QWORD*)(a1 + 408);
	v8 = 0i64;
	if (!v6)
		goto LABEL_8;
	v9 = *(_DWORD*)(a2 + 4);
	v10 = *(_QWORD*)(a1 + 400);
	while (*(_DWORD*)v10 != v9 || *(_BYTE*)(v10 + 4) != *(_BYTE*)(a2 + 8))
	{
		++v8;
		v10 += 12i64;
		if (v8 >= v6)
			goto LABEL_8;
	}
	if (!*(_DWORD*)(*(_QWORD*)(a1 + 400) + 12 * v8 + 8))
	{
	LABEL_8:
		sub_140480D00((__int64*)(a1 + 400), (int*)(a2 + 4));
		v11 = qword_140C65898;
		*(_DWORD*)(a1 + 6312) = 1;
		v12 = *(_QWORD*)(v11 + 120);
		if (v12 && *(_DWORD*)(a1 + 8) == *(_DWORD*)(v12 + 8))
			*(_DWORD*)(v11 + 28568) = 1;
		if (!*(_DWORD*)(a2 + 4) || (*(_DWORD*)(*(_QWORD*)(a1 + 184) + 96i64) & 0x2000) != 0)
			*(_DWORD*)(a1 + 3328) = 1;
		v13 = sub_1403D90D0(v11, *(_DWORD*)(a2 + 12));
		v14 = (_DWORD*)v13;
		if (v13)
		{
			sub_140470650(v13, 1, 1);
			v15 = qword_140C65898;
			v14[1578] = 1;
			v16 = *(_QWORD*)(v15 + 120);
			if (v16)
			{
				LOBYTE(v4) = v14[2] == *(_DWORD*)(v16 + 8);
				if (v4)
					*(_DWORD*)(v15 + 28568) = 1;
			}
			v14[48] = *(_DWORD*)a2;
			v14[49] = *(_DWORD*)(a2 + 4);
			v14[50] = *(unsigned __int8*)(a2 + 8);
			sub_14039E4D0(v15, (__int64)v14, a3, a4);
			if (v14 == *(_DWORD**)(qword_140C65898 + 120))
				Apollo_LUAEvent(*(_QWORD*)(qword_140C65898 + 29504), "Mount", "b", 1i64);
		}
	}
	return 0i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;

