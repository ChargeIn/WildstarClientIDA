#include "../winhttp.h"

//----- (0000000140909680) ----------------------------------------------------
__int64 __fastcall sub_140909680(__int64 a1, _QWORD* a2)
{
	__int16 v2; // ax
	__int16 v3; // di
	__int64 v4; // rbx
	__int64 v6; // rbp
	unsigned __int16 v7; // ax

	v2 = *(_WORD*)(a1 + 4);
	v3 = *(_WORD*)(a1 + 2);
	v4 = a1 + 4;
	if (!v2)
		return 0i64;
	v6 = 0x2400400000000000i64;
	while (1)
	{
		if (v2 == 92 && *(_WORD*)(v4 + 2) == 93)
		{
			v4 += 2i64;
			goto LABEL_13;
		}
		if (v2 == 93)
			return 0i64;
		if (v2 == v3 && *(_WORD*)(v4 + 2) == 93)
			break;
		if (v2 == 91)
		{
			v7 = *(_WORD*)(v4 + 2);
			if (v7 <= 0x3Du && _bittest64(&v6, v7) && (unsigned int)sub_140909680(v4, a2))
				return 0i64;
		}
	LABEL_13:
		v2 = *(_WORD*)(v4 + 2);
		v4 += 2i64;
		if (!v2)
			return 0i64;
	}
	*a2 = v4;
	return 1i64;
}

