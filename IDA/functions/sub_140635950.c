#include "../winhttp.h"

//----- (0000000140635950) ----------------------------------------------------
void __fastcall sub_140635950(_QWORD* a1)
{
	__int64 v2; // rsi
	__int64 v3; // rbp
	_QWORD* v4; // rax
	_QWORD* v5; // rbx
	_QWORD* v6; // rdi
	__int64 v7; // rcx
	__int64 v8; // rcx
	__int64 v9; // rax
	_QWORD* i; // rax
	__int64 j; // rax
	__int64 v12; // rdi
	__int64 v13; // rbx
	__int64 v14; // rcx
	int v15; // ebp
	__int64* v16; // rdi
	bool v17; // zf
	__int64 v18; // rsi
	__int64 v19; // rbx

	v2 = (__int64)a1;
	v3 = 7i64;
	do
	{
		v4 = *(_QWORD**)(v2 + 8);
		v5 = (_QWORD*)v4[2];
		if (v5 != v4)
		{
			do
			{
				v6 = (_QWORD*)v5[5];
				if (v6)
				{
					v7 = v6[4];
					if (v7)
						(*(void(__fastcall**)(__int64))(*(_QWORD*)(v7 - 16) + 8i64))(v7 - 16);
					v8 = v6[2];
					if (v8)
						(*(void(__fastcall**)(__int64))(*(_QWORD*)(v8 - 16) + 8i64))(v8 - 16);
					if (*v6)
						(*(void(__fastcall**)(__int64))(*(_QWORD*)(*v6 - 16i64) + 8i64))(*v6 - 16i64);
					sub_14018B900((__int64)v6, 0);
				}
				v9 = v5[3];
				if (v9)
				{
					v5 = (_QWORD*)v5[3];
					for (i = *(_QWORD**)(v9 + 16); i; i = (_QWORD*)i[2])
						v5 = i;
				}
				else
				{
					for (j = v5[1]; v5 == *(_QWORD**)(j + 24); j = *(_QWORD*)(j + 8))
						v5 = (_QWORD*)j;
					if (v5[3] != j)
						v5 = (_QWORD*)j;
				}
			} while (v5 != *(_QWORD**)(v2 + 8));
		}
		if (*(_QWORD*)(v2 + 16))
		{
			v12 = *(_QWORD*)(*(_QWORD*)(v2 + 8) + 8i64);
			if (v12)
			{
				do
				{
					sub_1400083B0(v2, *(_QWORD*)(v12 + 24));
					v13 = *(_QWORD*)(v12 + 16);
					sub_14018B900(v12, 0);
					v12 = v13;
				} while (v13);
			}
			*(_QWORD*)(*(_QWORD*)(v2 + 8) + 16i64) = *(_QWORD*)(v2 + 8);
			*(_QWORD*)(*(_QWORD*)(v2 + 8) + 8i64) = 0i64;
			*(_QWORD*)(*(_QWORD*)(v2 + 8) + 24i64) = *(_QWORD*)(v2 + 8);
			*(_QWORD*)(v2 + 16) = 0i64;
		}
		v2 += 32i64;
		--v3;
	} while (v3);
	v14 = a1[40];
	if (v14)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v14 - 16) + 8i64))(v14 - 16);
	sub_14063A490(a1 + 35);
	sub_14018B900(a1[37], 0);
	a1[37] = 0i64;
	v15 = 6;
	v16 = a1 + 29;
	do
	{
		v17 = *(v16 - 3) == 0;
		v16 -= 4;
		if (!v17)
		{
			v18 = *(_QWORD*)(*v16 + 8);
			if (v18)
			{
				do
				{
					sub_1400083B0((__int64)(v16 - 1), *(_QWORD*)(v18 + 24));
					v19 = *(_QWORD*)(v18 + 16);
					sub_14018B900(v18, 0);
					v18 = v19;
				} while (v19);
			}
			*(_QWORD*)(*v16 + 16) = *v16;
			*(_QWORD*)(*v16 + 8) = 0i64;
			*(_QWORD*)(*v16 + 24) = *v16;
			v16[1] = 0i64;
		}
		sub_14018B900(*v16, 0);
		--v15;
	} while (v15 >= 0);
}

