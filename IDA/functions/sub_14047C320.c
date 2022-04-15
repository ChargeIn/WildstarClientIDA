#include "../winhttp.h"

//----- (000000014047C320) ----------------------------------------------------
void __fastcall sub_14047C320(__int64 a1, unsigned int a2)
{
	__int64 v4; // rax
	int v5; // ebx
	__int64(__fastcall * *TlsValue)(); // [rsp+30h] [rbp-48h] BYREF
	__int64 v7; // [rsp+38h] [rbp-40h]
	LPVOID lpTlsValue; // [rsp+40h] [rbp-38h]
	__int64 v9[5]; // [rsp+50h] [rbp-28h] BYREF
	__int64 v10; // [rsp+90h] [rbp+18h] BYREF

	if (a2)
	{
		v4 = sub_1401F93A0(a2);
		*(_QWORD*)(a1 + 3344) = v4;
		if (!v4)
		{
			v7 = 0i64;
			TlsValue = &off_140B5E648;
			lpTlsValue = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &TlsValue);
			v9[0] = (__int64)TlsValue;
			v10 = 0x141E028D8i64;
			v9[1] = v7;
			v9[2] = (__int64)lpTlsValue;
			v5 = sub_1401971E0(&dword_140C8ACC8, 5, &v10, a2, v9);
			TlsValue = &off_140B5E648;
			TlsSetValue(dwTlsIndex, lpTlsValue);
			if (v5)
				DebugBreak();
		}
	}
	else
	{
		*(_QWORD*)(a1 + 3344) = 0i64;
	}
}
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C8ACC8: using guessed type _DWORD dword_140C8ACC8;

