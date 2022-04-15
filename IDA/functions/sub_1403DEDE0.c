#include "../winhttp.h"

//----- (00000001403DEDE0) ----------------------------------------------------
__int64 __fastcall sub_1403DEDE0(__int64 a1, int* a2, double a3, double a4)
{
	__int64 v6; // rax
	_DWORD* v7; // rbx
	int v8; // ecx
	__int16 v9; // ax
	int v10; // edi
	__int64 v11; // rdx
	__int64 v12; // rax
	__int64 v13; // rax

	v6 = sub_1403D90D0(a1, *a2);
	v7 = (_DWORD*)v6;
	if (v6)
	{
		*(_DWORD*)(v6 + 36) = a2[1];
		v8 = a2[2];
		v9 = v8 ^ *(_DWORD*)(v6 + 40);
		v10 = 0;
		v7[10] = v8;
		if ((v9 & 0x100) != 0)
		{
			if ((v8 & 0x100) != 0)
			{
				v7[1234] = 1;
				v7[16] = 0;
				sub_1407E4830(v7 + 135, 0i64, 0x2Cui64);
			}
			else
			{
				v7[1234] = 0;
			}
		}
		v11 = qword_140C65898;
		v7[1578] = 1;
		v12 = *(_QWORD*)(v11 + 120);
		if (v12 && v7[2] == *(_DWORD*)(v12 + 8))
			*(_DWORD*)(v11 + 28568) = 1;
		if ((v7[10] & 0x4000) != 0)
		{
			v13 = *(_QWORD*)(a1 + 25744);
			if (v13)
				v10 = *(_DWORD*)(v13 + 264);
			if (v7[2] == v10)
				sub_14055B0E0(a1, 0, a3, a4);
		}
	}
	return 0i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;

