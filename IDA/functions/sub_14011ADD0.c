#include "../winhttp.h"

//----- (000000014011ADD0) ----------------------------------------------------
__int64 __fastcall sub_14011ADD0(__int64 a1)
{
	int v2; // eax
	__int64 v3; // rcx
	char v5[8]; // [rsp+20h] [rbp-28h] BYREF
	int* v6; // [rsp+28h] [rbp-20h]
	__int64 v7; // [rsp+30h] [rbp-18h]

	v6 = sub_14018B280(40i64, 0);
	v7 = 0i64;
	*(_BYTE*)v6 = 0;
	*((_QWORD*)v6 + 1) = 0i64;
	*((_QWORD*)v6 + 2) = v6;
	*((_QWORD*)v6 + 3) = v6;
	v2 = sub_1401342E0((__int64)v5, a1, 1, 0);
	v3 = *(_QWORD*)(a1 + 16);
	*(_DWORD*)(v3 + 8) = 3;
	*(double*)v3 = (double)v2;
	*(_QWORD*)(a1 + 16) += 16i64;
	sub_140008410((__int64)v5);
	sub_14018B900((__int64)v6, 0);
	return 1i64;
}
// 14011ADD0: using guessed type char var_28[8];

