#include "../winhttp.h"

//----- (0000000140509910) ----------------------------------------------------
__int64 __fastcall sub_140509910(_QWORD* a1)
{
	__int64 v2; // rdi
	char* v3; // rax
	__int64 v4; // rbx
	__int64 v6; // [rsp+20h] [rbp-28h] BYREF
	__int64 v7; // [rsp+28h] [rbp-20h]

	v2 = sub_1405097F0(a1);
	v3 = (char*)sub_140056BB0(a1, 2u, 0i64);
	sub_14018F2D0(&v6, v3);
	v4 = v7;
	(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v2 + 576i64))(v2, v7);
	if (v4)
		sub_14018B900(v4, 0);
	return 0i64;
}

