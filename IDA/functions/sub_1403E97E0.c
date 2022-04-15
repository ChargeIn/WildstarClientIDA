#include "../winhttp.h"

//----- (00000001403E97E0) ----------------------------------------------------
__int64 __fastcall sub_1403E97E0(__int64 a1, int a2)
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
			v7 = dword_140C45270;
			if (*(_DWORD*)qword_140C63750 < dword_140C45270)
				v7 = *(_DWORD*)qword_140C63750;
			return *((unsigned __int8*)&dword_140C45280 + v7);
		}
		v3 = v2 - 1;
		if (v3)
		{
			v4 = v3 - 1;
			if (v4)
			{
				if (v4 != 1)
					return 0i64;
				v6 = dword_140C45230;
				if (*(_DWORD*)qword_140C63750 < dword_140C45230)
					v6 = *(_DWORD*)qword_140C63750;
				return *((unsigned __int8*)&dword_140C45240 + v6);
			}
			goto LABEL_10;
		}
	}
	v8 = dword_140C452B0;
	if (*(_DWORD*)qword_140C63750 < dword_140C452B0)
		v8 = *(_DWORD*)qword_140C63750;
	return *((unsigned __int8*)&dword_140C452C0 + v8);
}
// 140C45230: using guessed type int dword_140C45230;
// 140C45240: using guessed type int dword_140C45240;
// 140C45270: using guessed type int dword_140C45270;
// 140C45280: using guessed type int dword_140C45280;
// 140C452B0: using guessed type int dword_140C452B0;
// 140C452C0: using guessed type int dword_140C452C0;
// 140C63750: using guessed type __int64 qword_140C63750;

