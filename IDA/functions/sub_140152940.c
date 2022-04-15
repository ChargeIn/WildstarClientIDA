#include "../winhttp.h"

//----- (0000000140152940) ----------------------------------------------------
__int64 __fastcall sub_140152940(__int64 a1, __int64 a2, __int64 a3)
{
	__int64 v6; // rdi
	int* v7; // rax
	__int64 v8; // [rsp+40h] [rbp+18h] BYREF

	if (!a3 || (sub_1401529E0(a1 + 16, &v8, a2), v8 == *(_QWORD*)(a1 + 24)) || (v6 = *(_QWORD*)(v8 + 64)) == 0)
	{
		sub_1400035B0();
		return 0i64;
	}
	v7 = sub_14018B280(128i64, 0);
	if (!v7)
		return 0i64;
	return sub_140151E60((__int64)v7, v6, a3);
}

