//----- (00000001402A8A20) ----------------------------------------------------
__int64 __fastcall sub_1402A8A20(__int64 a1, __int64* a2)
{
	__int64 v5; // rbx
	int v6; // ebx
	__int64 v7; // rax
	__int64* v8; // rcx
	__int64 v9; // rdx
	__int64 v10; // rcx
	__int64 v11; // rdx
	int TextureFromTexture; // eax
	unsigned int v13; // esi
	__int64(__fastcall * *v14)(); // [rsp+30h] [rbp-D0h] BYREF
	__int128 v15; // [rsp+38h] [rbp-C8h]
	__int64(__fastcall * *TlsValue)(); // [rsp+48h] [rbp-B8h] BYREF
	__int64 v17; // [rsp+50h] [rbp-B0h]
	LPVOID Value; // [rsp+58h] [rbp-A8h]
	__int64(__fastcall * *v19)(); // [rsp+60h] [rbp-A0h] BYREF
	const wchar_t* v20; // [rsp+68h] [rbp-98h]
	LPVOID lpTlsValue; // [rsp+70h] [rbp-90h]
	__int64 v22; // [rsp+78h] [rbp-88h]
	__int64 v23; // [rsp+80h] [rbp-80h] BYREF
	__int64 v24[3]; // [rsp+88h] [rbp-78h] BYREF
	int v25; // [rsp+A0h] [rbp-60h]
	__int64 v26; // [rsp+A4h] [rbp-5Ch]
	int v27; // [rsp+ACh] [rbp-54h]
	int v28; // [rsp+B0h] [rbp-50h]
	int v29; // [rsp+B4h] [rbp-4Ch]
	__int64 v30[4]; // [rsp+C0h] [rbp-40h] BYREF
	__int64(__fastcall * *v31)(); // [rsp+E0h] [rbp-20h] BYREF
	__int128 v32; // [rsp+E8h] [rbp-18h]
	__int64 v33[4]; // [rsp+100h] [rbp+0h] BYREF
	int v34[8]; // [rsp+120h] [rbp+20h] BYREF
	__int64 v35; // [rsp+158h] [rbp+58h] BYREF
	__int64 v36; // [rsp+160h] [rbp+60h] BYREF
	__int64 v37; // [rsp+168h] [rbp+68h] BYREF

	if (!a2)
		return 2147942487i64;
	if (*(_QWORD*)(a1 + 72))
	{
		TlsValue = &off_140B5E648;
		v17 = 0i64;
		Value = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v5 = *(_QWORD*)(a1 + 72);
		v30[0] = (__int64)TlsValue;
		v30[1] = v17;
		v19 = &off_140B5E648;
		v30[2] = (__int64)Value;
		v20 = L"FileName";
		lpTlsValue = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &v19);
		v22 = v5;
		v33[1] = (__int64)v20;
		v19 = &off_140B5E638;
		v33[3] = v5;
		v33[0] = (__int64)&off_140B5E638;
		v36 = 0x141DE6990i64;
		v33[2] = (__int64)lpTlsValue;
		LODWORD(v5) = sub_1401971E0(&dword_140C8A4E4, 14, &v36, v33, v30);
		v19 = &off_140B5E648;
		TlsSetValue(dwTlsIndex, lpTlsValue);
		TlsValue = &off_140B5E648;
		TlsSetValue(dwTlsIndex, Value);
		if ((_DWORD)v5)
			DebugBreak();
		return 2147500037i64;
	}
	if (*((_DWORD*)a2 + 13) == 1)
	{
		v14 = &off_140B5E648;
		*(_QWORD*)&v15 = 0i64;
		*((_QWORD*)&v15 + 1) = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &v14);
		v31 = v14;
		v37 = 0x141DE6920i64;
		v32 = v15;
		v6 = sub_1401971E0(&dword_140C8A4E8, 14, &v37, &v31);
		v14 = &off_140B5E648;
		TlsSetValue(dwTlsIndex, *((LPVOID*)&v15 + 1));
		if (!v6)
			return 2147500037i64;
		DebugBreak();
		return 2147500037i64;
	}
	else
	{
		v7 = *a2;
		v34[0] = -1;
		(*(void(__fastcall**)(__int64*, int*))(v7 + 32))(a2, v34);
		if (*(_DWORD*)(a1 + 28) == *((_DWORD*)a2 + 7)
			&& *(_DWORD*)(a1 + 44) == *((_DWORD*)a2 + 11)
			&& *(_DWORD*)(a1 + 48) == *((_DWORD*)a2 + 12))
		{
			sub_14003D8F0(&v23, *(_QWORD*)(a1 + 16) + 6368i64);
			(*(void(__fastcall**)(_QWORD, _QWORD, __int64))(**(_QWORD**)(*(_QWORD*)(a1 + 16) + 6352i64) + 376i64))(
				*(_QWORD*)(*(_QWORD*)(a1 + 16) + 6352i64),
				*(_QWORD*)(a1 + 112),
				a2[14]);
			v8 = &v23;
		}
		else
		{
			v11 = *(_QWORD*)(a1 + 16) + 6368i64;
			memset(v24, 0, sizeof(v24));
			v25 = -1;
			v26 = 0i64;
			v27 = -1;
			v28 = 983044;
			v29 = -1;
			sub_14003D8F0(&v35, v11);
			TextureFromTexture = D3DX11LoadTextureFromTexture(
				*(_QWORD*)(*(_QWORD*)(a1 + 16) + 6352i64),
				a2[14],
				v24,
				*(_QWORD*)(a1 + 112));
			v8 = &v35;
			v13 = TextureFromTexture;
			if (TextureFromTexture < 0)
			{
				sub_14003D880(&v35);
				return v13;
			}
		}
		sub_14003D880(v8);
		v9 = *(_QWORD*)(a1 + 16) + 48i64 * *((int*)a2 + 13);
		_InterlockedIncrement((volatile signed __int32*)(v9 + 748));
		_InterlockedExchangeAdd((volatile signed __int32*)(v9 + 752), *(_DWORD*)(a1 + 496));
		v10 = *(_QWORD*)(a1 + 16) + 48i64 * *(int*)(a1 + 52);
		_InterlockedIncrement((volatile signed __int32*)(v10 + 756));
		_InterlockedExchangeAdd((volatile signed __int32*)(v10 + 760), *(_DWORD*)(a1 + 496));
		*(_DWORD*)(a1 + 344) = 1;
		return 0i64;
	}
}
// 140A42BD8: using guessed type wchar_t aFilename[9];
// 140B5E638: using guessed type __int64 (__fastcall *off_140B5E638)();
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C65790: using guessed type __int64 (__fastcall *D3DX11LoadTextureFromTexture)(_QWORD, _QWORD, _QWORD, _QWORD);
// 140C8A4E4: using guessed type _DWORD dword_140C8A4E4;
// 140C8A4E8: using guessed type _DWORD dword_140C8A4E8;
// 1402A8A20: using guessed type int var_20[8];

