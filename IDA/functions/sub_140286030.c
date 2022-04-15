//----- (0000000140286030) ----------------------------------------------------
void __fastcall sub_140286030(
	__m128* a1,
	void(__fastcall*** a2)(_QWORD),
	__m128* a3,
	__m128* a4,
	__m128* a5,
	__m128* a6,
	int a7,
	int a8,
	int a9)
{
	int v9; // r15d
	unsigned __int64 v14; // rax
	__m128* v15; // rdi
	__m128* v16; // rcx
	__int64 v17; // rax
	__m128i v18; // xmm2
	__m128 v19; // xmm0
	__m128 v20; // xmm3
	__m128 v21; // xmm10
	__m128 v22; // xmm9
	__m128 v23; // xmm6
	__m128 v24; // xmm7
	__m128 v25; // xmm0
	__m128 v26; // xmm2
	__m128 v27; // xmm6
	__m128 v28; // xmm7
	unsigned __int64 v29; // r13
	unsigned __int64 v30; // rbx
	float v31; // xmm13_4
	float v32; // xmm14_4
	__m128* v33; // rcx
	float v34; // xmm11_4
	float v35; // xmm12_4
	__int64 v36; // r9
	__m128 v37; // xmm7
	__m128 v38; // xmm6
	__m128 v39; // xmm3
	__m128 v40; // xmm1
	__m128 v41; // xmm0
	__m128 v42; // xmm5
	__m128 v43; // xmm2
	__m128 v44; // xmm5
	__m128 v45; // xmm4
	__m128 v46; // xmm5
	__int32 v47; // xmm0_4
	unsigned __int64 v48; // r8
	unsigned int v49; // r14d
	__int64 v50; // rdi
	int v51; // eax
	__m128i v52; // xmm1
	__m128i v53; // xmm1
	unsigned __int64 v54; // rcx
	__m128i v55; // xmm1
	__m128i v56; // xmm1
	float v57; // xmm4_4
	float v58; // xmm2_4
	__int32 v59; // xmm3_4
	float v60; // xmm1_4
	__int64 v61; // rax
	__int64 v62; // rbx
	unsigned __int64 v63; // [rsp+38h] [rbp-D0h] BYREF
	__m128* v64; // [rsp+40h] [rbp-C8h]
	__m128 v65; // [rsp+48h] [rbp-C0h]
	__m128 v66; // [rsp+58h] [rbp-B0h] BYREF
	_OWORD v67[2]; // [rsp+68h] [rbp-A0h]
	int v68; // [rsp+88h] [rbp-80h]
	int v69; // [rsp+8Ch] [rbp-7Ch]

	v9 = a7;
	v64 = a6;
	if (!a7)
		return;
	if (a6->m128_f32[3] == 0.0)
		return;
	v14 = a1[14].m128_u64[0];
	v15 = *(__m128**)(v14 + 24);
	if (!v15[3].m128_i32[1]
		|| *(float*)(*(_QWORD*)(v14 + 48) + 12i64) == 0.0
		|| a4[1].m128_f32[0] <= a4->m128_f32[0]
		|| a4[1].m128_f32[1] <= a4->m128_f32[1]
		|| a5[1].m128_f32[0] <= a5->m128_f32[0]
		|| a5[1].m128_f32[1] <= a5->m128_f32[1])
	{
		return;
	}
	v16 = a1 + 26;
	if ((void(__fastcall***)(_QWORD))v16->m128_u64[0] != a2)
	{
		sub_1400035C0(v16, a2);
		v17 = ((__int64(__fastcall*)(_QWORD))(*a2)[3])(a2);
		v18 = _mm_cvtsi32_si128(0);
		a1[27] = _mm_rcp_ps(
			_mm_cvtepi32_ps(
				_mm_unpacklo_epi32(
					_mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD*)(v17 + 4)), v18),
					_mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD*)(v17 + 8)), v18))));
	}
	v19 = a1[27];
	v20 = *a4;
	v21 = _mm_mul_ps(a3[1], v19);
	v22 = _mm_mul_ps(*a3, v19);
	v23 = _mm_sub_ps(a5[1], *a4);
	v24 = _mm_sub_ps(*a5, *a4);
	v25 = a4[1];
	v66 = v22;
	v67[0] = v21;
	v65 = _mm_sub_ps(v21, v22);
	v26 = _mm_mul_ps(_mm_rcp_ps(_mm_sub_ps(v25, v20)), v65);
	v27 = _mm_add_ps(_mm_mul_ps(v23, v26), v22);
	v28 = _mm_add_ps(_mm_mul_ps(v24, v26), v22);
	if (a7 != 1 || v15[3].m128_i32[1] != 1)
		v9 = 0;
	v29 = a1[19].m128_u64[0];
	if (v9)
	{
		if (v15[3].m128_i32[0])
			v30 = 8i64;
		else
			v30 = *(_QWORD*)(*(_QWORD*)(a1[14].m128_u64[0] + 24) + 40i64) + 4i64;
	}
	else
	{
		v30 = 4i64;
	}
	v63 = v30;
	sub_1402877C0(&a1[18].m128_i64[1], v30 + v29);
	v31 = *((float*)v67 + 1);
	v32 = *(float*)v67;
	v33 = *(__m128**)(a1[14].m128_u64[0] + 16);
	v34 = v66.m128_f32[1];
	v35 = v66.m128_f32[0];
	v36 = a1[18].m128_u64[1] + 32 * v29;
	*(__m128*)v36 = _mm_add_ps(
		_mm_add_ps(
			_mm_mul_ps(_mm_shuffle_ps(*a5, *a5, 0), *v33),
			_mm_mul_ps(_mm_shuffle_ps(*a5, *a5, 85), v33[1])),
		v33[3]);
	*(__m128*)(v36 + 32) = _mm_add_ps(
		_mm_add_ps(
			_mm_mul_ps(
				v33[1],
				_mm_shuffle_ps((__m128)a5[1].m128_u32[1], (__m128)a5[1].m128_u32[1], 0)),
			_mm_mul_ps(*v33, _mm_shuffle_ps((__m128)a5->m128_u32[0], (__m128)a5->m128_u32[0], 0))),
		v33[3]);
	*(__m128*)(v36 + 64) = _mm_add_ps(
		_mm_add_ps(
			_mm_mul_ps(_mm_shuffle_ps(a5[1], a5[1], 0), *v33),
			_mm_mul_ps(_mm_shuffle_ps(a5[1], a5[1], 85), v33[1])),
		v33[3]);
	*(__m128*)(v36 + 96) = _mm_add_ps(
		_mm_add_ps(
			_mm_mul_ps(v33[1], _mm_shuffle_ps((__m128)a5->m128_u32[1], (__m128)a5->m128_u32[1], 0)),
			_mm_mul_ps(*v33, _mm_shuffle_ps((__m128)a5[1].m128_u32[0], (__m128)a5[1].m128_u32[0], 0))),
		v33[3]);
	if (a8)
	{
		if (a9)
		{
			*(__m128*)(v36 + 16) = v27;
			*(_DWORD*)(v36 + 48) = v27.m128_i32[0];
			*(_DWORD*)(v36 + 52) = _mm_shuffle_ps(v28, v28, 85).m128_u32[0];
			*(__m128*)(v36 + 80) = v28;
			*(_DWORD*)(v36 + 112) = v28.m128_i32[0];
			*(_DWORD*)(v36 + 116) = _mm_shuffle_ps(v27, v27, 85).m128_u32[0];
		}
		else
		{
			*(float*)(v36 + 16) = v35;
			*(float*)(v36 + 20) = v31;
			*(__m128*)(v36 + 48) = v22;
			*(float*)(v36 + 80) = v32;
			*(float*)(v36 + 84) = v34;
			*(__m128*)(v36 + 112) = v21;
		}
	}
	else if (a9)
	{
		*(_DWORD*)(v36 + 16) = v27.m128_i32[0];
		*(_DWORD*)(v36 + 20) = _mm_shuffle_ps(v28, v28, 85).m128_u32[0];
		*(__m128*)(v36 + 48) = v27;
		*(_DWORD*)(v36 + 80) = v28.m128_i32[0];
		*(_DWORD*)(v36 + 84) = _mm_shuffle_ps(v27, v27, 85).m128_u32[0];
		*(__m128*)(v36 + 112) = v28;
	}
	else
	{
		*(__m128*)(v36 + 16) = v28;
		*(_DWORD*)(v36 + 48) = v28.m128_i32[0];
		*(_DWORD*)(v36 + 52) = _mm_shuffle_ps(v27, v27, 85).m128_u32[0];
		*(__m128*)(v36 + 80) = v27;
		*(_DWORD*)(v36 + 112) = v27.m128_i32[0];
		*(_DWORD*)(v36 + 116) = _mm_shuffle_ps(v28, v28, 85).m128_u32[0];
	}
	if (v9)
	{
		if (v15[3].m128_i32[0])
		{
			if (v33->m128_f32[1] != 0.0 || v33[1].m128_f32[0] != 0.0)
			{
				v66 = *v15;
				LODWORD(v67[0]) = v66.m128_i32[0];
				v47 = v15[1].m128_i32[1];
				v68 = v15[1].m128_i32[0];
				DWORD1(v67[0]) = v47;
				v67[1] = v15[1];
				v69 = v15->m128_i32[1];
				sub_140284F40((__int64)a1, (__int64)&v66, 4i64, (__m128*)v36, v36, &v63);
				v30 = v63;
				goto LABEL_37;
			}
			v37 = _mm_min_ps(v15[1], *(__m128*)(v36 + 64));
			v38 = _mm_max_ps(*v15, *(__m128*)v36);
			if (v38.m128_f32[0] < v37.m128_f32[0]
				&& _mm_shuffle_ps(v38, v38, 85).m128_f32[0] < _mm_shuffle_ps(v37, v37, 85).m128_f32[0])
			{
				v39 = *(__m128*)(v36 + 32);
				v40 = *(__m128*)(v36 + 48);
				v30 = 4i64;
				v41 = _mm_sub_ps(*(__m128*)(v36 + 96), v39);
				v42 = *(__m128*)(v36 + 112);
				*(__m128*)v36 = v38;
				v43 = _mm_rcp_ps(v41);
				v44 = _mm_sub_ps(v42, v40);
				v45 = _mm_add_ps(_mm_mul_ps(v44, _mm_mul_ps(_mm_sub_ps(v37, v39), v43)), v40);
				v46 = _mm_add_ps(_mm_mul_ps(v44, _mm_mul_ps(_mm_sub_ps(v38, v39), v43)), v40);
				*(__m128*)(v36 + 16) = v46;
				*(_DWORD*)(v36 + 36) = _mm_shuffle_ps(v37, v37, 85).m128_u32[0];
				*(_DWORD*)(v36 + 32) = v38.m128_i32[0];
				*(_DWORD*)(v36 + 48) = v46.m128_i32[0];
				*(_DWORD*)(v36 + 52) = _mm_shuffle_ps(v45, v45, 85).m128_u32[0];
				*(__m128*)(v36 + 64) = v37;
				*(__m128*)(v36 + 80) = v45;
				*(_DWORD*)(v36 + 96) = v37.m128_i32[0];
				*(_DWORD*)(v36 + 100) = _mm_shuffle_ps(v38, v38, 85).m128_u32[0];
				*(_DWORD*)(v36 + 112) = v45.m128_i32[0];
				*(_DWORD*)(v36 + 116) = _mm_shuffle_ps(v46, v46, 85).m128_u32[0];
				goto LABEL_37;
			}
		}
		else
		{
			v48 = v15[2].m128_u64[1];
			if (v48 >= 3)
			{
				sub_140284F40((__int64)a1, a1[20].m128_u64[1] + 16 * v15[2].m128_u64[0], v48, (__m128*)v36, v36, &v63);
				v30 = v63;
				goto LABEL_37;
			}
		}
		v30 = 0i64;
	LABEL_37:
		sub_1402877C0(&a1[18].m128_i64[1], v30 + v29);
		if (v30 < 3)
			return;
	}
	v49 = sub_1402876E0(&a1[16].m128_i64[1]);
	LODWORD(v63) = v49;
	v50 = a1[16].m128_u64[1] + 144i64 * v49;
	*(_DWORD*)(v50 + 128) = -1;
	*(_DWORD*)v50 = **(_DWORD**)(a1[14].m128_u64[0] + 32);
	*(_DWORD*)(v50 + 4) = *(_DWORD*)(*(_QWORD*)(a1[14].m128_u64[0] + 32) + 4i64);
	*(_DWORD*)(v50 + 8) = *(_DWORD*)(*(_QWORD*)(a1[14].m128_u64[0] + 32) + 8i64);
	sub_1400035C0((_QWORD*)(v50 + 96), a2);
	*(_DWORD*)(v50 + 12) = a1[14].m128_i32[2];
	v51 = **(_DWORD**)(a1[14].m128_u64[0] + 64);
	*(_DWORD*)(v50 + 20) = v29;
	*(_DWORD*)(v50 + 24) = v30;
	*(_DWORD*)(v50 + 16) = v51;
	v52 = _mm_shuffle_epi32(
		_mm_cvttps_epi32(
			_mm_add_ps(
				_mm_mul_ps(
					_mm_min_ps(
						_mm_max_ps((__m128)0i64, _mm_mul_ps(*(__m128*) * (_QWORD*)(a1[14].m128_u64[0] + 48), *v64)),
						(__m128)xmmword_140B7B240),
					(__m128)xmmword_140B7B470),
				(__m128)xmmword_140B7AC50)),
		198);
	v53 = _mm_packus_epi16(v52, v52);
	*(_DWORD*)(v50 + 28) = _mm_cvtsi128_si32(_mm_packus_epi16(v53, v53));
	v54 = a1[14].m128_u64[0];
	v55 = _mm_shuffle_epi32(
		_mm_cvttps_epi32(
			_mm_add_ps(
				_mm_mul_ps(
					_mm_min_ps(
						_mm_max_ps(
							(__m128)0i64,
							_mm_unpacklo_ps(
								_mm_unpacklo_ps(
									*(__m128*) * (_QWORD*)(v54 + 56),
									_mm_shuffle_ps(*(__m128*) * (_QWORD*)(v54 + 56), *(__m128*) * (_QWORD*)(v54 + 56), 170)),
								_mm_unpacklo_ps(
									_mm_shuffle_ps(*(__m128*) * (_QWORD*)(v54 + 56), *(__m128*) * (_QWORD*)(v54 + 56), 85),
									(__m128) * *(unsigned int**)(v54 + 40)))),
						(__m128)xmmword_140B7B240),
					(__m128)xmmword_140B7B470),
				(__m128)xmmword_140B7AC50)),
		198);
	v56 = _mm_packus_epi16(v55, v55);
	*(_DWORD*)(v50 + 32) = _mm_cvtsi128_si32(_mm_packus_epi16(v56, v56));
	*(float*)(v50 + 48) = (float)(a1[27].m128_f32[0] * 0.5) + v35;
	*(float*)(v50 + 52) = (float)(a1[27].m128_f32[1] * 0.5) + v34;
	v57 = v65.m128_f32[0];
	*(float*)(v50 + 56) = v31 - (float)(a1[27].m128_f32[1] * 0.5);
	*(float*)(v50 + 60) = v32 - (float)(a1[27].m128_f32[0] * 0.5);
	if (v57 <= 0.0000099999997)
		v58 = 0.0;
	else
		v58 = 1.0 / v57;
	v59 = v65.m128_i32[1];
	if (v65.m128_f32[1] <= 0.0000099999997)
		v60 = 0.0;
	else
		v60 = 1.0 / v65.m128_f32[1];
	*(float*)(v50 + 64) = v58;
	*(float*)(v50 + 68) = v60;
	*(float*)(v50 + 80) = v57;
	*(_DWORD*)(v50 + 84) = v59;
	*(float*)(v50 + 88) = v34;
	*(float*)(v50 + 92) = v35;
	*(float*)(v50 + 72) = -(float)(v60 * v34);
	*(float*)(v50 + 76) = -(float)(v58 * v35);
	*(_QWORD*)(v50 + 112) = a1[15].m128_u64[1];
	*(_QWORD*)(v50 + 104) = a1[15].m128_u64[0];
	*(_QWORD*)(v50 + 120) = a1[16].m128_u64[0];
	if (v49
		&& (v61 = v49 - 1, (v62 = a1[16].m128_u64[1] + 144 * v61) != 0)
		&& !(unsigned int)sub_140285F80(v50, a1[16].m128_u64[1] + 144 * v61))
	{
		*(_DWORD*)(v62 + 128) = v49;
	}
	else
	{
		sub_140003460(&a1[17].m128_i64[1], (int*)&v63);
	}
}
// 1402864EF: conditional instruction was optimized away because eax.4!=0
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140B7B470: using guessed type __int128 xmmword_140B7B470;
// 140B7B530: using guessed type __int128 xmmword_140B7B530;

