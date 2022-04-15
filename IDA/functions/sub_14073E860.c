//----- (000000014073E860) ----------------------------------------------------
__int64 __fastcall sub_14073E860(_QWORD* a1)
{
	__int64 v2; // rcx
	__int64 v3; // rdi
	__int64 v4; // rax
	__int64 v5; // rsi
	unsigned int* v6; // r9
	__int64 v7; // rax
	char** v8; // rdi
	char* v9; // rbp
	__int64 v10; // rax
	__int64 v11; // r8
	_QWORD* v12; // rax
	__int64 v13; // rcx
	__int64* v14; // rax
	unsigned __int64* v15; // r10
	unsigned __int64 v16; // r8
	__int64* v17; // rbp
	__int64 v18; // rax
	unsigned int* v19; // r9
	__int64 v20; // rdi
	__int64 v21; // rax
	__int64 v22; // rdx
	wchar_t** v23; // rdi
	__int64* v24; // rax
	__int64 v25; // rdi
	__int64 v26; // rax
	__int64 v27; // rdx
	__int64 v28; // rsi
	wchar_t** v29; // rdi
	__int64* v30; // rax
	__int64 v32; // [rsp+20h] [rbp-18h] BYREF
	int v33; // [rsp+28h] [rbp-10h]

	sub_1400569B0((__int64)a1, (unsigned __int64*)"Game.IncidentReport");
	v2 = a1[2];
	*(_QWORD*)v2 = *(_QWORD*)(v2 - 16);
	*(_DWORD*)(v2 + 8) = *(_DWORD*)(v2 - 8);
	a1[2] += 16i64;
	v3 = a1[2];
	v4 = sub_140062650((__int64)a1, (unsigned __int64*)"__index", 7ui64);
	v5 = 4i64;
	v6 = (unsigned int*)(a1[2] - 16i64);
	v32 = v4;
	v33 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v3 - 32), (int*)&v32, v6);
	a1[2] -= 16i64;
	v7 = a1[2];
	v8 = &off_140C5F140;
	if (off_140C5F140)
	{
		do
		{
			v9 = v8[1];
			if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
				sub_14005E2C0((__int64)a1);
			v10 = a1[5];
			if (v10 == a1[10])
				v11 = a1[15];
			else
				v11 = *(_QWORD*)(**(_QWORD**)(v10 + 8) + 24i64);
			v12 = sub_140060AB0((__int64)a1, 0, v11);
			v12[4] = v9;
			v13 = a1[2];
			*(_QWORD*)v13 = v12;
			*(_DWORD*)(v13 + 8) = 6;
			a1[2] += 16i64;
			v14 = (__int64*)sub_1400580E0((__int64)a1, -2);
			v16 = -1i64;
			v17 = v14;
			do
				++v16;
			while (*((_BYTE*)v15 + v16));
			v18 = sub_140062650((__int64)a1, v15, v16);
			v19 = (unsigned int*)(a1[2] - 16i64);
			v32 = v18;
			v33 = 4;
			sub_14005EA50((__int64)a1, v17, (int*)&v32, v19);
			a1[2] -= 16i64;
			v7 = a1[2];
			v8 += 2;
		} while (*v8);
	}
	a1[2] = v7;
	sub_140057020(a1, "IncidentReportLib", &off_140B74CA8);
	sub_140058710((__int64)a1, (unsigned __int64*)"CodeEnumReportPlayerReason", 0x1Aui64);
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v20 = a1[2];
	v21 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v20 + 8) = 5;
	*(_QWORD*)v20 = v21;
	a1[2] += 16i64;
	v23 = &off_140C33860;
	do
	{
		sub_1400F06F0((__int64)a1, v22, *v23, *((_DWORD*)v23 + 2));
		v23 += 2;
		--v5;
	} while (v5);
	v24 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v24, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"CodeEnumReportPlayerSource", 0x1Aui64);
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v25 = a1[2];
	v26 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v25 + 8) = 5;
	v28 = 12i64;
	*(_QWORD*)v25 = v26;
	a1[2] += 16i64;
	v29 = &off_140C34B50;
	do
	{
		sub_1400F06F0((__int64)a1, v27, *v29, *((_DWORD*)v29 + 2));
		v29 += 2;
		--v28;
	} while (v28);
	v30 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v30, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	return 1i64;
}
// 14073E973: variable 'v15' is possibly undefined
// 14073EA3A: variable 'v22' is possibly undefined
// 14073EADA: variable 'v27' is possibly undefined
// 140B74CA8: using guessed type char *off_140B74CA8;
// 140C33860: using guessed type wchar_t *off_140C33860;
// 140C34B50: using guessed type wchar_t *off_140C34B50;
// 140C5F140: using guessed type char *off_140C5F140;

