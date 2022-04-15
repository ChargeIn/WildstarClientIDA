#include "../winhttp.h"

//----- (0000000140065CE0) ----------------------------------------------------
__int64 __fastcall sub_140065CE0(__int64 a1, __int64 a2)
{
	__int64 v4; // rax
	__int64* v5; // rbx
	__int64 v6; // rsi
	__int64 result; // rax
	__int64 v8; // [rsp+20h] [rbp-18h] BYREF
	int v9; // [rsp+28h] [rbp-10h]

	v4 = sub_140065780(a1);
	v5 = *(__int64**)(a1 + 48);
	v6 = v4;
	result = sub_140065BB0(v5, v4, a2, 1);
	if ((_DWORD)result == 8)
	{
		v8 = v6;
		v9 = 4;
		result = sub_14006A4A0((unsigned int*)v5, (int*)&v8, (__int64)&v8);
		*(_DWORD*)(a2 + 8) = result;
	}
	return result;
}

