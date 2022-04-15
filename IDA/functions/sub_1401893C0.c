#include "../winhttp.h"

//----- (00000001401893C0) ----------------------------------------------------
signed __int64 __fastcall sub_1401893C0(__int64 a1, __int64 a2)
{
	signed __int64 result; // rax
	int* v4; // rbx
	__int64 v5; // rsi
	__int64 v6; // r14
	int v7; // xmm1_4
	__int128 v8; // xmm0
	__int128 v9; // [rsp+20h] [rbp-28h] BYREF
	int v10; // [rsp+30h] [rbp-18h]

	result = (a2 - a1) & 0xFFFFFFFFFFFFFFE0ui64;
	if (result > 32)
	{
		v4 = (int*)(a2 - 16);
		v5 = -16 - a1;
		v6 = 16 - a1;
		do
		{
			v7 = *v4;
			v9 = *((_OWORD*)v4 - 1);
			v8 = *(_OWORD*)a1;
			v10 = v7;
			*((_OWORD*)v4 - 1) = v8;
			*v4 = *(_DWORD*)(a1 + 16);
			sub_140189520(a1, 0i64, ((__int64)v4 + v5) >> 5, (__int64)&v9);
			v4 -= 8;
			result = ((unsigned __int64)v4 + v6) & 0xFFFFFFFFFFFFFFE0ui64;
		} while (result > 32);
	}
	return result;
}

