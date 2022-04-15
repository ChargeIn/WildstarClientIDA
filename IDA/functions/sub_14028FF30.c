//----- (000000014028FF30) ----------------------------------------------------
void __fastcall sub_14028FF30(__int64 a1)
{
	__int64* v1; // rbx
	__int64 v3; // rax
	int v4; // esi
	_QWORD* v5; // rbx
	__int64 v6; // rax
	__int64 v7; // rbx
	__int64 v8; // r9
	__int64 v9; // rcx
	__int64 v10; // rcx
	int v11; // eax
	int v12; // ecx
	int v13; // eax
	__int64 v14; // rdx
	int v15; // eax
	__int64 v16; // rdx
	volatile signed __int32* v17; // rdx
	__int64 v18; // rcx
	int v19; // eax
	__int64(__fastcall * *TlsValue)(); // [rsp+40h] [rbp-C0h] BYREF
	__int64 v21; // [rsp+48h] [rbp-B8h]
	LPVOID Value; // [rsp+50h] [rbp-B0h]
	__int64(__fastcall * *v23)(); // [rsp+58h] [rbp-A8h] BYREF
	const wchar_t* v24; // [rsp+60h] [rbp-A0h]
	LPVOID lpTlsValue; // [rsp+68h] [rbp-98h]
	__int64 v26; // [rsp+70h] [rbp-90h]
	__int128 v27; // [rsp+78h] [rbp-88h] BYREF
	LPVOID v28[2]; // [rsp+88h] [rbp-78h]
	__int64 v29; // [rsp+98h] [rbp-68h] BYREF
	__int64 v30[4]; // [rsp+A0h] [rbp-60h] BYREF
	__int64 v31[4]; // [rsp+C0h] [rbp-40h] BYREF
	int v32[4]; // [rsp+E0h] [rbp-20h] BYREF
	int v33[4]; // [rsp+F0h] [rbp-10h] BYREF
	__int128 v34[2]; // [rsp+100h] [rbp+0h] BYREF
	int v35[8]; // [rsp+120h] [rbp+20h] BYREF

	v1 = *(__int64**)(a1 + 112);
	v3 = *v1;
	v33[0] = -1;
	(*(void(__fastcall**)(__int64*, int*))(v3 + 32))(v1, v33);
	v4 = *((_DWORD*)v1 + 40);
	if (v4 >= 0)
	{
		v5 = *(_QWORD**)(a1 + 112);
		v32[0] = -1;
		(*(void(__fastcall**)(_QWORD*, int*))(*v5 + 32i64))(v5, v32);
		v6 = v5[7];
		if (v6)
		{
			*(_QWORD*)(a1 + 104) = v6;
			(*(void(__fastcall**)(_QWORD))(*(_QWORD*)v5[7] + 8i64))(v5[7]);
			v4 = (*(__int64(__fastcall**)(_QWORD, _QWORD, int*))(**(_QWORD**)(a1 + 104) + 136i64))(
				*(_QWORD*)(a1 + 104),
				0i64,
				v35);
			if (v4 >= 0)
			{
				v10 = *(_QWORD*)(a1 + 104);
				*(_DWORD*)(a1 + 28) = v35[4];
				*(_DWORD*)(a1 + 32) = v35[5];
				*(_DWORD*)(a1 + 36) = v35[6];
				v11 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v10 + 104i64))(v10);
				v12 = v35[0];
				*(_DWORD*)(a1 + 44) = v11;
				v13 = sub_14026C430(v12);
				v14 = *(_QWORD*)(a1 + 16) + 136i64;
				*(_DWORD*)(a1 + 48) = v13;
				v4 = sub_140263970((int*)(a1 + 24), v14);
				if (v4 >= 0)
				{
					v15 = sub_140263E70((_DWORD*)(a1 + 24));
					v16 = *(_QWORD*)(a1 + 16);
					*(_DWORD*)(a1 + 128) = v15;
					v17 = (volatile signed __int32*)(48i64 * *(int*)(a1 + 52) + v16 + 724);
					_InterlockedIncrement(v17);
					_InterlockedExchangeAdd(v17 + 1, *(_DWORD*)(a1 + 128));
					_InterlockedIncrement(v17 + 2);
					_InterlockedExchangeAdd(v17 + 3, *(_DWORD*)(a1 + 128));
					_InterlockedIncrement(v17 + 8);
					_InterlockedExchangeAdd(v17 + 9, *(_DWORD*)(a1 + 128));
					v18 = *(_QWORD*)(a1 + 112);
					*(_DWORD*)(a1 + 120) = *(_DWORD*)(v18 + 84);
					v19 = *(_DWORD*)(v18 + 88);
					*(_DWORD*)(a1 + 92) = 0;
					*(_DWORD*)(a1 + 124) = v19;
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
	TlsValue = &off_140B5E648;
	v21 = 0i64;
	Value = TlsGetValue(dwTlsIndex);
	TlsSetValue(dwTlsIndex, &TlsValue);
	v30[0] = (__int64)TlsValue;
	v30[1] = v21;
	*(_QWORD*)&v27 = &off_140B5E648;
	*((_QWORD*)&v27 + 1) = L"Result";
	v30[2] = (__int64)Value;
	v28[0] = TlsGetValue(dwTlsIndex);
	TlsSetValue(dwTlsIndex, &v27);
	v7 = *(_QWORD*)(a1 + 72);
	LODWORD(v28[1]) = v4;
	v23 = &off_140B5E648;
	*(_QWORD*)&v27 = &off_140B5E640;
	v34[1] = *(_OWORD*)v28;
	v24 = L"FileName";
	v34[0] = v27;
	lpTlsValue = TlsGetValue(dwTlsIndex);
	TlsSetValue(dwTlsIndex, &v23);
	v8 = *(_QWORD*)(a1 + 72);
	v31[1] = (__int64)v24;
	v23 = &off_140B5E638;
	v26 = v7;
	v29 = 0x141DE4028i64;
	v31[0] = (__int64)&off_140B5E638;
	v31[3] = v7;
	v31[2] = (__int64)lpTlsValue;
	LODWORD(v7) = sub_1401971E0(&dword_140C8A410, 14, &v29, v8, v31, v34, v30);
	v23 = &off_140B5E648;
	TlsSetValue(dwTlsIndex, lpTlsValue);
	*(_QWORD*)&v27 = &off_140B5E648;
	TlsSetValue(dwTlsIndex, v28[0]);
	TlsValue = &off_140B5E648;
	TlsSetValue(dwTlsIndex, Value);
	if ((_DWORD)v7)
		DebugBreak();
	*(_DWORD*)(a1 + 92) = v4;
	v9 = *(_QWORD*)(a1 + 104);
	if (v9)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v9 + 16i64))(v9);
		*(_QWORD*)(a1 + 104) = 0i64;
	}
}
// 140A42BD8: using guessed type wchar_t aFilename[9];
// 140A42C90: using guessed type wchar_t aResult[7];
// 140B5E638: using guessed type __int64 (__fastcall *off_140B5E638)();
// 140B5E640: using guessed type void *off_140B5E640;
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C8A410: using guessed type _DWORD dword_140C8A410;
// 14028FF30: using guessed type int var_70[4];
// 14028FF30: using guessed type int var_80[4];

