#include "../winhttp.h"

//----- (0000000140610A50) ----------------------------------------------------
void __fastcall sub_140610A50(__int64 a1)
{
	int* v2; // rax
	unsigned int v3; // [rsp+20h] [rbp-E0h] BYREF
	__int64 v4[96]; // [rsp+28h] [rbp-D8h] BYREF
	__int64 v5; // [rsp+328h] [rbp+228h]
	__int64 v6; // [rsp+4E8h] [rbp+3E8h]
	__int64 v7; // [rsp+4F0h] [rbp+3F0h]
	__int64 v8; // [rsp+4F8h] [rbp+3F8h]
	__int64 v9; // [rsp+500h] [rbp+400h]
	__int64 v10; // [rsp+508h] [rbp+408h]
	__int64 v11; // [rsp+510h] [rbp+410h]
	__int64 v12; // [rsp+518h] [rbp+418h]
	__int64 v13; // [rsp+520h] [rbp+420h]
	__int64 v14; // [rsp+528h] [rbp+428h]
	__int64 v15; // [rsp+530h] [rbp+430h]
	__int64 v16[96]; // [rsp+540h] [rbp+440h] BYREF
	__int64 v17; // [rsp+840h] [rbp+740h]

	sub_14040FAE0((__int64)v16);
	v2 = sub_1400B5DF0(qword_140C658F0, *(_DWORD*)(a1 + 16), 0i64);
	sub_140412470((__int64)v16, (__int64)v2, 1, 6);
	v3 = 3;
	sub_14040FC60((__int64)v4, (__int64)v16);
	v8 = 1i64;
	v11 = 1i64;
	v14 = 1i64;
	v6 = 0i64;
	v7 = 0i64;
	v9 = 0i64;
	v10 = 0i64;
	v12 = 0i64;
	v13 = 0i64;
	v15 = 0i64;
	sub_140427FA0(*(_QWORD*)(qword_140C65898 + 29504), &v3);
	if (v4[0])
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v4[0] + 8i64))(v4[0]);
		v4[0] = 0i64;
	}
	if (v5)
		sub_14018B900(v5, 0);
	if (v16[0])
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v16[0] + 8i64))(v16[0]);
		v16[0] = 0i64;
	}
	if (v17)
		sub_14018B900(v17, 0);
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658F0: using guessed type __int64 qword_140C658F0;
// 140610A50: using guessed type __int64 var_9E8[96];

