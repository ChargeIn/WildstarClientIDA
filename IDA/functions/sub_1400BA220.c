#include "../winhttp.h"

//----- (00000001400BA220) ----------------------------------------------------
void __fastcall sub_1400BA220(_QWORD* a1)
{
	_QWORD* v2; // rcx
	__int64 v3; // rcx
	__int64 v4; // rcx
	__int64 v5; // rcx

	v2 = a1 + 71;
	*(v2 - 71) = &off_140B563F0;
	sub_140019490(v2);
	sub_14018B900(a1[73], 0);
	a1[73] = 0i64;
	v3 = a1[34];
	if (v3)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v3 - 16) + 8i64))(v3 - 16);
	v4 = a1[21];
	if (v4)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v4 - 16) + 8i64))(v4 - 16);
	v5 = a1[19];
	if (v5)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v5 - 16) + 8i64))(v5 - 16);
}
// 140B563F0: using guessed type __int64 (__fastcall *off_140B563F0)();

