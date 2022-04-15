#include "../winhttp.h"

//----- (0000000140558BD0) ----------------------------------------------------
void __fastcall sub_140558BD0(_QWORD* a1)
{
	unsigned __int64 v1; // rsi
	__int64 v3; // r15
	__int64 v4; // rdi
	_QWORD** v5; // rax
	_QWORD* v6; // rbx
	__int64 v7; // rcx

	v1 = 0i64;
	if (a1[1])
	{
		v3 = 0i64;
		do
		{
			v4 = v3 + *a1;
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
			++v1;
			v3 += 16i64;
		} while (v1 < a1[1]);
	}
	if (*a1)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(*a1 - 16i64) + 8i64))(*a1 - 16i64);
}

