#include "../winhttp.h"

//----- (00000001403D3D00) ----------------------------------------------------
_QWORD* __fastcall sub_1403D3D00(_QWORD* a1, _QWORD* a2)
{
	char* v4; // rbp
	char* v5; // r14
	__int64 v6; // r8
	unsigned __int64 v7; // rdi
	int* v8; // rsi
	__int64 v9; // rcx
	unsigned __int64 v10; // rdx

	if (a2 != a1)
	{
		v4 = (char*)a2[2];
		v5 = (char*)a2[1];
		v6 = a1[1];
		v7 = (v4 - v5) / 72;
		if (v7 <= (a1[3] - v6) / 72)
		{
			v10 = (a1[2] - v6) / 72;
			if (v10 < v7)
			{
				sub_1403D8590(v5, (__int64)&v5[72 * v10], v6);
				sub_1403D84E0((_DWORD*)(a2[1] + 72 * ((a1[2] - a1[1]) / 72i64)), (_DWORD*)a2[2], (_DWORD*)a1[2]);
			}
			else
			{
				sub_1403D8590(v5, (__int64)v4, v6);
			}
		}
		else
		{
			v8 = sub_14018B280(72 * v7, 0);
			sub_1403D84E0(v5, v4, v8);
			v9 = a1[1];
			if (v9)
				sub_14018B900(v9, 0);
			a1[1] = v8;
			a1[3] = &v8[18 * v7];
		}
		a1[2] = a1[1] + 72 * v7;
	}
	return a1;
}

