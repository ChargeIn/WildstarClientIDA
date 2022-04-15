//----- (000000014055A370) ----------------------------------------------------
_BOOL8 sub_14055A370()
{
	int v0; // ecx
	int v1; // eax
	int v2; // eax
	int v3; // eax
	__int64 v4; // rcx

	v0 = *(_DWORD*)qword_140C63750;
	v1 = dword_140C4D2E0;
	if (*(_DWORD*)qword_140C63750 < dword_140C4D2E0)
		v1 = *(_DWORD*)qword_140C63750;
	if (!*((_BYTE*)&dword_140C4D2F0 + v1))
		return 0i64;
	v2 = dword_140C4D320;
	if (v0 < dword_140C4D320)
		v2 = *(_DWORD*)qword_140C63750;
	if (*((_BYTE*)&dword_140C4D330 + v2))
		return 0i64;
	v3 = dword_140C4D360;
	if (v0 < dword_140C4D360)
		v3 = *(_DWORD*)qword_140C63750;
	return !*((_BYTE*)&dword_140C4D370 + v3) || (v4 = *(_QWORD*)(qword_140C65898 + 120)) == 0 || !*(_DWORD*)(v4 + 684);
}
// 140C4D2E0: using guessed type int dword_140C4D2E0;
// 140C4D2F0: using guessed type int dword_140C4D2F0;
// 140C4D320: using guessed type int dword_140C4D320;
// 140C4D330: using guessed type int dword_140C4D330;
// 140C4D360: using guessed type int dword_140C4D360;
// 140C4D370: using guessed type int dword_140C4D370;
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C65898: using guessed type __int64 qword_140C65898;

