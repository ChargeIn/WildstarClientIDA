#include "../winhttp.h"

//----- (00000001404D22F0) ----------------------------------------------------
void __fastcall sub_1404D22F0(_QWORD* a1)
{
	_QWORD* v2; // rax
	_QWORD* v3; // rbx
	void(__fastcall * **v4)(_QWORD, __int64); // rcx
	__int64 v5; // rax
	_QWORD* i; // rax
	__int64 j; // rax
	_QWORD* v8; // rax
	_QWORD* v9; // rbx
	void(__fastcall * **v10)(_QWORD, __int64); // rcx
	__int64 v11; // rax
	_QWORD* k; // rax
	__int64 m; // rax
	__int64 v14; // rsi
	__int64 v15; // rbx
	__int64 v16; // rbp
	__int64 v17; // rbx
	_QWORD* v18; // rbx
	int n; // ebp
	__int64 v20; // rcx
	__int64 v21; // rbp
	__int64 v22; // rbx
	__int64 v23; // rsi
	__int64 v24; // rbx

	*a1 = off_140B69030;
	v2 = (_QWORD*)a1[2];
	v3 = (_QWORD*)v2[2];
	if (v3 != v2)
	{
		do
		{
			v4 = (void(__fastcall***)(_QWORD, __int64))v3[5];
			if (v4)
				(**v4)(v4, 1i64);
			v5 = v3[3];
			if (v5)
			{
				v3 = (_QWORD*)v3[3];
				for (i = *(_QWORD**)(v5 + 16); i; i = (_QWORD*)i[2])
					v3 = i;
			}
			else
			{
				for (j = v3[1]; v3 == *(_QWORD**)(j + 24); j = *(_QWORD*)(j + 8))
					v3 = (_QWORD*)j;
				if (v3[3] != j)
					v3 = (_QWORD*)j;
			}
		} while (v3 != (_QWORD*)a1[2]);
	}
	v8 = (_QWORD*)a1[6];
	v9 = (_QWORD*)v8[2];
	if (v9 != v8)
	{
		do
		{
			v10 = (void(__fastcall***)(_QWORD, __int64))v9[5];
			if (v10)
				(**v10)(v10, 1i64);
			v11 = v9[3];
			if (v11)
			{
				v9 = (_QWORD*)v9[3];
				for (k = *(_QWORD**)(v11 + 16); k; k = (_QWORD*)k[2])
					v9 = k;
			}
			else
			{
				for (m = v9[1]; v9 == *(_QWORD**)(m + 24); m = *(_QWORD*)(m + 8))
					v9 = (_QWORD*)m;
				if (v9[3] != m)
					v9 = (_QWORD*)m;
			}
		} while (v9 != (_QWORD*)a1[6]);
	}
	if (a1[3])
	{
		v14 = *(_QWORD*)(a1[2] + 8i64);
		if (v14)
		{
			do
			{
				sub_1400083B0((__int64)(a1 + 1), *(_QWORD*)(v14 + 24));
				v15 = *(_QWORD*)(v14 + 16);
				sub_14018B900(v14, 0);
				v14 = v15;
			} while (v15);
		}
		*(_QWORD*)(a1[2] + 16i64) = a1[2];
		*(_QWORD*)(a1[2] + 8i64) = 0i64;
		*(_QWORD*)(a1[2] + 24i64) = a1[2];
		a1[3] = 0i64;
	}
	if (a1[7])
	{
		v16 = *(_QWORD*)(a1[6] + 8i64);
		if (v16)
		{
			do
			{
				sub_1400083B0((__int64)(a1 + 5), *(_QWORD*)(v16 + 24));
				v17 = *(_QWORD*)(v16 + 16);
				sub_14018B900(v16, 0);
				v16 = v17;
			} while (v17);
		}
		*(_QWORD*)(a1[6] + 16i64) = a1[6];
		*(_QWORD*)(a1[6] + 8i64) = 0i64;
		*(_QWORD*)(a1[6] + 24i64) = a1[6];
		a1[7] = 0i64;
	}
	v18 = a1 + 19;
	for (n = 4; n >= 0; --n)
	{
		v20 = *(v18 - 2);
		v18 -= 2;
		if (v20)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(v20 - 16) + 8i64))(v20 - 16);
	}
	if (a1[7])
	{
		v21 = *(_QWORD*)(a1[6] + 8i64);
		if (v21)
		{
			do
			{
				sub_1400083B0((__int64)(a1 + 5), *(_QWORD*)(v21 + 24));
				v22 = *(_QWORD*)(v21 + 16);
				sub_14018B900(v21, 0);
				v21 = v22;
			} while (v22);
		}
		*(_QWORD*)(a1[6] + 16i64) = a1[6];
		*(_QWORD*)(a1[6] + 8i64) = 0i64;
		*(_QWORD*)(a1[6] + 24i64) = a1[6];
		a1[7] = 0i64;
	}
	sub_14018B900(a1[6], 0);
	if (a1[3])
	{
		v23 = *(_QWORD*)(a1[2] + 8i64);
		if (v23)
		{
			do
			{
				sub_1400083B0((__int64)(a1 + 1), *(_QWORD*)(v23 + 24));
				v24 = *(_QWORD*)(v23 + 16);
				sub_14018B900(v23, 0);
				v23 = v24;
			} while (v24);
		}
		*(_QWORD*)(a1[2] + 16i64) = a1[2];
		*(_QWORD*)(a1[2] + 8i64) = 0i64;
		*(_QWORD*)(a1[2] + 24i64) = a1[2];
		a1[3] = 0i64;
	}
	sub_14018B900(a1[2], 0);
}
// 140B69030: using guessed type __int64 (__fastcall *off_140B69030[21])();

