#include "../winhttp.h"

//----- (00000001403E9A10) ----------------------------------------------------
__int64 __fastcall sub_1403E9A10(__int64 a1, int a2)
{
	int v2; // edx
	int v3; // edx
	int v4; // edx
	int v6; // eax
	int v7; // eax
	int v8; // eax

	if (a2)
	{
		v2 = a2 - 1;
		if (!v2)
		{
		LABEL_10:
			v7 = dword_140C45530;
			if (*(_DWORD*)qword_140C63750 < dword_140C45530)
				v7 = *(_DWORD*)qword_140C63750;
			return *((unsigned __int8*)&dword_140C45540 + v7);
		}
		v3 = v2 - 1;
		if (v3)
		{
			v4 = v3 - 1;
			if (v4)
			{
				if (v4 != 1)
					return 0i64;
				v6 = dword_140C454F0;
				if (*(_DWORD*)qword_140C63750 < dword_140C454F0)
					v6 = *(_DWORD*)qword_140C63750;
				return *((unsigned __int8*)&dword_140C45500 + v6);
			}
			goto LABEL_10;
		}
	}
	v8 = dword_140C45570;
	if (*(_DWORD*)qword_140C63750 < dword_140C45570)
		v8 = *(_DWORD*)qword_140C63750;
	return *((unsigned __int8*)&dword_140C45580 + v8);
}
// 140C454F0: using guessed type int dword_140C454F0;
// 140C45500: using guessed type int dword_140C45500;
// 140C45530: using guessed type int dword_140C45530;
// 140C45540: using guessed type int dword_140C45540;
// 140C45570: using guessed type int dword_140C45570;
// 140C45580: using guessed type int dword_140C45580;
// 140C63750: using guessed type __int64 qword_140C63750;

