#include "../winhttp.h"

//----- (00000001403FBB30) ----------------------------------------------------
void __fastcall sub_1403FBB30(__int64* a1, _DWORD* a2, __int64 a3)
{
	__int64 v4; // rcx
	int* v7; // rax
	__int64 v8; // r14
	__int64 v9; // rdi
	int v10; // xmm6_4
	__int64 v11; // rdx
	__int64 v12; // rdx
	__int64 v13; // r14
	int* v14; // rdi
	_QWORD* v15; // rax
	_QWORD* v16; // rbp
	_QWORD* v17; // rsi
	__int64 v18; // rcx

	v4 = a1[2];
	if (v4 == a1[3])
	{
		v11 = (v4 - a1[1]) / 48;
		if (v11)
			v12 = 2 * v11;
		else
			v12 = 1i64;
		v13 = 12 * (sub_14018A3E0(48 * v12) / 0x30ui64);
		v14 = sub_14018B280(v13 * 4, 0);
		v15 = sub_1403FFC00(a1[1], (__int64)a2, v14);
		v16 = v15;
		if (v15)
			sub_140109690((__int64)v15, a3);
		v17 = sub_1403FFC00((__int64)a2, a1[2], v16 + 6);
		sub_1403FE150((_QWORD*)a1[1], (_QWORD*)a1[2]);
		v18 = a1[1];
		if (v18)
			sub_14018B900(v18, 0);
		a1[1] = (__int64)v14;
		a1[2] = (__int64)v17;
		a1[3] = (__int64)&v14[v13];
	}
	else
	{
		if (v4)
			sub_140109690(v4, v4 - 48);
		a1[2] += 48i64;
		v7 = sub_14018B280(16i64, 0);
		v8 = (__int64)v7;
		if (v7)
			*(_WORD*)v7 = 0;
		if (*(_QWORD*)a3)
			(***(void(__fastcall****)(_QWORD))a3)(*(_QWORD*)a3);
		v9 = *(_QWORD*)a3;
		v10 = *(_DWORD*)(a3 + 8);
		sub_1403FF890((__int64)a2, a1[2] - 96, (_DWORD*)(a1[2] - 48));
		if (v9)
			(**(void(__fastcall***)(__int64))v9)(v9);
		if (*(_QWORD*)a2)
		{
			(*(void(__fastcall**)(_QWORD))(**(_QWORD**)a2 + 8i64))(*(_QWORD*)a2);
			*(_QWORD*)a2 = 0i64;
		}
		*(_QWORD*)a2 = v9;
		a2[2] = v10;
		if (v9)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v9 + 8i64))(v9);
		if (v8)
			sub_14018B900(v8, 0);
	}
}

