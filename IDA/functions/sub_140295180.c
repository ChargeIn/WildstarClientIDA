#include "../winhttp.h"

//----- (0000000140295180) ----------------------------------------------------
__int64 __fastcall sub_140295180(__int64 a1, __int64 a2)
{
	int v3; // ebx
	int v4; // eax
	unsigned int v5; // ecx
	__int64(__fastcall * *TlsValue)(); // [rsp+30h] [rbp-48h] BYREF
	__int128 v7; // [rsp+38h] [rbp-40h]
	__int64(__fastcall * *v8)(); // [rsp+50h] [rbp-28h] BYREF
	__int128 v9; // [rsp+58h] [rbp-20h]
	__int64 v10; // [rsp+88h] [rbp+10h] BYREF

	if (!a2)
		return 2147942487i64;
	if (*(_DWORD*)(a1 + 52) == 1)
	{
		*(_QWORD*)&v7 = 0i64;
		TlsValue = &off_140B5E648;
		*((_QWORD*)&v7 + 1) = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v8 = TlsValue;
		v10 = 0x141DE4CA0i64;
		v9 = v7;
		v3 = sub_1401971E0(&dword_140C8A428, 14, &v10, &v8);
		TlsValue = &off_140B5E648;
		TlsSetValue(dwTlsIndex, *((LPVOID*)&v7 + 1));
		if (v3)
			DebugBreak();
		return 2147500037i64;
	}
	if (!*(_QWORD*)(a1 + 120))
		return 2147500037i64;
	v4 = D3DXSHProjectCubeMap(3i64, *(_QWORD*)(a1 + 120), a2, a2 + 48, a2 + 96);
	v5 = 0;
	if (v4 < 0)
		return (unsigned int)v4;
	return v5;
}
// 140C65728: invalid function type has been ignored
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C65728: using guessed type __int64 (__fastcall *D3DXSHProjectCubeMap)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
// 140C8A428: using guessed type _DWORD dword_140C8A428;

