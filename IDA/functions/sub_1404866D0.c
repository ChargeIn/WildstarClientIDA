//----- (00000001404866D0) ----------------------------------------------------
__int64 __fastcall sub_1404866D0(__m128* a1, __int64 a2, unsigned int a3, __int32* a4)
{
	__int64 v7; // rcx
	__m128 v8; // xmm4
	float v9; // xmm7_4
	__int32 v10; // eax
	__m128* v11; // rdi
	__m128 v12; // xmm5
	__m128 v13; // xmm2
	float v14; // xmm3_4
	float v15; // xmm0_4
	unsigned __int64 v16; // rcx
	__m128 v17; // xmm1
	__m128 v18; // xmm6
	float v19; // xmm6_4
	__int64 v20; // rax
	__m128 v21; // xmm3
	__m128 v22; // xmm3
	__m256 v23; // [rsp+50h] [rbp-68h] BYREF
	__int128 v24; // [rsp+70h] [rbp-48h]
	__m128 v25; // [rsp+80h] [rbp-38h]

	if ((int)sub_140633CB0((__int64)a1, a3, &a1[6].m128_u64[1]) < 0)
		return 2147500037i64;
	v7 = qword_140C65898;
	if (!*(_QWORD*)(qword_140C65898 + 25744))
		return 2147500037i64;
	v8 = (__m128)0x40400000u;
	a1[3].m128_i32[2] = *a4;
	v9 = 0.0;
	a1[3].m128_i32[3] = a4[1];
	v10 = a4[2];
	v11 = a1 + 8;
	a1[4].m128_i32[0] = v10;
	a1[8] = *(__m128*)(*(_QWORD*)(v7 + 25744) + 4576i64);
	v12 = *(__m128*)(*(_QWORD*)(v7 + 25744) + 4416i64);
	v13 = _mm_mul_ps(v12, v12);
	v14 = (float)(v13.m128_f32[0] + _mm_shuffle_ps(v13, v13, 85).m128_f32[0]) + _mm_shuffle_ps(v13, v13, 170).m128_f32[0];
	v15 = 1.0 / fsqrt(v14);
	v8.m128_f32[0] = fmaxf((float)((float)(3.0 - (float)((float)(v14 * v15) * v15)) * 0.5) * v15, 0.0);
	a1[8] = _mm_add_ps(a1[8], _mm_mul_ps(_mm_shuffle_ps(v8, v8, 0), v12));
	v16 = a1[6].m128_u64[1];
	a1[8].m128_f32[1] = a1[8].m128_f32[1] + 2.0;
	if ((*(int(__fastcall**)(unsigned __int64, __m128*, __m128*))(*(_QWORD*)v16 + 152i64))(v16, a1 + 8, a1 + 9) >= 0)
	{
		v17 = _mm_sub_ps(a1[9], *v11);
		v18 = _mm_mul_ps(v17, v17);
		v19 = fsqrt(
			(float)(v18.m128_f32[0] + _mm_shuffle_ps(v18, v18, 85).m128_f32[0])
			+ _mm_shuffle_ps(v18, v18, 170).m128_f32[0]);
		if (v19 != 0.0)
		{
			v20 = sub_140200220(0x1D9u);
			if (v20)
				v9 = *(float*)(v20 + 28);
			a1[10].m128_f32[2] = v9 / v19;
		}
	}
	else
	{
		*v11 = *(__m128*)(*(__int64(__fastcall**)(unsigned __int64, __int64))(*(_QWORD*)a1[6].m128_u64[1] + 40i64))(
			a1[6].m128_u64[1],
			1i64);
		a1[6].m128_i32[1] = 1;
	}
	v21 = (__m128)v11->m128_u32[0];
	v23 = ymmword_140C78410;
	v22 = _mm_unpacklo_ps(v21, (__m128)a1[8].m128_u32[2]);
	v24 = xmmword_140C78430;
	v25 = _mm_unpacklo_ps(v22, _mm_unpacklo_ps((__m128)a1[8].m128_u32[1], (__m128)0x3F800000u));
	return sub_140485D20(
		(__int64)a1,
		(__int64)L"Art\\FX\\Model\\Cast\\Generic_Power_YLW\\Generic_Power_YLW.m3",
		(__int128*)&v23);
}
// 140B4F5D0: using guessed type wchar_t aArtFxModelCast[57];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C78410: using guessed type __m256 ymmword_140C78410;
// 140C78430: using guessed type __int128 xmmword_140C78430;

