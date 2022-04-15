#include "../winhttp.h"

//----- (00000001400B5010) ----------------------------------------------------
void __fastcall sub_1400B5010(__int64* a1, char* a2, __int64 a3)
{
	_QWORD* v3; // rax
	int* v7; // rbp
	__int64 v8; // r12
	int* v9; // rsi
	int* v10; // r14
	__int64 v11; // rbx
	__int64 v12; // rsi
	__int64 v13; // rbx
	__int64 j; // rdi
	__int64 v15; // rax
	__int64 v16; // rcx
	__int64 v17; // r12
	int* v18; // r14
	_QWORD* v19; // rax
	_QWORD* v20; // rbx
	_QWORD* v21; // rax
	__int64 v22; // rsi
	__int64 v23; // rbx
	_QWORD* i; // rbp
	__int64 v25; // rcx
	__int64 v26; // rcx
	char v27; // [rsp+20h] [rbp-38h] BYREF

	v3 = (_QWORD*)a1[2];
	if (v3 == (_QWORD*)a1[3])
	{
		v15 = ((__int64)v3 - a1[1]) >> 5;
		v16 = 2 * v15;
		if (!v15)
			v16 = 1i64;
		v17 = sub_14018A3E0(32 * v16) & 0xFFFFFFFFFFFFFFE0ui64;
		v18 = sub_14018B280(v17, 0);
		v19 = sub_1400B5210(a1[1], (__int64)a2, v18);
		v20 = v19;
		if (v19)
		{
			v19[1] = 0i64;
			v19[2] = 0i64;
			v19[3] = 0i64;
			sub_14001B240(v19, *(int**)(a3 + 8), *(_QWORD*)(a3 + 16));
		}
		v21 = sub_1400B5210((__int64)a2, a1[2], v20 + 4);
		v22 = a1[2];
		v23 = a1[1];
		for (i = v21; v23 != v22; v23 += 32i64)
		{
			v25 = *(_QWORD*)(v23 + 8);
			if (v25)
				sub_14018B900(v25, 0);
		}
		v26 = a1[1];
		if (v26)
			sub_14018B900(v26, 0);
		a1[1] = (__int64)v18;
		a1[2] = (__int64)i;
		a1[3] = (__int64)v18 + v17;
	}
	else
	{
		v7 = 0i64;
		if (v3)
		{
			v3[1] = 0i64;
			v3[2] = 0i64;
			v3[3] = 0i64;
			sub_14001B240(v3, (int*)*(v3 - 3), *(v3 - 2));
		}
		a1[2] += 32i64;
		v8 = *(_QWORD*)(a3 + 16);
		v9 = *(int**)(a3 + 8);
		if (v8 - (_QWORD)v9 != -2)
			v7 = sub_14018B280(v8 - (_QWORD)v9 + 1, 0);
		sub_1407DB590(v7, v9, v8 - (_QWORD)v9);
		v10 = (int*)(v8 + (char*)v7 - (char*)v9);
		if (v10)
			*(_BYTE*)v10 = 0;
		v11 = a1[2];
		v12 = v11 - 32;
		v13 = v11 - 64;
		for (j = (v13 - (__int64)a2) >> 5; j > 0; --j)
		{
			v13 -= 32i64;
			v12 -= 32i64;
			if (v13 != v12)
				sub_14001B1A0(v12, *(int**)(v13 + 8), *(int**)(v13 + 16));
		}
		if (&v27 != a2)
			sub_14001B1A0((__int64)a2, v7, v10);
		if (v7)
			sub_14018B900((__int64)v7, 0);
	}
}

