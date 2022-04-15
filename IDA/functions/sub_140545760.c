#include "../winhttp.h"

//----- (0000000140545760) ----------------------------------------------------
__int64 __fastcall sub_140545760(__int64 a1, __int64 a2, __int64 a3, int a4)
{
	unsigned int v7; // r14d
	int v8; // ebx
	__int64 v9; // rax
	int v10; // r9d
	int v11; // edx
	__int64 v12; // rdi
	__int64 i; // r15
	int v14; // ebx
	__int64 v15; // r8
	int v16; // edx
	__int128 v18[3]; // [rsp+40h] [rbp-38h] BYREF

	v7 = 0;
	v8 = 0;
	if ((*(_BYTE*)(a2 + 16) & 2) != 0 && (a4 || *(_DWORD*)(a1 + 344) != *(_DWORD*)(a3 + 8)))
	{
		v8 = 1;
		v9 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(a1 + 344));
		if (v9)
		{
			v10 = *(_DWORD*)(a1 + 344);
			v11 = *(_DWORD*)(a3 + 8);
			v18[0] = *(_OWORD*)(v9 + 4576);
			sub_140545D40(a1, v11, (unsigned int*)(a3 + 4576), v10, v18, (int*)a2, 0);
			v7 = 1;
		}
	}
	if ((*(_BYTE*)(a2 + 16) & 4) == 0)
		return v7;
	v12 = *(_QWORD*)(a1 + 72);
	for (i = v8; v12; v12 = *(_QWORD*)(v12 + 40))
	{
		v14 = *(_DWORD*)(v12 + 64);
		v15 = sub_1403D90D0(qword_140C65898, v14);
		if (v15
			&& (v14 != *(_DWORD*)(a1 + 340)
				|| (*(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 312) + 112i64) + 268i64) & 0x20000000) != 0)
			&& (v14 != *(_DWORD*)(a1 + 344) || !i))
		{
			v16 = *(_DWORD*)(a3 + 8);
			if (v14 != v16)
			{
				v18[0] = *(_OWORD*)(v15 + 4576);
				sub_140545D40(a1, v16, (unsigned int*)(a3 + 4576), v14, v18, (int*)a2, 0);
				v7 = 1;
			}
		}
	}
	return v7;
}
// 140C65898: using guessed type __int64 qword_140C65898;

