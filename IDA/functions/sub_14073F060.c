#include "../winhttp.h"

//----- (000000014073F060) ----------------------------------------------------
__int64 __fastcall sub_14073F060(_QWORD* a1)
{
	__int64* v2; // r14
	char* v3; // rdx
	_DWORD* v4; // rax
	int v5; // edi
	int v6; // eax
	_DWORD* v7; // rdx
	__int64 v9; // [rsp+20h] [rbp-48h] BYREF
	int* v10; // [rsp+28h] [rbp-40h]
	__int64 v11; // [rsp+40h] [rbp-28h] BYREF
	__int64 v12; // [rsp+48h] [rbp-20h]

	v2 = (__int64*)sub_140056AB0(a1, 1u);
	v3 = (char*)sub_14018F0E0(&v11, word_1409F93BC)[1];
	v4 = (_DWORD*)(a1[3] + 16i64);
	if ((unsigned __int64)v4 < a1[2] && v4 != dword_140A12138 && *(int*)(a1[3] + 24i64) > 0)
		v3 = (char*)sub_140056BB0(a1, 2u, 0i64);
	sub_14018F2D0(&v9, v3);
	if (v12)
		sub_14018B900(v12, 0);
	v5 = 0;
	if (v2 && *v2)
		v6 = sub_14073E6D0(*v2, v10);
	else
		v6 = 0;
	v7 = (_DWORD*)a1[2];
	LOBYTE(v5) = v6 != 0;
	v7[2] = 1;
	*v7 = v5;
	a1[2] += 16i64;
	if (v10)
		sub_14018B900((__int64)v10, 0);
	return 1i64;
}
// 1409F93BC: using guessed type unsigned __int16 word_1409F93BC[12];
// 140A12138: using guessed type _DWORD dword_140A12138[4];

