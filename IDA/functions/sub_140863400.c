#include "../winhttp.h"

//----- (0000000140863400) ----------------------------------------------------
int* __fastcall sub_140863400(__int64 a1)
{
	int* v1; // r9
	int v2; // eax

	v1 = *(int**)(a1 + 848);
	if (v1)
	{
		v2 = 1;
		if (*(_DWORD*)(a1 + 860) == 17)
			v2 = 4;
		*(_DWORD*)(a1 + 860) = 17;
		*(_DWORD*)(a1 + 1064) = v2;
		*(_WORD*)(a1 + 866) = 0;
	}
	return sub_1407E4830(v1, 0i64, *(unsigned int*)(a1 + 880));
}

