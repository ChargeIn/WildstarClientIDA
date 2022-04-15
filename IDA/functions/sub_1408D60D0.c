//----- (00000001408D60D0) ----------------------------------------------------
void __fastcall sub_1408D60D0(__int64 a1, __int64 a2)
{
	unsigned int v2; // edi
	unsigned int i; // esi
	unsigned int j; // esi
	unsigned int k; // esi
	double v8; // xmm0_8
	unsigned int m; // esi
	double v10; // xmm0_8
	unsigned int n; // esi
	unsigned int ii; // esi
	double v13; // xmm0_8

	v2 = 0;
	for (i = 0; i < *(_DWORD*)(a1 + 4); ++i)
		sub_1408D8CC0(a1, 0, *(_QWORD*)(a1 + 8) + 168i64 * i, 0);
	sub_1408D5B10(a1, *(double*)a2, *(_BYTE*)(a2 + 48));
	sub_1408D5BB0(a1, *(double*)(a2 + 8), *(_BYTE*)(a2 + 48));
	sub_1408D5C40(a1, *(double*)(a2 + 16), *(_BYTE*)(a2 + 48));
	for (j = 0; j < *(_DWORD*)(a1 + 4); ++j)
		sub_1408D8CC0(a1, 14, *(_QWORD*)(a1 + 8) + 168i64 * j, 18);
	for (k = 0; k < *(_DWORD*)(a1 + 4); ++k)
		sub_1408D8CC0(a1, 0, *(_QWORD*)(a1 + 8) + 168i64 * k, 11);
	v8 = sub_1408FFA00(10.0, *(double*)(a2 + 24) * 0.05);
	for (m = 0; m < *(_DWORD*)(a1 + 4); ++m)
		sub_1408D8CA0(a1, v8, *(_QWORD*)(a1 + 8) + 168i64 * m, 12);
	v10 = sub_1408FFA00(10.0, *(double*)(a2 + 32) * 0.05);
	for (n = 0; n < *(_DWORD*)(a1 + 4); ++n)
		sub_1408D8CA0(a1, v10, *(_QWORD*)(a1 + 8) + 168i64 * n, 14);
	for (ii = 0; ii < *(_DWORD*)(a1 + 4); ++ii)
		sub_1408D8CA0(a1, 1.0, 168i64 * ii + *(_QWORD*)(a1 + 8) + 84i64, 15);
	v13 = sub_1408DA310(*(_DWORD*)a1, *(double*)(a2 + 40));
	if (*(_DWORD*)(a1 + 4))
	{
		do
			sub_1408D8CA0(a1, v13, *(_QWORD*)(a1 + 8) + 168i64 * v2++, 17);
		while (v2 < *(_DWORD*)(a1 + 4));
	}
	sub_1408D5F40(a1);
	sub_1408D5FB0(a1);
}

