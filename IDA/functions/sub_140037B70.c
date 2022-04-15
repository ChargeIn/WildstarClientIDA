//----- (0000000140037B70) ----------------------------------------------------
__int64 __fastcall sub_140037B70(__int64 a1, _DWORD* a2)
{
	__int64 v4; // rbx
	__int64 v5; // rdi
	int v6; // edx
	__int64 v7; // rdi
	__int64(__fastcall * *TlsValue)(); // [rsp+20h] [rbp-58h] BYREF
	__int128 v9; // [rsp+28h] [rbp-50h]
	__int64(__fastcall * *v10)(); // [rsp+38h] [rbp-40h] BYREF
	__int128 v11; // [rsp+40h] [rbp-38h]
	__int64(__fastcall * *v12)(); // [rsp+50h] [rbp-28h] BYREF
	__int128 v13; // [rsp+58h] [rbp-20h]
	__int64 v14; // [rsp+90h] [rbp+18h] BYREF

	if (((*(_DWORD*)(a1 + 168) - 5) & 0xFFFFFFFD) != 0)
		return 0i64;
	if (*a2 == 16042)
	{
		if (a2[8] == 158963872)
			return sub_14003A620(a1);
		sub_14018D540(&v14, (__int64)L"Client(0x%8X) Auth(0x%8X) messages do not match", 158963872i64);
		v4 = v14;
		v14 += 19899968i64;
		v7 = v14;
		sub_1401A3130(11, 1, &v14);
		sub_1400374E0();
		*(_QWORD*)&v11 = 0i64;
		v10 = &off_140B5E648;
		*((_QWORD*)&v11 + 1) = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &v10);
		v12 = v10;
		v14 = v7;
		v13 = v11;
		LODWORD(v7) = sub_1401971E0(&dword_140C8A008, 22, &v14, &v12);
		v10 = &off_140B5E648;
		TlsSetValue(dwTlsIndex, *((LPVOID*)&v11 + 1));
		if ((_DWORD)v7)
			DebugBreak();
		v6 = 269517;
	}
	else
	{
		sub_14018D540(&v14, (__int64)L"Client(%d) Auth(%d) versions do not match", 16042i64);
		v4 = v14;
		v14 += 19899968i64;
		v5 = v14;
		sub_1401A3130(11, 1, &v14);
		sub_1400374E0();
		*(_QWORD*)&v9 = 0i64;
		TlsValue = &off_140B5E648;
		*((_QWORD*)&v9 + 1) = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v12 = TlsValue;
		v14 = v5;
		v13 = v9;
		LODWORD(v5) = sub_1401971E0(&dword_140C8A00C, 22, &v14, &v12);
		TlsValue = &off_140B5E648;
		TlsSetValue(dwTlsIndex, *((LPVOID*)&v9 + 1));
		if ((_DWORD)v5)
			DebugBreak();
		v6 = 269516;
	}
	sub_1400383A0(a1, v6, 0);
	if (v4)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v4 - 16) + 8i64))(v4 - 16);
	return 0i64;
}
// 1409F5A30: using guessed type wchar_t aClient0x8xAuth[48];
// 1409F5A90: using guessed type wchar_t aClientDAuthDVe[42];
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C8A008: using guessed type _DWORD dword_140C8A008;
// 140C8A00C: using guessed type _DWORD dword_140C8A00C;

