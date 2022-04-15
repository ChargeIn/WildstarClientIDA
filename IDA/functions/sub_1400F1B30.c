#include "../winhttp.h"

//----- (00000001400F1B30) ----------------------------------------------------
__int64 __fastcall sub_1400F1B30(__int64 a1, char(__fastcall*** a2)(_QWORD))
{
	char(__fastcall * *v4)(_QWORD); // rax
	char v5; // al
	int v6; // ebx
	__int64 result; // rax
	__int64 v8; // rcx
	__int64(__fastcall * *TlsValue)(); // [rsp+30h] [rbp-48h] BYREF
	__int64 v10; // [rsp+38h] [rbp-40h]
	LPVOID lpTlsValue; // [rsp+40h] [rbp-38h]
	__int64 v12[5]; // [rsp+50h] [rbp-28h] BYREF
	__int64 v13; // [rsp+80h] [rbp+8h] BYREF

	if (*(_QWORD*)(a1 + 8i64 * (**a2)(a2) + 40))
	{
		v10 = 0i64;
		TlsValue = &off_140B5E648;
		lpTlsValue = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v13 = 0x141D12918i64;
		v4 = *a2;
		v12[0] = (__int64)TlsValue;
		v12[1] = v10;
		v12[2] = (__int64)lpTlsValue;
		v5 = (*v4)(a2);
		v6 = sub_140196F30(&dword_140C8A0EC, 13, &v13, (unsigned int)v5, v12);
		TlsValue = &off_140B5E648;
		TlsSetValue(dwTlsIndex, lpTlsValue);
		if (v6)
			DebugBreak();
		return 2147500037i64;
	}
	else
	{
		v8 = (**a2)(a2);
		result = 0i64;
		*(_QWORD*)(a1 + 8 * v8 + 40) = a2;
	}
	return result;
}
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C8A0EC: using guessed type _DWORD dword_140C8A0EC;

