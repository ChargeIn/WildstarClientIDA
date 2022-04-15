//----- (000000014028EE40) ----------------------------------------------------
__int64 __fastcall sub_14028EE40(__int64 a1, __int64* a2)
{
	__int64 result; // rax
	__int64 v5; // rbx
	int v6; // ebx
	__int64 v7; // rax
	unsigned int v8; // r12d
	unsigned int v9; // esi
	int v10; // r14d
	int v11; // ecx
	int v12; // edx
	__int64 v13; // rdx
	__int64 v14; // rcx
	__int64 v15; // [rsp+40h] [rbp-C0h] BYREF
	__int64 v16; // [rsp+48h] [rbp-B8h] BYREF
	__int64(__fastcall * *v17)(); // [rsp+50h] [rbp-B0h] BYREF
	__int128 v18; // [rsp+58h] [rbp-A8h]
	__int64(__fastcall * *TlsValue)(); // [rsp+68h] [rbp-98h] BYREF
	__int64 v20; // [rsp+70h] [rbp-90h]
	LPVOID Value; // [rsp+78h] [rbp-88h]
	__int64(__fastcall * *v22)(); // [rsp+80h] [rbp-80h] BYREF
	const wchar_t* v23; // [rsp+88h] [rbp-78h]
	LPVOID lpTlsValue; // [rsp+90h] [rbp-70h]
	__int64 v25; // [rsp+98h] [rbp-68h]
	__int64 v26; // [rsp+A0h] [rbp-60h] BYREF
	__int64 v27; // [rsp+A8h] [rbp-58h] BYREF
	__int64 v28[4]; // [rsp+B0h] [rbp-50h] BYREF
	__int64(__fastcall * *v29)(); // [rsp+D0h] [rbp-30h] BYREF
	__int128 v30; // [rsp+D8h] [rbp-28h]
	__int64 v31[4]; // [rsp+F0h] [rbp-10h] BYREF
	int v32[4]; // [rsp+110h] [rbp+10h] BYREF
	char v33[12]; // [rsp+120h] [rbp+20h] BYREF
	int v34; // [rsp+12Ch] [rbp+2Ch]
	int v35; // [rsp+138h] [rbp+38h]
	int v36; // [rsp+13Ch] [rbp+3Ch]
	char v37[12]; // [rsp+140h] [rbp+40h] BYREF
	int v38; // [rsp+14Ch] [rbp+4Ch]
	int v39; // [rsp+158h] [rbp+58h]
	int v40; // [rsp+15Ch] [rbp+5Ch]

	if (!a2)
		return 2147942487i64;
	if (*(_QWORD*)(a1 + 72))
	{
		TlsValue = &off_140B5E648;
		v20 = 0i64;
		Value = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v5 = *(_QWORD*)(a1 + 72);
		v28[0] = (__int64)TlsValue;
		v28[1] = v20;
		v22 = &off_140B5E648;
		v28[2] = (__int64)Value;
		v23 = L"FileName";
		lpTlsValue = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &v22);
		v25 = v5;
		v31[1] = (__int64)v23;
		v22 = &off_140B5E638;
		v31[3] = v5;
		v31[0] = (__int64)&off_140B5E638;
		v26 = 0x141DE4430i64;
		v31[2] = (__int64)lpTlsValue;
		LODWORD(v5) = sub_1401971E0(&dword_140C8A3C8, 14, &v26, v31, v28);
		v22 = &off_140B5E648;
		TlsSetValue(dwTlsIndex, lpTlsValue);
		TlsValue = &off_140B5E648;
		TlsSetValue(dwTlsIndex, Value);
		if ((_DWORD)v5)
		{
			DebugBreak();
			return 2147500037i64;
		}
		return 2147500037i64;
	}
	if (*((_DWORD*)a2 + 13) == 1)
	{
		v17 = &off_140B5E648;
		*(_QWORD*)&v18 = 0i64;
		*((_QWORD*)&v18 + 1) = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &v17);
		v29 = v17;
		v27 = 0x141DE4380i64;
		v30 = v18;
		v6 = sub_1401971E0(&dword_140C8A3CC, 14, &v27, &v29);
		v17 = &off_140B5E648;
		TlsSetValue(dwTlsIndex, *((LPVOID*)&v18 + 1));
		if (v6)
			DebugBreak();
		return 2147500037i64;
	}
	v7 = *a2;
	v32[0] = -1;
	(*(void(__fastcall**)(__int64*, int*))(v7 + 32))(a2, v32);
	v8 = *((_DWORD*)a2 + 11);
	if (*(_DWORD*)(a1 + 44) < v8)
		v8 = *(_DWORD*)(a1 + 44);
	v9 = 0;
	if (v8)
	{
		while (1)
		{
			(*(void(__fastcall**)(__int64, _QWORD, __int64*))(*(_QWORD*)a2[15] + 144i64))(a2[15], v9, &v16);
			(*(void(__fastcall**)(__int64, _QWORD, char*))(*(_QWORD*)a2[15] + 136i64))(a2[15], v9, v33);
			(*(void(__fastcall**)(_QWORD, _QWORD, __int64*))(**(_QWORD**)(a1 + 120) + 144i64))(
				*(_QWORD*)(a1 + 120),
				v9,
				&v15);
			(*(void(__fastcall**)(_QWORD, _QWORD, char*))(**(_QWORD**)(a1 + 120) + 136i64))(
				*(_QWORD*)(a1 + 120),
				v9,
				v37);
			if (v35 != v39
				|| v36 != v40
				|| v34
				|| v38
				|| (v10 = (*(__int64(__fastcall**)(_QWORD, __int64, _QWORD, __int64, _QWORD, int))(**(_QWORD**)(*(_QWORD*)(a1 + 16) + 6608i64)
					+ 272i64))(
						*(_QWORD*)(*(_QWORD*)(a1 + 16) + 6608i64),
						v16,
						0i64,
						v15,
						0i64,
						1),
					v10 < 0))
			{
				v11 = *(_DWORD*)(a1 + 60);
				v12 = 524292;
				if ((v11 & 3) != 1)
					v12 = 589828;
				if ((v11 & 0xC) != 4)
					v12 |= 0x20000u;
				v10 = D3DXLoadSurfaceFromSurface(v15, 0i64, 0i64, v16, 0i64, 0i64, v12, 0);
			}
			if (v15)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v15 + 16i64))(v15);
				v15 = 0i64;
			}
			if (v16)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v16 + 16i64))(v16);
				v16 = 0i64;
			}
			if (v10 < 0)
				return (unsigned int)v10;
			if (++v9 >= v8)
				goto LABEL_29;
		}
	}
	else
	{
	LABEL_29:
		if (v9 >= *(_DWORD*)(a1 + 44)
			|| (result = D3DXFilterTexture(*(_QWORD*)(a1 + 120), 0i64, v9 - 1, 0xFFFFFFFFi64), (int)result >= 0))
		{
			v13 = *(_QWORD*)(a1 + 16) + 48i64 * *((int*)a2 + 13);
			_InterlockedIncrement((volatile signed __int32*)(v13 + 748));
			_InterlockedExchangeAdd((volatile signed __int32*)(v13 + 752), *(_DWORD*)(a1 + 136));
			v14 = *(_QWORD*)(a1 + 16) + 48i64 * *(int*)(a1 + 52);
			_InterlockedIncrement((volatile signed __int32*)(v14 + 756));
			_InterlockedExchangeAdd((volatile signed __int32*)(v14 + 760), *(_DWORD*)(a1 + 136));
			*(_DWORD*)(a1 + 96) = 1;
			return 0i64;
		}
	}
	return result;
}
// 140C656F8: invalid function type has been ignored
// 140A42BD8: using guessed type wchar_t aFilename[9];
// 140B5E638: using guessed type __int64 (__fastcall *off_140B5E638)();
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C656F8: using guessed type __int64 (__fastcall *D3DXFilterTexture)(_QWORD, _QWORD, _QWORD, _QWORD);
// 140C65710: using guessed type __int64 (__fastcall *D3DXLoadSurfaceFromSurface)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD);
// 140C8A3C8: using guessed type _DWORD dword_140C8A3C8;
// 140C8A3CC: using guessed type _DWORD dword_140C8A3CC;
// 14028EE40: using guessed type int var_90[4];
// 14028EE40: using guessed type char var_80[12];
// 14028EE40: using guessed type char var_60[12];

