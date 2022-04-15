#include "../winhttp.h"

//----- (000000014029CEC0) ----------------------------------------------------
__int64 __fastcall sub_14029CEC0(_DWORD* a1)
{
	signed __int32 v1; // r8d
	int v3; // eax
	int v4; // eax

	v1 = dword_140C657A8;
	v3 = dword_140C40650;
	if (*(_DWORD*)qword_140C63750 < dword_140C40650)
		v3 = *(_DWORD*)qword_140C63750;
	if ((unsigned int)dword_140C657A8 >= *((_DWORD*)&off_140C40640 + v3 + 8))
	{
	LABEL_8:
		sub_14029C930((__int64)a1);
	}
	else
	{
		while (v1 != _InterlockedCompareExchange(&dword_140C657A8, v1 + 1, v1))
		{
			v1 = dword_140C657A8;
			v4 = dword_140C40650;
			if (*(_DWORD*)qword_140C63750 < dword_140C40650)
				v4 = *(_DWORD*)qword_140C63750;
			if ((unsigned int)dword_140C657A8 >= *((_DWORD*)&off_140C40640 + v4 + 8))
				goto LABEL_8;
		}
		sub_14029CBF0((__int64)a1);
	}
	if (a1[5])
		return (*(__int64(__fastcall**)(_DWORD*))(*(_QWORD*)a1 + 24i64))(a1);
	else
		return 0i64;
}
// 140C40640: using guessed type __int64 (__fastcall **off_140C40640)();
// 140C40650: using guessed type int dword_140C40650;
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C657A8: using guessed type int dword_140C657A8;

