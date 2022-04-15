#include "../winhttp.h"

//----- (00000001405BB940) ----------------------------------------------------
_QWORD* __fastcall sub_1405BB940(_QWORD* a1)
{
	_QWORD* v1; // rax
	_QWORD* v2; // rbx
	__int64 v4; // rcx
	__int64 v5; // rax
	_QWORD* i; // rax
	__int64 j; // rax
	_QWORD* result; // rax
	_QWORD* v9; // rdi
	__int64 v10; // rsi
	_QWORD* v11; // rax
	_QWORD* v12; // rbx
	__int64 v13; // rcx
	__int64 v14; // rax
	_QWORD* k; // rax
	__int64 m; // rax
	__int64 v17; // rsi
	__int64 v18; // rbp
	__int64 v19; // rbx
	__int64 v20; // rax
	__int64 v21; // rdi
	__int64 v22; // rbx

	v1 = (_QWORD*)a1[2];
	v2 = (_QWORD*)v1[2];
	if (v2 != v1)
	{
		do
		{
			v4 = v2[5];
			if (v4)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v4 + 8i64))(v4);
				v2[5] = 0i64;
			}
			v5 = v2[3];
			if (v5)
			{
				v2 = (_QWORD*)v2[3];
				for (i = *(_QWORD**)(v5 + 16); i; i = (_QWORD*)i[2])
					v2 = i;
			}
			else
			{
				for (j = v2[1]; v2 == *(_QWORD**)(j + 24); j = *(_QWORD*)(j + 8))
					v2 = (_QWORD*)j;
				if (v2[3] != j)
					v2 = (_QWORD*)j;
			}
		} while (v2 != (_QWORD*)a1[2]);
	}
	sub_140008410((__int64)(a1 + 1));
	result = (_QWORD*)a1[6];
	v9 = (_QWORD*)result[2];
	if (v9 != result)
	{
		do
		{
			v10 = v9[5];
			v11 = *(_QWORD**)(v10 + 8);
			v12 = (_QWORD*)v11[2];
			if (v12 != v11)
			{
				do
				{
					v13 = v12[5];
					if (v13)
					{
						(*(void(__fastcall**)(__int64))(*(_QWORD*)v13 + 8i64))(v13);
						v12[5] = 0i64;
					}
					v14 = v12[3];
					if (v14)
					{
						v12 = (_QWORD*)v12[3];
						for (k = *(_QWORD**)(v14 + 16); k; k = (_QWORD*)k[2])
							v12 = k;
					}
					else
					{
						for (m = v12[1]; v12 == *(_QWORD**)(m + 24); m = *(_QWORD*)(m + 8))
							v12 = (_QWORD*)m;
						if (v12[3] != m)
							v12 = (_QWORD*)m;
					}
				} while (v12 != *(_QWORD**)(v10 + 8));
			}
			v17 = v9[5];
			if (v17)
			{
				if (*(_QWORD*)(v17 + 16))
				{
					v18 = *(_QWORD*)(*(_QWORD*)(v17 + 8) + 8i64);
					if (v18)
					{
						do
						{
							sub_1400083B0(v17, *(_QWORD*)(v18 + 24));
							v19 = *(_QWORD*)(v18 + 16);
							sub_14018B900(v18, 0);
							v18 = v19;
						} while (v19);
					}
					*(_QWORD*)(*(_QWORD*)(v17 + 8) + 16i64) = *(_QWORD*)(v17 + 8);
					*(_QWORD*)(*(_QWORD*)(v17 + 8) + 8i64) = 0i64;
					*(_QWORD*)(*(_QWORD*)(v17 + 8) + 24i64) = *(_QWORD*)(v17 + 8);
					*(_QWORD*)(v17 + 16) = 0i64;
				}
				sub_14018B900(*(_QWORD*)(v17 + 8), 0);
				sub_14018B900(v17, 0);
			}
			v20 = v9[3];
			if (v20)
			{
				v9 = (_QWORD*)v9[3];
				for (result = *(_QWORD**)(v20 + 16); result; result = (_QWORD*)result[2])
					v9 = result;
			}
			else
			{
				for (result = (_QWORD*)v9[1]; v9 == (_QWORD*)result[3]; result = (_QWORD*)result[1])
					v9 = result;
				if ((_QWORD*)v9[3] != result)
					v9 = result;
			}
		} while (v9 != (_QWORD*)a1[6]);
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
		result = (_QWORD*)a1[6];
		result[3] = result;
		a1[7] = 0i64;
	}
	return result;
}

