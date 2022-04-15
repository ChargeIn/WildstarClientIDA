//----- (00000001408D5C40) ----------------------------------------------------
void __fastcall sub_1408D5C40(__int64 a1, double a2, char a3)
{
	unsigned int i; // ebx
	double v6[6]; // [rsp+20h] [rbp-48h] BYREF

	sub_1408D8F20(v6);
	if (!a3)
		sub_1408D9480(*(_DWORD*)a1, a2, 1.414, v6);
	for (i = 0; i < *(_DWORD*)(a1 + 4); ++i)
		sub_1408D8E70(a1, v6, *(_QWORD*)(a1 + 8) + 168i64 * i, 6);
}
// 1408D5C40: using guessed type double var_48[6];

