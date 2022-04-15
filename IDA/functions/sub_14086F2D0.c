//----- (000000014086F2D0) ----------------------------------------------------
__int64 __fastcall sub_14086F2D0(__int64 a1, char a2)
{
	__int64 v4; // rdx

	*(_QWORD*)a1 = off_1409A5B60;
	sub_14086F950(a1);
	v4 = *(_QWORD*)(a1 + 168);
	if (v4)
	{
		*(_QWORD*)(a1 + 176) = v4;
		sub_140881720(dword_140C10F20, v4);
		*(_QWORD*)(a1 + 168) = 0i64;
		*(_QWORD*)(a1 + 176) = 0i64;
		*(_DWORD*)(a1 + 184) = 0;
	}
	sub_14086FC60((_QWORD*)a1);
	if ((a2 & 1) != 0)
		sub_140001E60(a1);
	return a1;
}
// 1409A5B60: using guessed type __int64 (__fastcall *off_1409A5B60[4])();
// 140C10F20: using guessed type int dword_140C10F20;

