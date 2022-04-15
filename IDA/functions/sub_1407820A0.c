//----- (00000001407820A0) ----------------------------------------------------
__int64 __fastcall sub_1407820A0(__m128* a1, __int32 a2, unsigned int* a3, unsigned __int64 a4, int a5)
{
	__int32 v5; // eax
	__m128** v6; // r9
	unsigned __int64 v7; // rax
	__int32 v8; // eax

	v5 = a3[9];
	a1->m128_i32[2] = a2;
	a1[1].m128_u64[0] = a4;
	a1->m128_i32[3] = v5;
	if (a4)
	{
		v6 = (__m128**)(a4 + 144);
		if (!a1[1].m128_u64[1])
		{
			a1[1].m128_u64[1] = (unsigned __int64)v6;
			a1[2].m128_u64[0] = (unsigned __int64)*v6;
			*v6 = a1;
			v7 = a1[2].m128_u64[0];
			if (v7)
				*(_QWORD*)(v7 + 24) = a1 + 2;
		}
	}
	a1[5] = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128) * a3, (__m128)a3[2]), _mm_unpacklo_ps((__m128)a3[1], (__m128)0i64));
	a1[4] = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)a3[3], (__m128)a3[5]), _mm_unpacklo_ps((__m128)a3[4], (__m128)0i64));
	v8 = a3[7];
	a1[6].m128_i32[1] = a2;
	a1[6].m128_i32[0] = v8;
	a1[6].m128_i32[2] = a2 + a3[6] - a3[8];
	a1[6].m128_i32[3] = a5 == 0;
	return 0i64;
}

