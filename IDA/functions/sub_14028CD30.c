//----- (000000014028CD30) ----------------------------------------------------
void __fastcall sub_14028CD30(__int64 a1)
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
	__int64 v12; // rdi
	__int64 v13; // r9
	__int64 v14; // rcx
	int v15; // eax
	__int64 v16; // rcx
	int v17; // eax
	int v18; // ecx
	int v19; // eax
	__int64 v20; // rdx
	int v21; // eax
	__int64 v22; // rdx
	volatile signed __int32* v23; // rdx
	__int64 v24; // rcx
	int v25; // eax
	__int64(__fastcall * *TlsValue)(); // [rsp+40h] [rbp-C0h] BYREF
	__int64 v27; // [rsp+48h] [rbp-B8h]
	LPVOID Value; // [rsp+50h] [rbp-B0h]
	__int64(__fastcall * *v29)(); // [rsp+58h] [rbp-A8h] BYREF
	const wchar_t* v30; // [rsp+60h] [rbp-A0h]
	LPVOID lpTlsValue; // [rsp+68h] [rbp-98h]
	__int64 v32; // [rsp+70h] [rbp-90h]
	__int128 v33; // [rsp+78h] [rbp-88h] BYREF
	LPVOID v34[2]; // [rsp+88h] [rbp-78h]
	__int64 v35; // [rsp+98h] [rbp-68h] BYREF
	__int64 v36; // [rsp+A0h] [rbp-60h] BYREF
	__int64 v37[4]; // [rsp+B0h] [rbp-50h] BYREF
	__int64 v38[4]; // [rsp+D0h] [rbp-30h] BYREF
	int v39[4]; // [rsp+F0h] [rbp-10h] BYREF
	int v40[4]; // [rsp+100h] [rbp+0h] BYREF
	__int128 v41[2]; // [rsp+110h] [rbp+10h] BYREF
	int v42[8]; // [rsp+130h] [rbp+30h] BYREF

	v1 = *(__int64**)(a1 + 104);
	v3 = *v1;
	v39[0] = -1;
	(*(void(__fastcall**)(__int64*, int*))(v3 + 32))(v1, v39);
	v4 = *((_DWORD*)v1 + 40);
	if (v4 >= 0)
	{
		v5 = *(_QWORD**)(a1 + 104);
		v40[0] = -1;
		(*(void(__fastcall**)(_QWORD*, int*))(*v5 + 32i64))(v5, v40);
		v6 = v5[7];
		if (v6)
		{
			*(_QWORD*)(a1 + 120) = v6;
			(*(void(__fastcall**)(_QWORD))(*(_QWORD*)v5[7] + 8i64))(v5[7]);
			v4 = (*(__int64(__fastcall**)(_QWORD, _QWORD, int*))(**(_QWORD**)(a1 + 120) + 136i64))(
				*(_QWORD*)(a1 + 120),
				0i64,
				v42);
			if (v4 >= 0)
			{
				v15 = v42[6];
				v16 = *(_QWORD*)(a1 + 120);
				*(_DWORD*)(a1 + 36) = 1;
				*(_DWORD*)(a1 + 28) = v15;
				*(_DWORD*)(a1 + 32) = v42[7];
				v17 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v16 + 104i64))(v16);
				v18 = v42[0];
				*(_DWORD*)(a1 + 44) = v17;
				v19 = sub_14026C430(v18);
				v20 = *(_QWORD*)(a1 + 16) + 136i64;
				*(_DWORD*)(a1 + 48) = v19;
				v4 = sub_140263970((int*)(a1 + 24), v20);
				if (v4 >= 0)
				{
					v21 = sub_140263E70((_DWORD*)(a1 + 24));
					v22 = *(_QWORD*)(a1 + 16);
					*(_DWORD*)(a1 + 136) = v21;
					v23 = (volatile signed __int32*)(48i64 * *(int*)(a1 + 52) + v22 + 724);
					_InterlockedIncrement(v23);
					_InterlockedExchangeAdd(v23 + 1, *(_DWORD*)(a1 + 136));
					_InterlockedIncrement(v23 + 2);
					_InterlockedExchangeAdd(v23 + 3, *(_DWORD*)(a1 + 136));
					_InterlockedIncrement(v23 + 8);
					_InterlockedExchangeAdd(v23 + 9, *(_DWORD*)(a1 + 136));
					v24 = *(_QWORD*)(a1 + 104);
					*(_DWORD*)(a1 + 112) = *(_DWORD*)(v24 + 84);
					v25 = *(_DWORD*)(v24 + 88);
					*(_DWORD*)(a1 + 92) = 0;
					*(_DWORD*)(a1 + 116) = v25;
					*(_DWORD*)(a1 + 96) = 1;
					return;
				}
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
	while (aAddons_3[v9]);
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
		v35 = 0x141DE4200i64;
		sub_1401A3130(14, 0, &v35, v7, v4);
	}
	else
	{
	LABEL_13:
		v27 = 0i64;
		TlsValue = &off_140B5E648;
		Value = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v37[0] = (__int64)TlsValue;
		v37[1] = v27;
		*(_QWORD*)&v33 = &off_140B5E648;
		*((_QWORD*)&v33 + 1) = L"Result";
		v37[2] = (__int64)Value;
		v34[0] = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &v33);
		v12 = *(_QWORD*)(a1 + 72);
		LODWORD(v34[1]) = v4;
		v29 = &off_140B5E648;
		*(_QWORD*)&v33 = &off_140B5E640;
		v41[1] = *(_OWORD*)v34;
		v30 = L"FileName";
		v41[0] = v33;
		lpTlsValue = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &v29);
		v13 = *(_QWORD*)(a1 + 72);
		v38[1] = (__int64)v30;
		v29 = &off_140B5E638;
		v32 = v12;
		v36 = 0x141DE3BA8i64;
		v38[0] = (__int64)&off_140B5E638;
		v38[3] = v12;
		v38[2] = (__int64)lpTlsValue;
		LODWORD(v12) = sub_1401971E0(&dword_140C8A3E0, 14, &v36, v13, v38, v41, v37);
		v29 = &off_140B5E648;
		TlsSetValue(dwTlsIndex, lpTlsValue);
		*(_QWORD*)&v33 = &off_140B5E648;
		TlsSetValue(dwTlsIndex, v34[0]);
		TlsValue = &off_140B5E648;
		TlsSetValue(dwTlsIndex, Value);
		if ((_DWORD)v12)
			DebugBreak();
	}
	*(_DWORD*)(a1 + 92) = v4;
	v14 = *(_QWORD*)(a1 + 120);
	if (v14)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v14 + 16i64))(v14);
		*(_QWORD*)(a1 + 120) = 0i64;
	}
}
// 140A42BD8: using guessed type wchar_t aFilename[9];
// 140A42C90: using guessed type wchar_t aResult[7];
// 140AE95A8: using guessed type wchar_t aAddons_3[9];
// 140B5E638: using guessed type __int64 (__fastcall *off_140B5E638)();
// 140B5E640: using guessed type void *off_140B5E640;
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C8A3E0: using guessed type _DWORD dword_140C8A3E0;
// 14028CD30: using guessed type int var_90[4];
// 14028CD30: using guessed type int var_80[4];

