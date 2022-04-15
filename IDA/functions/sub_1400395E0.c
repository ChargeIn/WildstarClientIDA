//----- (00000001400395E0) ----------------------------------------------------
void __fastcall sub_1400395E0(__int64 a1)
{
	_QWORD* v2; // r13
	char* v3; // r14
	__int64 v4; // rax
	_QWORD* v5; // rcx
	__int64 v6; // rax
	__int64 v7; // r8
	const wchar_t* v8; // r9
	unsigned __int16 v9; // r10
	__int64 v10; // rbp
	__int64 v11; // rcx
	__int64 v12; // rax
	__int64 v13; // r8
	const wchar_t* v14; // r9
	__int64 v15; // r12
	unsigned __int16 v16; // r10
	__int64 v17; // rcx
	__int64 v18; // rax
	wchar_t v19; // r11
	__int64 v20; // r8
	const wchar_t* v21; // r9
	__int64 v22; // rdi
	__int64 v23; // rcx
	__int64 v24; // rax
	const wchar_t* v25; // rcx
	__int64 v26; // r15
	bool v27; // zf
	__int64 v28; // rsi
	int* v29; // rbx
	int** v30; // r15
	unsigned __int64 v31; // rdi
	int* v32; // rax
	int v33; // eax
	char v34; // dl
	__int64 v35; // rcx
	int v36; // eax
	char v37; // dl
	__int64 v38; // rcx
	int* v39; // rbx
	__int64 v40; // rdi
	int v41; // eax
	int v42; // eax
	int** v43; // rdx
	char* v44; // rdx
	_QWORD* v45; // rcx
	char v46[8]; // [rsp+30h] [rbp-78h] BYREF
	int* v47; // [rsp+38h] [rbp-70h]
	int* v48; // [rsp+40h] [rbp-68h]
	int* v49; // [rsp+48h] [rbp-60h]
	__int64 v50; // [rsp+B0h] [rbp+8h]
	__int64 v51; // [rsp+B8h] [rbp+10h]
	__int64 v52; // [rsp+C0h] [rbp+18h] BYREF
	__int64 v53; // [rsp+C8h] [rbp+20h]

	v2 = sub_1400F52E0(
		*(_QWORD*)(a1 + 72) + 2688i64,
		(__m128i*)L"UI\\ClientLoginForms.xml",
		(int*)L"LoginWindow",
		0i64,
		0i64,
		-2);
	v3 = (char*)sub_1400E9080(*(_QWORD**)(a1 + 72), L"Account");
	v4 = sub_1400E9080(*(_QWORD**)(a1 + 72), L"Password");
	v5 = *(_QWORD**)(a1 + 72);
	v53 = v4;
	v6 = sub_1400E9080(v5, L"Save");
	v7 = 0i64;
	v8 = L"AuthString";
	v9 = 65;
	v10 = v6;
	do
	{
		v11 = v9;
		v9 = v8[1];
		++v8;
		v7 = v11 + 2860486313i64 * v7;
	} while (v9);
	v12 = sub_1400D3940(v2, L"AuthString", v7);
	v13 = 0i64;
	v14 = L"SteamIndicator";
	v15 = v12;
	v16 = 83;
	do
	{
		v17 = v16;
		v16 = v14[1];
		++v14;
		v13 = v17 + 2860486313i64 * v13;
	} while (v16);
	v18 = sub_1400D3940(v2, L"SteamIndicator", v13);
	v20 = 0i64;
	v21 = L"AccountInputDisabled";
	v22 = v18;
	v50 = v18;
	do
	{
		v23 = v19;
		v19 = v21[1];
		++v21;
		v20 = v23 + 2860486313i64 * v20;
	} while (v19);
	v24 = sub_1400D3940(v2, L"AccountInputDisabled", v20);
	v25 = L"IpVerifyAccept";
	v26 = v24;
	v51 = v24;
	do
	{
		v27 = v25[1] == 0;
		++v25;
	} while (!v27);
	v28 = sub_1400E9080(*(_QWORD**)(a1 + 72), L"SaveIP");
	if (v15)
	{
		v29 = 0i64;
		v30 = (int**)sub_14018D540(
			&v52,
			(__int64)L"%s -- %s",
			*(_QWORD*)(qword_140C635F0 + 5872),
			*(_QWORD*)(qword_140C635F0 + 5880));
		if (*v30)
		{
			v31 = *((_QWORD*)*v30 - 1);
			v32 = (int*)sub_14018D140(0i64, v31);
			v31 *= 2i64;
			v29 = v32;
			sub_1407DB590(v32, *v30, v31);
			*(_WORD*)((char*)v29 + v31) = 0;
		}
		if (v52)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(v52 - 16) + 8i64))(v52 - 16);
		(*(void(__fastcall**)(__int64, int*))(*(_QWORD*)v15 + 80i64))(v15, v29);
		if (v29)
			(*(void(__fastcall**)(int*))(*((_QWORD*)v29 - 2) + 8i64))(v29 - 4);
		v22 = v50;
		v26 = v51;
	}
	if (*(_QWORD*)(qword_140C635F0 + 5720) && *(_QWORD*)(qword_140C635F0 + 5712))
		sub_1400D42F0((__int64)v2, 0, 1, 4.0);
	if (v10 && (*(_BYTE*)(v10 + 432) & 2) != 0)
	{
		v33 = dword_140C3ADD0;
		if (*(_DWORD*)qword_140C63750 < dword_140C3ADD0)
			v33 = *(_DWORD*)qword_140C63750;
		v34 = *((_BYTE*)&dword_140C3ADE0 + v33);
		*(_BYTE*)(v10 + 1436) &= ~0x40u;
		*(_BYTE*)(v10 + 1436) |= (v34 & 1) << 6;
		v35 = *(_QWORD*)(v10 + 1560);
		if (v35 && (*(_BYTE*)(v35 + 28) & 1) != 0)
			sub_1400D42F0(v35, v34, 0, 4.0);
	}
	if (v28 && (*(_BYTE*)(v28 + 432) & 2) != 0)
	{
		v36 = dword_140C3AE10;
		if (*(_DWORD*)qword_140C63750 < dword_140C3AE10)
			v36 = *(_DWORD*)qword_140C63750;
		v37 = *((_BYTE*)&dword_140C3AE20 + v36);
		*(_BYTE*)(v28 + 1436) &= ~0x40u;
		*(_BYTE*)(v28 + 1436) |= (v37 & 1) << 6;
		v38 = *(_QWORD*)(v28 + 1560);
		if (v38 && (*(_BYTE*)(v38 + 28) & 1) != 0)
			sub_1400D42F0(v38, v37, 0, 4.0);
	}
	if (qword_140C63630)
	{
		(*(void(__fastcall**)(char*, _QWORD))(*(_QWORD*)v3 + 80i64))(v3, *(_QWORD*)(qword_140C635F0 + 5720));
		sub_1400D42F0((__int64)v3, 0, 0, 4.0);
		sub_1400D42F0(v22, 1, 0, 4.0);
		sub_1400D42F0(v26, 1, 0, 4.0);
		(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v26 + 80i64))(v26, *(_QWORD*)(qword_140C635F0 + 5720));
	}
	else
	{
		v39 = sub_14018B280(16i64, 0);
		v47 = v39;
		v40 = (__int64)v39;
		v48 = v39;
		v49 = v39 + 4;
		if (v39)
			*(_WORD*)v39 = 0;
		v41 = dword_140C3ADD0;
		if (*(_DWORD*)qword_140C63750 < dword_140C3ADD0)
			v41 = *(_DWORD*)qword_140C63750;
		if (*((_BYTE*)&dword_140C3ADE0 + v41))
		{
			v42 = dword_140C667D0;
			if (*(_DWORD*)qword_140C63750 < dword_140C667D0)
				v42 = *(_DWORD*)qword_140C63750;
			v43 = (int**)((char*)&unk_140C667E0 + 32 * v42);
			if (v43 != (int**)v46)
			{
				sub_14001C480((__int64)v46, v43[1], v43[2]);
				v40 = (__int64)v48;
				v39 = v47;
			}
			(*(void(__fastcall**)(char*, int*))(*(_QWORD*)v3 + 80i64))(v3, v39);
		}
		if (((v40 - (_QWORD)v39) & 0xFFFFFFFFFFFFFFFEui64) != 0)
		{
			v44 = (char*)v53;
			v45 = *(_QWORD**)(v53 + 32);
		}
		else
		{
			v45 = (_QWORD*)*((_QWORD*)v3 + 4);
			v44 = v3;
		}
		sub_1400E8C50(v45, v44);
		sub_1400D42F0((__int64)v3, 1, 0, 4.0);
		sub_1400D42F0(v50, 0, 0, 4.0);
		sub_1400D42F0(v26, 0, 0, 4.0);
		if (v39)
			sub_14018B900((__int64)v39, 0);
	}
}
// 140039704: variable 'v19' is possibly undefined
// 1409F6000: using guessed type wchar_t aUiClientloginf[24];
// 1409F6030: using guessed type wchar_t aLoginwindow_2[12];
// 1409F6048: using guessed type wchar_t aPassword_1[9];
// 1409F6060: using guessed type wchar_t aAccount_1[8];
// 1409F6070: using guessed type wchar_t aAuthstring_0[11];
// 1409F6088: using guessed type wchar_t aSave[5];
// 1409F6098: using guessed type wchar_t aAccountinputdi_0[21];
// 1409F60D0: using guessed type wchar_t aSteamindicator_0[15];
// 1409F60F0: using guessed type wchar_t aSaveip[7];
// 1409F6100: using guessed type wchar_t aIpverifyaccept[15];
// 1409F6130: using guessed type wchar_t aSS_0[9];
// 140C3ADD0: using guessed type int dword_140C3ADD0;
// 140C3ADE0: using guessed type int dword_140C3ADE0;
// 140C3AE10: using guessed type int dword_140C3AE10;
// 140C3AE20: using guessed type int dword_140C3AE20;
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C63630: using guessed type __int64 qword_140C63630;
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C667D0: using guessed type int dword_140C667D0;
// 1400395E0: using guessed type char var_78[8];

