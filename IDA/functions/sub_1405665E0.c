#include "../winhttp.h"

//----- (00000001405665E0) ----------------------------------------------------
void __fastcall sub_1405665E0(__int64 a1)
{
	_QWORD* v1; // rax
	_QWORD* v3; // rbx
	__int64 v4; // rsi
	_QWORD** v5; // rax
	_QWORD* v6; // rdi
	__int64 v7; // rcx
	__int64 v8; // rax
	_QWORD* i; // rax
	__int64 j; // rax

	v1 = *(_QWORD**)(a1 + 8);
	v3 = (_QWORD*)v1[2];
	if (v3 != v1)
	{
		do
		{
			v4 = v3[5];
			if (v4)
			{
				v5 = *(_QWORD***)(v4 + 8);
				v6 = *v5;
				if (*v5 != v5)
				{
					do
					{
						v7 = (__int64)v6;
						v6 = (_QWORD*)*v6;
						sub_14018B900(v7, 0);
					} while (v6 != *(_QWORD**)(v4 + 8));
				}
				**(_QWORD**)(v4 + 8) = *(_QWORD*)(v4 + 8);
				*(_QWORD*)(*(_QWORD*)(v4 + 8) + 8i64) = *(_QWORD*)(v4 + 8);
				sub_14018B900(*(_QWORD*)(v4 + 8), 0);
				sub_14018B900(v4, 0);
			}
			v8 = v3[3];
			if (v8)
			{
				v3 = (_QWORD*)v3[3];
				for (i = *(_QWORD**)(v8 + 16); i; i = (_QWORD*)i[2])
					v3 = i;
			}
			else
			{
				for (j = v3[1]; v3 == *(_QWORD**)(j + 24); j = *(_QWORD*)(j + 8))
					v3 = (_QWORD*)j;
				if (v3[3] != j)
					v3 = (_QWORD*)j;
			}
		} while (v3 != *(_QWORD**)(a1 + 8));
	}
	sub_140008410(a1);
}

