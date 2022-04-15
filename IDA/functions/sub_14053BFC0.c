#include "../winhttp.h"

//----- (000000014053BFC0) ----------------------------------------------------
__int64 __fastcall sub_14053BFC0(__int64 a1, int a2)
{
	int v2; // edx
	int v3; // edx
	__int64 v4; // rax

	v2 = a2 - 1;
	if (v2)
	{
		v3 = v2 - 1;
		if (v3)
		{
			if (v3 != 1)
				return 0i64;
			v4 = sub_140200220(0x3E2u);
			if (!v4)
				return 52577i64;
		}
		else
		{
			v4 = sub_140200220(0x3CCu);
			if (!v4)
				return 49882i64;
		}
		return *(unsigned int*)(v4 + 4);
	}
	v4 = sub_140200220(0x3CBu);
	if (v4)
		return *(unsigned int*)(v4 + 4);
	return 49881i64;
}

