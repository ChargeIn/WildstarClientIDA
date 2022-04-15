//----- (00000001403E9870) ----------------------------------------------------
__int64 __fastcall sub_1403E9870(__int64 a1, int a2, __int64 a3)
{
	__int64 v3; // rbx
	int v4; // edx
	int v5; // edx
	int v6; // edx
	int v7; // eax
	int v9; // eax
	int v10; // eax
	__int64 v11; // rcx
	bool v12; // zf
	int v13; // eax

	v3 = qword_140C65898;
	if (!a2)
		goto LABEL_12;
	v4 = a2 - 1;
	if (!v4)
		goto LABEL_9;
	v5 = v4 - 1;
	if (!v5)
	{
	LABEL_12:
		v10 = dword_140C453B0;
		if (*(_DWORD*)qword_140C63750 < dword_140C453B0)
			v10 = *(_DWORD*)qword_140C63750;
		if (*((_BYTE*)&dword_140C453C0 + v10))
		{
			if (!a3
				|| *(_DWORD*)(qword_140C65898 + 28388) == 3 && *(_DWORD*)(a3 + 8) == *(_DWORD*)(qword_140C65898 + 28384))
			{
				return 1i64;
			}
			if (!sub_1403B48B0(a3))
				return 0i64;
			v11 = *(_QWORD*)(v3 + 120);
			if (!v11)
				return 0i64;
			v12 = !sub_1403B48B0(v11);
		}
		else
		{
			v13 = dword_140C45370;
			if (*(_DWORD*)qword_140C63750 < dword_140C45370)
				v13 = *(_DWORD*)qword_140C63750;
			v12 = *((_BYTE*)&dword_140C45380 + v13) == 0;
		}
		return !v12;
	}
	v6 = v5 - 1;
	if (v6)
	{
		if (v6 == 1)
		{
			v7 = dword_140C452F0;
			if (*(_DWORD*)qword_140C63750 < dword_140C452F0)
				v7 = *(_DWORD*)qword_140C63750;
			return *((unsigned __int8*)&dword_140C45300 + v7);
		}
		return 0i64;
	}
LABEL_9:
	v9 = dword_140C45330;
	if (*(_DWORD*)qword_140C63750 < dword_140C45330)
		v9 = *(_DWORD*)qword_140C63750;
	return *((unsigned __int8*)&dword_140C45340 + v9);
}
// 140C452F0: using guessed type int dword_140C452F0;
// 140C45300: using guessed type int dword_140C45300;
// 140C45330: using guessed type int dword_140C45330;
// 140C45340: using guessed type int dword_140C45340;
// 140C45370: using guessed type int dword_140C45370;
// 140C45380: using guessed type int dword_140C45380;
// 140C453B0: using guessed type int dword_140C453B0;
// 140C453C0: using guessed type int dword_140C453C0;
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C65898: using guessed type __int64 qword_140C65898;

