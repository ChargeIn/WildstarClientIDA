#include "../winhttp.h"

//----- (00000001405DDD80) ----------------------------------------------------
_QWORD* __fastcall sub_1405DDD80(_QWORD* a1)
{
	_QWORD* v2; // rcx
	__int64 v3; // rcx
	__int64 v4; // rcx

	v2 = (_QWORD*)a1[33];
	if (v2)
		*v2 = a1[34];
	v3 = a1[34];
	if (v3)
		*(_QWORD*)(v3 + 264) = a1[33];
	a1[33] = 0i64;
	a1[34] = 0i64;
	v4 = a1[27];
	if (v4)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v4 - 16) + 8i64))(v4 - 16);
	sub_14018B900((__int64)a1, 0);
	return a1;
}

