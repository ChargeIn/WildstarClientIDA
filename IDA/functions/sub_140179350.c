#include "../winhttp.h"

//----- (0000000140179350) ----------------------------------------------------
__int64 __fastcall sub_140179350(__int64 a1)
{
	__int64 result; // rax
	__int64 v2; // r8
	_QWORD* v3; // rdx
	int v4; // ebx
	__int64(__fastcall * *TlsValue)(); // [rsp+20h] [rbp-48h] BYREF
	__int128 v6; // [rsp+28h] [rbp-40h]
	__int64(__fastcall * *v7)(); // [rsp+40h] [rbp-28h] BYREF
	__int128 v8; // [rsp+48h] [rbp-20h]
	__int64 v9; // [rsp+70h] [rbp+8h] BYREF

	result = 0i64;
	v2 = (__int64)(*(_QWORD*)(a1 + 1216) - *(_QWORD*)(a1 + 1208)) >> 3;
	if ((int)v2 <= 0)
	{
	LABEL_5:
		*(_QWORD*)&v6 = 0i64;
		TlsValue = &off_140B5E648;
		*((_QWORD*)&v6 + 1) = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v7 = TlsValue;
		v9 = 0x141D35440i64;
		v8 = v6;
		v4 = sub_140196F30(&dword_140C8A154, 13, &v9, &v7);
		TlsValue = &off_140B5E648;
		TlsSetValue(dwTlsIndex, *((LPVOID*)&v6 + 1));
		if (v4)
			DebugBreak();
		return 0xFFFFFFFFi64;
	}
	else
	{
		v3 = *(_QWORD**)(a1 + 1208);
		while (*v3 != a1)
		{
			result = (unsigned int)(result + 1);
			++v3;
			if ((int)result >= (int)v2)
				goto LABEL_5;
		}
	}
	return result;
}
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C8A154: using guessed type _DWORD dword_140C8A154;

