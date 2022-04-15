#include "../winhttp.h"

//----- (0000000140505AE0) ----------------------------------------------------
void __fastcall sub_140505AE0(_QWORD* a1)
{
	_QWORD* v2; // rbx
	__int64 v3; // rdi
	int v4; // edi
	__int64 v5; // rbx
	__int64 v6; // rdx
	__int64 v7; // rcx
	__int64 v8; // rcx

	v2 = a1 + 139;
	v3 = 2i64;
	*a1 = off_140B6A1E0;
	do
	{
		if (*v2)
		{
			(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v2 + 8i64))(*v2);
			*v2 = 0i64;
		}
		v2 += 29;
		--v3;
	} while (v3);
	v4 = 1;
	v5 = (__int64)(a1 + 198);
	do
	{
		v5 -= 232i64;
		sub_140003810(v5, 48i64, 4, (__int64(__fastcall*)(__int64))sub_140109650);
		--v4;
	} while (v4 >= 0);
	v7 = a1[128];
	if (v7)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v7 + 8i64))(v7);
		a1[128] = 0i64;
	}
	v8 = a1[131];
	if (v8)
		sub_14018B900(v8, 0);
	sub_1400C6030((__int64)a1, v6);
}
// 140505BA6: variable 'v6' is possibly undefined
// 140B6A1E0: using guessed type __int64 (__fastcall *off_140B6A1E0[25])();

