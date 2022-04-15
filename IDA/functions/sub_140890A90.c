//----- (0000000140890A90) ----------------------------------------------------
__int64 __fastcall sub_140890A90(__int64 a1, char a2)
{
	__int64 v4; // rdx

	*(_QWORD*)a1 = off_1409A84E0;
	sub_140890CF0(a1);
	*(_QWORD*)a1 = off_1409A48F0;
	v4 = *(_QWORD*)(a1 + 168);
	if (v4)
	{
		*(_QWORD*)(a1 + 176) = v4;
		sub_140881720(dword_140C10F20, v4);
		*(_QWORD*)(a1 + 168) = 0i64;
		*(_QWORD*)(a1 + 176) = 0i64;
		*(_DWORD*)(a1 + 184) = 0;
	}
	sub_14084C670((_QWORD*)a1);
	if ((a2 & 1) != 0)
		sub_140001E60(a1);
	return a1;
}
// 1409A48F0: using guessed type __int64 (__fastcall *off_1409A48F0[4])();
// 1409A84E0: using guessed type __int64 (__fastcall *off_1409A84E0[4])();
// 140C10F20: using guessed type int dword_140C10F20;

