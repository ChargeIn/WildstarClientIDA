#include "../winhttp.h"

//----- (00000001400E1FD0) ----------------------------------------------------
_QWORD* __fastcall sub_1400E1FD0(_QWORD* a1)
{
	__int64 v2; // rcx
	__int64 v3; // rcx
	__int64 v4; // rcx
	__int64 v5; // rcx

	v2 = (__int64)(a1 + 25);
	if (*(_QWORD*)(v2 + 48))
		*(_QWORD*)(v2 + 48) = 0i64;
	sub_140155F90(v2);
	v3 = a1[237];
	if (v3)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v3 + 8i64))(v3);
		a1[237] = 0i64;
	}
	v4 = a1[229];
	if (v4)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v4 + 8i64))(v4);
		a1[229] = 0i64;
	}
	v5 = a1[230];
	if (v5)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v5 + 8i64))(v5);
		a1[230] = 0i64;
	}
	return sub_140152160((__int64)(a1 + 19));
}

