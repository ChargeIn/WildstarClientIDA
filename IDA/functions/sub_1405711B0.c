//----- (00000001405711B0) ----------------------------------------------------
__int64 __fastcall sub_1405711B0(__int64 a1, int a2)
{
	int v4; // edx

	if (*(_DWORD*)(qword_140C65970 + 8) != 2)
		return 2147500037i64;
	v4 = dword_140C4D460;
	if (*(_DWORD*)qword_140C63750 < dword_140C4D460)
		v4 = *(_DWORD*)qword_140C63750;
	sub_14002C690((__int64)&off_140C4D450, v4, a2);
	return 0i64;
}
// 140C4D450: using guessed type __int64 (__fastcall *off_140C4D450)();
// 140C4D460: using guessed type int dword_140C4D460;
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C65970: using guessed type __int64 qword_140C65970;

