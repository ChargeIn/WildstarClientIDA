#include "../winhttp.h"

//----- (00000001408488C0) ----------------------------------------------------
char __fastcall sub_1408488C0(__int64 a1, __int64 a2)
{
	int v3; // edi
	__int64** i; // rsi
	__int64* v5; // rbx
	__int64 v6; // rax

	v3 = 0;
	for (i = (__int64**)(a1 + 928); ; ++i)
	{
		v5 = *i;
		if (*i)
		{
			if (v5[3])
			{
				v6 = (*(__int64(__fastcall**)(__int64*))(*v5 + 112))(*i);
				if (sub_1408628E0(v5[3], a2, v6))
					break;
			}
		}
		if ((unsigned int)++v3 >= 4)
			return 0;
	}
	return 1;
}

