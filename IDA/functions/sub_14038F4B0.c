#include "../winhttp.h"

//----- (000000014038F4B0) ----------------------------------------------------
__int64 __fastcall sub_14038F4B0(_QWORD* a1)
{
	_QWORD* v2; // rcx
	__int64 v3; // rcx
	_QWORD* v4; // rcx
	__int64 result; // rax
	__int64* v6; // rcx
	__int64 v7; // rcx

	if (*a1)
	{
		v2 = (_QWORD*)a1[2];
		if (v2)
			*v2 = a1[3];
		v3 = a1[3];
		if (v3)
			*(_QWORD*)(v3 + 16) = a1[2];
		v4 = (_QWORD*)*a1;
		a1[2] = 0i64;
		a1[3] = 0i64;
		sub_14038F970(v4);
		result = (*(__int64(__fastcall**)(_QWORD))(*(_QWORD*)*a1 + 8i64))(*a1);
	}
	v6 = (__int64*)a1[2];
	if (v6)
	{
		result = a1[3];
		*v6 = result;
	}
	v7 = a1[3];
	if (v7)
	{
		result = a1[2];
		*(_QWORD*)(v7 + 16) = result;
	}
	a1[3] = 0i64;
	a1[2] = 0i64;
	return result;
}

