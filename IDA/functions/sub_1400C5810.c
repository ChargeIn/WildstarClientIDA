#include "../winhttp.h"

//----- (00000001400C5810) ----------------------------------------------------
void __fastcall sub_1400C5810(__int64* a1)
{
	__int64 v2; // rcx
	__int64 v3; // rcx
	__int64 v4; // rcx
	__int64 v5; // rcx
	__int64 v6; // rcx
	__int64 v7; // rcx
	__int64 v8; // rcx

	v2 = *a1;
	if (v2)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v2 + 8i64))(v2);
		*a1 = 0i64;
	}
	v3 = a1[1];
	if (v3)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v3 + 8i64))(v3);
		a1[1] = 0i64;
	}
	v4 = a1[2];
	if (v4)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v4 + 8i64))(v4);
		a1[2] = 0i64;
	}
	v5 = a1[3];
	if (v5)
		sub_1400C6B20(v5);
	v6 = a1[3];
	if (v6)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v6 + 8i64))(v6);
		a1[3] = 0i64;
	}
	v7 = a1[4];
	if (v7)
		sub_1400C6B20(v7);
	v8 = a1[4];
	if (v8)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v8 + 8i64))(v8);
		a1[4] = 0i64;
	}
}

