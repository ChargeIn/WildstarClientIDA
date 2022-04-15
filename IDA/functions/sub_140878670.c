#include "../winhttp.h"

//----- (0000000140878670) ----------------------------------------------------
__int64 __fastcall sub_140878670(__int64 a1)
{
	int v1; // eax
	int v4; // edi
	unsigned int v5; // edi
	int* v6; // rax
	__int64 v7; // rax
	__int64 v8; // rcx
	__int64 v9; // rdx
	__int16 v10; // [rsp+40h] [rbp-48h] BYREF
	__int16 v11; // [rsp+42h] [rbp-46h]
	int v12; // [rsp+44h] [rbp-44h]
	int v13; // [rsp+48h] [rbp-40h]
	__int16 v14; // [rsp+4Ch] [rbp-3Ch]
	__int16 v15; // [rsp+4Eh] [rbp-3Ah]
	int v16; // [rsp+50h] [rbp-38h]
	int v17; // [rsp+54h] [rbp-34h]
	__int64 v18; // [rsp+58h] [rbp-30h]
	__int64 v19; // [rsp+60h] [rbp-28h]

	v1 = *(_DWORD*)(a1 + 16);
	if (v1 != 3 && v1 != 63)
		return 2i64;
	v4 = (unsigned __int16)(4 * *(_WORD*)(a1 + 32));
	*(_WORD*)(a1 + 148) = v4;
	v5 = v4 << 10;
	v6 = (int*)sub_1408819F0(dword_140C10F28, 8 * v5);
	*(_QWORD*)(a1 + 64) = v6;
	if (!v6)
		return 2i64;
	sub_1407E4830(v6, 0i64, 8 * v5);
	*(_QWORD*)(a1 + 80) = *(_QWORD*)(a1 + 64);
	v7 = *(_QWORD*)(a1 + 64) + v5;
	v16 = 2097174;
	*(_QWORD*)(a1 + 88) = v7;
	*(_QWORD*)(a1 + 96) = *(_QWORD*)(a1 + 64) + 2 * v5;
	v15 = 32;
	*(_QWORD*)(a1 + 104) = *(_QWORD*)(a1 + 64) + 3 * v5;
	*(_QWORD*)(a1 + 112) = *(_QWORD*)(a1 + 64) + 4 * v5;
	*(_QWORD*)(a1 + 120) = *(_QWORD*)(a1 + 64) + 5 * v5;
	*(_QWORD*)(a1 + 128) = *(_QWORD*)(a1 + 64) + 6 * v5;
	*(_QWORD*)(a1 + 136) = *(_QWORD*)(a1 + 64) + 7 * v5;
	LODWORD(v7) = *(_DWORD*)(a1 + 16);
	v10 = -2;
	v17 = v7;
	v18 = 0x10000000000003i64;
	v12 = dword_140C110B4;
	v19 = 0x719B3800AA000080i64;
	v11 = *(_WORD*)(a1 + 32);
	v14 = 4 * v11;
	v8 = *(_QWORD*)(a1 + 40);
	v13 = dword_140C110B4 * (unsigned __int16)(4 * v11);
	if ((*(int(__fastcall**)(__int64, __int64, __int16*, _QWORD, int, __int64, _QWORD, _QWORD))(*(_QWORD*)v8 + 64i64))(
		v8,
		a1 + 56,
		&v10,
		0i64,
		1065353216,
		a1 + 24,
		0i64,
		0i64) < 0)
		return 2i64;
	(*(void(__fastcall**)(_QWORD, __int64, _QWORD))(**(_QWORD**)(a1 + 56) + 96i64))(*(_QWORD*)(a1 + 56), v9, 0i64);
	return 1i64;
}
// 140878806: variable 'v9' is possibly undefined
// 140B79ED0: using guessed type int dword_140B79ED0;
// 140C10F28: using guessed type int dword_140C10F28;
// 140C110B4: using guessed type int dword_140C110B4;

