#include "../winhttp.h"

//----- (00000001401A4DE0) ----------------------------------------------------
__int64 __fastcall sub_1401A4DE0(__int64 a1, unsigned __int16* a2)
{
	unsigned __int16 v3; // dx
	unsigned __int16 v4; // ax
	__int64 v5; // rdx
	__int64 i; // rbx

	if (!a2)
		return 0i64;
	v3 = *a2;
	if (!v3
		|| v3 < 0x80u && (unsigned __int16)(v3 - 65) > 0x19u && (unsigned __int16)(v3 - 97) > 0x19u && v3 != 58 && v3 != 95)
	{
		return 0i64;
	}
	v4 = a2[1];
	v5 = (__int64)a2;
	for (i = (__int64)(a2 + 1); v4; i += 2i64)
	{
		if (v4 < 0x80u
			&& (unsigned __int16)(v4 - 65) > 0x19u
			&& (unsigned __int16)(v4 - 97) > 0x19u
			&& v4 != 58
			&& v4 != 95
			&& (unsigned __int16)(v4 - 48) > 9u
			&& (unsigned __int16)(v4 - 45) > 1u)
		{
			break;
		}
		v4 = *(_WORD*)(i + 2);
	}
	sub_1401A9590(a1, v5, i, 0);
	return i;
}

