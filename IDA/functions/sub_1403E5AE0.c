#include "../winhttp.h"

//----- (00000001403E5AE0) ----------------------------------------------------
void __fastcall sub_1403E5AE0(_QWORD* a1)
{
	_QWORD* v1; // rbx
	_QWORD* v3; // rax
	_QWORD* v4; // rdi
	_QWORD* v5; // rbx
	_QWORD* v6; // rax
	_QWORD* i; // rax
	__int64 v8; // rcx
	__int64 v9; // rbp
	_QWORD** v10; // rax
	_QWORD* v11; // rsi
	__int64 v12; // rcx
	_QWORD* v13; // [rsp+40h] [rbp+8h] BYREF

	v1 = a1 + 3994;
	if (a1[3996])
	{
		sub_14001A270((__int64)(a1 + 3994), *(_QWORD**)(a1[3995] + 8i64));
		*(_QWORD*)(v1[1] + 16i64) = v1[1];
		*(_QWORD*)(v1[1] + 8i64) = 0i64;
		*(_QWORD*)(v1[1] + 24i64) = v1[1];
		v1[2] = 0i64;
	}
	if (a1[4000])
	{
		sub_14001A270((__int64)(a1 + 3998), *(_QWORD**)(a1[3999] + 8i64));
		*(_QWORD*)(a1[3999] + 16i64) = a1[3999];
		*(_QWORD*)(a1[3999] + 8i64) = 0i64;
		*(_QWORD*)(a1[3999] + 24i64) = a1[3999];
		a1[4000] = 0i64;
	}
	v3 = (_QWORD*)a1[4011];
	v4 = (_QWORD*)v3[2];
	if (v4 != v3)
	{
		do
		{
			v5 = (_QWORD*)v4[3];
			v6 = v4;
			if (v5)
			{
				for (i = (_QWORD*)v5[2]; i; i = (_QWORD*)i[2])
					v5 = i;
			}
			else
			{
				v8 = v4[1];
				if (v4 == *(_QWORD**)(v8 + 24))
				{
					do
					{
						v6 = (_QWORD*)v8;
						v8 = *(_QWORD*)(v8 + 8);
					} while (v6 == *(_QWORD**)(v8 + 24));
				}
				v5 = v6;
				if (v6[3] != v8)
					v5 = (_QWORD*)v8;
			}
			v9 = v4[5];
			if (v9)
			{
				v10 = *(_QWORD***)(v9 + 8);
				v11 = *v10;
				if (*v10 != v10)
				{
					do
					{
						v12 = (__int64)v11;
						v11 = (_QWORD*)*v11;
						sub_14018B900(v12, 0);
					} while (v11 != *(_QWORD**)(v9 + 8));
				}
				**(_QWORD**)(v9 + 8) = *(_QWORD*)(v9 + 8);
				*(_QWORD*)(*(_QWORD*)(v9 + 8) + 8i64) = *(_QWORD*)(v9 + 8);
				sub_14018B900(*(_QWORD*)(v9 + 8), 0);
				sub_14018B900(v9, 0);
			}
			v13 = v4;
			sub_1403FC2D0((__int64)(a1 + 4010), (__int64*)&v13);
			v4 = v5;
		} while (v5 != (_QWORD*)a1[4011]);
	}
	sub_1403D40E0((__int64)(a1 + 4002));
	sub_1403D4180((__int64)(a1 + 4006));
}

