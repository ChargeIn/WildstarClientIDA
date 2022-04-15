#include "../winhttp.h"

//----- (00000001401A0980) ----------------------------------------------------
__int64 __fastcall sub_1401A0980(HANDLE* a1, DWORD a2)
{
	DWORD v3; // eax
	DWORD LastError; // eax
	DWORD v6; // ebx
	int v7; // ebx
	__int64(__fastcall * *TlsValue)(); // [rsp+30h] [rbp-39h] BYREF
	__int64 v9; // [rsp+38h] [rbp-31h]
	LPVOID Value; // [rsp+40h] [rbp-29h]
	__int128 v11; // [rsp+48h] [rbp-21h] BYREF
	LPVOID lpTlsValue[2]; // [rsp+58h] [rbp-11h]
	HANDLE Handles[3]; // [rsp+68h] [rbp-1h] BYREF
	__int64 v14[4]; // [rsp+80h] [rbp+17h] BYREF
	__int128 v15[2]; // [rsp+A0h] [rbp+37h] BYREF
	__int64 v16; // [rsp+D0h] [rbp+67h] BYREF

	Handles[0] = a1[3];
	Handles[1] = a1[6];
	v3 = WaitForMultipleObjects(2u, Handles, 1, a2);
	if (v3 != 258)
	{
		if (v3 != -1)
		{
			ResetEvent(a1[5]);
			ResetEvent(a1[6]);
			ReleaseMutex(a1[3]);
			return 1i64;
		}
		TlsValue = &off_140B5E648;
		v9 = 0i64;
		Value = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v14[0] = (__int64)TlsValue;
		v14[1] = v9;
		v14[2] = (__int64)Value;
		LastError = GetLastError();
		*(_QWORD*)&v11 = &off_140B5E648;
		v6 = LastError;
		*((_QWORD*)&v11 + 1) = L"Result";
		lpTlsValue[0] = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &v11);
		LODWORD(lpTlsValue[1]) = v6;
		*(_QWORD*)&v11 = &off_140B5E640;
		v15[1] = *(_OWORD*)lpTlsValue;
		v16 = 0x141D3EEB0i64;
		v15[0] = v11;
		v7 = sub_1401971E0(&dword_140C8A20C, 39, &v16, v15, v14);
		*(_QWORD*)&v11 = &off_140B5E648;
		TlsSetValue(dwTlsIndex, lpTlsValue[0]);
		TlsValue = &off_140B5E648;
		TlsSetValue(dwTlsIndex, Value);
		if (v7)
			DebugBreak();
	}
	return 0i64;
}
// 140A42C90: using guessed type wchar_t aResult[7];
// 140B5E640: using guessed type void *off_140B5E640;
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C8A20C: using guessed type _DWORD dword_140C8A20C;

