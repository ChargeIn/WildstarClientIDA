//----- (00000001408980C0) ----------------------------------------------------
__int64 __fastcall sub_1408980C0(__int64 a1, __int64 a2, __int64 a3)
{
	__int64 v5; // rcx

	sub_14088F8F0(a1, a3);
	*(_QWORD*)a1 = off_1409A9670;
	*(_QWORD*)(a1 + 24) = off_1409A9740;
	*(_QWORD*)(a1 + 152) = a2;
	*(_QWORD*)(a1 + 40) = &off_1409A93A0;
	sub_140896760(a1 + 160, a2);
	v5 = *(_QWORD*)(a1 + 152);
	*(_BYTE*)(a1 + 240) = 1;
	if (v5)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v5 + 8i64))(v5);
	return a1;
}
// 1409A93A0: using guessed type __int64 (__fastcall *off_1409A93A0)();
// 1409A9670: using guessed type __int64 (__fastcall *off_1409A9670[5])();
// 1409A9740: using guessed type __int64 (__fastcall *off_1409A9740[7])();

