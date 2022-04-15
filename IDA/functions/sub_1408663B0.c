//----- (00000001408663B0) ----------------------------------------------------
__int64 __fastcall sub_1408663B0(__int64 a1, char a2)
{
	__int64 v4; // rcx

	*(_QWORD*)a1 = off_1409A4810;
	*(_QWORD*)(a1 + 16) = &off_1409A48A0;
	(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 624) + 16i64))(*(_QWORD*)(a1 + 624));
	v4 = *(_QWORD*)(a1 + 544);
	if (v4)
	{
		sub_140866000(v4);
		*(_QWORD*)(a1 + 544) = 0i64;
	}
	sub_14085D300(a1);
	if ((a2 & 1) != 0)
		sub_140001E60(a1);
	return a1;
}
// 1409A4810: using guessed type __int64 (__fastcall *off_1409A4810[19])();
// 1409A48A0: using guessed type __int64 (__fastcall *off_1409A48A0)();

