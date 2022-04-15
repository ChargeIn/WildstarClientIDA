#include "../winhttp.h"

//----- (0000000140865DB0) ----------------------------------------------------
__int64 __fastcall sub_140865DB0(__int64 a1, __int64 a2, __int64 a3)
{
	float v5; // xmm0_4
	int v7; // [rsp+40h] [rbp+18h] BYREF

	if (!*(_BYTE*)(a3 + 32))
	{
		v5 = sub_140835CA0(*(_DWORD**)(a3 + 16), *(float*)(a3 + 24), 0, &v7);
		*(_BYTE*)(a3 + 32) = 1;
		*(float*)(a3 + 28) = v5;
	}
	return sub_14085F320(a1, *(float*)(a3 + 28), (__int64*)a3, 1);
}

