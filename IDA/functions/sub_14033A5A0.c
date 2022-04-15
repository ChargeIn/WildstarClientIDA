//----- (000000014033A5A0) ----------------------------------------------------
__int64 __fastcall sub_14033A5A0(int** a1)
{
	int v2; // ebx
	int* v4; // rbx
	int* v5; // rax
	int* v6; // rax
	__int64 v7; // [rsp+30h] [rbp-D0h] BYREF
	__int64(__fastcall * *TlsValue)(); // [rsp+38h] [rbp-C8h] BYREF
	__int128 v9; // [rsp+40h] [rbp-C0h]
	__int64(__fastcall * *v10)(); // [rsp+50h] [rbp-B0h] BYREF
	__int128 v11; // [rsp+58h] [rbp-A8h]
	struct WSAData WSAData; // [rsp+70h] [rbp-90h] BYREF

	v7 = 0x141DED2D8i64;
	sub_1401A2E50(0xBu, 1, &v7);
	if (WSAStartup(0x202u, &WSAData))
	{
		*(_QWORD*)&v9 = 0i64;
		TlsValue = &off_140B5E648;
		*((_QWORD*)&v9 + 1) = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v10 = TlsValue;
		v7 = 0x141DED1F8i64;
		v11 = v9;
		v2 = sub_140196F30(&dword_140C8A63C, 11, &v7, &v10);
		TlsValue = &off_140B5E648;
		TlsSetValue(dwTlsIndex, *((LPVOID*)&v9 + 1));
		if (v2)
			DebugBreak();
		return 2147500037i64;
	}
	else
	{
		v7 = 0x141DED1B0i64;
		sub_1401A2E50(0xBu, 1, &v7, WSAData.wVersion, WSAData.szDescription, WSAData.iMaxSockets);
		v4 = sub_14018B280(56i64, 0);
		if (v4)
		{
			*(_QWORD*)v4 = off_140B64920;
			v5 = sub_14018B280(32i64, 0);
			*((_QWORD*)v4 + 2) = v5;
			*(_QWORD*)v5 = v5;
			*(_QWORD*)(*((_QWORD*)v4 + 2) + 8i64) = *((_QWORD*)v4 + 2);
			v6 = sub_14018B280(24i64, 0);
			*((_QWORD*)v4 + 4) = v6;
			*(_QWORD*)v6 = v6;
			*(_QWORD*)(*((_QWORD*)v4 + 4) + 8i64) = *((_QWORD*)v4 + 4);
			*(_QWORD*)(v4 + 11) = 0i64;
			v4[10] = 0;
		}
		else
		{
			v4 = 0i64;
		}
		qword_140C65838 = (__int64)v4;
		*a1 = v4;
		return 0i64;
	}
}
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140B64920: using guessed type __int64 (__fastcall *off_140B64920[11])();
// 140C65838: using guessed type __int64 qword_140C65838;
// 140C8A63C: using guessed type _DWORD dword_140C8A63C;

