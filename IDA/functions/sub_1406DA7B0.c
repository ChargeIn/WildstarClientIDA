#include "../winhttp.h"

//----- (00000001406DA7B0) ----------------------------------------------------
__int64 __fastcall sub_1406DA7B0(__int64 a1, int* a2)
{
	int v4; // r8d
	unsigned __int64 v5; // rcx
	unsigned __int64 v6; // r9
	__int64* v7; // rdx
	__int64 v8; // rax
	int v9; // eax
	_QWORD* v10; // rcx
	__int64 v11; // rax
	__m128i* v12; // r9
	__m128i* v13; // rax

	if (*(char*)(a1 + 28) >= 0)
		return sub_1400D23B0(a1, a2);
	v4 = *(_DWORD*)(a1 + 1036);
	if (v4 && (v5 = 0i64, (v6 = *(_QWORD*)(qword_140C65898 + 2712)) != 0))
	{
		v7 = *(__int64**)(qword_140C65898 + 2704);
		while (1)
		{
			v8 = *v7;
			if (*v7)
			{
				if (*(_DWORD*)(v8 + 64) == v4)
					break;
			}
			++v5;
			++v7;
			if (v5 >= v6)
				goto LABEL_8;
		}
	}
	else
	{
	LABEL_8:
		v8 = 0i64;
	}
	if (!*(_BYTE*)(a1 + 1025))
		return sub_1400D23B0(a1, a2);
	if (!v8)
		return sub_1400D23B0(a1, a2);
	v9 = a2[1] - *(_DWORD*)(a1 + 908);
	if ((*a2 - *(_DWORD*)(a1 + 904)) * (*a2 - *(_DWORD*)(a1 + 904)) + v9 * v9 < 49
		&& (unsigned int)(dword_140C636A8 - *(_DWORD*)(a1 + 932)) <= 0x7D)
	{
		return sub_1400D23B0(a1, a2);
	}
	v10 = *(_QWORD**)(a1 + 32);
	if (v10[423])
		return sub_1400D23B0(a1, a2);
	*(_BYTE*)(a1 + 1025) = 0;
	v11 = *(_QWORD*)(a1 + 1040);
	if (v11)
	{
		v13 = *(__m128i**)(v11 + 32);
		v12 = (__m128i*) & word_140B7B704;
		if (v13)
			v12 = v13;
	}
	else
	{
		v12 = 0i64;
	}
	sub_1400E9500(v10, a1, (int*)"DDSpellbookItem", v12, *(unsigned int*)(a1 + 1032), 0i64);
	return 0i64;
}
// 140B7B704: using guessed type __int16 word_140B7B704;
// 140C636A8: using guessed type int dword_140C636A8;
// 140C65898: using guessed type __int64 qword_140C65898;

