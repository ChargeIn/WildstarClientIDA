#include "../winhttp.h"

//----- (000000014019F850) ----------------------------------------------------
__int64 __fastcall sub_14019F850(__int64 a1)
{
	int v1; // ebx
	__int64(__fastcall * *TlsValue)(); // [rsp+20h] [rbp-48h] BYREF
	__int128 v4; // [rsp+28h] [rbp-40h]
	__int64(__fastcall * *v5)(); // [rsp+40h] [rbp-28h] BYREF
	__int128 v6; // [rsp+48h] [rbp-20h]
	__int64 v7; // [rsp+70h] [rbp+8h] BYREF

	if (*(_DWORD*)(a1 + 64))
		return (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 88) + 32i64))(*(_QWORD*)(a1 + 88));
	*(_QWORD*)&v4 = 0i64;
	TlsValue = &off_140B5E648;
	*((_QWORD*)&v4 + 1) = TlsGetValue(dwTlsIndex);
	TlsSetValue(dwTlsIndex, &TlsValue);
	v5 = TlsValue;
	v7 = 0x141D3ED60i64;
	v6 = v4;
	v1 = sub_140196F30(&dword_140C8A21C, 39, &v7, &v5);
	TlsValue = &off_140B5E648;
	TlsSetValue(dwTlsIndex, *((LPVOID*)&v4 + 1));
	if (v1)
		DebugBreak();
	return 0i64;
}
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C8A21C: using guessed type _DWORD dword_140C8A21C;

