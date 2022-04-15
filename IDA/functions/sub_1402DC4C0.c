//----- (00000001402DC4C0) ----------------------------------------------------
__int64 __fastcall sub_1402DC4C0(_QWORD* a1, __int64 a2, int a3)
{
	__int64 v4; // rcx
	int v8; // ebx
	_DWORD* v9; // rcx
	__int64 v10; // rax
	int v11; // ebx
	int v12; // eax
	int v13; // ebx
	__int64 v14; // rcx
	__int64 v15; // rcx
	_QWORD* v16; // rbx
	__int64(__fastcall * *v17)(); // [rsp+30h] [rbp-89h] BYREF
	const wchar_t* v18; // [rsp+38h] [rbp-81h]
	LPVOID lpTlsValue; // [rsp+40h] [rbp-79h]
	_QWORD* v20; // [rsp+48h] [rbp-71h]
	__int64(__fastcall * *TlsValue)(); // [rsp+50h] [rbp-69h] BYREF
	__int64 v22; // [rsp+58h] [rbp-61h]
	LPVOID Value; // [rsp+60h] [rbp-59h]
	__int128 v24; // [rsp+68h] [rbp-51h] BYREF
	LPVOID v25[2]; // [rsp+78h] [rbp-41h]
	__int64(__fastcall * *v26)(); // [rsp+90h] [rbp-29h] BYREF
	__int64 v27; // [rsp+98h] [rbp-21h]
	LPVOID v28; // [rsp+A0h] [rbp-19h]
	__int64 v29[4]; // [rsp+B0h] [rbp-9h] BYREF
	__int128 v30; // [rsp+D0h] [rbp+17h] BYREF
	__int128 v31; // [rsp+E0h] [rbp+27h]
	__int64 v32; // [rsp+120h] [rbp+67h] BYREF

	v4 = a1[198];
	if (!v4)
		goto LABEL_14;
	if (!(*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v4 + 32i64))(v4))
		return 0i64;
	v8 = (*(__int64(__fastcall**)(_QWORD, _QWORD))(*(_QWORD*)a1[198] + 40i64))(a1[198], 0i64);
	if (v8 < 0)
	{
		v22 = 0i64;
		TlsValue = &off_140B5E648;
		Value = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v26 = TlsValue;
		v27 = v22;
		*(_QWORD*)&v24 = &off_140B5E648;
		*((_QWORD*)&v24 + 1) = L"Result";
		v28 = Value;
		v25[0] = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &v24);
		*(_QWORD*)&v24 = &off_140B5E640;
		LODWORD(v25[1]) = v8;
		v17 = &off_140B5E648;
		v18 = L"FileName";
		v30 = v24;
		v31 = *(_OWORD*)v25;
		lpTlsValue = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &v17);
		v20 = a1 + 132;
		v9 = &unk_140C8A574;
		v17 = &off_140B5E638;
		v10 = 0x141DEB3C0i64;
		goto LABEL_8;
	}
	v11 = sub_1402DBC00((__int64)a1);
	if (v11 < 0)
	{
		v22 = 0i64;
		TlsValue = &off_140B5E648;
		Value = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v26 = TlsValue;
		v27 = v22;
		*(_QWORD*)&v24 = &off_140B5E648;
		*((_QWORD*)&v24 + 1) = L"Result";
		v28 = Value;
		v25[0] = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &v24);
		*(_QWORD*)&v24 = &off_140B5E640;
		LODWORD(v25[1]) = v11;
		v17 = &off_140B5E648;
		v18 = L"FileName";
		v30 = v24;
		v31 = *(_OWORD*)v25;
		lpTlsValue = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &v17);
		v20 = a1 + 132;
		v9 = &unk_140C8A570;
		v17 = &off_140B5E638;
		v10 = 0x141DEB3E8i64;
	LABEL_8:
		v32 = v10;
		v29[0] = (__int64)v17;
		v29[1] = (__int64)v18;
		v29[2] = (__int64)lpTlsValue;
		v29[3] = (__int64)v20;
		v12 = sub_1401971E0(v9, 36, &v32, v29, &v30, &v26);
		v17 = &off_140B5E648;
		v13 = v12;
		TlsSetValue(dwTlsIndex, lpTlsValue);
		*(_QWORD*)&v24 = &off_140B5E648;
		TlsSetValue(dwTlsIndex, v25[0]);
		TlsValue = &off_140B5E648;
		TlsSetValue(dwTlsIndex, Value);
		if (v13)
			DebugBreak();
	}
	v14 = a1[198];
	if (v14)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v14 + 8i64))(v14);
		a1[198] = 0i64;
	}
	v15 = a1[200];
	if (v15)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v15 + 8i64))(v15);
		a1[200] = 0i64;
	}
LABEL_14:
	if (a3)
	{
		v16 = (_QWORD*)a1[207];
		if (v16)
		{
			while ((*(unsigned int(__fastcall**)(_QWORD*, __int64))(*v16 + 32i64))(v16, a2))
			{
				v16 = (_QWORD*)v16[684];
				if (!v16)
					return 1i64;
			}
			return 0i64;
		}
	}
	return 1i64;
}
// 140A42BD8: using guessed type wchar_t aFilename[9];
// 140A42C90: using guessed type wchar_t aResult[7];
// 140B5E638: using guessed type __int64 (__fastcall *off_140B5E638)();
// 140B5E640: using guessed type void *off_140B5E640;
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();

