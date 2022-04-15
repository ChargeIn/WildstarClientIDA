#include "../winhttp.h"

//----- (0000000140368BD0) ----------------------------------------------------
__int64 __fastcall sub_140368BD0(__int64 a1, __int64 a2, __int64* a3)
{
	int* v7; // rax
	__int64 v8; // rbx

	if (!a3)
		return 2147942487i64;
	v7 = sub_14018B280(928i64, 8u);
	if (v7)
		v8 = sub_14038DA00((__int64)v7, a1);
	else
		v8 = 0i64;
	(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v8 + 32i64))(v8, a2);
	*a3 = v8;
	return 0i64;
}

