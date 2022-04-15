//----- (00000001408D8560) ----------------------------------------------------
void __fastcall sub_1408D8560(__int64 a1, int* a2)
{
	unsigned int v2; // edi
	int v5; // ebp
	unsigned int i; // esi
	int v7; // r14d
	unsigned int j; // esi
	unsigned int k; // esi
	double v10; // xmm0_8

	v2 = 0;
	v5 = 0;
	if (!*((_BYTE*)a2 + 16))
		v5 = 24 - dword_1409B19A0[*a2];
	for (i = 0; i < *(_DWORD*)(a1 + 4); ++i)
		sub_1408D8CC0(a1, v5, *(_QWORD*)(a1 + 8) + 100i64 * i, 2);
	v7 = 0;
	if (!*((_BYTE*)a2 + 16))
	{
		v7 = a2[1];
		if (*(_DWORD*)a1 > 0xBB80u)
			v7 *= 2;
	}
	for (j = 0; j < *(_DWORD*)(a1 + 4); ++j)
		sub_1408D8CC0(a1, v7, *(_QWORD*)(a1 + 8) + 100i64 * j, 3);
	sub_1408D8210(a1, *((double*)a2 + 1), *((_BYTE*)a2 + 16));
	sub_1408D82B0(a1, 100.0);
	for (k = 0; k < *(_DWORD*)(a1 + 4); ++k)
		sub_1408D8CC0(a1, 1, *(_QWORD*)(a1 + 8) + 100i64 * k, 9);
	sub_1408D83C0(a1, 0.0);
	v10 = sub_1408FFA00(10.0, 0.0);
	if (*(_DWORD*)(a1 + 4))
	{
		do
			sub_1408D8CA0(a1, v10, 100i64 * v2++ + *(_QWORD*)(a1 + 8) + 48i64, 10);
		while (v2 < *(_DWORD*)(a1 + 4));
	}
}
// 1409B19A0: using guessed type _DWORD dword_1409B19A0[16];

