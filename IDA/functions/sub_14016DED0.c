#include "../winhttp.h"

//----- (000000014016DED0) ----------------------------------------------------
int* __fastcall sub_14016DED0(__int64 a1, int* a2, int* a3, __int64 a4, __m128i* a5, int a6, int a7)
{
	_QWORD* v11; // rbx
	__int64 v12; // r14
	__int64 v13; // rax
	__int64 v14; // r9
	__int64 v15; // rdx
	int* v16; // rdx
	__int64 v17; // rdi
	__int64 v18; // rbx
	int v19; // edi
	int* v20; // rax
	__int64 v21; // rcx
	int v23; // [rsp+30h] [rbp-28h]
	__int64 v24; // [rsp+70h] [rbp+18h] BYREF

	if (*a3 >= 0
		&& (v11 = (_QWORD*)(a1 + 1408), *a3 < (int)((__int64)(*(_QWORD*)(a1 + 1424) - *(_QWORD*)(a1 + 1416)) >> 3))
		&& (v12 = *(_QWORD*)(*(_QWORD*)(a1 + 1416) + 8i64 * *a3)) != 0)
	{
		v13 = (__int64)sub_14018B280(128i64, 0);
		if (v13)
		{
			v14 = *(_QWORD*)(a1 + 696);
			v15 = *(_QWORD*)(a1 + 32);
			LODWORD(v24) = *a3;
			v13 = sub_14016C9A0(v13, v15, &v24, v14, a4, a5, v23, a7);
		}
		v16 = (int*)v11[2];
		v24 = v13;
		if (v16 == (int*)v11[3])
		{
			sub_1400B9430(v11, v16, &v24);
		}
		else
		{
			if (v16)
				*(_QWORD*)v16 = v13;
			v11[2] += 8i64;
		}
		v17 = v11[2] - v11[1];
		v18 = *(_QWORD*)(v12 + 96);
		v19 = (v17 >> 3) - 1;
		v20 = sub_14018B280(24i64, 0);
		if (v20 != (int*)-16i64)
			v20[4] = v19;
		*(_QWORD*)v20 = v18;
		v21 = *(_QWORD*)(v18 + 8);
		*a2 = v19;
		*((_QWORD*)v20 + 1) = v21;
		**(_QWORD**)(v18 + 8) = v20;
		*(_QWORD*)(v18 + 8) = v20;
		*(_BYTE*)(a1 + 1368) = 1;
	}
	else
	{
		*a2 = -1;
	}
	return a2;
}
// 14016DF79: variable 'v23' is possibly undefined

