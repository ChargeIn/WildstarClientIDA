#include "../winhttp.h"

//----- (0000000140263860) ----------------------------------------------------
__int64 __fastcall sub_140263860(int a1, int a2, _DWORD* a3, _DWORD* a4)
{
	int v4; // ebx
	__int64 v6; // [rsp+20h] [rbp-48h] BYREF
	__int64(__fastcall * *TlsValue)(); // [rsp+28h] [rbp-40h] BYREF
	__int128 v8; // [rsp+30h] [rbp-38h]
	__int64(__fastcall * *v9)(); // [rsp+40h] [rbp-28h] BYREF
	__int128 v10; // [rsp+48h] [rbp-20h]

	if (a2)
	{
		if (((a2 - 3) & 0xFFFFFFFD) == 0 && a1 == 1)
		{
			*(_QWORD*)&v8 = 0i64;
			TlsValue = &off_140B5E648;
			*((_QWORD*)&v8 + 1) = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &TlsValue);
			v9 = TlsValue;
			v6 = 0x141DDFF20i64;
			v10 = v8;
			v4 = sub_1401971E0(&dword_140C8A2C8, 14, &v6, &v9);
			TlsValue = &off_140B5E648;
			TlsSetValue(dwTlsIndex, *((LPVOID*)&v8 + 1));
			if (v4)
				DebugBreak();
			return 2147500037i64;
		}
	}
	else
	{
		*a3 = 0;
		*a4 &= 0xFFFFFF40;
	}
	if (!a1)
		*a4 &= 0xFFFFFFCF;
	return 0i64;
}
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C8A2C8: using guessed type _DWORD dword_140C8A2C8;

