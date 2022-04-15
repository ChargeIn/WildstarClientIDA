#include "../winhttp.h"

//----- (00000001402A26E0) ----------------------------------------------------
__int64 __fastcall sub_1402A26E0(__int64* a1, unsigned int a2, int a3, __int64 a4, int a5, int* a6)
{
	__int64 v6; // rax
	__int64 v12; // rbx
	int v13; // ebx
	__int64 v14; // rdx
	__int64 v15; // rcx
	int v16; // eax
	int* v17; // r9
	__int64 v18; // rcx
	__int64 v19; // rdi
	HANDLE EventW; // rcx
	__int64 v21; // rdx
	__int64 v22; // [rsp+40h] [rbp-C0h] BYREF
	__int64(__fastcall * *v23)(); // [rsp+48h] [rbp-B8h] BYREF
	__int128 v24; // [rsp+50h] [rbp-B0h]
	__int64(__fastcall * *v25)(); // [rsp+60h] [rbp-A0h] BYREF
	const wchar_t* v26; // [rsp+68h] [rbp-98h]
	LPVOID lpTlsValue; // [rsp+70h] [rbp-90h]
	__int64 v28; // [rsp+78h] [rbp-88h]
	__int64(__fastcall * *TlsValue)(); // [rsp+80h] [rbp-80h] BYREF
	__int64 v30; // [rsp+88h] [rbp-78h]
	LPVOID Value; // [rsp+90h] [rbp-70h]
	__int64 v32; // [rsp+98h] [rbp-68h] BYREF
	__int64 v33; // [rsp+A0h] [rbp-60h] BYREF
	__int64 v34[4]; // [rsp+B0h] [rbp-50h] BYREF
	__int64(__fastcall * *v35)(); // [rsp+D0h] [rbp-30h] BYREF
	__int128 v36; // [rsp+D8h] [rbp-28h]
	__int64 v37[4]; // [rsp+F0h] [rbp-10h] BYREF
	int v38[4]; // [rsp+110h] [rbp+10h] BYREF
	int v39[6]; // [rsp+120h] [rbp+20h] BYREF

	v6 = *a1;
	v38[0] = -1;
	(*(void(__fastcall**)(__int64*, int*))(v6 + 32))(a1, v38);
	if (!a1[14])
		return 2147942487i64;
	if (a1[9])
	{
		TlsValue = &off_140B5E648;
		v30 = 0i64;
		Value = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v12 = a1[9];
		v34[0] = (__int64)TlsValue;
		v34[1] = v30;
		v25 = &off_140B5E648;
		v34[2] = (__int64)Value;
		v26 = L"FileName";
		lpTlsValue = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &v25);
		v28 = v12;
		v37[1] = (__int64)v26;
		v25 = &off_140B5E638;
		v37[3] = v12;
		v37[0] = (__int64)&off_140B5E638;
		v32 = 0x141DE5E60i64;
		v37[2] = (__int64)lpTlsValue;
		LODWORD(v12) = sub_1401971E0(&dword_140C8A480, 14, &v32, v37, v34);
		v25 = &off_140B5E648;
		TlsSetValue(dwTlsIndex, lpTlsValue);
		TlsValue = &off_140B5E648;
		TlsSetValue(dwTlsIndex, Value);
		if ((_DWORD)v12)
			DebugBreak();
		return 2147500037i64;
	}
	if (a3 == *((_DWORD*)a1 + 12))
	{
		sub_14003D8F0(&v22, a1[2] + 6368);
		v14 = a1[14];
		v15 = *(_QWORD*)(a1[2] + 6352);
		if (a6)
		{
			v16 = *a6;
			v39[2] = 0;
			v39[5] = 1;
			v39[0] = v16;
			v17 = v39;
			v39[1] = a6[1];
			v39[3] = a6[2];
			v39[4] = a6[3];
		}
		else
		{
			v17 = 0i64;
		}
		(*(void(__fastcall**)(__int64, __int64, _QWORD, int*, __int64, int, _DWORD))(*(_QWORD*)v15 + 384i64))(
			v15,
			v14,
			a2,
			v17,
			a4,
			a5,
			0);
		v18 = v22;
		if (*(_QWORD*)(v22 + 8) <= 1ui64)
		{
			*(_DWORD*)v22 = 0;
			_InterlockedExchange64((volatile __int64*)(v18 + 8), 0i64);
			if (*(_QWORD*)(v22 + 16))
			{
				v19 = v22;
				if (!*(_QWORD*)(v22 + 24))
				{
					EventW = CreateEventW(0i64, 0, 0, 0i64);
					if (_InterlockedCompareExchange64((volatile signed __int64*)(v19 + 24), (signed __int64)EventW, 0i64))
						CloseHandle(EventW);
				}
				SetEvent(*(HANDLE*)(v19 + 24));
			}
		}
		else
		{
			--* (_QWORD*)(v22 + 8);
		}
		v21 = a1[2] + 48i64 * *((int*)a1 + 13);
		_InterlockedIncrement((volatile signed __int32*)(v21 + 756));
		_InterlockedExchangeAdd((volatile signed __int32*)(v21 + 760), *((_DWORD*)a1 + 54));
		*((_DWORD*)a1 + 46) = 1;
		return 0i64;
	}
	else
	{
		v23 = &off_140B5E648;
		*(_QWORD*)&v24 = 0i64;
		*((_QWORD*)&v24 + 1) = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &v23);
		v35 = v23;
		v33 = 0x141DE5E10i64;
		v36 = v24;
		v13 = sub_1401971E0(&dword_140C8A484, 14, &v33, &v35);
		v23 = &off_140B5E648;
		TlsSetValue(dwTlsIndex, *((LPVOID*)&v24 + 1));
		if (!v13)
			return 2147500037i64;
		DebugBreak();
		return 2147500037i64;
	}
}
// 140A42BD8: using guessed type wchar_t aFilename[9];
// 140B5E638: using guessed type __int64 (__fastcall *off_140B5E638)();
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C8A480: using guessed type _DWORD dword_140C8A480;
// 140C8A484: using guessed type _DWORD dword_140C8A484;
// 1402A26E0: using guessed type int var_50[4];

