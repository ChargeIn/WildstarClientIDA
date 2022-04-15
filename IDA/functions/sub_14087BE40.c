//----- (000000014087BE40) ----------------------------------------------------
__int64 __fastcall sub_14087BE40(__int64 a1, char a2)
{
	__int64 v3; // rdx
	__int64 v5; // rdx

	v3 = *(_QWORD*)(a1 + 64);
	*(_QWORD*)a1 = off_1409A73A0;
	if (v3)
		sub_140881720(dword_140C10F20, v3);
	v5 = *(_QWORD*)(a1 + 40);
	if (v5)
	{
		*(_QWORD*)(a1 + 48) = v5;
		sub_140881720(dword_140C10F20, v5);
		*(_QWORD*)(a1 + 40) = 0i64;
		*(_QWORD*)(a1 + 48) = 0i64;
		*(_DWORD*)(a1 + 56) = 0;
	}
	*(_QWORD*)a1 = &off_1409A7380;
	if ((a2 & 1) != 0)
		sub_140001E60(a1);
	return a1;
}
// 1409A7380: using guessed type __int64 (__fastcall *off_1409A7380)();
// 1409A73A0: using guessed type __int64 (__fastcall *off_1409A73A0[9])();
// 140C10F20: using guessed type int dword_140C10F20;

