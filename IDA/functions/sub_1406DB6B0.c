#include "../winhttp.h"

//----- (00000001406DB6B0) ----------------------------------------------------
void __fastcall sub_1406DB6B0(_QWORD* a1)
{
	__int64 v2; // rcx
	__int64 v3; // rcx
	unsigned int v4; // esi
	__int64 v5; // rcx
	__int64 v6; // rdi
	__int64 v7; // rcx
	__int64 v8; // rcx
	__int64 v9; // rdx
	__int64 v10; // rcx
	__int64 v11; // rcx
	__int64 v12; // rcx
	__int64 v13; // rcx
	__int64 v14; // rcx

	*a1 = off_140B719F0;
	v2 = a1[259];
	if (v2)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v2 + 8i64))(v2);
		a1[259] = 0i64;
	}
	v3 = a1[260];
	if (v3)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v3 + 8i64))(v3);
		a1[260] = 0i64;
	}
	v4 = 0;
	if (a1[150])
	{
		v5 = 0i64;
		do
		{
			v6 = *(_QWORD*)(a1[149] + 8 * v5);
			if (v6)
			{
				v7 = *(_QWORD*)(v6 + 32);
				if (v7)
				{
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v7 + 8i64))(v7);
					*(_QWORD*)(v6 + 32) = 0i64;
				}
				v8 = *(_QWORD*)(v6 + 8);
				if (v8)
					sub_14018B900(v8, 0);
				sub_14018B900(v6, 0);
			}
			v5 = ++v4;
		} while ((unsigned __int64)v4 < a1[150]);
	}
	sub_140771AD0(a1 + 152);
	v10 = a1[149];
	if (v10)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v10 - 16) + 8i64))(v10 - 16);
	v11 = a1[134];
	if (v11)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v11 + 8i64))(v11);
		a1[134] = 0i64;
	}
	v12 = a1[137];
	if (v12)
		sub_14018B900(v12, 0);
	v13 = a1[128];
	if (v13)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v13 + 8i64))(v13);
		a1[128] = 0i64;
	}
	v14 = a1[131];
	if (v14)
		sub_14018B900(v14, 0);
	sub_1400C6030((__int64)a1, v9);
}
// 1406DB7FC: variable 'v9' is possibly undefined
// 140B719F0: using guessed type __int64 (__fastcall *off_140B719F0[25])();

