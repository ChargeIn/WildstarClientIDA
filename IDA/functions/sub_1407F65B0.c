//----- (00000001407F65B0) ----------------------------------------------------
__int64 __fastcall sub_1407F65B0(int a1, int a2)
{
	unsigned int v4; // esi
	unsigned int v5; // ecx

	v4 = sub_1407F8460();
	v5 = a2 & a1 | v4 & (~(_WORD)a2 | 0xFFFF807F);
	if (byte_140C106B0 && (v5 & 0x40) != 0)
		sub_1407F8470(v5);
	else
		sub_1407F8470(v5 & 0xFFFFFFBF);
	return v4;
}
// 140C106B0: using guessed type char byte_140C106B0;

