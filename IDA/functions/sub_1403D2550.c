#include "../winhttp.h"

//----- (00000001403D2550) ----------------------------------------------------
__int64 __fastcall sub_1403D2550(__int64 a1, unsigned int* a2)
{
	__int64 v3; // rbx
	__int64 v4; // rcx
	__int128 v6; // [rsp+28h] [rbp-E0h]
	unsigned int v7; // [rsp+48h] [rbp-C0h]
	__int64 v8; // [rsp+58h] [rbp-B0h] BYREF
	__int64 v9[96]; // [rsp+60h] [rbp-A8h] BYREF
	__int64 v10; // [rsp+360h] [rbp+258h]
	__int64 v11; // [rsp+520h] [rbp+418h]
	__int128 v12; // [rsp+528h] [rbp+420h]
	__int64 v13; // [rsp+538h] [rbp+430h]
	__int64 v14; // [rsp+540h] [rbp+438h]
	__int64 v15; // [rsp+548h] [rbp+440h]
	__int64 v16; // [rsp+550h] [rbp+448h]
	__int64 v17; // [rsp+558h] [rbp+450h]
	__int64 v18; // [rsp+560h] [rbp+458h]
	__int64 v19; // [rsp+568h] [rbp+460h]

	if (*((__int64*)a2 + 1) > 0)
	{
		v3 = *((_QWORD*)a2 + 2);
		*(_QWORD*)&v6 = *((_QWORD*)a2 + 1);
		v7 = *a2;
		*((_QWORD*)&v6 + 1) = *a2;
		LODWORD(v8) = 2;
		sub_14040FAE0((__int64)v9);
		v4 = *(_QWORD*)(a1 + 29504);
		v12 = v6;
		v13 = 0i64;
		v15 = v7;
		v11 = 0i64;
		v14 = v3;
		v17 = 0i64;
		v18 = 1i64;
		v16 = 0i64;
		v19 = 0i64;
		sub_140427FA0(v4, (unsigned int*)&v8);
		if (v9[0])
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v9[0] + 8i64))(v9[0]);
		if (v10)
			sub_14018B900(v10, 0);
	}
	return 0i64;
}
// 1403D2550: using guessed type __int64 anonymous_0[96];

