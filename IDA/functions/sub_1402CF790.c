#include "../winhttp.h"

//----- (00000001402CF790) ----------------------------------------------------
void __fastcall sub_1402CF790(_QWORD* a1)
{
	_QWORD* v2; // rcx
	__int64 v3; // rcx
	_DWORD* v4; // rcx
	_QWORD* v5; // rcx
	__int64 v6; // rcx
	__int64 v7; // rcx
	__int64 v8; // rcx
	__int64 v9; // rcx
	__int64 v10; // rcx
	__int64 v11; // rcx

	*a1 = off_140B62AD0;
	v2 = (_QWORD*)a1[49];
	if (v2)
	{
		*v2 = a1[50];
		v3 = a1[50];
		if (v3)
			*(_QWORD*)(v3 + 392) = a1[49];
		a1[49] = 0i64;
		a1[50] = 0i64;
	}
	v4 = (_DWORD*)a1[42];
	if (v4)
	{
		if (*(v4 - 2))
			(**(void(__fastcall***)(_DWORD*, __int64))v4)(v4, 3i64);
		else
			sub_14018B900((__int64)(v4 - 2), 0);
	}
	v5 = (_QWORD*)a1[49];
	if (v5)
		*v5 = a1[50];
	v6 = a1[50];
	if (v6)
		*(_QWORD*)(v6 + 392) = a1[49];
	a1[49] = 0i64;
	a1[50] = 0i64;
	v7 = a1[46];
	if (v7)
		sub_14018B900(v7, 0);
	v8 = a1[41];
	if (v8)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v8 + 8i64))(v8);
	sub_1402D2070(a1[38], a1[39]);
	v9 = a1[38];
	if (v9)
		sub_14018B900(v9, 0);
	v10 = a1[34];
	if (v10)
		sub_14018B900(v10, 0);
	v11 = a1[30];
	if (v11)
		sub_14018B900(v11, 0);
}
// 140B62AD0: using guessed type __int64 (__fastcall *off_140B62AD0[8])();

