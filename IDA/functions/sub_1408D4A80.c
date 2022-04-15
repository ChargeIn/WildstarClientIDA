//----- (00000001408D4A80) ----------------------------------------------------
void __fastcall sub_1408D4A80(__int64 a1)
{
	unsigned int i; // edi
	double v3[7]; // [rsp+20h] [rbp-38h] BYREF

	sub_1408D91C0(*(_DWORD*)a1, 20.0, v3);
	for (i = 0; i < *(_DWORD*)(a1 + 4); ++i)
		sub_1408D8E70(a1, v3, *(_QWORD*)(a1 + 8) + 1176i64 * i, 12);
}
// 1408D4A80: using guessed type double var_38[7];

