#include "../winhttp.h"

//----- (00000001400DA570) ----------------------------------------------------
__int64 __fastcall sub_1400DA570(_QWORD* a1)
{
	__int64 v1; // rdi
	unsigned __int64 v3; // r8
	unsigned int v4; // edx
	__int64 v5; // rcx
	__int64 v6; // rax
	_QWORD* v7; // rbx
	_QWORD* v8; // rdi
	_DWORD* v9; // rbp
	char* v10; // rdx
	_DWORD* v11; // rax
	__int64 v12; // rdi
	int v13; // eax
	__int64 v15; // [rsp+20h] [rbp-48h] BYREF
	__int64 v16; // [rsp+28h] [rbp-40h]
	__int64 v17; // [rsp+40h] [rbp-28h] BYREF
	__int64 v18; // [rsp+48h] [rbp-20h]

	v1 = 0i64;
	v3 = *(_QWORD*)(qword_140C63650 + 768);
	v4 = 0;
	if (v3)
	{
		v5 = *(_QWORD*)(qword_140C63650 + 760);
		v6 = 0i64;
		while (*(_QWORD**)(*(_QWORD*)(v5 + 8 * v6) + 400i64) != a1)
		{
			v6 = ++v4;
			if (v4 >= v3)
				goto LABEL_7;
		}
		v1 = *(_QWORD*)(v5 + 8i64 * v4);
	}
LABEL_7:
	v7 = (_QWORD*)sub_1400D66A0(a1, 1u);
	if (v7)
	{
		v8 = *(_QWORD**)(v1 + 400);
		v9 = dword_140A12138;
		v10 = (char*)sub_14018F0E0(&v17, word_1409D337C)[1];
		v11 = (_DWORD*)(v8[3] + 16i64);
		if ((unsigned __int64)v11 < v8[2] && v11 != dword_140A12138 && *(int*)(v8[3] + 24i64) > 0)
			v10 = (char*)sub_140056BB0(v8, 2u, 0i64);
		sub_14018F2D0(&v15, v10);
		if (v18)
			sub_14018B900(v18, 0);
		v12 = (*(__int64(__fastcall**)(_QWORD*, __int64))(*v7 + 448i64))(v7, v16);
		if (v16)
			sub_14018B900(v16, 0);
		if (v12)
		{
			if ((unsigned __int64)(a1[3] + 32i64) < a1[2])
				v9 = (_DWORD*)(a1[3] + 32i64);
			v13 = v9[2];
			if (v13 && (v13 != 1 || *v9))
				v7[82] |= v12;
			else
				v7[82] &= ~v12;
		}
	}
	return 0i64;
}
// 1409D337C: using guessed type unsigned __int16 word_1409D337C[12];
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C63650: using guessed type __int64 qword_140C63650;

