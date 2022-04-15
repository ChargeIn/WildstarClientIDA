#include "../winhttp.h"

//----- (0000000140058DC0) ----------------------------------------------------
__int64 __fastcall sub_140058DC0(_QWORD* a1, int a2, int a3, int a4)
{
	int v5; // r10d
	char* v7; // rax
	__int64 v8; // r9
	__int64 result; // rax
	__int64 v10; // rcx
	unsigned __int64 v11; // rdx
	__int64 v12; // [rsp+30h] [rbp-18h] BYREF
	int v13; // [rsp+38h] [rbp-10h]

	v5 = a2;
	if (a4)
		v7 = (char*)sub_1400580E0((__int64)a1, a4) - a1[8];
	else
		v7 = 0i64;
	v8 = a1[2];
	v13 = a3;
	v12 = v8 - 16i64 * (v5 + 1);
	result = sub_140061FB0(
		(__int64)a1,
		(void(__fastcall*)(__int64, __int64))sub_140058DB0,
		(__int64)&v12,
		v12 - a1[8],
		(__int64)v7);
	if (a3 == -1)
	{
		v10 = a1[5];
		v11 = a1[2];
		if (v11 >= *(_QWORD*)(v10 + 16))
			*(_QWORD*)(v10 + 16) = v11;
	}
	return result;
}
// 140058DEC: variable 'v5' is possibly undefined

