#include "../winhttp.h"

//----- (00000001401A07C0) ----------------------------------------------------
__int64 __fastcall sub_1401A07C0(__int64 a1, DWORD a2)
{
	DWORD v3; // eax
	_DWORD* v4; // rdx
	DWORD LastError; // eax
	DWORD v8; // ebx
	int v9; // ebx
	__int64(__fastcall * *TlsValue)(); // [rsp+30h] [rbp-39h] BYREF
	__int64 v11; // [rsp+38h] [rbp-31h]
	LPVOID Value; // [rsp+40h] [rbp-29h]
	__int128 v13; // [rsp+48h] [rbp-21h] BYREF
	LPVOID lpTlsValue[2]; // [rsp+58h] [rbp-11h]
	HANDLE Handles[3]; // [rsp+68h] [rbp-1h] BYREF
	__int64 v16[4]; // [rsp+80h] [rbp+17h] BYREF
	__int128 v17[2]; // [rsp+A0h] [rbp+37h] BYREF
	__int64 v18; // [rsp+D0h] [rbp+67h] BYREF

	Handles[0] = *(HANDLE*)(a1 + 24);
	Handles[1] = *(HANDLE*)(a1 + 40);
	v3 = WaitForMultipleObjects(2u, Handles, 1, a2);
	if (v3 == 258)
		return 0i64;
	if (v3 == -1)
	{
		TlsValue = &off_140B5E648;
		v11 = 0i64;
		Value = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v16[0] = (__int64)TlsValue;
		v16[1] = v11;
		v16[2] = (__int64)Value;
		LastError = GetLastError();
		*(_QWORD*)&v13 = &off_140B5E648;
		v8 = LastError;
		*((_QWORD*)&v13 + 1) = L"Result";
		lpTlsValue[0] = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &v13);
		LODWORD(lpTlsValue[1]) = v8;
		*(_QWORD*)&v13 = &off_140B5E640;
		v17[1] = *(_OWORD*)lpTlsValue;
		v18 = 0x141D3EEF0i64;
		v17[0] = v13;
		v9 = sub_1401971E0(&dword_140C8A208, 39, &v18, v17, v16);
		*(_QWORD*)&v13 = &off_140B5E648;
		TlsSetValue(dwTlsIndex, lpTlsValue[0]);
		TlsValue = &off_140B5E648;
		TlsSetValue(dwTlsIndex, Value);
		if (v9)
			DebugBreak();
		return 0i64;
	}
	v4 = *(_DWORD**)(a1 + 32);
	if (!(*v4)++)
		ResetEvent(*(HANDLE*)(a1 + 48));
	ReleaseMutex(*(HANDLE*)(a1 + 24));
	return 1i64;
}
// 140A42C90: using guessed type wchar_t aResult[7];
// 140B5E640: using guessed type void *off_140B5E640;
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C8A208: using guessed type _DWORD dword_140C8A208;

