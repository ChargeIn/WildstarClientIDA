#include "../winhttp.h"

//----- (00000001403C59C0) ----------------------------------------------------
void __fastcall sub_1403C59C0(_QWORD* a1)
{
	__int64 v2; // rcx
	__int64 v3; // rcx
	__int64 v4; // rcx
	__int64 v5; // rcx
	__int64 v6; // rcx
	__int64 v7; // rcx
	__int64 v8; // rcx
	int v9; // esi
	_QWORD* v10; // rbx
	__int64 v11; // rcx
	__int64 v12; // rcx

	*a1 = off_140B66490;
	v2 = a1[13];
	if (v2)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v2 + 8i64))(v2);
		a1[13] = 0i64;
	}
	v3 = a1[59];
	if (v3)
		sub_14018B900(v3, 0);
	v4 = a1[55];
	if (v4)
		sub_14018B900(v4, 0);
	v5 = a1[51];
	if (v5)
		sub_14018B900(v5, 0);
	v6 = a1[47];
	if (v6)
		sub_14018B900(v6, 0);
	v7 = a1[43];
	if (v7)
		sub_14018B900(v7, 0);
	v8 = a1[39];
	if (v8)
		sub_14018B900(v8, 0);
	v9 = 4;
	v10 = a1 + 39;
	do
	{
		v11 = *(v10 - 4);
		v10 -= 4;
		if (v11)
			sub_14018B900(v11, 0);
		--v9;
	} while (v9 >= 0);
	v12 = a1[10];
	if (v12)
		sub_14018B900(v12, 0);
}
// 140B66490: using guessed type __int64 (__fastcall *off_140B66490[23])();

