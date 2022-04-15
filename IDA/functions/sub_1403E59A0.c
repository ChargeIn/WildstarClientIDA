#include "../winhttp.h"

//----- (00000001403E59A0) ----------------------------------------------------
_QWORD* __fastcall sub_1403E59A0(_QWORD* a1)
{
	_QWORD* v2; // rcx
	__int64 v3; // rcx
	__int64 v4; // rcx
	__int64 v5; // rcx

	v2 = (_QWORD*)a1[13];
	if (v2)
		*v2 = a1[14];
	v3 = a1[14];
	if (v3)
		*(_QWORD*)(v3 + 104) = a1[13];
	a1[13] = 0i64;
	a1[14] = 0i64;
	v4 = a1[8];
	if (v4)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v4 + 8i64))(v4);
	v5 = a1[7];
	if (v5)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v5 + 8i64))(v5);
	sub_14018B900((__int64)a1, 0);
	return a1;
}

