//----- (00000001406B7C10) ----------------------------------------------------
__int64 __fastcall sub_1406B7C10(_QWORD* a1)
{
	__int64 v2; // rcx
	__int64 v3; // r14
	__int64 v4; // rdi
	__int64 v5; // rax
	unsigned int* v6; // r9
	__int64 v7; // rax
	char** v8; // rdi
	__int64 v9; // rsi
	char* v10; // rbp
	__int64 v11; // rax
	__int64 v12; // r8
	_QWORD* v13; // rax
	__int64 v14; // rcx
	__int64* v15; // rax
	unsigned __int64* v16; // r10
	unsigned __int64 v17; // r8
	__int64* v18; // rbp
	__int64 v19; // rax
	unsigned int* v20; // r9
	__int64 v21; // rdi
	__int64 v22; // rax
	__int64 v23; // rdx
	wchar_t** v24; // rdi
	__int64* v25; // rax
	__int64 v26; // rdi
	__int64 v27; // rax
	__int64 v28; // rdx
	wchar_t** v29; // rdi
	__int64* v30; // rax
	__int64 v31; // rdi
	__int64 v32; // rax
	__int64 v33; // rdx
	__int64 v34; // rsi
	wchar_t** v35; // rdi
	__int64* v36; // rax
	__int64 v38; // [rsp+20h] [rbp-18h] BYREF
	int v39; // [rsp+28h] [rbp-10h]

	sub_1400569B0((__int64)a1, (unsigned __int64*)"Game.LiveEvent");
	v2 = a1[2];
	v3 = 7i64;
	*(_QWORD*)v2 = *(_QWORD*)(v2 - 16);
	*(_DWORD*)(v2 + 8) = *(_DWORD*)(v2 - 8);
	a1[2] += 16i64;
	v4 = a1[2];
	v5 = sub_140062650((__int64)a1, (unsigned __int64*)"__index", 7ui64);
	v6 = (unsigned int*)(a1[2] - 16i64);
	v38 = v5;
	v39 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v4 - 32), (int*)&v38, v6);
	a1[2] -= 16i64;
	v7 = a1[2];
	v8 = &off_140C5E020;
	v9 = 6i64;
	if (off_140C5E020)
	{
		do
		{
			v10 = v8[1];
			if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
				sub_14005E2C0((__int64)a1);
			v11 = a1[5];
			if (v11 == a1[10])
				v12 = a1[15];
			else
				v12 = *(_QWORD*)(**(_QWORD**)(v11 + 8) + 24i64);
			v13 = sub_140060AB0((__int64)a1, 0, v12);
			v13[4] = v10;
			v14 = a1[2];
			*(_QWORD*)v14 = v13;
			*(_DWORD*)(v14 + 8) = 6;
			a1[2] += 16i64;
			v15 = (__int64*)sub_1400580E0((__int64)a1, -2);
			v17 = -1i64;
			v18 = v15;
			do
				++v17;
			while (*((_BYTE*)v16 + v17));
			v19 = sub_140062650((__int64)a1, v16, v17);
			v20 = (unsigned int*)(a1[2] - 16i64);
			v38 = v19;
			v39 = 4;
			sub_14005EA50((__int64)a1, v18, (int*)&v38, v20);
			a1[2] -= 16i64;
			v7 = a1[2];
			v8 += 2;
		} while (*v8);
	}
	a1[2] = v7;
	sub_140057020(a1, "LiveEvent", &off_140B702B0);
	sub_140058710((__int64)a1, (unsigned __int64*)"LiveEventCategory", 0x11ui64);
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v21 = a1[2];
	v22 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v21 + 8) = 5;
	*(_QWORD*)v21 = v22;
	a1[2] += 16i64;
	v24 = &off_140C38190;
	do
	{
		sub_1400F06F0((__int64)a1, v23, *v24, *((_DWORD*)v24 + 2));
		v24 += 2;
		--v9;
	} while (v9);
	v25 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v25, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"LiveEventFlags", 0xEui64);
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v26 = a1[2];
	v27 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v26 + 8) = 5;
	*(_QWORD*)v26 = v27;
	a1[2] += 16i64;
	v29 = &off_140C381F0;
	do
	{
		sub_1400F06F0((__int64)a1, v28, *v29, *((_DWORD*)v29 + 2));
		v29 += 2;
		--v3;
	} while (v3);
	v30 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v30, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"LiveEventType", 0xDui64);
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v31 = a1[2];
	v32 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v31 + 8) = 5;
	v34 = 2i64;
	*(_QWORD*)v31 = v32;
	a1[2] += 16i64;
	v35 = &off_140C331D0;
	do
	{
		sub_1400F06F0((__int64)a1, v33, *v35, *((_DWORD*)v35 + 2));
		v35 += 2;
		--v34;
	} while (v34);
	v36 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v36, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	return 1i64;
}
// 1406B7D33: variable 'v16' is possibly undefined
// 1406B7E0A: variable 'v23' is possibly undefined
// 1406B7E9A: variable 'v28' is possibly undefined
// 1406B7F3A: variable 'v33' is possibly undefined
// 140B702B0: using guessed type void *off_140B702B0;
// 140C331D0: using guessed type wchar_t *off_140C331D0;
// 140C38190: using guessed type wchar_t *off_140C38190;
// 140C381F0: using guessed type wchar_t *off_140C381F0;
// 140C5E020: using guessed type char *off_140C5E020;

