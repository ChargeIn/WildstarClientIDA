#include "../winhttp.h"

//----- (0000000140333960) ----------------------------------------------------
__int64 __fastcall sub_140333960(int* a1, __int64 a2)
{
	int* v3; // rcx
	__int64 v4; // rax
	int* v5; // rdi
	__int64 result; // rax
	int* v7; // rax
	__int64 v8; // [rsp+30h] [rbp+8h] BYREF

	v8 = (__int64)a1;
	v3 = sub_14018B280(24i64, 0);
	if (v3)
	{
		*((_QWORD*)v3 + 1) = 1i64;
		*((_QWORD*)v3 + 2) = 0i64;
		*(_QWORD*)v3 = &unk_140AF1D40;
	}
	else
	{
		v3 = 0i64;
	}
	v4 = qword_140C63770;
	qword_140C63770 = (__int64)v3;
	*((_QWORD*)v3 + 2) = v4;
	v8 = 0x141DEC308i64;
	sub_1401A2E50(0xBu, 2, &v8);
	v5 = (int*)qword_140C65838;
	dword_140C65820 = 0;
	v8 = 0i64;
	if (!qword_140C65838)
	{
		result = sub_14033A5A0((int**)&v8);
		if ((int)result < 0)
			return result;
		v5 = (int*)v8;
	}
	v7 = sub_14018B280(264i64, 0);
	if (v7)
		qword_140C65808 = sub_1403300B0((__int64)v7, a2, (__int64)v5);
	else
		qword_140C65808 = 0i64;
	return 0i64;
}
// 140C63770: using guessed type __int64 qword_140C63770;
// 140C65808: using guessed type __int64 qword_140C65808;
// 140C65820: using guessed type int dword_140C65820;
// 140C65838: using guessed type __int64 qword_140C65838;

