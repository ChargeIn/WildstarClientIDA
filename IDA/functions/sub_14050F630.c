#include "../winhttp.h"

//----- (000000014050F630) ----------------------------------------------------
__int64 __fastcall sub_14050F630(_QWORD* a1)
{
	unsigned int v1; // r14d
	int v3; // ebx
	int* v4; // rax
	int* v5; // rdi
	__int64 v6; // rcx
	int v7; // eax
	__int64 v8; // rdx
	int* v9; // rcx
	__int64 v10; // rax
	unsigned int v11; // ebp
	int* i; // rbx
	__int64 v13; // rax
	__m128i v14; // xmm0
	int* v15; // rbx
	__int64 v16; // rcx
	char v18[8]; // [rsp+20h] [rbp-18h] BYREF
	int* v19; // [rsp+28h] [rbp-10h]

	v1 = 1;
	v3 = sub_140056D60(a1, 1u);
	v4 = sub_14018B280(24i64, 0);
	*(_QWORD*)v4 = v4;
	*((_QWORD*)v4 + 1) = v4;
	v5 = v4;
	v19 = v4;
	LOBYTE(v7) = sub_140556670(v6, (__int64)v18, v3);
	if (!v7)
		goto LABEL_8;
	v9 = *(int**)v5;
	v10 = 0i64;
	if (*(int**)v5 == v5)
		goto LABEL_8;
	do
	{
		v9 = *(int**)v9;
		++v10;
	} while (v9 != v5);
	if (v10)
	{
		v11 = 1;
		sub_140058900((__int64)a1, v8, 0);
		for (i = *(int**)v5; i != v5; i = *(int**)i)
		{
			v13 = a1[2];
			v14 = _mm_cvtsi32_si128(v11);
			*(_DWORD*)(v13 + 8) = 3;
			++v11;
			*(_QWORD*)v13 = *(_OWORD*)&_mm_cvtepi32_pd(v14);
			a1[2] += 16i64;
			sub_14072F540(a1, *((void(__fastcall****)(_QWORD))i + 2));
			sub_14005EA50((__int64)a1, (__int64*)(a1[2] - 48i64), (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
			a1[2] -= 32i64;
		}
	}
	else
	{
	LABEL_8:
		v1 = 0;
	}
	v15 = *(int**)v5;
	while (v15 != v5)
	{
		v16 = (__int64)v15;
		v15 = *(int**)v15;
		sub_14018B900(v16, 0);
	}
	*(_QWORD*)v5 = v5;
	*((_QWORD*)v5 + 1) = v5;
	sub_14018B900((__int64)v5, 0);
	return v1;
}
// 14050F679: variable 'v6' is possibly undefined
// 14050F680: variable 'v7' is possibly undefined
// 14050F6B2: variable 'v8' is possibly undefined
// 14050F630: using guessed type char var_18[8];

