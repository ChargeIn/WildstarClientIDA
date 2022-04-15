#include "../winhttp.h"

//----- (0000000140453F90) ----------------------------------------------------
void __fastcall sub_140453F90(__int64* a1)
{
	__int64 v2; // rcx
	_QWORD* v3; // rcx
	__int64 v4; // rcx
	_QWORD* v5; // rcx
	__int64 v6; // rcx
	_QWORD* v7; // rcx
	__int64 v8; // rcx
	_QWORD* v9; // rcx
	__int64 v10; // rcx
	_QWORD* v11; // rcx
	__int64 v12; // rcx

	v2 = *a1;
	if (v2)
		sub_14018B900(v2, 0);
	v3 = (_QWORD*)a1[2];
	if (v3)
		*v3 = a1[3];
	v4 = a1[3];
	if (v4)
		*(_QWORD*)(v4 + 16) = a1[2];
	v5 = (_QWORD*)a1[4];
	a1[2] = 0i64;
	a1[3] = 0i64;
	if (v5)
		*v5 = a1[5];
	v6 = a1[5];
	if (v6)
		*(_QWORD*)(v6 + 32) = a1[4];
	v7 = (_QWORD*)a1[6];
	a1[4] = 0i64;
	a1[5] = 0i64;
	if (v7)
		*v7 = a1[7];
	v8 = a1[7];
	if (v8)
		*(_QWORD*)(v8 + 48) = a1[6];
	a1[6] = 0i64;
	a1[7] = 0i64;
	a1[6] = 0i64;
	a1[7] = 0i64;
	v9 = (_QWORD*)a1[4];
	if (v9)
		*v9 = a1[5];
	v10 = a1[5];
	if (v10)
		*(_QWORD*)(v10 + 32) = a1[4];
	a1[4] = 0i64;
	a1[5] = 0i64;
	v11 = (_QWORD*)a1[2];
	if (v11)
		*v11 = a1[3];
	v12 = a1[3];
	if (v12)
		*(_QWORD*)(v12 + 16) = a1[2];
	a1[3] = 0i64;
	a1[2] = 0i64;
}

