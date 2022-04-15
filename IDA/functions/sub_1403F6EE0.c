#include "../winhttp.h"

//----- (00000001403F6EE0) ----------------------------------------------------
void __fastcall sub_1403F6EE0(__int64 a1)
{
	_QWORD** v2; // rdi
	__int64 v3; // rsi
	_QWORD* v4; // rbx
	__int64 v5; // rcx
	__int64 v6; // rcx

	v2 = (_QWORD**)(a1 + 32);
	v3 = 10i64;
	do
	{
		v4 = *v2;
		if (*v2)
		{
			if (*v4)
			{
				(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v4 + 8i64))(*v4);
				*v4 = 0i64;
			}
			v5 = v4[3];
			if (v5)
				sub_14018B900(v5, 0);
			sub_14018B900((__int64)v4, 0);
		}
		++v2;
		--v3;
	} while (v3);
	v6 = *(_QWORD*)(a1 + 8);
	if (v6)
		sub_14018B900(v6, 0);
}

