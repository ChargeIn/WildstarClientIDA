#include "../winhttp.h"

//----- (00000001404CBED0) ----------------------------------------------------
void sub_1404CBED0()
{
	__int64 v0; // r13
	_QWORD* v1; // rax
	_QWORD* v2; // rbx
	__int64 v3; // r14
	_QWORD* v4; // rcx
	_QWORD* v5; // rcx
	__int64 v6; // rcx
	__int64 v7; // r15
	__int64 i; // rdi
	__int64 v9; // rbp
	__int64 v10; // rsi
	__int64 v11; // rcx
	__int64 v12; // rax
	_QWORD* j; // rax
	__int64 k; // rax

	v0 = qword_140C65A00;
	v1 = *(_QWORD**)(qword_140C65A00 + 8);
	v2 = (_QWORD*)v1[2];
	if (v2 != v1)
	{
		do
		{
			v3 = v2[5];
			if (v3)
			{
				sub_140195D70(v3 + 80);
				*(_DWORD*)(v3 + 80) = 0;
				v4 = *(_QWORD**)(v3 + 96);
				if (v4)
					*v4 = *(_QWORD*)(v3 + 104);
				v5 = *(_QWORD**)(v3 + 104);
				if (v5)
					*v5 = *(_QWORD*)(v3 + 96);
				*(_QWORD*)(v3 + 96) = 0i64;
				*(_QWORD*)(v3 + 104) = 0i64;
				v6 = *(_QWORD*)(v3 + 40);
				if (v6)
					sub_14018B900(v6, 0);
				v7 = *(_QWORD*)(v3 + 16);
				for (i = *(_QWORD*)(v3 + 8); i != v7; i += 40i64)
				{
					if (*(_QWORD*)(i + 16))
					{
						v9 = *(_QWORD*)(*(_QWORD*)(i + 8) + 8i64);
						if (v9)
						{
							do
							{
								sub_1400083B0(i, *(_QWORD*)(v9 + 24));
								v10 = *(_QWORD*)(v9 + 16);
								sub_14018B900(v9, 0);
								v9 = v10;
							} while (v10);
						}
						*(_QWORD*)(*(_QWORD*)(i + 8) + 16i64) = *(_QWORD*)(i + 8);
						*(_QWORD*)(*(_QWORD*)(i + 8) + 8i64) = 0i64;
						*(_QWORD*)(*(_QWORD*)(i + 8) + 24i64) = *(_QWORD*)(i + 8);
						*(_QWORD*)(i + 16) = 0i64;
					}
					sub_14018B900(*(_QWORD*)(i + 8), 0);
				}
				v11 = *(_QWORD*)(v3 + 8);
				if (v11)
					sub_14018B900(v11, 0);
				sub_14018B900(v3, 0);
			}
			v12 = v2[3];
			if (v12)
			{
				v2 = (_QWORD*)v2[3];
				for (j = *(_QWORD**)(v12 + 16); j; j = (_QWORD*)j[2])
					v2 = j;
			}
			else
			{
				for (k = v2[1]; v2 == *(_QWORD**)(k + 24); k = *(_QWORD*)(k + 8))
					v2 = (_QWORD*)k;
				if (v2[3] != k)
					v2 = (_QWORD*)k;
			}
		} while (v2 != *(_QWORD**)(v0 + 8));
	}
	sub_140008410(v0);
}
// 140C65A00: using guessed type __int64 qword_140C65A00;

