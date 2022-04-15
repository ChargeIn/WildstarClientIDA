#include "../winhttp.h"

//----- (00000001403C0D70) ----------------------------------------------------
__int64 __fastcall sub_1403C0D70(__int64 a1, unsigned int* a2)
{
	__int64 v3; // rcx
	unsigned __int16 v5; // si
	__int64 v6; // r14
	int* v7; // rax
	int v8; // ebx
	__int64 v9; // rcx
	__int64 v10; // rcx
	__int64 v12; // [rsp+28h] [rbp-E0h] BYREF
	__int64 v13[96]; // [rsp+30h] [rbp-D8h] BYREF
	__int64 v14; // [rsp+330h] [rbp+228h]
	int v15; // [rsp+4F0h] [rbp+3E8h]
	int v16; // [rsp+4F4h] [rbp+3ECh]
	__int64 v17; // [rsp+4F8h] [rbp+3F0h]
	__int64 v18; // [rsp+500h] [rbp+3F8h]
	__int64 v19; // [rsp+508h] [rbp+400h]
	__int64 v20; // [rsp+510h] [rbp+408h]
	__int64 v21; // [rsp+518h] [rbp+410h]
	__int64 v22; // [rsp+520h] [rbp+418h]
	__int64 v23; // [rsp+528h] [rbp+420h]
	__int64 v24; // [rsp+530h] [rbp+428h]
	__int64 v25; // [rsp+538h] [rbp+430h]
	__int64 v26[96]; // [rsp+548h] [rbp+440h] BYREF
	__int64 v27; // [rsp+848h] [rbp+740h]

	*(_DWORD*)(a1 + 28568) = 1;
	v3 = *a2;
	if ((unsigned int)v3 >= 0x200)
		v5 = 0;
	else
		v5 = *(_WORD*)(a1 + 2 * v3 + 328);
	if ((unsigned int)v3 < 0x200)
		*(_WORD*)(a1 + 2 * v3 + 328) = *((_WORD*)a2 + 2);
	if (v5 < *((_WORD*)a2 + 2))
	{
		v6 = sub_140244F40(*a2);
		if (v6)
		{
			sub_14040FAE0((__int64)v26);
			v7 = sub_1400B5DF0(qword_140C658F0, *(_DWORD*)(v6 + 4), 0i64);
			sub_140412470((__int64)v26, (__int64)v7, 1, 6);
			v8 = *((unsigned __int16*)a2 + 2);
			LODWORD(v12) = 1;
			sub_14040FC60((__int64)v13, (__int64)v26);
			v9 = *(_QWORD*)(a1 + 29504);
			v15 = v8 - v5;
			v16 = 0;
			v17 = 0i64;
			v18 = 1i64;
			v19 = 0i64;
			v20 = 0i64;
			v21 = 1i64;
			v22 = 0i64;
			v23 = 0i64;
			v24 = 1i64;
			v25 = 0i64;
			sub_140427FA0(v9, (unsigned int*)&v12);
			if (v13[0])
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v13[0] + 8i64))(v13[0]);
				v13[0] = 0i64;
			}
			if (v14)
				sub_14018B900(v14, 0);
			if (v26[0])
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v26[0] + 8i64))(v26[0]);
				v26[0] = 0i64;
			}
			if (v27)
				sub_14018B900(v27, 0);
		}
	}
	sub_1400A8020(*(_QWORD*)(a1 + 29504) + 3720i64);
	v10 = *(_QWORD*)(a1 + 32736);
	if (v10)
		sub_1400A8020(v10 + 376);
	return 0i64;
}
// 140C658F0: using guessed type __int64 qword_140C658F0;
// 1403C0D70: using guessed type __int64 anonymous_0[96];

