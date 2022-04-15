#include "../winhttp.h"

//----- (00000001404AC840) ----------------------------------------------------
_QWORD* sub_1404AC840()
{
	_QWORD* v0; // rbp
	_QWORD* v1; // rax
	_QWORD* v2; // rbx
	__int64 v3; // rsi
	_QWORD** v4; // rax
	_QWORD* v5; // rdi
	__int64 v6; // rcx
	__int64 v7; // rax
	_QWORD* i; // rax
	__int64 j; // rax
	_QWORD* v10; // rax
	_QWORD* v11; // rbx
	__int64 v12; // rsi
	_QWORD** v13; // rax
	_QWORD* v14; // rdi
	__int64 v15; // rcx
	__int64 v16; // rax
	_QWORD* k; // rax
	__int64 m; // rax
	_QWORD* result; // rax
	_QWORD* v20; // rbx
	__int64 v21; // rsi
	_QWORD** v22; // rax
	_QWORD* v23; // rdi
	__int64 v24; // rcx
	__int64 v25; // rax

	v0 = (_QWORD*)qword_140C659D0;
	v1 = *(_QWORD**)(qword_140C659D0 + 304);
	v2 = (_QWORD*)v1[2];
	if (v2 != v1)
	{
		do
		{
			v3 = v2[5];
			if (v3)
			{
				v4 = *(_QWORD***)(v3 + 8);
				v5 = *v4;
				if (*v4 != v4)
				{
					do
					{
						v6 = (__int64)v5;
						v5 = (_QWORD*)*v5;
						sub_14018B900(v6, 0);
					} while (v5 != *(_QWORD**)(v3 + 8));
				}
				**(_QWORD**)(v3 + 8) = *(_QWORD*)(v3 + 8);
				*(_QWORD*)(*(_QWORD*)(v3 + 8) + 8i64) = *(_QWORD*)(v3 + 8);
				sub_14018B900(*(_QWORD*)(v3 + 8), 0);
				sub_14018B900(v3, 0);
			}
			v7 = v2[3];
			if (v7)
			{
				v2 = (_QWORD*)v2[3];
				for (i = *(_QWORD**)(v7 + 16); i; i = (_QWORD*)i[2])
					v2 = i;
			}
			else
			{
				for (j = v2[1]; v2 == *(_QWORD**)(j + 24); j = *(_QWORD*)(j + 8))
					v2 = (_QWORD*)j;
				if (v2[3] != j)
					v2 = (_QWORD*)j;
			}
		} while (v2 != (_QWORD*)v0[38]);
	}
	v10 = (_QWORD*)v0[42];
	v11 = (_QWORD*)v10[2];
	if (v11 != v10)
	{
		do
		{
			v12 = v11[5];
			if (v12)
			{
				v13 = *(_QWORD***)(v12 + 8);
				v14 = *v13;
				if (*v13 != v13)
				{
					do
					{
						v15 = (__int64)v14;
						v14 = (_QWORD*)*v14;
						sub_14018B900(v15, 0);
					} while (v14 != *(_QWORD**)(v12 + 8));
				}
				**(_QWORD**)(v12 + 8) = *(_QWORD*)(v12 + 8);
				*(_QWORD*)(*(_QWORD*)(v12 + 8) + 8i64) = *(_QWORD*)(v12 + 8);
				sub_14018B900(*(_QWORD*)(v12 + 8), 0);
				sub_14018B900(v12, 0);
			}
			v16 = v11[3];
			if (v16)
			{
				v11 = (_QWORD*)v11[3];
				for (k = *(_QWORD**)(v16 + 16); k; k = (_QWORD*)k[2])
					v11 = k;
			}
			else
			{
				for (m = v11[1]; v11 == *(_QWORD**)(m + 24); m = *(_QWORD*)(m + 8))
					v11 = (_QWORD*)m;
				if (v11[3] != m)
					v11 = (_QWORD*)m;
			}
		} while (v11 != (_QWORD*)v0[42]);
	}
	result = (_QWORD*)v0[46];
	v20 = (_QWORD*)result[2];
	if (v20 != result)
	{
		do
		{
			v21 = v20[5];
			if (v21)
			{
				v22 = *(_QWORD***)(v21 + 8);
				v23 = *v22;
				if (*v22 != v22)
				{
					do
					{
						v24 = (__int64)v23;
						v23 = (_QWORD*)*v23;
						sub_14018B900(v24, 0);
					} while (v23 != *(_QWORD**)(v21 + 8));
				}
				**(_QWORD**)(v21 + 8) = *(_QWORD*)(v21 + 8);
				*(_QWORD*)(*(_QWORD*)(v21 + 8) + 8i64) = *(_QWORD*)(v21 + 8);
				sub_14018B900(*(_QWORD*)(v21 + 8), 0);
				sub_14018B900(v21, 0);
			}
			v25 = v20[3];
			if (v25)
			{
				v20 = (_QWORD*)v20[3];
				for (result = *(_QWORD**)(v25 + 16); result; result = (_QWORD*)result[2])
					v20 = result;
			}
			else
			{
				for (result = (_QWORD*)v20[1]; v20 == (_QWORD*)result[3]; result = (_QWORD*)result[1])
					v20 = result;
				if ((_QWORD*)v20[3] != result)
					v20 = result;
			}
		} while (v20 != (_QWORD*)v0[46]);
	}
	return result;
}
// 140C659D0: using guessed type __int64 qword_140C659D0;

