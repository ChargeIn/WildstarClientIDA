#include "../winhttp.h"

//----- (00000001400CC870) ----------------------------------------------------
void __fastcall sub_1400CC870(__int64 a1, __m128* a2)
{
	__int128 v2; // xmm2
	__int128 v3; // xmm0
	__int128 v4; // xmm1
	__int128 v5[5]; // [rsp+20h] [rbp-78h] BYREF
	int v6; // [rsp+70h] [rbp-28h]

	v2 = (__int128)*a2;
	if ((_mm_movemask_ps(_mm_cmpneq_ps(*(__m128*)(a1 + 64), *a2)) & 7) != 0)
	{
		v3 = *(_OWORD*)(a1 + 80);
		v6 = *(_DWORD*)(a1 + 144);
		v5[0] = v2;
		v4 = *(_OWORD*)(a1 + 96);
		v5[1] = v3;
		v5[3] = *(_OWORD*)(a1 + 112);
		v5[2] = v4;
		v5[4] = *(_OWORD*)(a1 + 128);
		sub_1400CC680(a1, (__int64)v5);
	}
}

