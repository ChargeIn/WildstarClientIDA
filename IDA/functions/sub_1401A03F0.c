#include "../winhttp.h"

//----- (00000001401A03F0) ----------------------------------------------------
__int64 __fastcall sub_1401A03F0(__int64 a1, DWORD a2)
{
	unsigned int v2; // edi
	DWORD v3; // esi
	DWORD LastError; // eax
	DWORD v5; // ebx
	int v6; // ebx
	__int64(__fastcall * *TlsValue)(); // [rsp+30h] [rbp-39h] BYREF
	__int64 v9; // [rsp+38h] [rbp-31h]
	LPVOID Value; // [rsp+40h] [rbp-29h]
	__int64 v11[4]; // [rsp+50h] [rbp-19h] BYREF
	__int128 v12; // [rsp+70h] [rbp+7h] BYREF
	LPVOID lpTlsValue[2]; // [rsp+80h] [rbp+17h]
	__int128 v14[3]; // [rsp+90h] [rbp+27h] BYREF
	__int64 v15; // [rsp+D0h] [rbp+67h] BYREF

	v2 = 0;
	v3 = WaitForSingleObject(*(HANDLE*)(a1 + 16), a2);
	if (v3 == -1)
	{
		v9 = 0i64;
		TlsValue = &off_140B5E648;
		Value = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v11[0] = (__int64)TlsValue;
		v11[1] = v9;
		v11[2] = (__int64)Value;
		LastError = GetLastError();
		*(_QWORD*)&v12 = &off_140B5E648;
		v5 = LastError;
		*((_QWORD*)&v12 + 1) = L"Result";
		lpTlsValue[0] = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &v12);
		LODWORD(lpTlsValue[1]) = v5;
		*(_QWORD*)&v12 = &off_140B5E640;
		v14[1] = *(_OWORD*)lpTlsValue;
		v15 = 0x141D3EFC0i64;
		v14[0] = v12;
		v6 = sub_1401971E0(&dword_140C8A210, 39, &v15, v14, v11);
		*(_QWORD*)&v12 = &off_140B5E648;
		TlsSetValue(dwTlsIndex, lpTlsValue[0]);
		TlsValue = &off_140B5E648;
		TlsSetValue(dwTlsIndex, Value);
		if (v6)
			DebugBreak();
	}
	LOBYTE(v2) = v3 == 0;
	return v2;
}
// 140A42C90: using guessed type wchar_t aResult[7];
// 140B5E640: using guessed type void *off_140B5E640;
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C8A210: using guessed type _DWORD dword_140C8A210;

