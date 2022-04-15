#include "../winhttp.h"

//----- (00000001406CDDB0) ----------------------------------------------------
void __fastcall sub_1406CDDB0(_QWORD* a1)
{
	__int64 v2; // rcx
	__int64 v3; // rcx
	int v4; // edi
	_QWORD* v5; // rbx
	int i; // esi
	__int64 v7; // rcx
	__int64 v8; // rcx
	_QWORD* v9; // rbx
	__int64 v10; // rcx
	__int64 v11; // rcx

	v2 = a1[268];
	if (v2)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v2 + 8i64))(v2);
		a1[268] = 0i64;
	}
	v3 = a1[271];
	if (v3)
		sub_14018B900(v3, 0);
	v4 = 5;
	v5 = a1 + 268;
	for (i = 5; i >= 0; --i)
	{
		v7 = *(v5 - 6);
		v5 -= 6;
		if (v7)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v7 + 8i64))(v7);
			*v5 = 0i64;
		}
		v8 = v5[3];
		if (v8)
			sub_14018B900(v8, 0);
	}
	v9 = a1 + 232;
	do
	{
		v10 = *(v9 - 6);
		v9 -= 6;
		if (v10)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v10 + 8i64))(v10);
			*v9 = 0i64;
		}
		v11 = v9[3];
		if (v11)
			sub_14018B900(v11, 0);
		--v4;
	} while (v4 >= 0);
	sub_14012FDA0(a1);
}

