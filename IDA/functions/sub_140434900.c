#include "../winhttp.h"

//----- (0000000140434900) ----------------------------------------------------
__int64 __fastcall sub_140434900(_QWORD* a1)
{
	__int64 v2; // rcx
	__int64 v3; // rcx
	__int64 v4; // rax
	__int64 v5; // rcx
	__int64 v6; // rcx
	__int64 v7; // rcx
	__int64 v8; // rcx
	__int64 v9; // rcx
	__int64 v10; // rcx
	__int64 v11; // rcx
	__int64 v12; // rcx

	v2 = a1[12];
	if (v2)
	{
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v2 + 8i64))(v2, 1i64);
		a1[12] = 0i64;
	}
	v3 = a1[9];
	if (v3)
	{
		v4 = qword_140C65C48;
		if (qword_140C65C48 == v3)
			v4 = 0i64;
		qword_140C65C48 = v4;
		sub_14018B900(v3, 0);
		a1[9] = 0i64;
	}
	v5 = a1[65];
	if (v5)
		sub_14018B900(v5, 0);
	v6 = a1[64];
	if (v6)
		sub_14018B900(v6, 0);
	v7 = a1[66];
	if (v7)
		sub_14018B900(v7, 0);
	v8 = a1[67];
	if (v8)
		sub_14018B900(v8, 0);
	v9 = a1[68];
	if (v9)
		sub_14018B900(v9, 0);
	v10 = a1[69];
	if (v10)
		sub_14018B900(v10, 0);
	v11 = a1[70];
	if (v11)
		sub_14018B900(v11, 0);
	v12 = a1[71];
	if (v12)
		sub_14018B900(v12, 0);
	return 0i64;
}
// 140C65C48: using guessed type __int64 qword_140C65C48;

