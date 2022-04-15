#include "../winhttp.h"

//----- (0000000140482930) ----------------------------------------------------
void __fastcall sub_140482930(_QWORD* a1)
{
	__int64* v1; // rbx
	__int64 v3; // rcx
	__int64 v4; // rcx

	v1 = (__int64*)a1[37];
	if (v1 != &qword_140C7CF90 && v1)
	{
		v3 = v1[4];
		if (v3)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(v3 - 16) + 8i64))(v3 - 16);
		v4 = v1[2];
		if (v4)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(v4 - 16) + 8i64))(v4 - 16);
		if (*v1)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(*v1 - 16) + 8i64))(*v1 - 16);
		sub_14018B900((__int64)v1, 0);
	}
	sub_140008410((__int64)(a1 + 55));
	sub_14018B900(a1[56], 0);
	sub_140008410((__int64)(a1 + 51));
	sub_14018B900(a1[52], 0);
	sub_140008410((__int64)(a1 + 47));
	sub_14018B900(a1[48], 0);
	sub_14079B560(a1);
}
// 140C7CF90: using guessed type __int64 qword_140C7CF90;

