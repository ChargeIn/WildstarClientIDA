#include "../winhttp.h"

//----- (00000001402A8680) ----------------------------------------------------
__int64 __fastcall sub_1402A8680(__int64* a1, int a2, int a3, int a4, __int64 a5, int a6, int* a7)
{
	__int64 v7; // rax
	__int64 v13; // rbx
	int v14; // ebx
	unsigned int v15; // esi
	__int64 v16; // rdx
	__int64 v17; // rcx
	int v18; // eax
	int* v19; // r9
	__int64 v20; // rcx
	__int64 v21; // rdi
	HANDLE EventW; // rcx
	__int64 v23; // rdx
	__int64 v24; // [rsp+40h] [rbp-C0h] BYREF
	__int64(__fastcall * *v25)(); // [rsp+48h] [rbp-B8h] BYREF
	__int128 v26; // [rsp+50h] [rbp-B0h]
	__int64(__fastcall * *v27)(); // [rsp+60h] [rbp-A0h] BYREF
	const wchar_t* v28; // [rsp+68h] [rbp-98h]
	LPVOID lpTlsValue; // [rsp+70h] [rbp-90h]
	__int64 v30; // [rsp+78h] [rbp-88h]
	__int64(__fastcall * *TlsValue)(); // [rsp+80h] [rbp-80h] BYREF
	__int64 v32; // [rsp+88h] [rbp-78h]
	LPVOID Value; // [rsp+90h] [rbp-70h]
	__int64 v34; // [rsp+98h] [rbp-68h] BYREF
	__int64 v35; // [rsp+A0h] [rbp-60h] BYREF
	__int64 v36[4]; // [rsp+B0h] [rbp-50h] BYREF
	__int64(__fastcall * *v37)(); // [rsp+D0h] [rbp-30h] BYREF
	__int128 v38; // [rsp+D8h] [rbp-28h]
	__int64 v39[4]; // [rsp+F0h] [rbp-10h] BYREF
	int v40[4]; // [rsp+110h] [rbp+10h] BYREF
	int v41[6]; // [rsp+120h] [rbp+20h] BYREF

	v7 = *a1;
	v40[0] = -1;
	(*(void(__fastcall**)(__int64*, int*))(v7 + 32))(a1, v40);
	if (!a1[14])
		return 2147942487i64;
	if (a1[9])
	{
		TlsValue = &off_140B5E648;
		v32 = 0i64;
		Value = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v13 = a1[9];
		v36[0] = (__int64)TlsValue;
		v36[1] = v32;
		v27 = &off_140B5E648;
		v36[2] = (__int64)Value;
		v28 = L"FileName";
		lpTlsValue = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &v27);
		v30 = v13;
		v39[1] = (__int64)v28;
		v27 = &off_140B5E638;
		v39[3] = v13;
		v39[0] = (__int64)&off_140B5E638;
		v34 = 0x141DE65A0i64;
		v39[2] = (__int64)lpTlsValue;
		LODWORD(v13) = sub_1401971E0(&dword_140C8A4F4, 14, &v34, v39, v36);
		v27 = &off_140B5E648;
		TlsSetValue(dwTlsIndex, lpTlsValue);
		TlsValue = &off_140B5E648;
		TlsSetValue(dwTlsIndex, Value);
		if ((_DWORD)v13)
		{
			DebugBreak();
			return 2147500037i64;
		}
		return 2147500037i64;
	}
	if (a4 != *((_DWORD*)a1 + 12))
	{
		v25 = &off_140B5E648;
		*(_QWORD*)&v26 = 0i64;
		*((_QWORD*)&v26 + 1) = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &v25);
		v37 = v25;
		v35 = 0x141DE6A00i64;
		v38 = v26;
		v14 = sub_1401971E0(&dword_140C8A4F8, 14, &v35, &v37);
		v25 = &off_140B5E648;
		TlsSetValue(dwTlsIndex, *((LPVOID*)&v26 + 1));
		if (v14)
			DebugBreak();
		return 2147500037i64;
	}
	v15 = a3 + a2 * *((_DWORD*)a1 + 11);
	sub_14003D8F0(&v24, a1[2] + 6368);
	v16 = a1[14];
	v17 = *(_QWORD*)(a1[2] + 6352);
	if (a7)
	{
		v18 = *a7;
		v41[2] = 0;
		v41[5] = 1;
		v41[0] = v18;
		v19 = v41;
		v41[1] = a7[1];
		v41[3] = a7[2];
		v41[4] = a7[3];
	}
	else
	{
		v19 = 0i64;
	}
	(*(void(__fastcall**)(__int64, __int64, _QWORD, int*, __int64, int, _DWORD))(*(_QWORD*)v17 + 384i64))(
		v17,
		v16,
		v15,
		v19,
		a5,
		a6,
		0);
	v20 = v24;
	if (*(_QWORD*)(v24 + 8) <= 1ui64)
	{
		*(_DWORD*)v24 = 0;
		_InterlockedExchange64((volatile __int64*)(v20 + 8), 0i64);
		if (*(_QWORD*)(v24 + 16))
		{
			v21 = v24;
			if (!*(_QWORD*)(v24 + 24))
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)(v21 + 24), (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			SetEvent(*(HANDLE*)(v21 + 24));
		}
	}
	else
	{
		--* (_QWORD*)(v24 + 8);
	}
	v23 = a1[2] + 48i64 * *((int*)a1 + 13);
	_InterlockedIncrement((volatile signed __int32*)(v23 + 756));
	_InterlockedExchangeAdd((volatile signed __int32*)(v23 + 760), *((_DWORD*)a1 + 124));
	*((_DWORD*)a1 + 86) = 1;
	return 0i64;
}
// 140A42BD8: using guessed type wchar_t aFilename[9];
// 140B5E638: using guessed type __int64 (__fastcall *off_140B5E638)();
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C8A4F4: using guessed type _DWORD dword_140C8A4F4;
// 140C8A4F8: using guessed type _DWORD dword_140C8A4F8;
// 1402A8680: using guessed type int var_60[4];

