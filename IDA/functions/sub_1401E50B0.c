#include "../winhttp.h"

//----- (00000001401E50B0) ----------------------------------------------------
__int64 __fastcall sub_1401E50B0(_QWORD* a1)
{
	_QWORD* v2; // rcx
	__int64 v3; // rcx
	__int64 result; // rax
	__int64 v5; // rcx
	__int64 v6; // rcx
	__int64 v7; // rcx
	__int64 v8; // rcx

	v2 = (_QWORD*)a1[5];
	if (v2)
		*v2 = a1[6];
	v3 = a1[6];
	if (v3)
		*(_QWORD*)(v3 + 40) = a1[5];
	result = 0i64;
	a1[5] = 0i64;
	a1[6] = 0i64;
	v5 = a1[4];
	if (v5)
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v5 + 8i64))(v5);
	v6 = a1[3];
	if (v6)
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v6 + 8i64))(v6);
	v7 = a1[2];
	if (v7)
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v7 + 8i64))(v7);
	v8 = a1[1];
	if (v8)
		return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v8 + 8i64))(v8);
	return result;
}

