#include "../winhttp.h"

//----- (00000001401A01F0) ----------------------------------------------------
__int64 __fastcall sub_1401A01F0(__int64 a1, DWORD a2)
{
	DWORD v2; // eax
	DWORD LastError; // eax
	DWORD v4; // ebx
	int v5; // ebx
	__int64(__fastcall * *TlsValue)(); // [rsp+30h] [rbp-29h] BYREF
	__int64 v8; // [rsp+38h] [rbp-21h]
	LPVOID Value; // [rsp+40h] [rbp-19h]
	__int64 v10[4]; // [rsp+50h] [rbp-9h] BYREF
	__int128 v11; // [rsp+70h] [rbp+17h] BYREF
	LPVOID lpTlsValue[2]; // [rsp+80h] [rbp+27h]
	__int128 v13[2]; // [rsp+90h] [rbp+37h] BYREF
	__int64 v14; // [rsp+C0h] [rbp+67h] BYREF

	v2 = WaitForSingleObject(*(HANDLE*)(a1 + 16), a2);
	if (!v2 || v2 == 128)
		return 1i64;
	if (v2 == -1)
	{
		v8 = 0i64;
		TlsValue = &off_140B5E648;
		Value = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v10[0] = (__int64)TlsValue;
		v10[1] = v8;
		v10[2] = (__int64)Value;
		LastError = GetLastError();
		*(_QWORD*)&v11 = &off_140B5E648;
		v4 = LastError;
		*((_QWORD*)&v11 + 1) = L"Result";
		lpTlsValue[0] = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &v11);
		LODWORD(lpTlsValue[1]) = v4;
		*(_QWORD*)&v11 = &off_140B5E640;
		v13[1] = *(_OWORD*)lpTlsValue;
		v14 = 0x141D3EE30i64;
		v13[0] = v11;
		v5 = sub_1401971E0(&dword_140C8A214, 39, &v14, v13, v10);
		*(_QWORD*)&v11 = &off_140B5E648;
		TlsSetValue(dwTlsIndex, lpTlsValue[0]);
		TlsValue = &off_140B5E648;
		TlsSetValue(dwTlsIndex, Value);
		if (v5)
			DebugBreak();
	}
	return 0i64;
}
// 140A42C90: using guessed type wchar_t aResult[7];
// 140B5E640: using guessed type void *off_140B5E640;
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C8A214: using guessed type _DWORD dword_140C8A214;

