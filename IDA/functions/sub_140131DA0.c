#include "../winhttp.h"

//----- (0000000140131DA0) ----------------------------------------------------
__int64 __fastcall sub_140131DA0(_QWORD* a1)
{
	__int64 v2; // rdi
	__int64 v3; // rax
	char* v5; // rdx
	_DWORD* v6; // rax
	__m128i* v7; // rbx
	__int64 v8; // [rsp+20h] [rbp-48h] BYREF
	__int64 v9; // [rsp+28h] [rbp-40h]
	__int64 v10; // [rsp+40h] [rbp-28h] BYREF
	__m128i* v11; // [rsp+48h] [rbp-20h]

	v2 = sub_140131630(a1, 1u);
	if (sub_1400D6530((__int64)a1, 2))
	{
		v3 = sub_140131630(a1, 2u);
		sub_1400C37F0(v2 + 1024, v3 + 1024);
		return 0i64;
	}
	else
	{
		v5 = (char*)sub_14018F0E0(&v8, word_1409D87D4)[1];
		v6 = (_DWORD*)(a1[3] + 16i64);
		if ((unsigned __int64)v6 < a1[2] && v6 != dword_140A12138 && *(int*)(a1[3] + 24i64) > 0)
			v5 = (char*)sub_140056BB0(a1, 2u, 0i64);
		sub_14018F2D0(&v10, v5);
		if (v9)
			sub_14018B900(v9, 0);
		v7 = v11;
		sub_14012FFB0(v2, v11);
		if (v7)
			sub_14018B900((__int64)v7, 0);
		return 0i64;
	}
}
// 1409D87D4: using guessed type unsigned __int16 word_1409D87D4[12];
// 140A12138: using guessed type _DWORD dword_140A12138[4];

