//----- (00000001403E9980) ----------------------------------------------------
__int64 __fastcall sub_1403E9980(__int64 a1, int a2)
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
			v7 = dword_140C45470;
			if (*(_DWORD*)qword_140C63750 < dword_140C45470)
				v7 = *(_DWORD*)qword_140C63750;
			return *((unsigned __int8*)&dword_140C45480 + v7);
		}
		v3 = v2 - 1;
		if (v3)
		{
			v4 = v3 - 1;
			if (v4)
			{
				if (v4 != 1)
					return 0i64;
				v6 = dword_140C45430;
				if (*(_DWORD*)qword_140C63750 < dword_140C45430)
					v6 = *(_DWORD*)qword_140C63750;
				return *((unsigned __int8*)&dword_140C45440 + v6);
			}
			goto LABEL_10;
		}
	}
	v8 = dword_140C454B0;
	if (*(_DWORD*)qword_140C63750 < dword_140C454B0)
		v8 = *(_DWORD*)qword_140C63750;
	return *((unsigned __int8*)&dword_140C454C0 + v8);
}
// 140C45430: using guessed type int dword_140C45430;
// 140C45440: using guessed type int dword_140C45440;
// 140C45470: using guessed type int dword_140C45470;
// 140C45480: using guessed type int dword_140C45480;
// 140C454B0: using guessed type int dword_140C454B0;
// 140C454C0: using guessed type int dword_140C454C0;
// 140C63750: using guessed type __int64 qword_140C63750;

