#include "../winhttp.h"

//----- (00000001403721F0) ----------------------------------------------------
void __fastcall sub_1403721F0(_QWORD* a1)
{
	__int64 v2; // rcx
	__int64 v3; // rdi
	_QWORD* v5; // rcx
	__int64 v6; // rcx
	_QWORD* v7; // rcx
	__int64 v8; // rcx
	_QWORD* v9; // rcx
	__int64 v10; // rcx

	*a1 = off_140B65A50;
	v2 = a1[4];
	if (v2)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v2 + 8i64))(v2);
		a1[4] = 0i64;
	}
	v3 = a1[2];
	if ((*(_DWORD*)(v3 + 12))-- == 1)
	{
		sub_14034D010(v3);
		sub_14018B900(v3, 0);
	}
	v5 = (_QWORD*)a1[11];
	if (v5)
		*v5 = a1[12];
	v6 = a1[12];
	if (v6)
		*(_QWORD*)(v6 + 88) = a1[11];
	a1[11] = 0i64;
	a1[12] = 0i64;
	v7 = (_QWORD*)a1[9];
	if (v7)
		*v7 = a1[10];
	v8 = a1[10];
	if (v8)
		*(_QWORD*)(v8 + 32) = a1[9];
	a1[9] = 0i64;
	a1[10] = 0i64;
	v9 = (_QWORD*)a1[7];
	if (v9)
		*v9 = a1[8];
	v10 = a1[8];
	if (v10)
		*(_QWORD*)(v10 + 16) = a1[7];
	a1[8] = 0i64;
	a1[7] = 0i64;
}
// 140B65A50: using guessed type __int64 (__fastcall *off_140B65A50[16])();

