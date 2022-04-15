#include "../winhttp.h"

//----- (00000001400801A0) ----------------------------------------------------
__int64 __fastcall sub_1400801A0(__int64 a1, _QWORD* a2, _QWORD* a3)
{
	__int64 result; // rax
	__int64 i; // r9
	__int64 v6; // rax
	__int64 v7; // rdx
	unsigned __int64 v8; // rax

	*a2 += 160i64;
	result = *(unsigned int*)(a1 + 16);
	*a3 += 24 * result;
	for (i = 0i64; (unsigned int)i < *(_DWORD*)(a1 + 16); i = (unsigned int)(i + 1))
	{
		v6 = *(_QWORD*)(a1 + 24);
		*a2 += 13i64;
		v7 = *(_QWORD*)(v6 + 24 * i + 16);
		if (v7)
		{
			v8 = -1i64;
			do
				++v8;
			while (*(_WORD*)(v7 + 2 * v8));
		}
		else
		{
			v8 = 0i64;
		}
		*a3 += 2 * v8;
		if (v8 <= 0x7F)
			result = 16 * v8 + 8;
		else
			result = 16 * (v8 + 1);
		*a2 += result;
	}
	return result;
}

