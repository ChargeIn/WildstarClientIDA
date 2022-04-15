//----- (0000000140876970) ----------------------------------------------------
__int64 __fastcall sub_140876970(__int64 a1, char a2)
{
	__int64 v4; // rdx

	*(_QWORD*)a1 = off_1409A6A70;
	v4 = *(_QWORD*)(a1 + 64);
	if (v4)
	{
		*(_QWORD*)(a1 + 72) = v4;
		sub_140881720(dword_140C10F20, v4);
		*(_QWORD*)(a1 + 64) = 0i64;
		*(_QWORD*)(a1 + 72) = 0i64;
		*(_DWORD*)(a1 + 80) = 0;
	}
	sub_140855630((_QWORD*)a1);
	if ((a2 & 1) != 0)
		sub_140001E60(a1);
	return a1;
}
// 1409A6A70: using guessed type __int64 (__fastcall *off_1409A6A70[6])();
// 140C10F20: using guessed type int dword_140C10F20;

