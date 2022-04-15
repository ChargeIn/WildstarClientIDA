#include "../winhttp.h"

//----- (00000001408D74F0) ----------------------------------------------------
__int64 __fastcall sub_1408D74F0(__int64 a1, __int64 a2)
{
	unsigned int v4; // edi
	unsigned int i; // esi

	sub_1408D6F50(a1, *(_DWORD*)a2, *(double*)(a2 + 8));
	v4 = 0;
	for (i = 0; i < *(_DWORD*)(a1 + 4); ++i)
		sub_1408D8CC0(a1, 1, *(_QWORD*)(a1 + 8) + 360i64 * i, 37);
	sub_1408D7130(a1, *(_DWORD*)a2, *(_BYTE*)(a2 + 16));
	sub_1408D7210(a1, 100.0);
	if (*(_DWORD*)(a1 + 4))
	{
		do
			sub_1408D8CC0(a1, 1, *(_QWORD*)(a1 + 8) + 360i64 * v4++, 40);
		while (v4 < *(_DWORD*)(a1 + 4));
	}
	sub_1408D7320(a1, 0.0);
	sub_1408D73B0(a1, 0.0);
	return sub_1408D75E0(a1, *(_DWORD**)(a1 + 8));
}

