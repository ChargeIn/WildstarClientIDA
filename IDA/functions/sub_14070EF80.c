#include "../winhttp.h"

//----- (000000014070EF80) ----------------------------------------------------
__int64 __fastcall sub_14070EF80(_QWORD* a1)
{
	int* v2; // rbx
	int v3; // eax
	_DWORD* v4; // rcx
	int v5; // esi
	char* v6; // rax
	__int64 v7; // rcx
	char v9[8]; // [rsp+20h] [rbp-48h] BYREF
	int* v10; // [rsp+28h] [rbp-40h]
	int* v11; // [rsp+30h] [rbp-38h]
	int* v12; // [rsp+38h] [rbp-30h]
	__int64 v13; // [rsp+40h] [rbp-28h] BYREF
	int* v14; // [rsp+48h] [rbp-20h]
	int* v15; // [rsp+50h] [rbp-18h]
	int* v16; // [rsp+58h] [rbp-10h]

	v2 = sub_14018B280(16i64, 0);
	v11 = v2;
	v12 = v2 + 4;
	if (v2)
		*(_WORD*)v2 = 0;
	v3 = sub_140056D60(a1, 1u);
	v4 = (_DWORD*)(a1[3] + 16i64);
	v5 = v3;
	if ((unsigned __int64)v4 >= a1[2] || v4 == dword_140A12138 || *(_DWORD*)(a1[3] + 24i64))
	{
		v6 = (char*)sub_140056BB0(a1, 2u, 0i64);
		sub_14018F2D0(&v13, v6);
		v7 = (__int64)v2;
		v2 = v14;
		v11 = v15;
		v12 = v16;
		v10 = v14;
		if (v7)
			sub_14018B900(v7, 0);
		sub_1405DF990(qword_140C65898 + 26680, v5, 2, (__int64)v9);
	}
	if (v2)
		sub_14018B900((__int64)v2, 0);
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C65898: using guessed type __int64 qword_140C65898;
// 14070EF80: using guessed type char var_48[8];

