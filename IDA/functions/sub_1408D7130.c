//----- (00000001408D7130) ----------------------------------------------------
void __fastcall sub_1408D7130(__int64 a1, int a2, char a3)
{
	__int64 v3; // xmm8_8
	double v5; // xmm6_8
	double v6; // xmm0_8
	unsigned int i; // esi
	__int64 v8; // rbx

	v3 = 0x3FF0000000000000i64;
	v5 = 0.0;
	if (!a3)
	{
		v3 = 0i64;
		v6 = sub_1408E47B0(a2);
		v5 = v6;
		if (v6 < 0.0)
			v5 = sub_1408FFA00(10.0, v6 * 0.05);
	}
	for (i = 0; i < *(_DWORD*)(a1 + 4); ++i)
	{
		v8 = 360i64 * i;
		sub_1408D8CA0(a1, v5, v8 + *(_QWORD*)(a1 + 8), 38);
		sub_1408D8CA0(a1, *(double*)&v3, v8 + *(_QWORD*)(a1 + 8), 39);
	}
}

