//----- (00000001406A1300) ----------------------------------------------------
__int64 __fastcall sub_1406A1300(_QWORD* a1)
{
	__int64 v2; // rcx
	__int64 v3; // rdi
	__int64 v4; // rax
	unsigned int* v5; // r9
	__int64 v6; // rax
	char** v7; // rdi
	char* v8; // rsi
	__int64 v9; // rax
	__int64 v10; // r8
	_QWORD* v11; // rax
	__int64 v12; // rcx
	__int64* v13; // rax
	unsigned __int64* v14; // r10
	unsigned __int64 v15; // r8
	__int64* v16; // rsi
	__int64 v17; // rax
	unsigned int* v18; // r9
	__int64 v19; // rdi
	__int64 v20; // rsi
	__int64 v21; // rdx
	wchar_t** v22; // rdi
	__int64* v23; // rax
	__int64 v25; // [rsp+20h] [rbp-18h] BYREF
	int v26; // [rsp+28h] [rbp-10h]

	sub_1400569B0((__int64)a1, (unsigned __int64*)"Game.ItemAuction");
	v2 = a1[2];
	*(_QWORD*)v2 = *(_QWORD*)(v2 - 16);
	*(_DWORD*)(v2 + 8) = *(_DWORD*)(v2 - 8);
	a1[2] += 16i64;
	v3 = a1[2];
	v4 = sub_140062650((__int64)a1, (unsigned __int64*)"__index", 7ui64);
	v5 = (unsigned int*)(a1[2] - 16i64);
	v25 = v4;
	v26 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v3 - 32), (int*)&v25, v5);
	a1[2] -= 16i64;
	v6 = a1[2];
	v7 = &off_140C5D480;
	if (off_140C5D480)
	{
		do
		{
			v8 = v7[1];
			if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
				sub_14005E2C0((__int64)a1);
			v9 = a1[5];
			if (v9 == a1[10])
				v10 = a1[15];
			else
				v10 = *(_QWORD*)(**(_QWORD**)(v9 + 8) + 24i64);
			v11 = sub_140060AB0((__int64)a1, 0, v10);
			v11[4] = v8;
			v12 = a1[2];
			*(_QWORD*)v12 = v11;
			*(_DWORD*)(v12 + 8) = 6;
			a1[2] += 16i64;
			v13 = (__int64*)sub_1400580E0((__int64)a1, -2);
			v15 = -1i64;
			v16 = v13;
			do
				++v15;
			while (*((_BYTE*)v14 + v15));
			v17 = sub_140062650((__int64)a1, v14, v15);
			v18 = (unsigned int*)(a1[2] - 16i64);
			v25 = v17;
			v26 = 4;
			sub_14005EA50((__int64)a1, v16, (int*)&v25, v18);
			a1[2] -= 16i64;
			v6 = a1[2];
			v7 += 2;
		} while (*v7);
	}
	a1[2] = v6;
	sub_140057020(a1, "ItemAuction", &off_140B6FFA0);
	sub_140058710((__int64)a1, (unsigned __int64*)"CodeEnumAuctionRemaining", 0x18ui64);
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v19 = a1[2];
	v20 = 5i64;
	*(_QWORD*)v19 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v19 + 8) = 5;
	a1[2] += 16i64;
	v22 = &off_140C35110;
	do
	{
		sub_1400F06F0((__int64)a1, v21, *v22, *((_DWORD*)v22 + 2));
		v22 += 2;
		--v20;
	} while (v20);
	v23 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v23, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	return 1i64;
}
// 1406A1413: variable 'v14' is possibly undefined
// 1406A14DA: variable 'v21' is possibly undefined
// 140B6FFA0: using guessed type char *off_140B6FFA0;
// 140C35110: using guessed type wchar_t *off_140C35110;
// 140C5D480: using guessed type char *off_140C5D480;

