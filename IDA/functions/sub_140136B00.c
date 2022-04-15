#include "../winhttp.h"

//----- (0000000140136B00) ----------------------------------------------------
char __fastcall sub_140136B00(__int64 a1, int a2)
{
	int v2; // r8d
	int v5; // eax
	__int64 v6; // rdi
	__int64 v7; // rax
	int* i; // rbp
	__int64 v9; // rbx
	unsigned __int64 v10; // rbx
	_WORD* v11; // r15
	_QWORD* v12; // r13
	_QWORD* v13; // rsi
	_QWORD* v14; // rbx
	unsigned __int64 v15; // rcx
	__int64 v16; // r9
	__int64 v17; // r9
	_QWORD* v18; // [rsp+50h] [rbp+8h]

	v2 = *(_DWORD*)(a1 + 268);
	if (!v2)
		return 0;
	if (!*(_BYTE*)(a1 + 264) && a2 > 0 && *(_DWORD*)(a1 + 248) != a2 && !*(_BYTE*)(a1 + 272))
	{
		v5 = dword_140C3DA70;
		if (*(_DWORD*)qword_140C63750 < dword_140C3DA70)
			v5 = *(_DWORD*)qword_140C63750;
		if (*((_DWORD*)&xmmword_140C3DA80 + v5) < a2)
			return 0;
	}
	if (v2 == 1)
		return 1;
	v6 = 0i64;
	v7 = 0i64;
	for (i = 0i64; aNodefaultload[v7]; ++v7)
		;
	v9 = (2 * v7) >> 1;
	if ((unsigned __int64)(v9 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
		i = sub_14018B280(2 * (v9 + 1), 0);
	v10 = 2 * v9;
	sub_1407DB590(i, (int*)L"NoDefaultLoad", v10);
	v11 = (_WORD*)((char*)i + v10);
	if ((int*)((char*)i + v10))
		*v11 = 0;
	v12 = *(_QWORD**)(a1 + 472);
	v13 = v12;
	v14 = (_QWORD*)v12[1];
	while (v14)
	{
		if ((int)sub_1400454D0(v14[5], v14[6], (unsigned __int16*)i, (__int64)v11) < 0)
		{
			v14 = (_QWORD*)v14[3];
		}
		else
		{
			v13 = v14;
			v14 = (_QWORD*)v14[2];
		}
	}
	if (v13 == v12 || (v18 = v13, (int)sub_1400454D0((__int64)i, (__int64)v11, (unsigned __int16*)v13[5], v13[6]) < 0))
		v18 = v12;
	if (i)
		sub_14018B900((__int64)i, 0);
	if (v18 != *(_QWORD**)(a1 + 472))
	{
		v15 = 0i64;
		do
			++v15;
		while (word_1409D8EBC[v15]);
		v16 = v18[9];
		if ((v18[10] - v16) >> 1 == v15)
		{
			if (!v15)
				return 0;
			v17 = v16 - (_QWORD)word_1409D8EBC;
			while (*(_WORD*)((char*)&word_1409D8EBC[v6] + v17) == word_1409D8EBC[v6])
			{
				if (++v6 >= v15)
					return 0;
			}
		}
	}
	return 1;
}
// 140136D10: conditional instruction was optimized away because eax.4 is in (==1|==FFFFFFFF)
// 1409D8EBC: using guessed type _WORD word_1409D8EBC[36];
// 140A32EC0: using guessed type wchar_t aNodefaultload[14];
// 140C3DA70: using guessed type int dword_140C3DA70;
// 140C3DA80: using guessed type __int128 xmmword_140C3DA80;
// 140C63750: using guessed type __int64 qword_140C63750;

