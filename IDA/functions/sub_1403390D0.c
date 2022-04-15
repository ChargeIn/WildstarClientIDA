#include "../winhttp.h"

//----- (00000001403390D0) ----------------------------------------------------
__int64 __fastcall sub_1403390D0(__int64 a1, struct sockaddr** a2)
{
	int v4; // ebx
	struct sockaddr* v5; // rcx
	int v6; // ebx
	int Error; // eax
	int v8; // edx
	CHAR* v9; // rsi
	CHAR* v10; // rbx
	CHAR* v11; // rsi
	CHAR* v12; // rbx
	__int64 v13; // rax
	struct sockaddr* v14; // rbx
	int v15; // eax
	struct sockaddr* v17; // rcx
	__int64 v18; // [rsp+30h] [rbp-19h] BYREF
	__int64(__fastcall * *TlsValue)(); // [rsp+38h] [rbp-11h] BYREF
	__int128 v20; // [rsp+40h] [rbp-9h]
	__int64(__fastcall * *v21)(); // [rsp+50h] [rbp+7h] BYREF
	__int128 v22; // [rsp+58h] [rbp+Fh]
	struct sockaddr name; // [rsp+70h] [rbp+27h] BYREF

	if (*(_DWORD*)&(*a2)[17].sa_data[6] != 2)
	{
		*(_QWORD*)&v20 = 0i64;
		TlsValue = &off_140B5E648;
		*((_QWORD*)&v20 + 1) = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v21 = TlsValue;
		v18 = 0x141DED038i64;
		v22 = v20;
		v4 = sub_140196F30(&dword_140C8A640, 11, &v18, &v21);
		TlsValue = &off_140B5E648;
		TlsSetValue(dwTlsIndex, *((LPVOID*)&v20 + 1));
		if (v4)
			DebugBreak();
	}
	v5 = *a2;
	name = (*a2)[9];
	v6 = connect(*(_QWORD*)&v5[17].sa_family, &name, 16);
	Error = WSAGetLastError();
	if (v6 != -1)
	{
		v11 = &(*a2)[13].sa_data[12];
		if (!*(_WORD*)v11)
			sub_140334D90((__int64)&(*a2)[9]);
		v12 = &(*a2)[5].sa_data[12];
		if (!*(_WORD*)v12)
			sub_140334D90((__int64)&(*a2)[1]);
		v13 = 0x141DED150i64;
		goto LABEL_26;
	}
	if ((unsigned int)(Error - 10022) <= 0xF)
	{
		v8 = 40961;
		if (_bittest(&v8, Error - 10022))
		{
			v9 = &(*a2)[13].sa_data[12];
			if (!*(_WORD*)v9)
				sub_140334D90((__int64)&(*a2)[9]);
			v10 = &(*a2)[5].sa_data[12];
			if (!*(_WORD*)v10)
				sub_140334D90((__int64)&(*a2)[1]);
			v18 = 0x141DED100i64;
			sub_1401A3130(11, 3, &v18, v10, v9);
		LABEL_29:
			if (*a2)
				(*(void(__fastcall**)(struct sockaddr*))(*(_QWORD*)&(*a2)->sa_family + 8i64))(*a2);
			return 0i64;
		}
	}
	if (Error == 10056)
	{
		v11 = &(*a2)[13].sa_data[12];
		if (!*(_WORD*)v11)
			sub_140334D90((__int64)&(*a2)[9]);
		v12 = &(*a2)[5].sa_data[12];
		if (!*(_WORD*)v12)
			sub_140334D90((__int64)&(*a2)[1]);
		v13 = 0x141DED0B0i64;
	LABEL_26:
		v18 = v13;
		sub_1401A3130(11, 1, &v18, v12, v11);
		*(_DWORD*)&(*a2)[17].sa_data[6] = 3;
		v17 = *a2;
		v18 = (__int64)v17;
		if (v17)
			(**(void(__fastcall***)(struct sockaddr*)) & v17->sa_family)(v17);
		sub_140338DF0(a1, 1, &v18);
		goto LABEL_29;
	}
	v14 = *a2;
	v15 = WSAGetLastError();
	sub_140338EB0((__int64)L"connect", v15, (__int64)&v14[9]);
	*(_DWORD*)&(*a2)[17].sa_data[6] = 5;
	if (*a2)
		(*(void(__fastcall**)(struct sockaddr*))(*(_QWORD*)&(*a2)->sa_family + 8i64))(*a2);
	return 2147500037i64;
}
// 140AF2B60: using guessed type wchar_t aConnect[8];
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C8A640: using guessed type _DWORD dword_140C8A640;

