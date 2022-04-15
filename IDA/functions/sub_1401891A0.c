#include "../winhttp.h"

//----- (00000001401891A0) ----------------------------------------------------
__int64 __fastcall sub_1401891A0(float* a1, float* a2)
{
	float* v3; // rbx
	__int64 result; // rax
	float v5; // xmm1_4
	__int128 v6; // xmm2
	float* v7; // rdx
	float* v8; // rcx

	if ((__int64)(((char*)a2 - (char*)a1) & 0xFFFFFFFFFFFFFFE0ui64) <= 512)
		return sub_140189240(a1, a2);
	v3 = a1 + 128;
	for (result = sub_140189240(a1, a1 + 128); v3 != a2; v7[4] = v5)
	{
		v5 = v3[4];
		v6 = *(_OWORD*)v3;
		v7 = v3;
		v8 = v3 - 8;
		if (v5 < *(v3 - 4))
		{
			do
			{
				*(_OWORD*)v7 = *(_OWORD*)v8;
				result = *((unsigned int*)v8 + 4);
				*((_DWORD*)v7 + 4) = result;
				v7 = v8;
				v8 -= 8;
			} while (v5 < v8[4]);
		}
		v3 += 8;
		*(_OWORD*)v7 = v6;
	}
	return result;
}

