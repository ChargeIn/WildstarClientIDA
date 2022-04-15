#include "../winhttp.h"

//----- (0000000140659B00) ----------------------------------------------------
__int64 __fastcall sub_140659B00(_QWORD* a1)
{
	int* v2; // rax
	unsigned int v3; // esi
	int v4; // edi
	int* v5; // rax
	unsigned int v7; // [rsp+20h] [rbp-E0h] BYREF
	__int64 v8[96]; // [rsp+28h] [rbp-D8h] BYREF
	__int64 v9; // [rsp+328h] [rbp+228h]
	int v10; // [rsp+4E8h] [rbp+3E8h]
	int v11; // [rsp+4ECh] [rbp+3ECh]
	__int64 v12; // [rsp+4F0h] [rbp+3F0h]
	__int64 v13; // [rsp+4F8h] [rbp+3F8h]
	__int64 v14; // [rsp+500h] [rbp+400h]
	__int64 v15; // [rsp+508h] [rbp+408h]
	__int64 v16; // [rsp+510h] [rbp+410h]
	__int64 v17; // [rsp+518h] [rbp+418h]
	__int64 v18; // [rsp+520h] [rbp+420h]
	__int64 v19; // [rsp+528h] [rbp+428h]
	__int64 v20; // [rsp+530h] [rbp+430h]
	__int64 v21[96]; // [rsp+540h] [rbp+440h] BYREF
	__int64 v22; // [rsp+840h] [rbp+740h]

	v2 = (int*)sub_1406622C0((__int64)a1, 1);
	if (!v2 || !sub_1403D90D0(qword_140C65898, *v2))
		sub_140056570(a1, 1u, "invalid unit");
	v3 = sub_140417B50(a1, 2u);
	v4 = sub_140056D60(a1, 3u);
	if (!v4)
		sub_140056830(a1, (unsigned __int64*)"FloatLootText received invalid count value %d", 0i64);
	sub_14040FAE0((__int64)v21);
	v5 = sub_1400B5DF0(qword_140C658F0, v3, 0i64);
	sub_140412470((__int64)v21, (__int64)v5, 1, 6);
	v7 = 1;
	sub_14040FC60((__int64)v8, (__int64)v21);
	v10 = v4;
	v13 = 1i64;
	v16 = 1i64;
	v19 = 1i64;
	v11 = 0;
	v12 = 0i64;
	v14 = 0i64;
	v15 = 0i64;
	v17 = 0i64;
	v18 = 0i64;
	v20 = 0i64;
	sub_140427FA0(*(_QWORD*)(qword_140C65898 + 29504), &v7);
	if (v8[0])
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v8[0] + 8i64))(v8[0]);
		v8[0] = 0i64;
	}
	if (v9)
		sub_14018B900(v9, 0);
	if (v21[0])
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v21[0] + 8i64))(v21[0]);
		v21[0] = 0i64;
	}
	if (v22)
		sub_14018B900(v22, 0);
	return 0i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658F0: using guessed type __int64 qword_140C658F0;
// 140659B00: using guessed type __int64 var_9E8[96];

