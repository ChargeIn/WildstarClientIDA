//----- (0000000140182490) ----------------------------------------------------
__int64 __fastcall sub_140182490(__int64 a1, __int64 a2, __int64 a3, _QWORD* a4, _OWORD* a5, __int64 a6)
{
	_DWORD* v7; // rax
	__int64 v8; // rax
	int v9; // eax
	int v10; // edx
	int v11; // eax
	int v12; // ebx
	int v13; // ebx
	int v14; // ebx
	int v15; // ebx
	__int64(__fastcall * *TlsValue)(); // [rsp+50h] [rbp-21h] BYREF
	__int128 v18; // [rsp+58h] [rbp-19h]
	__int64(__fastcall * *v19)(); // [rsp+70h] [rbp-1h] BYREF
	__int128 v20; // [rsp+78h] [rbp+7h]
	__int64 v21; // [rsp+C0h] [rbp+4Fh] BYREF

	sub_1400C5920(a1, a2, a3, a4, a5, a6, 0i64);
	*(_DWORD*)(a1 + 1024) = 1;
	*(_QWORD*)a1 = off_140B5E190;
	*(_QWORD*)(a1 + 1032) = 0i64;
	*(_QWORD*)(a1 + 1040) = 0i64;
	*(_DWORD*)(a1 + 1048) = 144;
	*(_QWORD*)(a1 + 1052) = 96i64;
	*(_DWORD*)(a1 + 1060) = 0;
	*(_DWORD*)(a1 + 1064) = 1;
	*(_DWORD*)(a1 + 1068) = 1;
	*(_QWORD*)(a1 + 1076) = 0i64;
	*(_DWORD*)(a1 + 1084) = 0;
	*(_QWORD*)(a1 + 1096) = 0i64;
	*(_QWORD*)(a1 + 1104) = 0i64;
	*(_QWORD*)(a1 + 1112) = 0i64;
	*(_QWORD*)(a1 + 1120) = 0i64;
	*(_QWORD*)(a1 + 1128) = 0i64;
	*(_QWORD*)(a1 + 1136) = 0i64;
	*(_QWORD*)(a1 + 432) |= 0x400000ui64;
	if (*(char*)(a1 + 29) >= 0)
	{
		v7 = sub_1400CB0E0(a1, &TlsValue, a1 + 64);
		*(_DWORD*)(a1 + 396) = *v7;
		*(_DWORD*)(a1 + 400) = v7[1];
		*(_DWORD*)(a1 + 404) = v7[2];
		*(_DWORD*)(a1 + 408) = v7[3];
		*(_BYTE*)(a1 + 29) |= 0x80u;
		v8 = a1;
		do
		{
			if (!*(_DWORD*)(v8 + 392))
				break;
			*(_DWORD*)(v8 + 392) = 0;
			v8 = *(_QWORD*)(v8 + 16);
		} while (v8);
	}
	v9 = *(_DWORD*)(a1 + 408);
	v10 = *(_DWORD*)(a1 + 404) - *(_DWORD*)(a1 + 396);
	*(_DWORD*)(a1 + 1080) = v10;
	v11 = v9 - *(_DWORD*)(a1 + 400);
	*(_DWORD*)(a1 + 1084) = v11;
	*(float*)(a1 + 1088) = (float)v10 / (float)v11;
	if ((*(int(__fastcall**)(__int64, const wchar_t*, __int64))(*(_QWORD*)qword_140C65670 + 152i64))(
		qword_140C65670,
		L"Shaders\\SimplePS.sho",
		a1 + 1128) < 0)
	{
		TlsValue = &off_140B5E648;
		*(_QWORD*)&v18 = 0i64;
		*((_QWORD*)&v18 + 1) = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v19 = TlsValue;
		v21 = 0x141D38280i64;
		v20 = v18;
		v12 = sub_140197770(13, &v21, &v19);
		TlsValue = &off_140B5E648;
		TlsSetValue(dwTlsIndex, *((LPVOID*)&v18 + 1));
		if (v12)
			DebugBreak();
	}
	if ((*(int(__fastcall**)(__int64, const wchar_t*, __int64))(*(_QWORD*)qword_140C65670 + 152i64))(
		qword_140C65670,
		L"Shaders\\UIOverlayMaskPS.sho",
		a1 + 1136) < 0)
	{
		TlsValue = &off_140B5E648;
		*(_QWORD*)&v18 = 0i64;
		*((_QWORD*)&v18 + 1) = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v19 = TlsValue;
		v21 = 0x141D38430i64;
		v20 = v18;
		v13 = sub_140197770(13, &v21, &v19);
		TlsValue = &off_140B5E648;
		TlsSetValue(dwTlsIndex, *((LPVOID*)&v18 + 1));
		if (v13)
			DebugBreak();
	}
	if ((*(int(__fastcall**)(__int64, __int64, __int64, __int64, _DWORD, int, _DWORD, int, _DWORD, __int64))(*(_QWORD*)qword_140C65670 + 88i64))(
		qword_140C65670,
		1i64,
		1i64,
		1i64,
		0,
		1,
		0,
		256,
		0,
		a1 + 1096) < 0)
	{
		TlsValue = &off_140B5E648;
		*(_QWORD*)&v18 = 0i64;
		*((_QWORD*)&v18 + 1) = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v19 = TlsValue;
		v21 = 0x141D383D0i64;
		v20 = v18;
		v14 = sub_140197770(13, &v21, &v19);
		TlsValue = &off_140B5E648;
		TlsSetValue(dwTlsIndex, *((LPVOID*)&v18 + 1));
		if (v14)
			DebugBreak();
	}
	if ((*(int(__fastcall**)(__int64, __int64, __int64, __int64, _DWORD, int, _DWORD, int, _DWORD, __int64))(*(_QWORD*)qword_140C65670 + 88i64))(
		qword_140C65670,
		1i64,
		1i64,
		1i64,
		0,
		1,
		0,
		256,
		0,
		a1 + 1112) < 0)
	{
		TlsValue = &off_140B5E648;
		*(_QWORD*)&v18 = 0i64;
		*((_QWORD*)&v18 + 1) = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v19 = TlsValue;
		v21 = 0x141D384A0i64;
		v20 = v18;
		v15 = sub_140197770(13, &v21, &v19);
		TlsValue = &off_140B5E648;
		TlsSetValue(dwTlsIndex, *((LPVOID*)&v18 + 1));
		if (v15)
			DebugBreak();
	}
	sub_140182A30(a1);
	sub_140183FD0(a1);
	return a1;
}
// 140A3DBB0: using guessed type wchar_t aShadersSimplep_3[21];
// 140A3DC08: using guessed type wchar_t aShadersUioverl_1[28];
// 140B5E190: using guessed type __int64 (__fastcall *off_140B5E190[25])();
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C65670: using guessed type __int64 qword_140C65670;

