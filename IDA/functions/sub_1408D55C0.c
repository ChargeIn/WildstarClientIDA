//----- (00000001408D55C0) ----------------------------------------------------
void __fastcall sub_1408D55C0(__int64 a1, __int64 a2)
{
	int v4; // ecx
	int v5; // ecx
	__m128d v6; // xmm1
	__m128d v7; // xmm1
	__int64 i; // rdi
	double v9[7]; // [rsp+30h] [rbp-38h] BYREF

	sub_1408D8F20(v9);
	if (!*(_BYTE*)(a2 + 28))
	{
		v4 = *(_DWORD*)(a2 + 24);
		if (v4)
		{
			v5 = v4 - 1;
			if (v5)
			{
				if (v5 == 1)
				{
					v6 = (__m128d) * (unsigned __int64*)(a2 + 8);
					v6.m128d_f64[0] = v6.m128d_f64[0] * 0.01;
					if (v6.m128d_f64[0] > 0.0)
						*(_QWORD*)&v6.m128d_f64[0] = *(_OWORD*)&_mm_sqrt_pd(v6);
					sub_1408D9480(*(_DWORD*)a1, *(double*)a2, (1.0 - v6.m128d_f64[0] * 0.8) * 1.414, v9);
				}
			}
			else
			{
				sub_1408D8F50(
					*(_DWORD*)a1,
					*(double*)a2,
					*(double*)(a2 + 8) * 0.01 * (*(double*)(a2 + 8) * 0.01) * 9.0 + 1.0,
					*(double*)(a2 + 16),
					v9);
			}
		}
		else
		{
			v7 = (__m128d) * (unsigned __int64*)(a2 + 8);
			v7.m128d_f64[0] = v7.m128d_f64[0] * 0.01;
			if (v7.m128d_f64[0] > 0.0)
				*(_QWORD*)&v7.m128d_f64[0] = *(_OWORD*)&_mm_sqrt_pd(v7);
			sub_1408D92A0(*(_DWORD*)a1, *(double*)a2, (1.0 - v7.m128d_f64[0] * 0.8) * 1.414, v9);
		}
	}
	for (i = 0i64; (unsigned int)i < *(_DWORD*)(a1 + 4); i = (unsigned int)(i + 1))
		sub_1408D8E70(a1, v9, *(_QWORD*)(a1 + 8) + 48 * i, 0);
}
// 1408D55C0: using guessed type double var_38[7];

