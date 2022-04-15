#include "../winhttp.h"

//----- (00000001402D9390) ----------------------------------------------------
void __fastcall sub_1402D9390(_QWORD* a1)
{
	_QWORD* v2; // rax
	__int64 v3; // rcx
	__int64 v4; // rcx
	__int64 v5; // rcx
	_QWORD* v6; // rcx
	__int64 v7; // rcx
	_QWORD* v8; // rcx
	__int64 v9; // rcx

	*a1 = off_140B62CF8;
	v2 = (_QWORD*)a1[7];
	if (v2)
		*v2 = 0i64;
	v3 = a1[14];
	if (v3)
		sub_14018B900(v3, 0);
	v4 = a1[12];
	if (v4)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v4 + 8i64))(v4);
	v5 = a1[11];
	if (v5)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v5 + 8i64))(v5);
	v6 = (_QWORD*)a1[5];
	if (v6)
		*v6 = a1[6];
	v7 = a1[6];
	if (v7)
		*(_QWORD*)(v7 + 32) = a1[5];
	a1[5] = 0i64;
	a1[6] = 0i64;
	v8 = (_QWORD*)a1[3];
	if (v8)
		*v8 = a1[4];
	v9 = a1[4];
	if (v9)
		*(_QWORD*)(v9 + 16) = a1[3];
	a1[4] = 0i64;
	a1[3] = 0i64;
}
// 140B62CF8: using guessed type __int64 (__fastcall *off_140B62CF8[31])();

