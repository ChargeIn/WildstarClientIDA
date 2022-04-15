#include "../winhttp.h"

//----- (0000000140787550) ----------------------------------------------------
__int64 __fastcall sub_140787550(__int64 a1, __int64 a2)
{
	int v3; // ebx
	__int64(__fastcall * *TlsValue)(); // [rsp+20h] [rbp-48h] BYREF
	__int128 v5; // [rsp+28h] [rbp-40h]
	__int64(__fastcall * *v6)(); // [rsp+40h] [rbp-28h] BYREF
	__int128 v7; // [rsp+48h] [rbp-20h]
	__int64 v8; // [rsp+78h] [rbp+10h] BYREF

	if (a2)
	{
		*(_QWORD*)(a1 + 16) = a2;
		return 0i64;
	}
	else
	{
		*(_QWORD*)&v5 = 0i64;
		TlsValue = &off_140B5E648;
		*((_QWORD*)&v5 + 1) = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v6 = TlsValue;
		v8 = 0x141E4A760i64;
		v7 = v5;
		v3 = sub_140196F30(&dword_140C8B15C, 40, &v8, &v6);
		TlsValue = &off_140B5E648;
		TlsSetValue(dwTlsIndex, *((LPVOID*)&v5 + 1));
		if (v3)
			DebugBreak();
		return 2147500037i64;
	}
}
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C8B15C: using guessed type _DWORD dword_140C8B15C;

