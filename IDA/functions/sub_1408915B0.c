//----- (00000001408915B0) ----------------------------------------------------
_QWORD* __fastcall sub_1408915B0(_QWORD* a1, char a2)
{
	__int64* v2; // rdi

	v2 = a1 + 28;
	*a1 = off_1409A87B0;
	if (a1[28])
	{
		sub_140892320(v2);
		sub_140881720(dword_140C10F20, *v2);
		*v2 = 0i64;
		v2[1] = 0i64;
		*((_DWORD*)v2 + 4) = 0;
	}
	sub_140890A20((__int64)a1);
	if ((a2 & 1) != 0)
		sub_140001E60((__int64)a1);
	return a1;
}
// 1409A87B0: using guessed type __int64 (__fastcall *off_1409A87B0[4])();
// 140C10F20: using guessed type int dword_140C10F20;

