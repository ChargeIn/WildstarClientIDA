#include "../winhttp.h"

//----- (0000000140171F50) ----------------------------------------------------
__int64 __fastcall sub_140171F50(_QWORD* a1)
{
	__int64 v2; // rbp
	int v3; // ebx
	char* v4; // rax
	_DWORD* v5; // rsi
	_DWORD* v6; // rcx
	char* v7; // rax
	unsigned __int64 v8; // rcx
	__int64 v9; // r8
	int v10; // edx
	__m128i* v11; // rsi
	__int64 v12; // rbx
	int* v13; // rax
	__int64 v14; // rdx
	__m128i v15; // xmm0
	int v17; // [rsp+28h] [rbp-70h]
	__int64 v18; // [rsp+40h] [rbp-58h] BYREF
	__m128i* v19; // [rsp+48h] [rbp-50h]
	__int64 v20; // [rsp+60h] [rbp-38h] BYREF
	__int64 v21; // [rsp+68h] [rbp-30h]
	int v22; // [rsp+A0h] [rbp+8h] BYREF
	int v23; // [rsp+A8h] [rbp+10h] BYREF

	v2 = sub_140171EB0(a1);
	v3 = sub_140056D60(a1, 2u);
	v4 = (char*)sub_140056BB0(a1, 3u, 0i64);
	sub_14018F2D0(&v20, v4);
	v5 = dword_140A12138;
	v6 = (_DWORD*)(a1[3] + 48i64);
	if ((unsigned __int64)v6 >= a1[2] || v6 == dword_140A12138 || *(int*)(a1[3] + 56i64) <= 0)
		v7 = (char*)&unk_1409D064E;
	else
		v7 = (char*)sub_140056BB0(a1, 4u, 0i64);
	sub_14018F2D0(&v18, v7);
	v8 = a1[2];
	v9 = a1[3];
	v10 = -2;
	if ((int)((__int64)(v8 - v9) >> 4) >= 5)
	{
		if (v9 + 64 < v8)
			v5 = (_DWORD*)(v9 + 64);
		*(_QWORD*)v8 = *(_QWORD*)v5;
		*(_DWORD*)(v8 + 8) = v5[2];
		a1[2] += 16i64;
		v10 = sub_1400578C0((__int64)a1);
	}
	v11 = v19;
	v22 = v3;
	v12 = v21;
	v13 = sub_14016DED0(v2, &v23, &v22, v21, v19, v17, v10);
	v14 = a1[2];
	v15 = _mm_cvtsi32_si128(*v13);
	*(_DWORD*)(v14 + 8) = 3;
	*(_QWORD*)v14 = *(_OWORD*)&_mm_cvtepi32_pd(v15);
	a1[2] += 16i64;
	if (v11)
		sub_14018B900((__int64)v11, 0);
	if (v12)
		sub_14018B900(v12, 0);
	return 1i64;
}
// 14017204C: variable 'v17' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];

