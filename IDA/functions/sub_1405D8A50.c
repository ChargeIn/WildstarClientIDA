#include "../winhttp.h"

//----- (00000001405D8A50) ----------------------------------------------------
void __fastcall sub_1405D8A50(__int64 a1)
{
	int v1; // edx
	__int64 v3; // rdi
	__int64 v4; // rcx
	__int64 v5; // rax
	__int64 v6; // rax
	float v7; // xmm1_4
	double v8; // xmm0_8

	v1 = *(_DWORD*)(a1 + 92);
	*(_QWORD*)a1 = off_140B6E1A0;
	v3 = sub_1403D90D0(qword_140C65898, v1);
	if (v3)
	{
		if (*(int*)(a1 + 344) <= 0)
		{
			v4 = *(_QWORD*)(a1 + 176);
			if (v4 && (*(_BYTE*)(v4 + 60) & 2) != 0)
			{
				v5 = sub_140200220(0xBFu);
				if (v5)
					*(_DWORD*)(a1 + 344) = *(_DWORD*)(v5 + 4);
				else
					*(_DWORD*)(a1 + 344) = 1000;
			}
			else if (*(_DWORD*)(a1 + 188) == *(_DWORD*)(a1 + 184))
			{
				(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 80) + 8i64))(*(_QWORD*)(a1 + 80));
			}
			else
			{
				v6 = sub_140200220(0xBDu);
				if (v6)
					v7 = *(float*)(v6 + 24);
				else
					v7 = 0.1;
				*(_DWORD*)(a1 + 344) = (int)(float)((float)(*(_DWORD*)(a1 + 188) - *(_DWORD*)(a1 + 184)) * v7);
			}
		}
		v8 = sub_1408FBFC0(
			COERCE_DOUBLE((unsigned __int64)*(_DWORD*)(a1 + 336)),
			fmaxf(1.0, (float)*(int*)(*(_QWORD*)(a1 + 72) + 80i64)));
		sub_1405B9160(v3, 1.0 / *(float*)&v8, *(_DWORD*)(a1 + 344));
	}
	sub_1405D6680(a1);
}
// 140B6E1A0: using guessed type __int64 (__fastcall *off_140B6E1A0[69])();
// 140C65898: using guessed type __int64 qword_140C65898;

