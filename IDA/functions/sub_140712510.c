#include "../winhttp.h"

//----- (0000000140712510) ----------------------------------------------------
__int64 __fastcall sub_140712510(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rbx
	__int64 v4; // rax
	unsigned int* v5; // r9
	__int64 v6; // rax
	__int64 v7; // rbx
	__int64 v8; // rax
	unsigned int* v9; // r9
	__int64 v10; // rbx
	__int64 v11; // rax
	__int64 v12; // rdx
	__int64 v13; // rsi
	wchar_t** v14; // rbx
	__int64* v15; // rax
	__int64 v16; // rbx
	__int64 v17; // rax
	__int64 v18; // rdx
	__int64 v19; // rsi
	wchar_t** v20; // rbx
	__int64* v21; // rax
	__int64 v23; // [rsp+20h] [rbp-18h] BYREF
	int v24; // [rsp+28h] [rbp-10h]

	sub_140057020(a1, "CREDDExchangeLib", &off_140B73970);
	v2 = a1[2];
	*(_QWORD*)v2 = 0i64;
	*(_DWORD*)(v2 + 8) = 3;
	a1[2] += 16i64;
	v3 = a1[2];
	v4 = sub_140062650((__int64)a1, (unsigned __int64*)"kCREDDExchangeBuyRake", 0x15ui64);
	v5 = (unsigned int*)(a1[2] - 16i64);
	v23 = v4;
	v24 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v3 - 32), (int*)&v23, v5);
	a1[2] -= 16i64;
	v6 = a1[2];
	*(_DWORD*)(v6 + 8) = 3;
	*(double*)v6 = (float)((float)5 * 0.0099999998);
	a1[2] += 16i64;
	v7 = a1[2];
	v8 = sub_140062650((__int64)a1, (unsigned __int64*)"kfCREDDExchangeBuyTaxMultiplier", 0x1Fui64);
	v9 = (unsigned int*)(a1[2] - 16i64);
	v23 = v8;
	v24 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v7 - 32), (int*)&v23, v9);
	a1[2] -= 16i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"CodeEnumAccountOperationResult", 0x1Eui64);
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v10 = a1[2];
	v11 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v10 + 8) = 5;
	v13 = 29i64;
	*(_QWORD*)v10 = v11;
	a1[2] += 16i64;
	v14 = &off_140C37900;
	do
	{
		sub_1400F06F0((__int64)a1, v12, *v14, *((_DWORD*)v14 + 2));
		v14 += 2;
		--v13;
	} while (v13);
	v15 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v15, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"CodeEnumAccountOperation", 0x18ui64);
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v16 = a1[2];
	v17 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v16 + 8) = 5;
	v19 = 16i64;
	*(_QWORD*)v16 = v17;
	a1[2] += 16i64;
	v20 = &off_140C37AD0;
	do
	{
		sub_1400F06F0((__int64)a1, v18, *v20, *((_DWORD*)v20 + 2));
		v20 += 2;
		--v19;
	} while (v19);
	v21 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v21, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	return 1i64;
}
// 14071267A: variable 'v12' is possibly undefined
// 14071270A: variable 'v18' is possibly undefined
// 140B73970: using guessed type char *off_140B73970;
// 140C37900: using guessed type wchar_t *off_140C37900;
// 140C37AD0: using guessed type wchar_t *off_140C37AD0;

