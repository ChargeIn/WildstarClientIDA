#include "../winhttp.h"

//----- (00000001404B5280) ----------------------------------------------------
__int64 __fastcall sub_1404B5280(_QWORD* a1)
{
	__int64 v2; // rcx
	__int64 result; // rax
	__int64* v4; // rcx
	__int64 v5; // rcx
	__int64 v6; // rcx

	v2 = a1[1];
	if (v2)
	{
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v2 + 8i64))(v2);
		a1[1] = 0i64;
	}
	v4 = (__int64*)a1[2];
	if (v4)
	{
		result = a1[3];
		*v4 = result;
	}
	v5 = a1[3];
	if (v5)
	{
		result = a1[2];
		*(_QWORD*)(v5 + 16) = result;
	}
	a1[2] = 0i64;
	a1[3] = 0i64;
	a1[2] = 0i64;
	a1[3] = 0i64;
	v6 = a1[1];
	if (v6)
		return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v6 + 8i64))(v6);
	return result;
}

