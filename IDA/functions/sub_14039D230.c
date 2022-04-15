#include "../winhttp.h"

//----- (000000014039D230) ----------------------------------------------------
_BOOL8 __fastcall sub_14039D230(__int64 a1, __m128* a2)
{
	__m128* v2; // rbx
	__int64 v5; // rax
	int v6; // xmm3_4

	v2 = *(__m128**)(a1 + 25744);
	if (!v2)
		return 0i64;
	if ((dword_140DC21B8 & 1) != 0)
	{
		v6 = dword_140DC21BC;
	}
	else
	{
		dword_140DC21B8 |= 1u;
		v5 = sub_140200220(0x146u);
		if (v5)
		{
			v6 = *(_DWORD*)(v5 + 24);
			dword_140DC21BC = v6;
		}
		else
		{
			v6 = 1092616192;
			dword_140DC21BC = 1092616192;
		}
	}
	return sub_1403AD690(v2, a2, 0.0, *(float*)&v6, 0.0);
}
// 140DC21B8: using guessed type int dword_140DC21B8;
// 140DC21BC: using guessed type int dword_140DC21BC;

