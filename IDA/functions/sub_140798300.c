#include "../winhttp.h"

//----- (0000000140798300) ----------------------------------------------------
__int64 __fastcall sub_140798300(_QWORD* a1)
{
	_DWORD* v1; // rax
	unsigned __int64 v3; // rcx
	__int64 v4; // rcx
	const char* v5; // r9
	const char* v6; // rax
	unsigned int v7; // eax
	__int64 v8; // rcx
	__m128i v9; // xmm0
	__int64 result; // rax

	v1 = (_DWORD*)a1[3];
	v3 = a1[2];
	if ((unsigned __int64)v1 >= v3)
		goto LABEL_8;
	if (v1 == dword_140A12138 || v1[2] != 5)
	{
		if ((unsigned __int64)v1 < v3 && v1 != dword_140A12138)
		{
			v4 = (int)v1[2];
			if ((_DWORD)v4 != -1)
			{
				v5 = off_140A123B0[v4];
				goto LABEL_9;
			}
		}
	LABEL_8:
		v5 = aNoValue;
	LABEL_9:
		v6 = (const char*)sub_140058780((__int64)a1, (unsigned __int64*)"%s expected, got %s", aTable_0, v5);
		sub_140056570(a1, 1u, v6);
	}
	v7 = sub_1400585E0((__int64)a1, 1);
	v8 = a1[2];
	*(_DWORD*)(v8 + 8) = 3;
	v9 = _mm_cvtsi32_si128(v7);
	result = 1i64;
	*(_QWORD*)v8 = *(_OWORD*)&_mm_cvtepi32_pd(v9);
	a1[2] += 16i64;
	return result;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140A123B0: using guessed type char *off_140A123B0[11];

