//----- (0000000140393D00) ----------------------------------------------------
__int64 __fastcall sub_140393D00(unsigned __int64 a1, __m128* a2, __m128* a3, float* a4, __m128** a5, __int64 a6)
{
	__int64 v11; // rax
	__m128 v12; // xmm2
	__m128 v13; // xmm1
	__m128 v14; // xmm10
	__m128 v15; // xmm1
	__m128 v16; // xmm0
	__m128 v17; // xmm11
	int* v18; // rbx
	__int64 v19; // rax
	__int64 v20; // r8
	__int64 v21; // rsi
	float v22; // xmm7_4
	float v23; // xmm9_4
	int v24; // eax
	__m128 v25; // xmm3
	__m128 v26; // xmm4
	__m128 v27; // xmm3
	float v28; // xmm4_4
	float v29; // xmm6_4
	__int64 v30; // rax
	int v31; // ecx
	unsigned int* v32; // r8
	__int64 v33; // r10
	__int64 v34; // r9
	__int64 v35; // rdx
	__int64 v36; // rcx
	__m128 v37; // xmm10
	__m128 v38; // xmm3
	__m128 v39; // xmm9
	__m128 v40; // xmm4
	__m128 v41; // xmm2
	float v42; // xmm2_4
	float v43; // xmm5_4
	__m128 v44; // xmm2
	__m128 v45; // xmm4
	float v46; // xmm4_4
	__m128 v47; // xmm3
	__m128 v48; // xmm2
	float v49; // xmm2_4
	__m128 v50; // xmm1
	float v51; // xmm1_4
	__m128* v52; // rbx
	void(__fastcall * **v53)(_QWORD); // rcx
	int v54; // r9d
	int v55; // r9d
	int v56; // r9d
	__m128 v57; // [rsp+30h] [rbp-D8h] BYREF
	__m128 v58; // [rsp+40h] [rbp-C8h] BYREF
	__m128 v59; // [rsp+50h] [rbp-B8h] BYREF

	if ((*(_BYTE*)a6 & 4) == 0)
		return 0i64;
	v57 = _mm_sub_ps(*a3, *a2);
	sub_1401AE000(&v58, &v59, &v57);
	v11 = 4i64 * *(unsigned int*)(*(_QWORD*)(a1 + 32) + 68i64);
	v12 = _mm_mul_ps(v58, *a2);
	if (!is_mul_ok(*(unsigned int*)(*(_QWORD*)(a1 + 32) + 68i64), 4ui64))
		v11 = -1i64;
	v13 = v12;
	v13.m128_f32[0] = (float)(v12.m128_f32[0] + _mm_shuffle_ps(v12, v12, 85).m128_f32[0])
		+ _mm_shuffle_ps(v12, v12, 170).m128_f32[0];
	v14 = _mm_unpacklo_ps(
		_mm_unpacklo_ps(v58, _mm_shuffle_ps(v58, v58, 170)),
		_mm_unpacklo_ps(_mm_shuffle_ps(v58, v58, 85), _mm_xor_ps(v13, (__m128)0x80000000)));
	v15 = _mm_mul_ps(v59, *a2);
	v15.m128_f32[0] = (float)(v15.m128_f32[0] + _mm_shuffle_ps(v15, v15, 85).m128_f32[0])
		+ _mm_shuffle_ps(v15, v15, 170).m128_f32[0];
	v16 = _mm_shuffle_ps(v59, v59, 170);
	v17 = _mm_unpacklo_ps(
		_mm_unpacklo_ps(v59, v16),
		_mm_unpacklo_ps(_mm_shuffle_ps(v59, v59, 85), _mm_xor_ps(v15, (__m128)0x80000000)));
	v18 = sub_14018B280(v11, 0);
	v19 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 24) + 32i64))(*(_QWORD*)(a1 + 24));
	v20 = 0i64;
	v21 = v19;
	if (*(_DWORD*)(*(_QWORD*)(a1 + 32) + 68i64))
	{
		LODWORD(v22) = _mm_shuffle_ps(v14, v14, 255).m128_u32[0];
		LODWORD(v23) = _mm_shuffle_ps(v17, v17, 255).m128_u32[0];
		do
		{
			v16 = 0i64;
			v24 = 0;
			v25 = _mm_unpacklo_ps(
				_mm_unpacklo_ps((__m128) * (unsigned int*)(v21 + 72 * v20), (__m128) * (unsigned int*)(v21 + 72 * v20 + 8)),
				_mm_unpacklo_ps((__m128) * (unsigned int*)(v21 + 72 * v20 + 4), (__m128)0i64));
			v26 = _mm_mul_ps(v25, v14);
			v27 = _mm_mul_ps(v25, v17);
			v28 = (float)((float)(v26.m128_f32[0] + _mm_shuffle_ps(v26, v26, 85).m128_f32[0])
				+ _mm_shuffle_ps(v26, v26, 170).m128_f32[0])
				+ v22;
			if ((float)((float)((float)(v27.m128_f32[0] + _mm_shuffle_ps(v27, v27, 85).m128_f32[0])
				+ _mm_shuffle_ps(v27, v27, 170).m128_f32[0])
				+ v23) < 0.0)
				v24 = 1;
			v18[v20] = ((v28 < 0.0) + 1) | (4 * v24 + 4);
			v20 = (unsigned int)(v20 + 1);
		} while ((unsigned int)v20 < *(_DWORD*)(*(_QWORD*)(a1 + 32) + 68i64));
	}
	v29 = a4[1];
	v30 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 24) + 24i64))(*(_QWORD*)(a1 + 24));
	v31 = *(_DWORD*)(*(_QWORD*)(a1 + 32) + 64i64);
	if (v31)
	{
		v32 = (unsigned int*)(v30 + 8);
		v33 = (v31 - 1) / 3u + 1;
		do
		{
			v34 = *(v32 - 2);
			v35 = *(v32 - 1);
			v36 = *v32;
			if ((v18[v35] & v18[v34] & v18[v36]) == 0)
			{
				v37 = _mm_unpacklo_ps(
					_mm_unpacklo_ps(
						(__m128) * (unsigned int*)(v21 + 72 * v34),
						(__m128) * (unsigned int*)(v21 + 72 * v34 + 8)),
					_mm_unpacklo_ps((__m128) * (unsigned int*)(v21 + 72 * v34 + 4), (__m128)0i64));
				v38 = _mm_sub_ps(
					_mm_unpacklo_ps(
						_mm_unpacklo_ps(
							(__m128) * (unsigned int*)(v21 + 72 * v35),
							(__m128) * (unsigned int*)(v21 + 72 * v35 + 8)),
						_mm_unpacklo_ps((__m128) * (unsigned int*)(v21 + 72 * v35 + 4), (__m128)0i64)),
					v37);
				v39 = _mm_sub_ps(
					_mm_unpacklo_ps(
						_mm_unpacklo_ps(
							(__m128) * (unsigned int*)(v21 + 72 * v36),
							(__m128) * (unsigned int*)(v21 + 72 * v36 + 8)),
						_mm_unpacklo_ps((__m128) * (unsigned int*)(v21 + 72 * v36 + 4), (__m128)0i64)),
					v37);
				v40 = _mm_sub_ps(
					_mm_mul_ps(_mm_shuffle_ps(v39, v39, 210), _mm_shuffle_ps(v57, v57, 201)),
					_mm_mul_ps(_mm_shuffle_ps(v39, v39, 201), _mm_shuffle_ps(v57, v57, 210)));
				v41 = _mm_mul_ps(v38, v40);
				v42 = (float)(v41.m128_f32[0] + _mm_shuffle_ps(v41, v41, 85).m128_f32[0])
					+ _mm_shuffle_ps(v41, v41, 170).m128_f32[0];
				v16 = _mm_xor_ps((__m128)(unsigned int)dword_140C44638, (__m128)0x80000000);
				if (v42 <= v16.m128_f32[0] || v42 >= *(float*)&dword_140C44638)
				{
					v43 = 1.0 / v42;
					v44 = _mm_sub_ps(*a2, v37);
					v45 = _mm_mul_ps(v44, v40);
					v16 = _mm_shuffle_ps(v45, v45, 85);
					v46 = (float)((float)(v45.m128_f32[0] + v16.m128_f32[0]) + _mm_shuffle_ps(v45, v45, 170).m128_f32[0]) * v43;
					if (v46 >= 0.0 && v46 <= 1.0)
					{
						v47 = _mm_sub_ps(
							_mm_mul_ps(_mm_shuffle_ps(v38, v38, 210), _mm_shuffle_ps(v44, v44, 201)),
							_mm_mul_ps(_mm_shuffle_ps(v38, v38, 201), _mm_shuffle_ps(v44, v44, 210)));
						v48 = _mm_mul_ps(v47, v57);
						v16 = _mm_shuffle_ps(v48, v48, 85);
						v49 = (float)((float)(v48.m128_f32[0] + v16.m128_f32[0]) + _mm_shuffle_ps(v48, v48, 170).m128_f32[0]) * v43;
						if (v49 >= 0.0 && (float)(v49 + v46) <= 1.0)
						{
							v50 = _mm_mul_ps(v47, v39);
							v16 = _mm_shuffle_ps(v50, v50, 85);
							v51 = (float)((float)(v50.m128_f32[0] + v16.m128_f32[0]) + _mm_shuffle_ps(v50, v50, 170).m128_f32[0])
								* v43;
							if (v51 >= *a4 && v29 > v51)
								v29 = v51;
						}
					}
				}
			}
			v32 += 3;
			--v33;
		} while (v33);
	}
	sub_14018B900((__int64)v18, 0);
	if (v29 >= a4[1])
		return 0i64;
	if (a5)
	{
		v52 = (__m128*)sub_14018B280(256i64, 0);
		if (v52)
		{
			v52->m128_f32[3] = v29;
			v52->m128_i32[2] = 1;
			v52[1].m128_u64[0] = a1;
			v52[1].m128_u64[1] = 0i64;
			v52->m128_u64[0] = (unsigned __int64)off_140B65FC8;
			(**(void(__fastcall***)(unsigned __int64))a1)(a1);
			v53 = (void(__fastcall***)(_QWORD))v52[1].m128_u64[1];
			if (v53)
				(**v53)(v53);
		}
		else
		{
			v52 = 0i64;
		}
		v54 = *(_DWORD*)(a6 + 4);
		if ((v54 & 0xFFFFF) != 0)
		{
			v16.m128_f32[0] = v29;
			v57 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(*a3, *a2), _mm_shuffle_ps(v16, v16, 0)), *a2);
			if ((v54 & 0x8003F) != 0)
				sub_140386280(*(_QWORD*)(a1 + 16), v57.m128_f32, (__int64)&v52[2], v54, *(_QWORD*)(a6 + 40));
			v55 = *(_DWORD*)(a6 + 4);
			if ((v55 & 0x1FC0) != 0)
				sub_140387910(*(_QWORD*)(a1 + 16), &v57, v52 + 2, v55);
			v56 = *(_DWORD*)(a6 + 4);
			if ((v56 & 0x7E000) != 0)
				sub_140388A30(*(_QWORD*)(a1 + 16), &v57, (__int64)&v52[2], v56);
		}
		*a5 = v52;
	}
	return 1i64;
}
// 140B65FC8: using guessed type __int64 (__fastcall *off_140B65FC8[10])();
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C44638: using guessed type int dword_140C44638;

