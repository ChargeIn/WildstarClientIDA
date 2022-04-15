#include "../winhttp.h"

//----- (0000000140021380) ----------------------------------------------------
__int64 __fastcall sub_140021380(__int64 a1, _DWORD* a2)
{
	int v4; // eax
	int v5; // edx
	__int16* v6; // rax

	if (!a2)
		return 2147942487i64;
	v4 = *(_DWORD*)(a1 + 368);
	if (v4 != 5)
	{
		if (v4 == 6)
			return 0i64;
		if (*a2 == 24)
		{
			*(_DWORD*)(a1 + 368) = 6;
			v5 = sub_1400A7A10(a2[10]);
		LABEL_7:
			v6 = sub_14034BDD0(a1, v5);
			sub_1400481B0(a1, (__int64)v6, 0i64);
			return 0i64;
		}
		if (*a2 == 19)
		{
			*(_DWORD*)(a1 + 368) = 6;
			v5 = 405365;
			goto LABEL_7;
		}
	}
	return 1i64;
}
// 1400213C4: variable 'a1' is possibly undefined

