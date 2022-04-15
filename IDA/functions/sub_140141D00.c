#include "../winhttp.h"

//----- (0000000140141D00) ----------------------------------------------------
void __fastcall sub_140141D00(_QWORD* a1)
{
	unsigned __int64 i; // rbx
	_QWORD* v3; // rsi
	__int64 v4; // rcx
	__int64 v5; // rcx

	sub_140008410((__int64)(a1 + 11));
	sub_140008410((__int64)(a1 + 15));
	for (i = 0i64; i < a1[10]; ++i)
	{
		v3 = *(_QWORD**)(a1[9] + 8 * i);
		if (v3)
		{
			if (*v3)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(*v3 - 16i64) + 8i64))(*v3 - 16i64);
			sub_14018B900((__int64)v3, 0);
		}
	}
	a1[10] = 0i64;
	qword_140C63678 = 0i64;
	sub_140008410((__int64)(a1 + 15));
	sub_14018B900(a1[16], 0);
	sub_140008410((__int64)(a1 + 11));
	sub_14018B900(a1[12], 0);
	v4 = a1[9];
	if (v4)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v4 - 16) + 8i64))(v4 - 16);
	v5 = a1[5];
	if (v5)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v5 - 16) + 8i64))(v5 - 16);
	sub_140019490(a1);
	sub_14018B900(a1[2], 0);
	a1[2] = 0i64;
}
// 140C63678: using guessed type __int64 qword_140C63678;

