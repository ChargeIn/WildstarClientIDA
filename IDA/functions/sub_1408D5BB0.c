//----- (00000001408D5BB0) ----------------------------------------------------
void __fastcall sub_1408D5BB0(__int64 a1, double a2, char a3)
{
	unsigned int i; // ebx
	double v6[6]; // [rsp+20h] [rbp-48h] BYREF

	sub_1408D8F20(v6);
	if (!a3)
		sub_1408D92A0(*(_DWORD*)a1, a2, 1.414, v6);
	for (i = 0; i < *(_DWORD*)(a1 + 4); ++i)
		sub_1408D8E70(a1, v6, *(_QWORD*)(a1 + 8) + 168i64 * i, 1);
}
// 1408D5BB0: using guessed type double var_48[6];

