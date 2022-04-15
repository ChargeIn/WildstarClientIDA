//----- (00000001408D6B30) ----------------------------------------------------
void __fastcall sub_1408D6B30(__int64 a1, __int64 a2)
{
	unsigned int v2; // edi
	unsigned int i; // esi
	unsigned int j; // esi
	double v7; // xmm0_8
	unsigned int k; // esi
	unsigned int m; // esi
	double v10; // xmm0_8
	unsigned int n; // esi
	unsigned int v12; // esi
	int ii; // ebp
	double v14; // xmm0_8

	v2 = 0;
	for (i = 0; i < *(_DWORD*)(a1 + 4); ++i)
		sub_1408D8CC0(a1, 0, *(_QWORD*)(a1 + 8) + 76i64 * i, 9);
	for (j = 0; j < *(_DWORD*)(a1 + 4); ++j)
		sub_1408D8CC0(a1, 0, *(_QWORD*)(a1 + 8) + 76i64 * j, 2);
	v7 = sub_1408FFA00(10.0, *(double*)a2 * 0.05);
	for (k = 0; k < *(_DWORD*)(a1 + 4); ++k)
		sub_1408D8CA0(a1, v7, *(_QWORD*)(a1 + 8) + 76i64 * k, 3);
	sub_1408D6870(a1, *(double*)(a2 + 8), *(_BYTE*)(a2 + 40));
	for (m = 0; m < *(_DWORD*)(a1 + 4); ++m)
		sub_1408D8CA0(a1, 1.0, 76i64 * m + *(_QWORD*)(a1 + 8) + 52i64, 1);
	v10 = sub_1408DA310(*(_DWORD*)a1, *(double*)(a2 + 16));
	for (n = 0; n < *(_DWORD*)(a1 + 4); ++n)
		sub_1408D8CA0(a1, v10, *(_QWORD*)(a1 + 8) + 76i64 * n, 8);
	v12 = 0;
	for (ii = sub_1408DA370(*(_DWORD*)a1, *(double*)(a2 + 24)); v12 < *(_DWORD*)(a1 + 4); ++v12)
		sub_1408D8CC0(a1, ii, *(_QWORD*)(a1 + 8) + 76i64 * v12, 6);
	v14 = sub_1408DA340(*(_DWORD*)a1, *(double*)(a2 + 32));
	if (*(_DWORD*)(a1 + 4))
	{
		do
			sub_1408D8CA0(a1, v14, *(_QWORD*)(a1 + 8) + 76i64 * v2++, 7);
		while (v2 < *(_DWORD*)(a1 + 4));
	}
}

