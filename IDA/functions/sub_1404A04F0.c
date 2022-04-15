#include "../winhttp.h"

//----- (00000001404A04F0) ----------------------------------------------------
_BOOL8 __fastcall sub_1404A04F0(__int64 a1, __int64 a2, int a3, unsigned int a4, float a5)
{
	float v6; // xmm0_4
	__int64 v7; // rcx
	int v8; // r10d

	if (!qword_140C659A8)
		return a3 == 2;
	v6 = sub_1404A6070(a1, a4);
	return sub_1404A2010(v7, v8, v6, a5);
}
// 1404A0534: variable 'v7' is possibly undefined
// 1404A0534: variable 'v8' is possibly undefined
// 140C659A8: using guessed type __int64 qword_140C659A8;

