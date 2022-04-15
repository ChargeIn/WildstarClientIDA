#include "../winhttp.h"

//----- (0000000140642F40) ----------------------------------------------------
void __fastcall sub_140642F40(_QWORD* a1)
{
	__int64 v1; // rax
	__int64 v2; // rbx
	__int64 v4; // rax
	__int64 v5; // rdi
	__int64 i; // rax
	__int64 j; // rax
	void(__fastcall * **v8)(_QWORD, __int64); // rcx
	__int64 v9; // rcx
	__int64 v10; // rdi
	__int64 v11; // r14
	__int64 v12; // rbx
	int v13; // edi
	_QWORD* v14; // rbx
	__int64 v15; // rcx
	int* v16; // rdi
	int* v17; // rbx
	__int64 v18; // rcx
	__int64 v19; // rcx
	__int64 v20; // [rsp+50h] [rbp+8h] BYREF

	v1 = a1[14];
	v2 = *(_QWORD*)(v1 + 16);
	if (v2 != v1)
	{
		do
		{
			v4 = *(_QWORD*)(v2 + 24);
			v5 = v2;
			if (v4)
			{
				v2 = *(_QWORD*)(v2 + 24);
				for (i = *(_QWORD*)(v4 + 16); i; i = *(_QWORD*)(i + 16))
					v2 = i;
			}
			else
			{
				for (j = *(_QWORD*)(v2 + 8); v2 == *(_QWORD*)(j + 24); j = *(_QWORD*)(j + 8))
					v2 = j;
				if (*(_QWORD*)(v2 + 24) != j)
					v2 = j;
			}
			v8 = *(void(__fastcall****)(_QWORD, __int64))(v5 + 40);
			if (v8)
				(**v8)(v8, 1i64);
			v20 = v5;
			sub_140645210((__int64)(a1 + 13), &v20);
		} while (v2 != a1[14]);
	}
	a1[33] = 0i64;
	sub_140008410((__int64)(a1 + 13));
	sub_140019490(a1 + 4);
	v9 = a1[3];
	if (v9)
	{
		v10 = *(int*)(v9 - 8);
		v11 = v9 - 8;
		v12 = 48 * v10 + 24;
		v13 = v10 - 1;
		if (v13 >= 0)
		{
			v14 = (_QWORD*)(v9 + v12);
			do
			{
				v15 = *(v14 - 6);
				v14 -= 6;
				*(v14 - 3) = 0i64;
				sub_14018B900(v15, 0);
				--v13;
				*v14 = 0i64;
			} while (v13 >= 0);
		}
		sub_14018B900(v11, 0);
	}
	a1[3] = 0i64;
	v16 = (int*)a1[11];
	v17 = (int*)a1[10];
	sub_1407DB590(v17, v16, 0i64);
	a1[11] += -8 * (((char*)v16 - (char*)v17) >> 3);
	if (a1[36])
	{
		sub_14001A270((__int64)(a1 + 34), *(_QWORD**)(a1[35] + 8i64));
		*(_QWORD*)(a1[35] + 16i64) = a1[35];
		*(_QWORD*)(a1[35] + 8i64) = 0i64;
		*(_QWORD*)(a1[35] + 24i64) = a1[35];
		a1[36] = 0i64;
	}
	sub_14018B900(a1[35], 0);
	v18 = a1[32];
	if (v18)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v18 - 16) + 8i64))(v18 - 16);
	sub_140008410((__int64)(a1 + 28));
	sub_14018B900(a1[29], 0);
	sub_140008410((__int64)(a1 + 24));
	sub_14018B900(a1[25], 0);
	sub_140008410((__int64)(a1 + 20));
	sub_14018B900(a1[21], 0);
	sub_140644FB0(a1 + 18);
	sub_140008410((__int64)(a1 + 13));
	sub_14018B900(a1[14], 0);
	v19 = a1[10];
	if (v19)
		sub_14018B900(v19, 0);
	sub_140019490(a1 + 4);
	sub_14018B900(a1[6], 0);
	a1[6] = 0i64;
}

