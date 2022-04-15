#include "../winhttp.h"

//----- (000000014080B290) ----------------------------------------------------
char __fastcall sub_14080B290(__int64 a1, int a2)
{
	__int64 v2; // rcx
	__int64 v4; // [rsp+8h] [rbp-20h]

	v4 = a1 + *(int*)(a1 + 60) + 4;
	v2 = *(int*)(a1 + 60);
	if (*(_DWORD*)(a1 + v2 + 88))
	{
		if (*(_DWORD*)(a1 + v2 + 88) != dword_140C60950[2 * a2])
		{
			dword_140C60950[2 * a2] = *(_DWORD*)(a1 + v2 + 88);
			dword_140C60950[2 * a2 + 1] = *(_DWORD*)(v4 + 4);
			return 1;
		}
	}
	else if (*(_DWORD*)(v4 + 4) != dword_140C60950[2 * a2 + 1])
	{
		dword_140C60950[2 * a2] = *(_DWORD*)(a1 + v2 + 88);
		dword_140C60950[2 * a2 + 1] = *(_DWORD*)(v4 + 4);
		return 1;
	}
	return 0;
}
// 140C60950: using guessed type _DWORD dword_140C60950[8];

