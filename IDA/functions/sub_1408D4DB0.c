//----- (00000001408D4DB0) ----------------------------------------------------
void __fastcall sub_1408D4DB0(__int64 a1, __int64 a2)
{
	unsigned int v2; // edi
	unsigned int i; // esi
	__int64 v6; // rdx
	unsigned int j; // esi
	unsigned int k; // esi
	unsigned int m; // esi
	double v10; // xmm0_8

	v2 = 0;
	for (i = 0; i < *(_DWORD*)(a1 + 4); ++i)
		sub_1408D8CA0(a1, 1.0, 1176i64 * i + *(_QWORD*)(a1 + 8) + 80i64, 4);
	sub_1408D40F0(a1, *(double*)a2, *(_BYTE*)(a2 + 28));
	for (j = 0; j < *(_DWORD*)(a1 + 4); ++j)
		sub_1408D8CC0(a1, 18, *(_QWORD*)(a1 + 8) + 1176i64 * j, 3);
	sub_1408D41D0(a1, v6, *(_BYTE*)(a2 + 28));
	sub_1408D4250(a1, *(double*)a2, *(_DWORD*)(a2 + 24), *(_BYTE*)(a2 + 28));
	sub_1408D4410(a1, *(double*)a2, *(_DWORD*)(a2 + 24));
	sub_1408D47A0(a1, *(double*)a2, *(double*)(a2 + 8), *(_DWORD*)(a2 + 24));
	for (k = 0; k < *(_DWORD*)(a1 + 4); ++k)
		sub_1408D8CA0(a1, 0.0, *(_QWORD*)(a1 + 8) + 1176i64 * k, 11);
	sub_1408D4A00(a1, *(double*)(a2 + 16));
	sub_1408D4A80(a1);
	sub_1408D4AF0(a1, 100.0);
	for (m = 0; m < *(_DWORD*)(a1 + 4); ++m)
		sub_1408D8CC0(a1, 1, *(_QWORD*)(a1 + 8) + 1176i64 * m, 17);
	sub_1408D4C00(a1, 0.0);
	v10 = sub_1408FFA00(10.0, 0.0);
	if (*(_DWORD*)(a1 + 4))
	{
		do
			sub_1408D8CA0(a1, v10, 1176i64 * v2++ + *(_QWORD*)(a1 + 8) + 80i64, 15);
		while (v2 < *(_DWORD*)(a1 + 4));
	}
}
// 1408D4E63: variable 'v6' is possibly undefined

