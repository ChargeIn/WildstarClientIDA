//----- (0000000140054090) ----------------------------------------------------
__int64 __fastcall sub_140054090(__int64 a1)
{
	_QWORD* v1; // rsi
	int v3; // edi
	_DWORD* v4; // rcx
	__int64 v5; // rax
	__int64 result; // rax
	int v7; // ebx
	__int64(__fastcall * *TlsValue)(); // [rsp+30h] [rbp-29h] BYREF
	__int64 v9; // [rsp+38h] [rbp-21h]
	LPVOID Value; // [rsp+40h] [rbp-19h]
	__int64(__fastcall * *v11)(); // [rsp+50h] [rbp-9h] BYREF
	__int64 v12; // [rsp+58h] [rbp-1h]
	LPVOID v13; // [rsp+60h] [rbp+7h]
	__int128 v14; // [rsp+70h] [rbp+17h] BYREF
	LPVOID lpTlsValue[2]; // [rsp+80h] [rbp+27h]
	__int128 v16[2]; // [rsp+90h] [rbp+37h] BYREF
	__int64 v17; // [rsp+C0h] [rbp+67h] BYREF

	v1 = (_QWORD*)(a1 + 16);
	v3 = (*(__int64(__fastcall**)(__int64, const wchar_t*, __int64))(*(_QWORD*)qword_140C65680 + 32i64))(
		qword_140C65680,
		L"Arial Unicode MS",
		22i64);
	if (v3 >= 0)
	{
		result = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, __int64, __int64))(*(_QWORD*)qword_140C65680 + 40i64))(
			qword_140C65680,
			*v1,
			0i64,
			-1i64,
			a1 + 24);
		v3 = result;
		if ((int)result >= 0)
			return result;
		v9 = 0i64;
		TlsValue = &off_140B5E648;
		Value = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v11 = TlsValue;
		v12 = v9;
		*(_QWORD*)&v14 = &off_140B5E648;
		*((_QWORD*)&v14 + 1) = L"Result";
		v13 = Value;
		lpTlsValue[0] = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &v14);
		v4 = &unk_140C8A03C;
		*(_QWORD*)&v14 = &off_140B5E640;
		v5 = 0x141D0BC70i64;
	}
	else
	{
		v9 = 0i64;
		TlsValue = &off_140B5E648;
		Value = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v11 = TlsValue;
		v12 = v9;
		*(_QWORD*)&v14 = &off_140B5E648;
		*((_QWORD*)&v14 + 1) = L"Result";
		v13 = Value;
		lpTlsValue[0] = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &v14);
		v4 = &unk_140C8A040;
		*(_QWORD*)&v14 = &off_140B5E640;
		v5 = 0x141D0BD18i64;
	}
	LODWORD(lpTlsValue[1]) = v3;
	v17 = v5;
	v16[1] = *(_OWORD*)lpTlsValue;
	v16[0] = v14;
	v7 = sub_1401971E0(v4, 22, &v17, v16, &v11);
	*(_QWORD*)&v14 = &off_140B5E648;
	TlsSetValue(dwTlsIndex, lpTlsValue[0]);
	TlsValue = &off_140B5E648;
	TlsSetValue(dwTlsIndex, Value);
	if (v7)
		DebugBreak();
	return (unsigned int)v3;
}
// 140A116B0: using guessed type wchar_t aArialUnicodeMs_0[17];
// 140A42C90: using guessed type wchar_t aResult[7];
// 140B5E640: using guessed type void *off_140B5E640;
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C65680: using guessed type __int64 qword_140C65680;

