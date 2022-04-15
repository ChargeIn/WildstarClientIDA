#include "../winhttp.h"

//----- (00000001401B76D0) ----------------------------------------------------
int __fastcall sub_1401B76D0(__int64 a1, const __m128i* a2)
{
	const __m128i* v3; // rax
	int result; // eax
	unsigned __int64 v5; // rax
	unsigned __int64 v6; // r8
	__int64 v7; // rdx
	signed __int64 v8; // rbx
	WCHAR* v9; // rcx
	WCHAR v10; // ax
	WCHAR pszPath[264]; // [rsp+20h] [rbp-228h] BYREF

	v3 = sub_1407DD8D8(a2, 0x5Cu);
	if (!v3)
		return 0;
	v5 = ((char*)v3 - (char*)a2) >> 1;
	if (v5)
	{
		if (a2->m128i_i16[v5 - 1] == 58)
			return 0;
	}
	if (v5 <= 0x7FFFFFFE)
	{
		v6 = v5 - 260;
		v7 = 260i64;
		v8 = (char*)a2 - (char*)pszPath;
		v9 = pszPath;
		while (v6 + v7)
		{
			v10 = *(WCHAR*)((char*)v9 + v8);
			if (!v10)
				break;
			*v9++ = v10;
			if (!--v7)
			{
				--v9;
				break;
			}
		}
		*v9 = 0;
	}
	else
	{
		pszPath[0] = 0;
	}
	result = SHCreateDirectory(0i64, pszPath);
	if (!result || result == 183)
		return 0;
	if (result > 0)
		return (unsigned __int16)result | 0x80070000;
	return result;
}
// 1401B7764: conditional instruction was optimized away because rdx.8!=0

