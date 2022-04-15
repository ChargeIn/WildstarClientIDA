#include "../winhttp.h"

//----- (0000000140771710) ----------------------------------------------------
_BOOL8 __fastcall sub_140771710(__m128* a1, __m128* a2, double a3, float a4, int a5, __int64 a6)
{
	return (unsigned int)sub_140771590(a1, a2, a3, a4, a5, a6)
		&& *(_DWORD*)((*(__int64(__fastcall**)(__m128*))(a1->m128_u64[0] + 24))(a1) + 592) == 0;
}

