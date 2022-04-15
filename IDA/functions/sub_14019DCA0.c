//----- (000000014019DCA0) ----------------------------------------------------
__int64 __fastcall sub_14019DCA0(__int64 a1, int a2, void(__fastcall*** a3)(_QWORD), int** a4)
{
	char v6; // r14
	int v8; // ebx
	__int64 v10; // rax
	_DWORD* v11; // rcx
	int v12; // ebx
	int v13; // eax
	int* v14; // rax
	int* v15; // rbx
	int* v16; // rax
	__int64 v17; // [rsp+20h] [rbp-40h] BYREF
	__int64(__fastcall * *TlsValue)(); // [rsp+28h] [rbp-38h] BYREF
	__int128 v19; // [rsp+30h] [rbp-30h]
	__int64(__fastcall * *v20)(); // [rsp+40h] [rbp-20h] BYREF
	__int128 v21; // [rsp+48h] [rbp-18h]

	v6 = a2;
	if (!qword_140C63758)
	{
		TlsValue = &off_140B5E648;
		*(_QWORD*)&v19 = 0i64;
		*((_QWORD*)&v19 + 1) = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v20 = TlsValue;
		v17 = 0x141D3E830i64;
		v21 = v19;
		v8 = sub_140196F30(&dword_140C8A200, 35, &v17, &v20);
		TlsValue = &off_140B5E648;
		TlsSetValue(dwTlsIndex, *((LPVOID*)&v19 + 1));
		if (v8)
			DebugBreak();
		return 2147500037i64;
	}
	if ((*(_DWORD*)a1 & 0xFFFFFFE1) != 0)
	{
		TlsValue = &off_140B5E648;
		*(_QWORD*)&v19 = 0i64;
		*((_QWORD*)&v19 + 1) = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v10 = 0x141D3E918i64;
		v11 = &unk_140C8A1F8;
	LABEL_7:
		v17 = v10;
		v20 = TlsValue;
		v21 = v19;
		v12 = sub_140196F30(v11, 35, &v17, &v20);
		TlsValue = &off_140B5E648;
		TlsSetValue(dwTlsIndex, *((LPVOID*)&v19 + 1));
		if (v12)
			DebugBreak();
		return 2147942487i64;
	}
	if (*(_DWORD*)(a1 + 32) && (!*(_DWORD*)(a1 + 4) || !*(_QWORD*)(a1 + 8) && !*(_QWORD*)(a1 + 16)))
	{
		TlsValue = &off_140B5E648;
		*(_QWORD*)&v19 = 0i64;
		*((_QWORD*)&v19 + 1) = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v10 = 0x141D3E8F8i64;
		v11 = &unk_140C8A1FC;
		goto LABEL_7;
	}
	if ((a2 & 0xFFFFFFFE) != 0)
	{
		TlsValue = &off_140B5E648;
		*(_QWORD*)&v19 = 0i64;
		*((_QWORD*)&v19 + 1) = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v10 = 0x141D3EAB0i64;
		v11 = &unk_140C8A1F0;
		goto LABEL_7;
	}
	if (!a4 && (a2 & 1) != 0)
	{
		TlsValue = &off_140B5E648;
		*(_QWORD*)&v19 = 0i64;
		*((_QWORD*)&v19 + 1) = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v10 = 0x141D3EA70i64;
		v11 = &unk_140C8A1EC;
		goto LABEL_7;
	}
	v13 = *(_DWORD*)a1 & 6;
	if (v13 == 2)
	{
		v16 = sub_14018B280(160i64, 0);
		v15 = v16;
		if (v16)
		{
			sub_1401C75D0((__int64)v16, a1, a3);
			*(_QWORD*)v15 = off_140B5F6D0;
			goto LABEL_28;
		}
	LABEL_27:
		v15 = 0i64;
		goto LABEL_28;
	}
	if (v13 != 4)
	{
		TlsValue = &off_140B5E648;
		*(_QWORD*)&v19 = 0i64;
		*((_QWORD*)&v19 + 1) = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v10 = 0x141D3EB00i64;
		v11 = &unk_140C8A1F4;
		goto LABEL_7;
	}
	v14 = sub_14018B280(160i64, 0);
	v15 = v14;
	if (!v14)
		goto LABEL_27;
	sub_1401C75D0((__int64)v14, a1, a3);
	*(_QWORD*)v15 = off_140B5F620;
LABEL_28:
	if (a4)
		*a4 = v15;
	if ((v6 & 1) == 0)
		(*(void(__fastcall**)(int*))(*(_QWORD*)v15 + 88i64))(v15);
	if (!a4)
		(*(void(__fastcall**)(int*))(*(_QWORD*)v15 + 8i64))(v15);
	return 0i64;
}
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140B5F620: using guessed type __int64 (__fastcall *off_140B5F620[21])();
// 140B5F6D0: using guessed type __int64 (__fastcall *off_140B5F6D0[21])();
// 140C63758: using guessed type __int64 qword_140C63758;
// 140C8A200: using guessed type _DWORD dword_140C8A200;

