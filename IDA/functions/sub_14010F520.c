//----- (000000014010F520) ----------------------------------------------------
__int64 __fastcall sub_14010F520(__m128* a1)
{
	unsigned __int64 v1; // rax
	__int16 v3; // cx
	__int64 result; // rax
	unsigned __int64 v5; // rcx
	unsigned __int64 v6; // rcx
	unsigned __int64 v7; // rcx
	unsigned __int64 v8; // rdx
	__m128i v9; // xmm1
	__m128i v10; // xmm3
	unsigned __int64 v11; // rdx
	__int64 v12; // rdx
	unsigned __int64 v13; // rax
	__m128i v14; // xmm3
	__m128i v15; // xmm1
	float v16; // xmm9_4
	__m128 v17; // xmm11
	__int64 v18; // r15
	__int64 v19; // rax
	unsigned __int64 v20; // rcx
	float v21; // xmm8_4
	float* v22; // r14
	unsigned __int64 v23; // rcx
	unsigned __int64 v24; // rdx
	float v25; // xmm2_4
	__int32 v26; // eax
	unsigned __int64 v27; // rbx
	__int64 v28; // rdi
	__int64 v29; // rax
	float v30; // xmm4_4
	float v31; // xmm0_4
	float v32; // xmm2_4
	float v33; // xmm1_4
	_QWORD* v34; // rax
	__m128 v35; // xmm6
	_QWORD* v36; // rbx
	unsigned __int64 v37; // rcx
	_QWORD* v38; // rdi
	bool v39; // zf
	float v40; // xmm2_4
	float v41; // xmm1_4
	unsigned __int64 v42; // r8
	__m128* v43; // r8
	_QWORD* v44; // rcx
	unsigned __int64 v45; // rdx
	unsigned __int64 v46; // rax
	unsigned __int64 v47; // rcx
	unsigned __int64 v48; // r8
	__m128* v49; // r8
	_QWORD* v50; // rcx
	unsigned __int64 v51; // rax
	unsigned __int64 v52; // rbx
	__int64 v53; // rax
	float v54; // xmm1_4
	float v55; // xmm2_4
	unsigned __int64 v56; // r8
	__m128* v57; // r8
	_QWORD* v58; // rcx
	__int32 v59; // r8d
	unsigned int v60; // xmm0_4
	__m128 v61; // xmm3
	__m128 v62; // xmm2
	unsigned __int64 v63; // rdx
	__int64 v64; // rdx
	__m128 v65; // [rsp+50h] [rbp-B0h] BYREF
	__m128 v66; // [rsp+60h] [rbp-A0h] BYREF
	__m128 v67; // [rsp+70h] [rbp-90h] BYREF
	__m128 v68; // [rsp+80h] [rbp-80h]
	__m128 v69; // [rsp+90h] [rbp-70h] BYREF
	__m128 v70; // [rsp+A0h] [rbp-60h]
	float v71; // [rsp+140h] [rbp+40h] BYREF
	float v72; // [rsp+148h] [rbp+48h] BYREF

	v1 = a1[2].m128_u64[0];
	if (v1)
	{
		if (*(__m128**)(v1 + 2880) == a1 && (a1[41].m128_i32[2] & 0x800i64) != 0)
		{
			sub_1401132F0((__int64)a1);
			v3 = *(_WORD*)(qword_140C63650 + 224) & 0x3FF;
			if (v3 == 4 || (unsigned __int16)(v3 - 17) <= 1u)
			{
				sub_140113640(a1);
				sub_140113440(a1);
				sub_140113870((__int64)a1);
			}
		}
	}
	if ((a1[41].m128_i8[8] & 1) != 0)
		return (*(__int64(__fastcall**)(__m128*))(a1->m128_u64[0] + 568))(a1);
	v5 = a1[67].m128_u64[1];
	if (!v5 || !(*(__int64(__fastcall**)(unsigned __int64))(*(_QWORD*)v5 + 72i64))(v5))
	{
		v6 = a1[79].m128_u64[1];
		if (v6)
		{
			if ((*(__int64(__fastcall**)(unsigned __int64))(*(_QWORD*)v6 + 72i64))(v6))
			{
				v7 = a1[79].m128_u64[1];
				v8 = a1[79].m128_u64[0];
				v9 = _mm_cvtsi32_si128(a1[45].m128_u32[0]);
				v10 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(a1[44].m128_u32[3]), _mm_cvtsi32_si128(0));
				v70 = _mm_cvtepi32_ps(
					_mm_unpacklo_epi32(
						_mm_unpacklo_epi32(_mm_cvtsi32_si128(a1[45].m128_u32[1]), _mm_cvtsi32_si128(0)),
						_mm_unpacklo_epi32(_mm_cvtsi32_si128(a1[45].m128_u32[2]), _mm_cvtsi32_si128(0))));
				v69 = _mm_cvtepi32_ps(_mm_unpacklo_epi32(v10, _mm_unpacklo_epi32(v9, _mm_cvtsi32_si128(0))));
				(*(void(__fastcall**)(unsigned __int64, _QWORD))(*(_QWORD*)v7 + 40i64))(v7, *(_QWORD*)(v8 + 96));
				v11 = a1[78].m128_u32[3];
				if (v11 >= *(_QWORD*)(qword_140C63678 + 48))
					v12 = *(_QWORD*)(qword_140C63678 + 40);
				else
					v12 = *(_QWORD*)(qword_140C63678 + 40) + 32 * v11;
				(*(void(__fastcall**)(__int64, unsigned __int64, _QWORD, __int64, __m128*, __int32, __int64, int, _QWORD))(*(_QWORD*)qword_140C65680 + 280i64))(
					qword_140C65680,
					a1[79].m128_u64[1],
					0i64,
					-1i64,
					&v69,
					a1[78].m128_i32[2] | 0x100,
					v12,
					1,
					0i64);
			}
		}
	}
	v13 = a1[2].m128_u64[0];
	v14 = _mm_cvtsi32_si128(a1[44].m128_u32[3]);
	v15 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(a1[45].m128_u32[0]), _mm_cvtsi32_si128(0));
	v70 = _mm_cvtepi32_ps(
		_mm_unpacklo_epi32(
			_mm_unpacklo_epi32(_mm_cvtsi32_si128(a1[45].m128_u32[1]), _mm_cvtsi32_si128(0)),
			_mm_unpacklo_epi32(_mm_cvtsi32_si128(a1[45].m128_u32[2]), _mm_cvtsi32_si128(0))));
	v16 = v70.m128_f32[0] + -2.0;
	v70.m128_f32[0] = v70.m128_f32[0] + -2.0;
	v17 = _mm_cvtepi32_ps(_mm_unpacklo_epi32(_mm_unpacklo_epi32(v14, _mm_cvtsi32_si128(0)), v15));
	v69 = v17;
	if (v13 && *(__m128**)(v13 + 2880) == a1 && (a1[41].m128_i32[2] & 0x800i64) != 0)
	{
		v16 = v16 - (float)(a1[85].m128_f32[0] - a1[84].m128_f32[0]);
		v70.m128_f32[0] = v16;
	}
	(*(void(__fastcall**)(unsigned __int64, _QWORD))(*(_QWORD*)a1[67].m128_u64[1] + 40i64))(
		a1[67].m128_u64[1],
		*(_QWORD*)(a1[43].m128_u64[1] + 96));
	v18 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1[43].m128_u64[1] + 96) + 24i64))(*(_QWORD*)(a1[43].m128_u64[1] + 96));
	v19 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1[43].m128_u64[1] + 96) + 32i64))(*(_QWORD*)(a1[43].m128_u64[1] + 96));
	v20 = a1[2].m128_u64[0];
	v21 = v69.m128_f32[0];
	v22 = (float*)v19;
	if (v20 && *(__m128**)(v20 + 2880) == a1)
	{
		v23 = a1[67].m128_u64[1];
		v24 = a1[64].m128_u64[0];
		v71 = 0.0;
		(*(void(__fastcall**)(unsigned __int64, unsigned __int64, float*))(*(_QWORD*)v23 + 168i64))(v23, v24, &v71);
		if ((a1[41].m128_i32[2] & 0x800i64) != 0 && **(_WORD**)(qword_140C63650 + 304))
		{
			v25 = v71 + (float)(a1[83].m128_f32[0] - a1[82].m128_f32[0]);
			v71 = v25;
		}
		else
		{
			v25 = v71;
		}
		v26 = a1[44].m128_i32[0];
		if ((v26 & 2) != 0)
		{
			v27 = a1[67].m128_u64[1];
			v72 = 0.0;
			v28 = *(_QWORD*)v27;
			v29 = (*(__int64(__fastcall**)(unsigned __int64))(*(_QWORD*)v27 + 72i64))(v27);
			(*(void(__fastcall**)(unsigned __int64, __int64, float*))(v28 + 168))(v27, v29, &v72);
			v30 = a1[66].m128_f32[3];
			v31 = (float)(v72 - (float)(v16 - v21)) + v30;
			v32 = v31 + (float)(v16 - v21);
			if (v71 >= v31)
			{
				if (v71 > v32)
					a1[66].m128_f32[3] = (float)(v71 - v32) + v30;
			}
			else
			{
				a1[66].m128_f32[3] = (float)((float)(v16 - v21) + v71) - v72;
			}
		}
		else if ((v26 & 1) == 0)
		{
			v33 = (float)(v25 + *(float*)(v18 + 12)) + 1.0;
			if (v33 <= (float)(a1[66].m128_f32[3] + (float)(v16 - v21)))
			{
				if (v25 < a1[66].m128_f32[3])
					a1[66].m128_f32[3] = fmaxf(0.0, v25);
			}
			else
			{
				a1[66].m128_f32[3] = v33 - (float)(v16 - v21);
			}
		}
	}
	else
	{
		a1[66].m128_i32[3] = 0;
	}
	v34 = (_QWORD*)a1[76].m128_u64[1];
	v35 = v70;
	v36 = (_QWORD*)*v34;
	if ((_QWORD*)*v34 != v34)
	{
		do
		{
			v37 = a1[67].m128_u64[1];
			v38 = (_QWORD*)v36[2];
			v71 = 0.0;
			v72 = 0.0;
			(*(void(__fastcall**)(unsigned __int64, _QWORD, float*))(*(_QWORD*)v37 + 168i64))(v37, *v38, &v71);
			(*(void(__fastcall**)(unsigned __int64, _QWORD, float*))(*(_QWORD*)a1[67].m128_u64[1] + 168i64))(
				a1[67].m128_u64[1],
				v38[1],
				&v72);
			v39 = (a1[44].m128_i8[0] & 4) == 0;
			v40 = a1[66].m128_f32[3];
			v65 = v17;
			v66 = v35;
			v66.m128_f32[0] = (float)(v21 + v72) - v40;
			v41 = v17.m128_f32[1];
			v65.m128_f32[0] = (float)(v21 + v71) - v40;
			if (!v39)
			{
				v41 = v17.m128_f32[1] + (float)((float)((float)(v66.m128_f32[1] - v17.m128_f32[1]) - *v22) * 0.5);
				v65.m128_f32[1] = v41;
			}
			v42 = a1[72].m128_u32[3];
			v66.m128_f32[1] = v41 + *v22;
			if (v42 >= *(_QWORD*)(qword_140C63678 + 48))
				v43 = *(__m128**)(qword_140C63678 + 40);
			else
				v43 = (__m128*)(*(_QWORD*)(qword_140C63678 + 40) + 32 * v42);
			v44 = (_QWORD*)a1[68].m128_u64[1];
			if (v44)
				sub_140103E60(
					v44,
					&v65,
					v43,
					0,
					COERCE_INT((float)(*(float*)&dword_140C63664 - a1[69].m128_f32[0]) * a1[69].m128_f32[1]));
			v36 = (_QWORD*)*v36;
		} while (v36 != (_QWORD*)a1[76].m128_u64[1]);
	}
	(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65680 + 144i64))(qword_140C65680, 1i64);
	v45 = a1[65].m128_u64[0];
	if (v45 < a1[65].m128_u64[1])
	{
		v46 = a1[2].m128_u64[0];
		if (v46)
		{
			if (*(__m128**)(v46 + 2880) == a1)
			{
				v47 = a1[67].m128_u64[1];
				v71 = 0.0;
				v72 = 0.0;
				(*(void(__fastcall**)(unsigned __int64, unsigned __int64, float*))(*(_QWORD*)v47 + 168i64))(v47, v45, &v71);
				(*(void(__fastcall**)(unsigned __int64, unsigned __int64, float*))(*(_QWORD*)a1[67].m128_u64[1] + 168i64))(
					a1[67].m128_u64[1],
					a1[65].m128_u64[1],
					&v72);
				v65 = v17;
				v66 = v35;
				v65.m128_f32[0] = v71 + v21;
				v66.m128_f32[0] = v72 + v21;
				sub_14010F3E0((__int64)a1, v69.m128_f32, v65.m128_f32);
				v48 = a1[72].m128_u32[2];
				if (v48 >= *(_QWORD*)(qword_140C63678 + 48))
					v49 = *(__m128**)(qword_140C63678 + 40);
				else
					v49 = (__m128*)(*(_QWORD*)(qword_140C63678 + 40) + 32 * v48);
				v50 = (_QWORD*)a1[68].m128_u64[1];
				if (v50)
					sub_140103E60(
						v50,
						&v65,
						v49,
						0,
						COERCE_INT((float)(*(float*)&dword_140C63664 - a1[69].m128_f32[0]) * a1[69].m128_f32[1]));
				(*(void(__fastcall**)(__int64, __int64, __m128*))(*(_QWORD*)qword_140C65680 + 144i64))(
					qword_140C65680,
					1i64,
					v49);
			}
		}
	}
	if ((a1[41].m128_i8[8] & 2) == 0
		&& (sub_14018CDF0() & 0x200) != 0
		&& (v51 = a1[2].m128_u64[0]) != 0
		&& *(__m128**)(v51 + 2880) == a1)
	{
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65680 + 144i64))(qword_140C65680, 1i64);
		v52 = a1[64].m128_u64[0];
		if (a1[81].m128_u64[1])
			v52 += *(int*)(qword_140C63650 + 260);
		(*(void(__fastcall**)(unsigned __int64, unsigned __int64, __m128*))(*(_QWORD*)a1[67].m128_u64[1] + 168i64))(
			a1[67].m128_u64[1],
			v52,
			&v65);
		if (a1[67].m128_i8[0])
		{
			if (v52 >= (*(__int64(__fastcall**)(unsigned __int64))(*(_QWORD*)a1[67].m128_u64[1] + 72i64))(a1[67].m128_u64[1]))
				v66.m128_i32[0] = v65.m128_i32[0];
			else
				(*(void(__fastcall**)(unsigned __int64, unsigned __int64, __m128*))(*(_QWORD*)a1[67].m128_u64[1] + 168i64))(
					a1[67].m128_u64[1],
					v52 + 1,
					&v66);
			v53 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1[43].m128_u64[1] + 96) + 32i64))(*(_QWORD*)(a1[43].m128_u64[1] + 96));
			v54 = *v22;
			v55 = *(float*)(v18 + 12);
			v66.m128_i32[0] = fmaxf(v66.m128_f32[0], v65.m128_f32[0] + *(float*)(v53 + 20));
			v66.m128_f32[1] = v55 + v54;
			v65.m128_f32[1] = v54 - v55;
		}
		else
		{
			v65.m128_i32[1] = 0;
			v66.m128_f32[0] = (float)(v65.m128_f32[0] + *(float*)(v18 + 12)) + 1.0;
			v66.m128_f32[1] = *v22;
		}
		v65 = _mm_add_ps(v65, v17);
		v66 = _mm_add_ps(v66, v17);
		sub_14010F3E0((__int64)a1, v69.m128_f32, v65.m128_f32);
		result = qword_140C63678;
		if ((*(_DWORD*)(qword_140C65678 + 64) & 0x2000) != 0)
		{
			v56 = a1[44].m128_u32[1];
			v57 = v56 >= *(_QWORD*)(qword_140C63678 + 48)
				? *(__m128**)(qword_140C63678 + 40)
				: (__m128*)(*(_QWORD*)(qword_140C63678 + 40) + 32 * v56);
			v58 = (_QWORD*)a1[68].m128_u64[1];
			if (v58)
			{
				sub_140103E60(
					v58,
					&v65,
					v57,
					0,
					COERCE_INT((float)(*(float*)&dword_140C63664 - a1[69].m128_f32[0]) * a1[69].m128_f32[1]));
				result = qword_140C63678;
			}
		}
		a1[74] = v65;
		a1[75] = v66;
	}
	else
	{
		result = qword_140C63678;
	}
	v59 = a1[44].m128_i32[0];
	*(float*)&v60 = v69.m128_f32[1] + *v22;
	v67.m128_u64[0] = __PAIR64__(v69.m128_u32[1], LODWORD(v21));
	v68.m128_u64[0] = __PAIR64__(v60, LODWORD(v16));
	if ((v59 & 4) != 0)
	{
		v67.m128_f32[1] = (float)((float)((float)(v70.m128_f32[1] - v69.m128_f32[1]) - *v22) * 0.5) + v69.m128_f32[1];
		v68.m128_f32[1] = v67.m128_f32[1] + *v22;
	}
	v61 = _mm_min_ps(
		v68,
		_mm_cvtepi32_ps(
			_mm_unpacklo_epi32(
				_mm_unpacklo_epi32(_mm_cvtsi32_si128(a1[45].m128_u32[1]), _mm_cvtsi32_si128(0)),
				_mm_unpacklo_epi32(_mm_cvtsi32_si128(a1[45].m128_u32[2]), _mm_cvtsi32_si128(0)))));
	v62 = _mm_max_ps(
		v67,
		_mm_cvtepi32_ps(
			_mm_unpacklo_epi32(
				_mm_unpacklo_epi32(_mm_cvtsi32_si128(a1[44].m128_u32[3]), _mm_cvtsi32_si128(0)),
				_mm_unpacklo_epi32(_mm_cvtsi32_si128(a1[45].m128_u32[0]), _mm_cvtsi32_si128(0)))));
	if (v62.m128_f32[0] < v61.m128_f32[0]
		&& _mm_shuffle_ps(v62, v62, 85).m128_f32[0] < _mm_shuffle_ps(v61, v61, 85).m128_f32[0])
	{
		v69 = v62;
		v70 = v61;
		if ((v59 & 2) != 0)
			v68.m128_f32[0] = v16 - a1[66].m128_f32[3];
		else
			v67.m128_f32[0] = v21 - a1[66].m128_f32[3];
		v63 = a1[44].m128_u32[1];
		if (v63 >= *(_QWORD*)(result + 48))
			v64 = *(_QWORD*)(result + 40);
		else
			v64 = *(_QWORD*)(result + 40) + 32 * v63;
		return (*(__int64(__fastcall**)(__int64, unsigned __int64, _QWORD, __int64, __m128*, __int32, __int64, int, _QWORD))(*(_QWORD*)qword_140C65680 + 280i64))(
			qword_140C65680,
			a1[67].m128_u64[1],
			0i64,
			-1i64,
			&v67,
			v59,
			v64,
			1,
			0i64);
	}
	return result;
}
// 14010FBDC: variable 'v49' is possibly undefined
// 140C63650: using guessed type __int64 qword_140C63650;
// 140C63664: using guessed type int dword_140C63664;
// 140C63678: using guessed type __int64 qword_140C63678;
// 140C65678: using guessed type __int64 qword_140C65678;
// 140C65680: using guessed type __int64 qword_140C65680;

