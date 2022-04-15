#include "../winhttp.h"

//----- (00000001406326F0) ----------------------------------------------------
__int64 __fastcall sub_1406326F0(_QWORD* a1)
{
	__int64 v1; // rdi
	__int64 v3; // rcx
	__int64 v4; // rcx
	__int64* v5; // rax
	__int64 v6; // rax
	__int64 result; // rax

	v1 = a1[3];
	v3 = *(_QWORD*)(v1 + 24);
	if (v3)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v3 - 16) + 8i64))(v3 - 16);
	v4 = *(_QWORD*)(v1 + 16);
	if (v4)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v4 - 16) + 8i64))(v4 - 16);
	sub_14018B900(a1[4], 0);
	v5 = (__int64*)(a1[6] + 8i64);
	a1[6] = v5;
	v6 = *v5;
	a1[4] = v6;
	a1[5] = v6 + 480;
	result = a1[4];
	a1[3] = result;
	return result;
}

