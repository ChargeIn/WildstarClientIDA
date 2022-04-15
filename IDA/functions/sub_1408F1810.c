//----- (00000001408F1810) ----------------------------------------------------
__int64 __fastcall sub_1408F1810(__int64 a1, char a2)
{
	__int64 v3; // rdx

	v3 = *(_QWORD*)(a1 + 24);
	*(_QWORD*)a1 = off_1409C6010;
	if (v3)
		(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 56) + 16i64))(*(_QWORD*)(a1 + 56));
	if (*(_QWORD*)(a1 + 32))
		(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 56) + 16i64))(*(_QWORD*)(a1 + 56));
	*(_QWORD*)a1 = &off_1409A9900;
	if ((a2 & 1) != 0)
		sub_140001E60(a1);
	return a1;
}
// 1409A9900: using guessed type __int64 (__fastcall *off_1409A9900)();
// 1409C6010: using guessed type __int64 (__fastcall *off_1409C6010[6])();

