#include "../winhttp.h"

//----- (00000001403B5EA0) ----------------------------------------------------
__int64 __fastcall sub_1403B5EA0(__int64 a1)
{
	__int64 v2; // rcx
	unsigned int v3; // eax

	if (*(_DWORD*)(a1 + 28136))
	{
		v2 = *(_QWORD*)(a1 + 120);
		if (v2)
		{
			if (sub_1403B48B0(v2))
			{
				v3 = *(_DWORD*)(a1 + 28136);
				if (dword_140C636A8 <= v3)
					return v3 - dword_140C636A8;
			}
		}
		*(_DWORD*)(a1 + 28136) = 0;
	}
	return 0i64;
}
// 140C636A8: using guessed type int dword_140C636A8;

