#include "../winhttp.h"

//----- (000000014002CBC0) ----------------------------------------------------
void __fastcall sub_14002CBC0(__int64 a1)
{
	_QWORD* v1; // rax
	_QWORD* v2; // rbx
	_QWORD* v4; // rsi
	_QWORD** v5; // rax
	_QWORD* v6; // rdi
	__int64 v7; // rbp
	__int64 v8; // rcx
	__int64 v9; // rcx
	__int64 v10; // rcx
	_QWORD** v11; // rax
	_QWORD* v12; // rbx
	__int64 v13; // rcx
	__int64 v14; // rcx

	v1 = *(_QWORD**)(a1 + 40);
	v2 = (_QWORD*)*v1;
	if ((_QWORD*)*v1 != v1)
	{
		do
		{
			v4 = (_QWORD*)v2[2];
			if (v4)
			{
				v5 = (_QWORD**)v4[9];
				v6 = *v5;
				if (*v5 != v5)
				{
					do
					{
						v7 = (__int64)v6;
						v6 = (_QWORD*)*v6;
						v8 = *(_QWORD*)(v7 + 24);
						if (v8)
							sub_14018B900(v8, 0);
						sub_14018B900(v7, 0);
					} while (v6 != (_QWORD*)v4[9]);
				}
				*(_QWORD*)v4[9] = v4[9];
				*(_QWORD*)(v4[9] + 8i64) = v4[9];
				sub_14018B900(v4[9], 0);
				v9 = v4[5];
				if (v9)
					sub_14018B900(v9, 0);
				v10 = v4[1];
				if (v10)
					sub_14018B900(v10, 0);
				sub_14018B900((__int64)v4, 0);
			}
			v2 = (_QWORD*)*v2;
		} while (v2 != *(_QWORD**)(a1 + 40));
	}
	v11 = *(_QWORD***)(a1 + 40);
	v12 = *v11;
	if (*v11 != v11)
	{
		do
		{
			v13 = (__int64)v12;
			v12 = (_QWORD*)*v12;
			sub_14018B900(v13, 0);
		} while (v12 != *(_QWORD**)(a1 + 40));
	}
	**(_QWORD**)(a1 + 40) = *(_QWORD*)(a1 + 40);
	*(_QWORD*)(*(_QWORD*)(a1 + 40) + 8i64) = *(_QWORD*)(a1 + 40);
	sub_14018B900(*(_QWORD*)(a1 + 40), 0);
	v14 = *(_QWORD*)(a1 + 8);
	if (v14)
		sub_14018B900(v14, 0);
}

