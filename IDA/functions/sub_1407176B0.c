#include "../winhttp.h"

//----- (00000001407176B0) ----------------------------------------------------
_BOOL8 __fastcall sub_1407176B0(__int64 a1, int a2)
{
	int v2; // ebx
	__int64(__fastcall * *TlsValue)(); // [rsp+20h] [rbp-48h] BYREF
	__int128 v5; // [rsp+28h] [rbp-40h]
	__int64(__fastcall * *v6)(); // [rsp+40h] [rbp-28h] BYREF
	__int128 v7; // [rsp+48h] [rbp-20h]
	__int64 v8; // [rsp+70h] [rbp+8h] BYREF

	if (*(_QWORD*)a1)
		return **(_DWORD**)a1 == a2 || *(_QWORD*)(a1 + 8) && (unsigned int)sub_1407176B0();
	*(_QWORD*)&v5 = 0i64;
	TlsValue = &off_140B5E648;
	*((_QWORD*)&v5 + 1) = TlsGetValue(dwTlsIndex);
	TlsSetValue(dwTlsIndex, &TlsValue);
	v6 = TlsValue;
	v8 = 0x141E40390i64;
	v7 = v5;
	v2 = sub_140196F30(&dword_140C8B118, 40, &v8, &v6);
	TlsValue = &off_140B5E648;
	TlsSetValue(dwTlsIndex, *((LPVOID*)&v5 + 1));
	if (v2)
		DebugBreak();
	return 0i64;
}
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C8B118: using guessed type _DWORD dword_140C8B118;

