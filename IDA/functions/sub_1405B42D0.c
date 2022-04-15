//----- (00000001405B42D0) ----------------------------------------------------
float __fastcall sub_1405B42D0(__int64 a1)
{
	__m128 v1; // xmm6
	__m128 v3; // xmm0
	__m128 v4; // xmm2
	float v5; // xmm1_4
	int v6; // ecx
	__int64 v7; // rax
	float v8; // xmm2_4
	__m128 v9; // xmm1
	float v10; // xmm2_4
	float v11; // xmm5_4
	float v12; // xmm2_4
	int v13; // ecx
	float v14; // xmm1_4
	int v15; // ecx

	v1 = (__m128) * (unsigned int*)(a1 + 4800);
	if (*(_DWORD*)(a1 + 4956))
	{
		v3 = _mm_xor_ps((__m128) * (unsigned int*)(a1 + 4960), (__m128)xmmword_140B7B530);
		v3.m128_f32[0] = sub_1408FD190(v3.m128_f32[0], -*(float*)(a1 + 4968));
		v4 = v3;
		v4.m128_f32[0] = (float)((float)(v3.m128_f32[0] - v1.m128_f32[0]) + 3.1415927) * 0.15915494;
		v5 = v4.m128_f32[0];
		v6 = (int)v4.m128_f32[0];
		if ((int)v4.m128_f32[0] != 0x80000000 && (float)v6 != v4.m128_f32[0])
			v5 = (float)(v6 - (_mm_movemask_ps(_mm_unpacklo_ps(v4, v4)) & 1));
		v7 = *(_QWORD*)(a1 + 24);
		v8 = v4.m128_f32[0] - v5;
		v9 = (__m128)0x40490FDBu;
		v10 = (float)(v8 * 6.2831855) - 3.1415927;
		if (v7)
		{
			v11 = **(float**)(v7 + 200);
			if (v11 != 0.0)
			{
				v9 = (__m128)(unsigned int)dword_140C3B438;
				v9.m128_f32[0] = (float)(*(float*)&dword_140C3B438 * 0.0055555557) * v11;
			}
		}
		if (v10 <= v9.m128_f32[0])
		{
			if (v10 < (float)-v9.m128_f32[0])
			{
				v1.m128_f32[0] = (float)((float)(v1.m128_f32[0] - v9.m128_f32[0]) + 3.1415927) * 0.15915494;
				v14 = v1.m128_f32[0];
				v15 = (int)v1.m128_f32[0];
				if ((int)v1.m128_f32[0] != 0x80000000 && (float)v15 != v1.m128_f32[0])
					v14 = (float)(v15 - (_mm_movemask_ps(_mm_unpacklo_ps(v1, v1)) & 1));
				v3.m128_f32[0] = (float)((float)(v1.m128_f32[0] - v14) * 6.2831855) - 3.1415927;
			}
		}
		else
		{
			v9.m128_f32[0] = (float)((float)(v9.m128_f32[0] + v1.m128_f32[0]) + 3.1415927) * 0.15915494;
			v12 = v9.m128_f32[0];
			v13 = (int)v9.m128_f32[0];
			if ((int)v9.m128_f32[0] != 0x80000000 && (float)v13 != v9.m128_f32[0])
				v12 = (float)(v13 - (_mm_movemask_ps(_mm_unpacklo_ps(v9, v9)) & 1));
			v3.m128_f32[0] = (float)((float)(v9.m128_f32[0] - v12) * 6.2831855) - 3.1415927;
		}
	}
	else
	{
		v3.m128_i32[0] = *(_DWORD*)(a1 + 4800);
	}
	return v3.m128_f32[0];
}
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C3B438: using guessed type int dword_140C3B438;

