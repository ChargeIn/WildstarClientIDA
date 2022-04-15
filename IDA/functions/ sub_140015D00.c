//----- (0000000140015D00) ----------------------------------------------------
__int64 __fastcall sub_140015D00(unsigned int* a1, _QWORD* a2)
{
	__int64 v3; // rcx
	int v5; // esi
	int v6; // ebx
	__int64(__fastcall * *TlsValue)(); // [rsp+50h] [rbp-39h] BYREF
	__int64 v8; // [rsp+58h] [rbp-31h]
	LPVOID Value; // [rsp+60h] [rbp-29h]
	__int64 v10[4]; // [rsp+70h] [rbp-19h] BYREF
	__int128 v11; // [rsp+90h] [rbp+7h] BYREF
	LPVOID lpTlsValue[2]; // [rsp+A0h] [rbp+17h]
	__int128 v13[3]; // [rsp+B0h] [rbp+27h] BYREF
	__int64 v14; // [rsp+F0h] [rbp+67h] BYREF

	v3 = *(_QWORD*)&a1[2 * a1[1414] + 1408];
	if (v3)
	{
		*a2 = v3;
		*(_QWORD*)&a1[2 * a1[1414] + 1408] = 0i64;
	LABEL_3:
		++a1[1414];
		return 0i64;
	}
	v5 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, __int64, _DWORD, int, int, _DWORD, _DWORD, _QWORD*))(*(_QWORD*)qword_140C65670 + 88i64))(
		qword_140C65670,
		a1[1415],
		a1[1416],
		1i64,
		0,
		5,
		1,
		0,
		0,
		a2);
	if (v5 >= 0)
		goto LABEL_3;
	TlsValue = &off_140B5E648;
	v8 = 0i64;
	Value = TlsGetValue(dwTlsIndex);
	TlsSetValue(dwTlsIndex, &TlsValue);
	v10[0] = (__int64)TlsValue;
	v10[1] = v8;
	*(_QWORD*)&v11 = &off_140B5E648;
	*((_QWORD*)&v11 + 1) = L"Result";
	v10[2] = (__int64)Value;
	lpTlsValue[0] = TlsGetValue(dwTlsIndex);
	TlsSetValue(dwTlsIndex, &v11);
	LODWORD(lpTlsValue[1]) = v5;
	*(_QWORD*)&v11 = &off_140B5E640;
	v13[1] = *(_OWORD*)lpTlsValue;
	v14 = 0x141CDAED0i64;
	v13[0] = v11;
	v6 = sub_1401971E0(&dword_140C89ED8, 22, &v14, v13, v10);
	*(_QWORD*)&v11 = &off_140B5E648;
	TlsSetValue(dwTlsIndex, lpTlsValue[0]);
	TlsValue = &off_140B5E648;
	TlsSetValue(dwTlsIndex, Value);
	if (v6)
		DebugBreak();
	return (unsigned int)v5;
}
// 140A42C90: using guessed type wchar_t aResult[7];
// 140B5E640: using guessed type void *off_140B5E640;
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C65670: using guessed type __int64 qword_140C65670;
// 140C89ED8: using guessed type _DWORD dword_140C89ED8;

