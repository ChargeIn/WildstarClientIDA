//----- (00000001402973A0) ----------------------------------------------------
void __fastcall sub_1402973A0(__int64 a1)
{
	__int64* v1; // rdi
	__int64 v2; // rax
	__int64 v4; // rbx
	int v5; // esi
	_QWORD* v6; // rdi
	__int64 v7; // rcx
	__int64 v8; // rdi
	__int64 v9; // r9
	__int64 v10; // rcx
	__int64(__fastcall * *TlsValue)(); // [rsp+48h] [rbp-C0h] BYREF
	__int64 v12; // [rsp+50h] [rbp-B8h]
	LPVOID Value; // [rsp+58h] [rbp-B0h]
	__int64(__fastcall * *v14)(); // [rsp+60h] [rbp-A8h] BYREF
	const wchar_t* v15; // [rsp+68h] [rbp-A0h]
	LPVOID lpTlsValue; // [rsp+70h] [rbp-98h]
	__int64 v17; // [rsp+78h] [rbp-90h]
	__int128 v18; // [rsp+80h] [rbp-88h] BYREF
	LPVOID v19[2]; // [rsp+90h] [rbp-78h]
	__int64 v20[4]; // [rsp+A8h] [rbp-60h] BYREF
	__int64 v21[4]; // [rsp+C8h] [rbp-40h] BYREF
	int v22[4]; // [rsp+E8h] [rbp-20h] BYREF
	int v23[4]; // [rsp+F8h] [rbp-10h] BYREF
	__int128 v24[2]; // [rsp+108h] [rbp+0h] BYREF
	__int64 v25; // [rsp+158h] [rbp+50h] BYREF
	__int64 v26; // [rsp+160h] [rbp+58h] BYREF

	v1 = *(__int64**)(a1 + 48);
	v25 = 0i64;
	v2 = *v1;
	v4 = 0i64;
	v22[0] = -1;
	(*(void(__fastcall**)(__int64*, int*))(v2 + 32))(v1, v22);
	v5 = *((_DWORD*)v1 + 40);
	if (v5 >= 0)
	{
		v6 = *(_QWORD**)(a1 + 48);
		v23[0] = -1;
		(*(void(__fastcall**)(_QWORD*, int*))(*v6 + 32i64))(v6, v23);
		v7 = v6[7];
		if (v7)
		{
			v4 = v6[7];
			(*(void (**)(void))(*(_QWORD*)v7 + 8i64))();
			v5 = (*(__int64(__fastcall**)(__int64, _QWORD, __int64*))(*(_QWORD*)v4 + 144i64))(v4, 0i64, &v25);
			if (v5 >= 0)
			{
				v5 = (*(__int64(__fastcall**)(_QWORD, __int64, __int64, __int64, int, __int64, _QWORD))(**(_QWORD**)(*(_QWORD*)(a1 + 16) + 6608i64)
					+ 288i64))(
						*(_QWORD*)(*(_QWORD*)(a1 + 16) + 6608i64),
						32i64,
						32i64,
						21i64,
						2,
						a1 + 40,
						0i64);
				if (v5 >= 0)
				{
					v5 = D3DXLoadSurfaceFromSurface(*(_QWORD*)(a1 + 40), 0i64, 0i64, v25, 0i64, 0i64, -1, 0);
					if (v5 >= 0)
					{
						v10 = *(_QWORD*)(a1 + 16);
						_InterlockedIncrement((volatile signed __int32*)(v10 + 1044));
						_InterlockedExchangeAdd((volatile signed __int32*)(v10 + 1048), *(_DWORD*)(a1 + 56));
						*(_DWORD*)(a1 + 112) = 0;
						goto LABEL_7;
					}
				}
			}
		}
		else
		{
			v5 = -2147467259;
		}
	}
	TlsValue = &off_140B5E648;
	v12 = 0i64;
	Value = TlsGetValue(dwTlsIndex);
	TlsSetValue(dwTlsIndex, &TlsValue);
	v20[0] = (__int64)TlsValue;
	v20[1] = v12;
	*(_QWORD*)&v18 = &off_140B5E648;
	*((_QWORD*)&v18 + 1) = L"Result";
	v20[2] = (__int64)Value;
	v19[0] = TlsGetValue(dwTlsIndex);
	TlsSetValue(dwTlsIndex, &v18);
	v8 = *(_QWORD*)(a1 + 24);
	LODWORD(v19[1]) = v5;
	v14 = &off_140B5E648;
	*(_QWORD*)&v18 = &off_140B5E640;
	v24[1] = *(_OWORD*)v19;
	v15 = L"FileName";
	v24[0] = v18;
	lpTlsValue = TlsGetValue(dwTlsIndex);
	TlsSetValue(dwTlsIndex, &v14);
	v9 = *(_QWORD*)(a1 + 24);
	v21[1] = (__int64)v15;
	v14 = &off_140B5E638;
	v17 = v8;
	v26 = 0x141DE5058i64;
	v21[0] = (__int64)&off_140B5E638;
	v21[3] = v8;
	v21[2] = (__int64)lpTlsValue;
	LODWORD(v8) = sub_1401971E0(&dword_140C8A454, 14, &v26, v9, v21, v24, v20);
	v14 = &off_140B5E648;
	TlsSetValue(dwTlsIndex, lpTlsValue);
	*(_QWORD*)&v18 = &off_140B5E648;
	TlsSetValue(dwTlsIndex, v19[0]);
	TlsValue = &off_140B5E648;
	TlsSetValue(dwTlsIndex, Value);
	if ((_DWORD)v8)
		DebugBreak();
	*(_DWORD*)(a1 + 112) = v5;
LABEL_7:
	if (v25)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v25 + 16i64))(v25);
	if (v4)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v4 + 16i64))(v4);
}
// 140A42BD8: using guessed type wchar_t aFilename[9];
// 140A42C90: using guessed type wchar_t aResult[7];
// 140B5E638: using guessed type __int64 (__fastcall *off_140B5E638)();
// 140B5E640: using guessed type void *off_140B5E640;
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C65710: using guessed type __int64 (__fastcall *D3DXLoadSurfaceFromSurface)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD);
// 140C8A454: using guessed type _DWORD dword_140C8A454;
// 1402973A0: using guessed type int var_60[4];
// 1402973A0: using guessed type int var_50[4];

