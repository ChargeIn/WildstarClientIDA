//----- (00000001408E9C10) ----------------------------------------------------
_QWORD* __fastcall sub_1408E9C10(_QWORD* a1, char a2)
{
	bool v2; // zf

	v2 = a1[17] == 0i64;
	*a1 = off_1409B44C0;
	if (!v2)
		sub_1408EC030((__int64)&unk_140C63340, (__int64)(a1 + 11));
	sub_14087FF90(a1);
	if ((a2 & 1) != 0)
		sub_140001E60((__int64)a1);
	return a1;
}
// 1409B44C0: using guessed type __int64 (__fastcall *off_1409B44C0[21])();

