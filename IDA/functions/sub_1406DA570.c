#include "../winhttp.h"

//----- (00000001406DA570) ----------------------------------------------------
__int64 __fastcall sub_1406DA570(__int64 a1, int a2, int* a3)
{
	int v4; // eax
	bool v5; // zf
	__int64 v6; // rdx
	__int64 v7; // rax
	__m128i* v8; // r9
	__m128i* v9; // rax
	int v10; // eax

	if (a2)
	{
		if (a2 != 1 || !*(_BYTE*)(a1 + 1026))
			return sub_1400D2550(a1, a2, a3);
		*(_DWORD*)(a1 + 872) = *a3;
		*(_DWORD*)(a1 + 876) = a3[1];
		*(_DWORD*)(a1 + 904) = *a3;
		*(_DWORD*)(a1 + 908) = a3[1];
		v10 = dword_140C636A8;
		*(_DWORD*)(a1 + 932) = dword_140C636A8;
		*(_DWORD*)(a1 + 916) = v10;
		*(_BYTE*)(a1 + 1026) = 0;
		return 0i64;
	}
	else
	{
		if (!*(_BYTE*)(a1 + 1025))
			return sub_1400D2550(a1, a2, a3);
		*(_DWORD*)(a1 + 864) = *a3;
		*(_DWORD*)(a1 + 868) = a3[1];
		*(_DWORD*)(a1 + 904) = *a3;
		*(_DWORD*)(a1 + 908) = a3[1];
		v4 = dword_140C636A8;
		*(_DWORD*)(a1 + 932) = dword_140C636A8;
		*(_DWORD*)(a1 + 912) = v4;
		v5 = *(_BYTE*)(a1 + 28) >= 0;
		*(_BYTE*)(a1 + 1025) = 0;
		if (!v5 && (*(_BYTE*)(a1 + 664) & 1) == 0)
		{
			v6 = *(unsigned int*)(a1 + 1032);
			if ((_DWORD)v6 != -1)
			{
				v7 = *(_QWORD*)(a1 + 1040);
				if (v7)
				{
					v9 = *(__m128i**)(v7 + 32);
					v8 = (__m128i*) & word_140B7B704;
					if (v9)
						v8 = v9;
				}
				else
				{
					v8 = 0i64;
				}
				sub_1400E9780(*(_QWORD**)(a1 + 32), a1, (int*)"DDSpellbookItem", v8, v6, 0i64);
			}
		}
		return 0i64;
	}
}
// 140B7B704: using guessed type __int16 word_140B7B704;
// 140C636A8: using guessed type int dword_140C636A8;

