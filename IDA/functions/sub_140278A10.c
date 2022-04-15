#include "../winhttp.h"

//----- (0000000140278A10) ----------------------------------------------------
_QWORD* __fastcall sub_140278A10(_QWORD* a1)
{
	_QWORD* v2; // rcx
	__int64 v3; // rcx
	__int64 v4; // rcx

	*(_DWORD*)(*a1 + 7176i64) |= 8u;
	v2 = (_QWORD*)a1[5];
	if (v2)
		*v2 = a1[6];
	v3 = a1[6];
	if (v3)
		*(_QWORD*)(v3 + 40) = a1[5];
	a1[5] = 0i64;
	a1[6] = 0i64;
	v4 = a1[4];
	if (v4)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v4 + 16i64))(v4);
	sub_14018B900((__int64)a1, 0);
	return a1;
}

