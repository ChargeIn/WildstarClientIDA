//----- (000000014025A310) ----------------------------------------------------
__int64 __fastcall sub_14025A310(__int64 a1, int a2)
{
	unsigned int v2; // esi
	int v5; // ebx
	_DWORD* v7; // rax
	int v8; // eax
	int v9; // eax
	_DWORD* v10; // rax
	int v11; // edx
	int v12; // ecx
	__int64 v13; // rax
	__int64 v14; // rcx
	int v15; // ebx
	__int64(__fastcall * *TlsValue)(); // [rsp+20h] [rbp-40h] BYREF
	__int128 v17; // [rsp+28h] [rbp-38h]
	__int64(__fastcall * *v18)(); // [rsp+40h] [rbp-20h] BYREF
	__int128 v19; // [rsp+48h] [rbp-18h]
	__int64 v20; // [rsp+80h] [rbp+20h] BYREF

	v2 = 0;
	if (!*(_DWORD*)(a1 + 44))
	{
		*(_QWORD*)&v17 = 0i64;
		TlsValue = &off_140B5E648;
		*((_QWORD*)&v17 + 1) = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v18 = TlsValue;
		v20 = 0x141DDF570i64;
		v19 = v17;
		v5 = sub_1401971E0(&dword_140C8A2A4, 14, &v20, &v18);
		TlsValue = &off_140B5E648;
		TlsSetValue(dwTlsIndex, *((LPVOID*)&v17 + 1));
		if (v5)
			DebugBreak();
		return 0i64;
	}
	if (*(int*)(a1 + 48) < 23)
	{
		v7 = (_DWORD*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 720i64))(qword_140C65670);
		if (*(_DWORD*)(a1 + 52) != v7[206] + v7[212] + v7[218] + v7[224] + v7[230] + v7[205])
			*(_DWORD*)(a1 + 4i64 * *(int*)(a1 + 48) + 56) = 0;
	}
	if (*(_DWORD*)(a1 + 48) == a2)
	{
	LABEL_15:
		v10 = (_DWORD*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 720i64))(qword_140C65670);
		v11 = v10[205];
		v12 = v10[206] + v10[212] + v10[218] + v10[224] + v10[230];
		v13 = *(int*)(a1 + 48);
		*(_DWORD*)(a1 + 52) = v12 + v11;
		if ((int)v13 >= 23)
			return 1;
		v14 = dword_140B60540[v13];
		if ((int)v14 >= 23 || !*(_DWORD*)(a1 + 4 * v14 + 56))
			return 1;
		return v2;
	}
	while (1)
	{
		v8 = *(_DWORD*)(a1 + 48);
		if (v8 == 23)
		{
			*(_DWORD*)(a1 + 48) = 0;
		LABEL_13:
			((void(__fastcall*)(__int64*))funcs_14025A456[*(int*)(a1 + 48)])((__int64*)a1);
			*(_DWORD*)(a1 + 4i64 * *(int*)(a1 + 48) + 56) = 1;
			goto LABEL_14;
		}
		if (v8 >= a2)
			break;
		v9 = v8 + 1;
		*(_DWORD*)(a1 + 48) = v9;
		if (v9 < 23)
			goto LABEL_13;
	LABEL_14:
		if (*(_DWORD*)(a1 + 48) == a2)
			goto LABEL_15;
	}
	*(_QWORD*)&v17 = 0i64;
	TlsValue = &off_140B5E648;
	*((_QWORD*)&v17 + 1) = TlsGetValue(dwTlsIndex);
	TlsSetValue(dwTlsIndex, &TlsValue);
	v18 = TlsValue;
	v20 = 0x141DDF480i64;
	v19 = v17;
	v15 = sub_1401971E0(&dword_140C8A2A0, 14, &v20, &v18);
	TlsValue = &off_140B5E648;
	TlsSetValue(dwTlsIndex, *((LPVOID*)&v17 + 1));
	if (v15)
		DebugBreak();
	return 0i64;
}
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140B60480: using guessed type __int64 (__fastcall *funcs_14025A456[23])();
// 140B60540: using guessed type int dword_140B60540[24];
// 140C65670: using guessed type __int64 qword_140C65670;
// 140C8A2A0: using guessed type _DWORD dword_140C8A2A0;
// 140C8A2A4: using guessed type _DWORD dword_140C8A2A4;

