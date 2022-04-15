#include "../winhttp.h"

//----- (000000014038A230) ----------------------------------------------------
__int64 __fastcall sub_14038A230(_QWORD* a1)
{
	__int64 v2; // rcx
	__int64 result; // rax
	__int64 v4; // rcx
	__int64* v5; // rcx
	__int64 v6; // rcx
	__int64* v7; // rcx
	__int64 v8; // rcx
	__int64* v9; // rcx
	__int64 v10; // rcx

	v2 = a1[4];
	if (v2)
	{
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v2 + 8i64))(v2);
		a1[4] = 0i64;
	}
	v4 = a1[2];
	if (v4)
	{
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v4 + 8i64))(v4);
		a1[2] = 0i64;
	}
	v5 = (__int64*)a1[18];
	if (v5)
	{
		result = a1[19];
		*v5 = result;
	}
	v6 = a1[19];
	if (v6)
	{
		result = a1[18];
		*(_QWORD*)(v6 + 144) = result;
	}
	a1[18] = 0i64;
	a1[19] = 0i64;
	v7 = (__int64*)a1[16];
	if (v7)
	{
		result = a1[17];
		*v7 = result;
	}
	v8 = a1[17];
	if (v8)
	{
		result = a1[16];
		*(_QWORD*)(v8 + 128) = result;
	}
	a1[16] = 0i64;
	a1[17] = 0i64;
	v9 = (__int64*)a1[14];
	if (v9)
	{
		result = a1[15];
		*v9 = result;
	}
	v10 = a1[15];
	if (v10)
	{
		result = a1[14];
		*(_QWORD*)(v10 + 112) = result;
	}
	a1[15] = 0i64;
	a1[14] = 0i64;
	return result;
}

