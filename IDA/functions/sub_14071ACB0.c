//----- (000000014071ACB0) ----------------------------------------------------
__int64 __fastcall sub_14071ACB0(_DWORD* a1, __int64 a2, __int64 a3)
{
	__int64 v4; // rbx
	unsigned int* v6; // r14
	__int64 result; // rax
	unsigned __int64 v8; // r15
	unsigned int v9; // esi
	int v10; // edx
	__m128* v11; // rax
	__m128 v12; // xmm5
	__int64 v13; // rdx
	__m128 v14; // xmm4
	__m128 v15; // xmm2
	float v16; // xmm3_4
	float v17; // xmm1_4
	__m128 v18; // xmm3
	__m128 v19; // xmm5
	__m128 v20; // xmm2
	__m128 v21; // xmm1
	float v22; // xmm0_4
	float v23; // xmm4_4
	float v24; // xmm1_4
	int v25; // r12d
	int v26; // edi
	int v27; // ebx
	int v28; // eax
	unsigned int v29; // eax

	v4 = a2;
	v6 = a1 + 97;
	result = 0i64;
	v8 = 0i64;
	while (1)
	{
		v9 = *v6;
		if (*v6)
			break;
	LABEL_24:
		++v8;
		++v6;
		if (v8 >= 3)
			return result;
	}
	if (a1[103])
	{
		v10 = a1[95];
		if (v10)
		{
			if (v9 - 1472 <= 1)
			{
				v11 = (__m128*)sub_1403D90D0(qword_140C65898, v10);
				if (v11)
				{
					v12 = 0i64;
					v13 = 0i64;
					v14 = _mm_sub_ps(v11[286], *(__m128*)(a3 + 4576));
					v15 = _mm_mul_ps(v14, v14);
					v16 = (float)(v15.m128_f32[0] + _mm_shuffle_ps(v15, v15, 85).m128_f32[0])
						+ _mm_shuffle_ps(v15, v15, 170).m128_f32[0];
					v17 = 1.0 / fsqrt(v16);
					v12.m128_f32[0] = 3.0 - (float)((float)(v16 * v17) * v17);
					v18 = *(__m128*)(a3 + 4416);
					v12.m128_f32[0] = fmaxf((float)(v12.m128_f32[0] * 0.5) * v17, 0.0);
					v19 = _mm_mul_ps(_mm_shuffle_ps(v12, v12, 0), v14);
					v20 = _mm_mul_ps(v19, v18);
					v21 = _mm_mul_ps(
						_mm_sub_ps(
							_mm_mul_ps(
								_mm_shuffle_ps((__m128)xmmword_140C77870, (__m128)xmmword_140C77870, 210),
								_mm_shuffle_ps(v18, v18, 201)),
							_mm_mul_ps(
								_mm_shuffle_ps((__m128)xmmword_140C77870, (__m128)xmmword_140C77870, 201),
								_mm_shuffle_ps(v18, v18, 210))),
						v19);
					LODWORD(v22) = _mm_shuffle_ps(v21, v21, 85).m128_u32[0];
					LODWORD(v23) = _mm_shuffle_ps(v21, v21, 170).m128_u32[0];
					if ((float)((float)(v20.m128_f32[0] + _mm_shuffle_ps(v20, v20, 85).m128_f32[0])
						+ _mm_shuffle_ps(v20, v20, 170).m128_f32[0]) < 0.0)
						v13 = 1i64;
					v24 = (float)(v21.m128_f32[0] + v22) + v23;
					if (v24 <= 0.5)
					{
						if (v24 < -0.5)
							v13 = 2i64;
					}
					else
					{
						v13 = 3i64;
					}
					if (v9 == 1472)
					{
						v9 = dword_140C593E0[v13];
					}
					else if (v9 == 1473)
					{
						v9 = dword_140C593D0[v13];
					}
				}
			}
		}
		v25 = *(_DWORD*)(a3 + 440) == 10 || *(_DWORD*)(a3 + 444) == 10;
		v26 = *(_DWORD*)(a3 + 4232);
		v27 = sub_140467E40(a3);
		v28 = sub_14047BBA0((_DWORD*)a3);
		v29 = sub_1401DB470(v9, v26, v28, v27, v25, 0i64);
		v4 = a2;
		v9 = v29;
		*v6 = v29;
	}
	if ((*(unsigned int(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v4 + 408i64))(v4, v9))
	{
		result = 1i64;
		goto LABEL_24;
	}
	(*(void(__fastcall**)(__int64))(*(_QWORD*)v4 + 48i64))(v4);
	sub_1400035B0();
	return 0i64;
}
// 140C593D0: using guessed type int dword_140C593D0[4];
// 140C593E0: using guessed type int dword_140C593E0[4];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C77870: using guessed type __int128 xmmword_140C77870;

