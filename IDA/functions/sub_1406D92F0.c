#include "../winhttp.h"

//----- (00000001406D92F0) ----------------------------------------------------
char __fastcall sub_1406D92F0(__int64 a1, int a2)
{
	bool v4; // si
	__int64 v5; // rax
	__int64 v6; // rcx
	int v7; // eax
	__int64 v8; // rdx
	__int64 v9; // r9
	_DWORD* v10; // rax
	int v11; // r8d
	_DWORD* v12; // rcx
	const __m128i* v13; // r10
	__int64 v14; // rax
	const __m128i* v15; // rax

	*(_WORD*)(a1 + 1024) = 0;
	v4 = sub_1400D2970(a1, a2);
	if (a2 != 1)
		return v4;
	v5 = sub_1403AC780(qword_140C65898 + 160, (int*)(a1 + 1028));
	v6 = v5;
	if (!v5)
		return v4;
	v7 = *(_DWORD*)(v5 + 32);
	if (v7 < 300)
		v8 = *(unsigned __int8*)(v6 + 36) | ((unsigned __int64)(unsigned __int8)v7 << 8);
	else
		v8 = -1i64;
	v9 = *(_QWORD*)(v6 + 64);
	v10 = *(_DWORD**)(v6 + 72);
	v11 = *(_DWORD*)(v9 + 344);
	v12 = v10;
	if (!v10)
		v12 = (_DWORD*)(v9 + 8);
	if (v12)
	{
		if (!v10)
			v10 = (_DWORD*)(v9 + 8);
		v11 = *v10;
	}
	v13 = 0i64;
	if ((unsigned int)(v11 - 1) <= 6)
	{
		v14 = *(_QWORD*)(a1 + 48i64 * v11 + 2192);
		if (v14)
		{
			v15 = *(const __m128i**)(v14 + 32);
			v13 = (const __m128i*) & word_140B7B704;
			if (v15)
				v13 = v15;
		}
	}
	sub_1400E9780(*(_QWORD**)(a1 + 32), a1, (int*)&qword_140B3CBA0, *(__m128i**)(v9 + 488), v8, v13);
	return 1;
}
// 140B3CBA0: using guessed type __int64 qword_140B3CBA0;
// 140B7B704: using guessed type __int16 word_140B7B704;
// 140C65898: using guessed type __int64 qword_140C65898;

