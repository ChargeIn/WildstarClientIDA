#include "../winhttp.h"

//----- (000000014034A850) ----------------------------------------------------
__int64 __fastcall sub_14034A850(__int64 a1)
{
	int v2; // eax
	unsigned __int64 v3; // rcx
	int v4; // eax
	unsigned __int64 v5; // rcx
	int v6; // eax
	unsigned __int64 v7; // rcx
	int v9; // ebx
	__int64(__fastcall * *TlsValue)(); // [rsp+20h] [rbp-48h] BYREF
	__int128 v11; // [rsp+28h] [rbp-40h]
	__int64(__fastcall * *v12)(); // [rsp+40h] [rbp-28h] BYREF
	__int128 v13; // [rsp+48h] [rbp-20h]
	__int64 v14; // [rsp+70h] [rbp+8h] BYREF

	if (!*(_DWORD*)(a1 + 32))
	{
		sub_1408274B0(a1 + 16);
		sub_140827500(a1 + 64);
		v2 = sub_14018A3E0(*(unsigned int*)(a1 + 32));
		v3 = *(unsigned int*)(a1 + 40);
		*(_DWORD*)(a1 + 32) = v2;
		v4 = sub_14018A3E0(v3);
		v5 = *(unsigned int*)(a1 + 56);
		*(_DWORD*)(a1 + 40) = v4;
		v6 = sub_14018A3E0(v5);
		v7 = *(unsigned int*)(a1 + 60);
		*(_DWORD*)(a1 + 56) = v6;
		*(_DWORD*)(a1 + 60) = sub_14018A3E0(v7);
	}
	if ((unsigned int)sub_140827730((__int64*)(a1 + 16), (__int128*)(a1 + 64)) == 1)
		return 0i64;
	TlsValue = &off_140B5E648;
	*(_QWORD*)&v11 = 0i64;
	*((_QWORD*)&v11 + 1) = TlsGetValue(dwTlsIndex);
	TlsSetValue(dwTlsIndex, &TlsValue);
	v12 = TlsValue;
	v14 = 0x141DEECE8i64;
	v13 = v11;
	v9 = sub_140196F30(&dword_140C8A664, 19, &v14, &v12);
	TlsValue = &off_140B5E648;
	TlsSetValue(dwTlsIndex, *((LPVOID*)&v11 + 1));
	if (v9)
		DebugBreak();
	return 2147500037i64;
}
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C8A664: using guessed type _DWORD dword_140C8A664;

