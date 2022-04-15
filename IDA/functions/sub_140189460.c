#include "../winhttp.h"

//----- (0000000140189460) ----------------------------------------------------
__int64 __fastcall sub_140189460(__int64 a1, __int64 a2)
{
	__int64 v3; // rsi
	__int64 v4; // rbx
	__int64 v5; // rdi
	int v6; // xmm1_4
	__int64 result; // rax
	__int128 v8; // xmm0
	int v9; // xmm1_4
	__int128 v10; // [rsp+20h] [rbp-28h] BYREF
	int v11; // [rsp+30h] [rbp-18h]

	v3 = (a2 - a1) >> 5;
	if (v3 >= 2)
	{
		v4 = (v3 - 2) / 2;
		v5 = a1 + 32 * v4;
		v6 = *(_DWORD*)(v5 + 16);
		v10 = *(_OWORD*)v5;
		v11 = v6;
		for (result = sub_140189520(a1, v4, (a2 - a1) >> 5, (__int64)&v10);
			v4;
			result = sub_140189520(a1, v4, v3, (__int64)&v10))
		{
			v8 = *(_OWORD*)(v5 - 32);
			v9 = *(_DWORD*)(v5 - 16);
			v5 -= 32i64;
			--v4;
			v10 = v8;
			v11 = v9;
		}
	}
	return result;
}

