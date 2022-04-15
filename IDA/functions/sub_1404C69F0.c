#include "../winhttp.h"

//----- (00000001404C69F0) ----------------------------------------------------
__int64 __fastcall sub_1404C69F0(__int64 a1)
{
	__int64 result; // rax
	__int64 v3; // rbx
	__m128 v4[4]; // [rsp+20h] [rbp-48h] BYREF

	result = xmmword_140C7DFC0;
	if ((_QWORD)xmmword_140C7DFC0 != *((_QWORD*)&xmmword_140C7DFC0 + 1))
	{
		while (*(_DWORD*)(*(_QWORD*)result + 188i64) != *(_DWORD*)(*(_QWORD*)(a1 + 296) + 20i64))
		{
			result += 8i64;
			if (result == *((_QWORD*)&xmmword_140C7DFC0 + 1))
				return result;
		}
		v3 = *(_QWORD*)result;
		if (*(_QWORD*)result)
		{
			(*(void(__fastcall**)(__int64, __m128*, __int64))(*(_QWORD*)a1 + 144i64))(a1, v4, 1i64);
			result = sub_1405B0840(v3, v4);
			*(_DWORD*)(a1 + 124) = result;
		}
	}
	return result;
}
// 140C7DFC0: using guessed type __int128 xmmword_140C7DFC0;
// 1404C69F0: using guessed type __m128 var_48[4];

