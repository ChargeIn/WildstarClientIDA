//----- (00000001407F1598) ----------------------------------------------------
__int64 __fastcall sub_1407F1598(
	__int64* a1,
	int* a2,
	unsigned __int64 a3,
	int a4,
	unsigned int a5,
	int a6,
	_OWORD* a7)
{
	if (((a4 - 69) & 0xFFFFFFDF) == 0)
		return sub_1407F1BC4(a1, a2, a3, a5, a6, a7);
	if (a4 == 102)
		return sub_1407F1E20(a1, a2, a3, a5, a7);
	if (((a4 - 65) & 0xFFFFFFDF) != 0)
		return sub_1407F1EF4(a1, a2, a3, a5, a6, a7);
	return sub_1407F1618(a1, a2, a3, a5, a6, a7);
}

