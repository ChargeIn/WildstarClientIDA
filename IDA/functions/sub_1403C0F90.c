#include "../winhttp.h"

//----- (00000001403C0F90) ----------------------------------------------------
__int64 __fastcall sub_1403C0F90(__int64 a1, __int64 a2)
{
	__int64 v3; // rax
	int v4; // ebx
	__int64(__fastcall * *TlsValue)(); // [rsp+20h] [rbp-48h] BYREF
	__int128 v7; // [rsp+28h] [rbp-40h]
	__int64(__fastcall * *v8)(); // [rsp+40h] [rbp-28h] BYREF
	__int128 v9; // [rsp+48h] [rbp-20h]
	__int64 v10; // [rsp+70h] [rbp+8h] BYREF

	v3 = sub_1403ACBB0(a1 + 160, *(_QWORD*)a2);
	if (v3)
	{
		*(_DWORD*)(v3 + 124) = *(_DWORD*)(a2 + 8);
	}
	else
	{
		TlsValue = &off_140B5E648;
		*(_QWORD*)&v7 = 0i64;
		*((_QWORD*)&v7 + 1) = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v8 = TlsValue;
		v10 = 0x141DF06D8i64;
		v9 = v7;
		v4 = sub_1401971E0(&dword_140C8A6B8, 5, &v10, &v8);
		TlsValue = &off_140B5E648;
		TlsSetValue(dwTlsIndex, *((LPVOID*)&v7 + 1));
		if (v4)
		{
			DebugBreak();
			return 0i64;
		}
	}
	return 0i64;
}
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C8A6B8: using guessed type _DWORD dword_140C8A6B8;

