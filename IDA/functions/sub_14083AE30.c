//----- (000000014083AE30) ----------------------------------------------------
__int64 __fastcall sub_14083AE30(unsigned int* a1, unsigned int a2)
{
	unsigned int v2; // edi
	__int64 v4; // rax
	unsigned int v5; // edi
	__int64 v6; // rax

	v2 = 255;
	if (a2)
		v2 = a2;
	*a1 = v2;
	v4 = sub_1408819F0(dword_140C10F20, 8i64 * v2);
	*((_QWORD*)a1 + 1) = v4;
	*((_QWORD*)a1 + 2) = v4;
	if (!v4)
		return 52i64;
	a1[6] = v2;
	v5 = *a1;
	if (*a1)
	{
		v6 = sub_1408819F0(dword_140C10F20, 8i64 * v5);
		*((_QWORD*)a1 + 4) = v6;
		*((_QWORD*)a1 + 5) = v6;
		if (!v6)
			return 52i64;
		a1[12] = v5;
	}
	return 1i64;
}
// 14083AE4B: conditional instruction was optimized away because edi.4!=0
// 140C10F20: using guessed type int dword_140C10F20;

