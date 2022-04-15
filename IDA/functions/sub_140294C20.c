//----- (0000000140294C20) ----------------------------------------------------
__int64 __fastcall sub_140294C20(__int64 a1, __int64* a2)
{
	__int64 result; // rax
	__int64 v5; // rbx
	int v6; // ebx
	__int64 v7; // rax
	unsigned int v8; // ecx
	unsigned int v9; // r14d
	unsigned int v10; // ebx
	int* v11; // rsi
	int v12; // r15d
	__int64 v13; // rdx
	__int64 v14; // rcx
	__int64(__fastcall * *v15)(); // [rsp+40h] [rbp-C0h] BYREF
	__int128 v16; // [rsp+48h] [rbp-B8h]
	__int64(__fastcall * *TlsValue)(); // [rsp+58h] [rbp-A8h] BYREF
	__int64 v18; // [rsp+60h] [rbp-A0h]
	LPVOID Value; // [rsp+68h] [rbp-98h]
	__int64(__fastcall * *v20)(); // [rsp+70h] [rbp-90h] BYREF
	const wchar_t* v21; // [rsp+78h] [rbp-88h]
	LPVOID lpTlsValue; // [rsp+80h] [rbp-80h]
	__int64 v23; // [rsp+88h] [rbp-78h]
	__int64 v24; // [rsp+90h] [rbp-70h] BYREF
	__int64 v25[4]; // [rsp+A0h] [rbp-60h] BYREF
	__int64(__fastcall * *v26)(); // [rsp+C0h] [rbp-40h] BYREF
	__int128 v27; // [rsp+C8h] [rbp-38h]
	__int64 v28[4]; // [rsp+E0h] [rbp-20h] BYREF
	int v29[4]; // [rsp+100h] [rbp+0h] BYREF
	__int64 v30; // [rsp+158h] [rbp+58h] BYREF
	__int64 v31; // [rsp+160h] [rbp+60h] BYREF
	__int64 v32; // [rsp+168h] [rbp+68h] BYREF

	if (!a2)
		return 2147942487i64;
	if (*(_QWORD*)(a1 + 72))
	{
		TlsValue = &off_140B5E648;
		v18 = 0i64;
		Value = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v5 = *(_QWORD*)(a1 + 72);
		v25[0] = (__int64)TlsValue;
		v25[1] = v18;
		v20 = &off_140B5E648;
		v25[2] = (__int64)Value;
		v21 = L"FileName";
		lpTlsValue = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &v20);
		v23 = v5;
		v28[1] = (__int64)v21;
		v20 = &off_140B5E638;
		v28[3] = v5;
		v28[0] = (__int64)&off_140B5E638;
		v30 = 0x141DE4DF0i64;
		v28[2] = (__int64)lpTlsValue;
		LODWORD(v5) = sub_1401971E0(&dword_140C8A41C, 14, &v30, v28, v25);
		v20 = &off_140B5E648;
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
		v15 = &off_140B5E648;
		*(_QWORD*)&v16 = 0i64;
		*((_QWORD*)&v16 + 1) = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &v15);
		v26 = v15;
		v24 = 0x141DE4D80i64;
		v27 = v16;
		v6 = sub_1401971E0(&dword_140C8A420, 14, &v24, &v26);
		v15 = &off_140B5E648;
		TlsSetValue(dwTlsIndex, *((LPVOID*)&v16 + 1));
		if (v6)
			DebugBreak();
		return 2147500037i64;
	}
	v7 = *a2;
	v29[0] = -1;
	(*(void(__fastcall**)(__int64*, int*))(v7 + 32))(a2, v29);
	v8 = *((_DWORD*)a2 + 11);
	if (*(_DWORD*)(a1 + 44) < v8)
		v8 = *(_DWORD*)(a1 + 44);
	LODWORD(v30) = v8;
	v9 = 0;
	if (v8)
	{
		while (2)
		{
			v10 = 0;
			v11 = dword_140AE7B00;
			do
			{
				(*(void(__fastcall**)(__int64, _QWORD, _QWORD, __int64*))(*(_QWORD*)a2[15] + 144i64))(
					a2[15],
					(unsigned int)*v11,
					v9,
					&v32);
				(*(void(__fastcall**)(_QWORD, _QWORD, _QWORD, __int64*))(**(_QWORD**)(a1 + 120) + 144i64))(
					*(_QWORD*)(a1 + 120),
					(unsigned int)*v11,
					v9,
					&v31);
				v12 = D3DXLoadSurfaceFromSurface(v31, 0i64, 0i64, v32, 0i64, 0i64, 983044, 0);
				if (v31)
				{
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v31 + 16i64))(v31);
					v31 = 0i64;
				}
				if (v32)
				{
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v32 + 16i64))(v32);
					v32 = 0i64;
				}
				if (v12 < 0)
					return (unsigned int)v12;
				++v10;
				++v11;
			} while (v10 < 6);
			if (++v9 < (unsigned int)v30)
				continue;
			break;
		}
	}
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
	return result;
}
// 140A42BD8: using guessed type wchar_t aFilename[9];
// 140AE7B00: using guessed type int dword_140AE7B00[6];
// 140B5E638: using guessed type __int64 (__fastcall *off_140B5E638)();
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C656F8: using guessed type __int64 (__fastcall *D3DXFilterTexture)(_QWORD, _QWORD, _QWORD, _QWORD);
// 140C65710: using guessed type __int64 (__fastcall *D3DXLoadSurfaceFromSurface)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD);
// 140C8A41C: using guessed type _DWORD dword_140C8A41C;
// 140C8A420: using guessed type _DWORD dword_140C8A420;
// 140294C20: using guessed type int var_40[4];

