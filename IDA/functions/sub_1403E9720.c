//----- (00000001403E9720) ----------------------------------------------------
__int64 __fastcall sub_1403E9720(__int64 a1, int a2)
{
	int v2; // edx
	int v3; // edx
	int v4; // edx
	int v6; // eax
	int v7; // eax
	int v8; // eax
	int v9; // eax

	if (!a2)
	{
	LABEL_16:
		v9 = dword_140C45170;
		if (*(_DWORD*)qword_140C63750 < dword_140C45170)
			v9 = *(_DWORD*)qword_140C63750;
		return *((unsigned __int8*)&dword_140C45180 + v9);
	}
	v2 = a2 - 1;
	if (v2)
	{
		v3 = v2 - 1;
		if (v3)
		{
			v4 = v3 - 1;
			if (v4)
			{
				if (v4 != 1)
					return 0i64;
				v6 = dword_140C453F0;
				if (*(_DWORD*)qword_140C63750 < dword_140C453F0)
					v6 = *(_DWORD*)qword_140C63750;
				return *((unsigned __int8*)&dword_140C45400 + v6);
			}
			goto LABEL_16;
		}
		v7 = dword_140C451F0;
		if (*(_DWORD*)qword_140C63750 < dword_140C451F0)
			v7 = *(_DWORD*)qword_140C63750;
		return *((unsigned __int8*)&dword_140C45200 + v7);
	}
	else
	{
		v8 = dword_140C451B0;
		if (*(_DWORD*)qword_140C63750 < dword_140C451B0)
			v8 = *(_DWORD*)qword_140C63750;
		return *((unsigned __int8*)&dword_140C451C0 + v8);
	}
}
// 140C45170: using guessed type int dword_140C45170;
// 140C45180: using guessed type int dword_140C45180;
// 140C451B0: using guessed type int dword_140C451B0;
// 140C451C0: using guessed type int dword_140C451C0;
// 140C451F0: using guessed type int dword_140C451F0;
// 140C45200: using guessed type int dword_140C45200;
// 140C453F0: using guessed type int dword_140C453F0;
// 140C45400: using guessed type int dword_140C45400;
// 140C63750: using guessed type __int64 qword_140C63750;

