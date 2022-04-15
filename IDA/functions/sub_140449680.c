#include "../winhttp.h"

//----- (0000000140449680) ----------------------------------------------------
__int64 __fastcall sub_140449680(__int64 a1, unsigned int a2)
{
	__int64 v3; // rdi
	int v4; // ebx
	__int64(__fastcall * *TlsValue)(); // [rsp+30h] [rbp-48h] BYREF
	__int64 v7; // [rsp+38h] [rbp-40h]
	LPVOID lpTlsValue; // [rsp+40h] [rbp-38h]
	__int64 v9[5]; // [rsp+50h] [rbp-28h] BYREF
	__int64 v10; // [rsp+80h] [rbp+8h] BYREF

	v3 = a2;
	if (a2 <= *(unsigned int*)(*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 64) + 32i64))(*(_QWORD*)(a1 + 64))
		/ 0x30ui64)
		return *(_QWORD*)(a1 + 8) + 80 * v3;
	TlsValue = &off_140B5E648;
	v7 = 0i64;
	lpTlsValue = TlsGetValue(dwTlsIndex);
	TlsSetValue(dwTlsIndex, &TlsValue);
	v9[0] = (__int64)TlsValue;
	v10 = 0x141DFCFF0i64;
	v9[1] = v7;
	v9[2] = (__int64)lpTlsValue;
	v4 = sub_1401971E0(&dword_140C8AC5C, 22, &v10, (unsigned int)v3, v9);
	TlsValue = &off_140B5E648;
	TlsSetValue(dwTlsIndex, lpTlsValue);
	if (v4)
		DebugBreak();
	return 0i64;
}
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C8AC5C: using guessed type _DWORD dword_140C8AC5C;

