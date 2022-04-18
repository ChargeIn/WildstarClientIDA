#include "../winhttp.h"

//----- (00000001404BADA0) ----------------------------------------------------
__int64 __fastcall sub_1404BADA0(__int64 a1, __int64 a2)
{
	_QWORD* v3; // r14
	unsigned int i; // r12d
	int* v5; // rax
	int* v6; // rsi
	__int64 v7; // rcx
	__int64 v8; // rdi
	__int64 v9; // r15
	int* v10; // rbp
	unsigned __int64 v11; // rdi
	__int64 v12; // rax
	int* v13; // rbx
	int* v14; // rbp
	__int64 v15; // rax
	__int64 v16; // rdi
	__int64 v17; // rax
	unsigned __int64 v18; // kr00_8
	int* v19; // rbx
	int* v20; // rdx
	__int64 v22; // [rsp+50h] [rbp+8h] BYREF

	v22 = a1;
	v3 = (_QWORD*)(qword_140C659F0 + 536);
	sub_1404B4910(qword_140C659F0 + 536);
	for (i = 0; i < *(_DWORD*)a2; ++i)
	{
		v5 = sub_14018B280(32i64, 0);
		v6 = v5;
		if (v5)
		{
			*v5 = 0;
			*((_QWORD*)v5 + 1) = 0i64;
			v22 = (__int64)v5;
		}
		else
		{
			v6 = 0i64;
			v22 = 0i64;
		}
		v7 = *(_QWORD*)(a2 + 8);
		v8 = 0i64;
		v9 = 32i64 * i;
		*(_QWORD*)v6 = *(_QWORD*)(v7 + v9);
		*((_QWORD*)v6 + 1) = *(_QWORD*)(v7 + v9 + 8);
		v10 = *(int**)(*(_QWORD*)(a2 + 8) + v9 + 16);
		if (*(_WORD*)v10)
		{
			do
				++v8;
			while (*((_WORD*)v10 + v8));
		}
		v11 = v8 + 1;
		v12 = 2 * v11;
		if (!is_mul_ok(v11, 2ui64))
			v12 = -1i64;
		v13 = sub_14018B280(v12, 0);
		sub_1407DB590(v13, v10, 2 * v11);
		*((_QWORD*)v6 + 2) = v13;
		v14 = *(int**)(*(_QWORD*)(a2 + 8) + v9 + 24);
		v15 = 0i64;
		if (*(_WORD*)v14)
		{
			do
				++v15;
			while (*((_WORD*)v14 + v15));
		}
		v16 = v15 + 1;
		v18 = v15 + 1;
		v17 = 2 * (v15 + 1);
		if (!is_mul_ok(v18, 2ui64))
			v17 = -1i64;
		v19 = sub_14018B280(v17, 0);
		sub_1407DB590(v19, v14, 2 * v16);
		*((_QWORD*)v6 + 3) = v19;
		v20 = (int*)v3[2];
		if (v20 == (int*)v3[3])
		{
			sub_14010A1C0(v3, v20, &v22);
		}
		else
		{
			if (v20)
				*(_QWORD*)v20 = v6;
			v3[2] += 8i64;
		}
	}
	Apollo_LUAEvent(*(_QWORD*)(qword_140C65898 + 29504), "HousingRandomCommunityListReceived", byte_1409D100F);
	return 0i64;
}
// 1409D100F: using guessed type _BYTE byte_1409D100F[39];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C659F0: using guessed type __int64 qword_140C659F0;

