//----- (00000001402A0CA0) ----------------------------------------------------
void __fastcall sub_1402A0CA0(__int64 a1)
{
	__int64* v1; // rdi
	__int64 v3; // rax
	int v4; // r15d
	_QWORD* v5; // rdi
	__int64 v6; // rax
	_WORD* v7; // r14
	unsigned __int64 v8; // rax
	unsigned __int64 v9; // rdi
	unsigned __int64 v10; // rsi
	_WORD* v11; // r12
	_DWORD* v12; // rcx
	__int64 v13; // rdi
	__int64 v14; // r9
	__int64 v15; // rcx
	__int64* v16; // rdi
	int v17; // eax
	__int64 v18; // rax
	__int64 v19; // rdx
	int v20; // eax
	__int64 v21; // rdx
	volatile signed __int32* v22; // rdx
	__int64 v23; // rcx
	int v24; // eax
	__int64(__fastcall * *TlsValue)(); // [rsp+50h] [rbp-B0h] BYREF
	__int64 v26; // [rsp+58h] [rbp-A8h]
	LPVOID Value; // [rsp+60h] [rbp-A0h]
	__int64(__fastcall * *v28)(); // [rsp+68h] [rbp-98h] BYREF
	const wchar_t* v29; // [rsp+70h] [rbp-90h]
	LPVOID lpTlsValue; // [rsp+78h] [rbp-88h]
	__int64 v31; // [rsp+80h] [rbp-80h]
	__int128 v32; // [rsp+88h] [rbp-78h] BYREF
	LPVOID v33[2]; // [rsp+98h] [rbp-68h]
	__int64 v34; // [rsp+A8h] [rbp-58h] BYREF
	__int64 v35; // [rsp+B0h] [rbp-50h] BYREF
	__int64 v36; // [rsp+B8h] [rbp-48h] BYREF
	__int64 v37[4]; // [rsp+C0h] [rbp-40h] BYREF
	__int64 v38[4]; // [rsp+E0h] [rbp-20h] BYREF
	int v39[4]; // [rsp+100h] [rbp+0h] BYREF
	int v40[4]; // [rsp+110h] [rbp+10h] BYREF
	int v41[4]; // [rsp+120h] [rbp+20h] BYREF
	__int128 v42[2]; // [rsp+130h] [rbp+30h] BYREF
	int v43[12]; // [rsp+150h] [rbp+50h] BYREF

	v1 = *(__int64**)(a1 + 96);
	v3 = *v1;
	v41[0] = -1;
	(*(void(__fastcall**)(__int64*, int*))(v3 + 32))(v1, v41);
	v4 = *((_DWORD*)v1 + 12);
	if (v4 >= 0)
	{
		v5 = *(_QWORD**)(a1 + 96);
		v39[0] = -1;
		(*(void(__fastcall**)(_QWORD*, int*))(*v5 + 32i64))(v5, v39);
		v6 = v5[8];
		if (v6)
		{
			*(_QWORD*)(a1 + 112) = v6;
			(*(void(__fastcall**)(_QWORD))(*(_QWORD*)v5[8] + 8i64))(v5[8]);
			(*(void(__fastcall**)(_QWORD, int*))(**(_QWORD**)(a1 + 112) + 80i64))(*(_QWORD*)(a1 + 112), v43);
			v16 = *(__int64**)(a1 + 96);
			*(_DWORD*)(a1 + 28) = v43[0];
			v17 = v43[1];
			*(_DWORD*)(a1 + 36) = 1;
			*(_DWORD*)(a1 + 32) = v17;
			*(_DWORD*)(a1 + 44) = v43[2];
			v18 = *v16;
			v40[0] = -1;
			(*(void(__fastcall**)(__int64*, int*))(v18 + 32))(v16, v40);
			v19 = *(_QWORD*)(a1 + 16) + 136i64;
			*(_DWORD*)(a1 + 48) = *((_DWORD*)v16 + 22);
			v4 = sub_140263970((int*)(a1 + 24), v19);
			if (v4 >= 0)
			{
				v20 = sub_140263E70((_DWORD*)(a1 + 24));
				v21 = *(_QWORD*)(a1 + 16);
				*(_DWORD*)(a1 + 216) = v20;
				v22 = (volatile signed __int32*)(48i64 * *(int*)(a1 + 52) + v21 + 724);
				_InterlockedIncrement(v22);
				_InterlockedExchangeAdd(v22 + 1, *(_DWORD*)(a1 + 216));
				_InterlockedIncrement(v22 + 2);
				_InterlockedExchangeAdd(v22 + 3, *(_DWORD*)(a1 + 216));
				_InterlockedIncrement(v22 + 8);
				_InterlockedExchangeAdd(v22 + 9, *(_DWORD*)(a1 + 216));
				v23 = *(_QWORD*)(a1 + 96);
				*(_DWORD*)(a1 + 104) = *(_DWORD*)(v23 + 96);
				v24 = *(_DWORD*)(v23 + 100);
				*(_DWORD*)(a1 + 92) = 0;
				*(_DWORD*)(a1 + 108) = v24;
				*(_DWORD*)(a1 + 184) = 1;
				return;
			}
		}
		else
		{
			v4 = -2147467259;
		}
	}
	v7 = *(_WORD**)(a1 + 72);
	if (!v7)
		goto LABEL_13;
	v8 = 0i64;
	if (*v7)
	{
		do
			++v8;
		while (v7[v8]);
	}
	v9 = 0i64;
	do
		++v9;
	while (aAddons_4[v9]);
	if (v8 < v9)
		goto LABEL_13;
	v10 = *(_QWORD*)(a1 + 72);
	v11 = &v7[v8 - v9];
	if (v7 > v11)
		goto LABEL_13;
	while ((unsigned int)sub_14018E3E0(v10, L"\\Addons\\", v9))
	{
		v10 += 2i64;
		if (v10 > (unsigned __int64)v11)
			goto LABEL_13;
	}
	if (v10)
	{
		v34 = 0x141DE58A0i64;
		sub_1401A3130(14, 0, &v34, v7, v4);
	}
	else
	{
	LABEL_13:
		v12 = *(_DWORD**)(a1 + 96);
		v36 = 0x141DE5870i64;
		sub_1401A3130(14, 0, &v36, (unsigned int)v4, v12[6], v12[12], v12[3], v12[4], v12[5]);
		v26 = 0i64;
		TlsValue = &off_140B5E648;
		Value = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v37[0] = (__int64)TlsValue;
		v37[1] = v26;
		*(_QWORD*)&v32 = &off_140B5E648;
		*((_QWORD*)&v32 + 1) = L"Result";
		v37[2] = (__int64)Value;
		v33[0] = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &v32);
		v13 = *(_QWORD*)(a1 + 72);
		LODWORD(v33[1]) = v4;
		v28 = &off_140B5E648;
		*(_QWORD*)&v32 = &off_140B5E640;
		v42[1] = *(_OWORD*)v33;
		v29 = L"FileName";
		v42[0] = v32;
		lpTlsValue = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &v28);
		v14 = *(_QWORD*)(a1 + 72);
		v38[1] = (__int64)v29;
		v28 = &off_140B5E638;
		v31 = v13;
		v35 = 0x141DE5C48i64;
		v38[0] = (__int64)&off_140B5E638;
		v38[3] = v13;
		v38[2] = (__int64)lpTlsValue;
		LODWORD(v13) = sub_1401971E0(&dword_140C8A4A4, 14, &v35, v14, v38, v42, v37);
		v28 = &off_140B5E648;
		TlsSetValue(dwTlsIndex, lpTlsValue);
		*(_QWORD*)&v32 = &off_140B5E648;
		TlsSetValue(dwTlsIndex, v33[0]);
		TlsValue = &off_140B5E648;
		TlsSetValue(dwTlsIndex, Value);
		if ((_DWORD)v13)
			DebugBreak();
	}
	*(_DWORD*)(a1 + 92) = v4;
	v15 = *(_QWORD*)(a1 + 112);
	if (v15)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v15 + 16i64))(v15);
		*(_QWORD*)(a1 + 112) = 0i64;
	}
}
// 140A42BD8: using guessed type wchar_t aFilename[9];
// 140A42C90: using guessed type wchar_t aResult[7];
// 140AEB148: using guessed type wchar_t aAddons_4[9];
// 140B5E638: using guessed type __int64 (__fastcall *off_140B5E638)();
// 140B5E640: using guessed type void *off_140B5E640;
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C8A4A4: using guessed type _DWORD dword_140C8A4A4;
// 1402A0CA0: using guessed type int var_90[4];
// 1402A0CA0: using guessed type int var_B0[4];
// 1402A0CA0: using guessed type int var_A0[4];

