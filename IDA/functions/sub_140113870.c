//----- (0000000140113870) ----------------------------------------------------
__int64 __fastcall sub_140113870(__int64 a1)
{
	__int64 result; // rax
	unsigned int v3; // r15d
	__int64 v4; // rax
	__m128i v5; // xmm2
	__m128i v6; // xmm1
	__m128i v7; // xmm3
	float* v8; // rax
	__int64 v9; // rdx
	float v10; // xmm6_4
	int v11; // r14d
	int v12; // r14d
	float v13; // xmm8_4
	__int64 v14; // rdi
	__int64 v15; // rsi
	__int64 v16; // rdx
	__int64 v17; // r8
	float v18; // xmm1_4
	__int64 v19; // rax
	__m128 v20; // xmm6
	unsigned int* v21; // rax
	__m128i v22; // xmm3
	__m128i v23; // xmm1
	__m128 v24; // xmm2
	float v25; // xmm3_4
	float v26; // xmm2_4
	__int64 v27; // rax
	unsigned int v28; // edi
	int v29; // r13d
	__int64 v30; // rsi
	float v31; // xmm8_4
	float v32; // xmm1_4
	__int64 v33; // rcx
	int v34; // eax
	__int64 v35; // r14
	float v36; // xmm6_4
	unsigned __int64 v37; // r8
	__int64 v38; // r12
	__int64 v39; // r10
	__int64 v40; // r8
	unsigned __int64 v41; // r8
	__int64 v42; // r8
	unsigned __int64 v43; // r8
	__m128* v44; // r8
	__m128 v45; // [rsp+48h] [rbp-C0h] BYREF
	__m128 v46; // [rsp+58h] [rbp-B0h]
	__m128 v47; // [rsp+68h] [rbp-A0h] BYREF
	__m128 v48; // [rsp+78h] [rbp-90h]
	__m128 v49; // [rsp+88h] [rbp-80h] BYREF
	__m128 v50; // [rsp+98h] [rbp-70h]
	__int128 v51; // [rsp+A8h] [rbp-60h] BYREF
	__int64 v52; // [rsp+B8h] [rbp-50h] BYREF
	__int64 v53; // [rsp+C8h] [rbp-40h]
	__int128 v54; // [rsp+D8h] [rbp-30h] BYREF
	__int128 v55[2]; // [rsp+E8h] [rbp-20h] BYREF

	result = qword_140C63650;
	v3 = *(_DWORD*)(qword_140C63650 + 648);
	if (v3)
	{
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65680 + 64i64))(qword_140C65680, 6i64);
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65680 + 136i64))(qword_140C65680);
		v4 = *(_QWORD*)(a1 + 696);
		v5 = _mm_cvtsi32_si128(0);
		v6 = _mm_cvtsi32_si128(*(_DWORD*)(a1 + 720));
		v7 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD*)(a1 + 716)), v5);
		v46 = _mm_cvtepi32_ps(
			_mm_unpacklo_epi32(
				_mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD*)(a1 + 724)), v5),
				_mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD*)(a1 + 728)), v5)));
		v48 = v46;
		v45 = _mm_cvtepi32_ps(_mm_unpacklo_epi32(v7, _mm_unpacklo_epi32(v6, v5)));
		v47 = v45;
		v8 = (float*)(*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(v4 + 96) + 32i64))(*(_QWORD*)(v4 + 96));
		v9 = *(_QWORD*)(a1 + 696);
		v10 = 0.0;
		v51 = xmmword_140B7B240;
		v11 = (int)*v8;
		v52 = 0i64;
		v53 = 1137180672i64;
		v12 = v11 + 3;
		(*(void(__fastcall**)(__int64, _QWORD, const char*, __int64, __int64*, int, __int128*, int))(*(_QWORD*)qword_140C65680 + 264i64))(
			qword_140C65680,
			*(_QWORD*)(v9 + 96),
			"0",
			-1i64,
			&v52,
			1024,
			&v51,
			1);
		v13 = *(float*)&v53 - *(float*)&v52;
		v14 = 0i64;
		v15 = v3;
		do
		{
			v16 = *(_QWORD*)(a1 + 696);
			v17 = *(_QWORD*)(v14 + qword_140C63650 + 336);
			v49.m128_u64[0] = 0i64;
			v54 = xmmword_140B7B240;
			v50.m128_u64[0] = 1137180672i64;
			(*(void(__fastcall**)(__int64, _QWORD, __int64, __int64, __m128*, int, __int128*, int))(*(_QWORD*)qword_140C65680
				+ 264i64))(
					qword_140C65680,
					*(_QWORD*)(v16 + 96),
					v17,
					-1i64,
					&v49,
					1024,
					&v54,
					1);
			if (v10 < (float)(v50.m128_f32[0] - v49.m128_f32[0]))
				v10 = v50.m128_f32[0] - v49.m128_f32[0];
			v14 += 32i64;
			--v15;
		} while (v15);
		v18 = *(float*)(a1 + 1332) + 16.0;
		v45.m128_i32[0] = *(_DWORD*)(a1 + 1328);
		v45.m128_f32[1] = v18;
		v47 = _mm_sub_ps(v45, (__m128)xmmword_140B7B3C0);
		v46.m128_f32[0] = (float)((float)(v45.m128_f32[0] + v13) + 5.0) + v10;
		v19 = *(_QWORD*)(a1 + 32);
		v46.m128_f32[1] = (float)(int)(v3 * v12) + v18;
		v48 = _mm_add_ps(v46, (__m128)xmmword_140B7B3C0);
		v20 = _mm_cvtepi32_ps(
			_mm_unpacklo_epi32(
				_mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD*)(v19 + 80)), _mm_cvtsi32_si128(0)),
				_mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD*)(v19 + 84)), _mm_cvtsi32_si128(0))));
		v49 = 0i64;
		v21 = sub_1400CB470(a1, &v54);
		v22 = _mm_cvtsi32_si128(*v21);
		v23 = _mm_cvtsi32_si128(v21[1]);
		v50 = _mm_cvtepi32_ps(
			_mm_unpacklo_epi32(
				_mm_unpacklo_epi32(_mm_cvtsi32_si128(v21[2]), _mm_cvtsi32_si128(0)),
				_mm_unpacklo_epi32(_mm_cvtsi32_si128(v21[3]), _mm_cvtsi32_si128(0))));
		v24 = _mm_cvtepi32_ps(
			_mm_unpacklo_epi32(
				_mm_unpacklo_epi32(v22, _mm_cvtsi32_si128(0)),
				_mm_unpacklo_epi32(v23, _mm_cvtsi32_si128(0))));
		v49 = v47;
		if ((float)(v48.m128_f32[1] + _mm_shuffle_ps(v24, v24, 85).m128_f32[0]) > _mm_shuffle_ps(v20, v20, 85).m128_f32[0])
		{
			v25 = (float)((float)(*(float*)(a1 + 1332) - *(float*)(a1 + 1316)) + (float)(v48.m128_f32[1] - v47.m128_f32[1]))
				+ 16.0;
			v47.m128_f32[1] = v47.m128_f32[1] - v25;
			v48.m128_f32[1] = v48.m128_f32[1] - v25;
			v45.m128_f32[1] = v45.m128_f32[1] - v25;
			v46.m128_f32[1] = v46.m128_f32[1] - v25;
			if (**(_WORD**)(qword_140C63650 + 272))
			{
				v26 = *(float*)(a1 + 1392) - *(float*)(a1 + 1376);
				v47.m128_f32[0] = v47.m128_f32[0] + v26;
				v48.m128_f32[0] = v48.m128_f32[0] + v26;
				v45.m128_f32[0] = v45.m128_f32[0] + v26;
				v46.m128_f32[0] = v46.m128_f32[0] + v26;
			}
		}
		(*(void(__fastcall**)(__int64, __m128*))(*(_QWORD*)qword_140C65680 + 96i64))(qword_140C65680, &v47);
		v27 = *(_QWORD*)(a1 + 1152);
		v51 = xmmword_140B7B240;
		if (!v27 || !*(_QWORD*)v27)
		{
			v27 = *(_QWORD*)(a1 + 1144);
			if (!v27 || !*(_QWORD*)v27)
			{
				v27 = *(_QWORD*)(a1 + 792);
				if (!v27 || !*(_QWORD*)v27)
				{
					v27 = a1 + 744;
					if (!*(_QWORD*)(a1 + 744))
					{
						v27 = *(_QWORD*)(a1 + 736);
						if (!v27 || !*(_QWORD*)v27)
						{
							v27 = qword_140C63650 + 1848;
							v51 = xmmword_140C777F0;
						}
					}
				}
			}
		}
		if (v27 && *(_QWORD*)v27)
			sub_140103E60(
				*(_QWORD**)v27,
				&v47,
				(__m128*) & v51,
				0,
				COERCE_INT((float)(*(float*)&dword_140C63664 - *(float*)(v27 + 8)) * *(float*)(v27 + 12)));
		v28 = 0;
		v29 = *(_DWORD*)(qword_140C63650 + 660);
		v30 = *(int*)(qword_140C63650 + 664);
		v31 = v13 + 5.0;
		v32 = v45.m128_f32[1];
		v33 = qword_140C63678;
		v34 = v12;
		v35 = 0i64;
		v36 = (float)v34;
		while (1)
		{
			v37 = *(unsigned int*)(a1 + 1160);
			v38 = *(_QWORD*)(v35 + qword_140C63650 + 336);
			v39 = v30;
			v55[0] = (__int128)v45;
			v46.m128_f32[1] = v36 + v32;
			if (v30 > 9)
				v39 = 0i64;
			*(float*)v55 = v45.m128_f32[0] + v31;
			v55[1] = (__int128)v46;
			if (v37 >= *(_QWORD*)(v33 + 48))
				v40 = *(_QWORD*)(v33 + 40);
			else
				v40 = *(_QWORD*)(v33 + 40) + 32 * v37;
			(*(void(__fastcall**)(__int64, _QWORD, char*, __int64, __m128*, int, __int64, int))(*(_QWORD*)qword_140C65680
				+ 264i64))(
					qword_140C65680,
					*(_QWORD*)(*(_QWORD*)(a1 + 696) + 96i64),
					(&off_140A1C3D0)[v39],
					-1i64,
					&v45,
					260,
					v40,
					1);
			v41 = *(unsigned int*)(a1 + 1160);
			if (v41 >= *(_QWORD*)(qword_140C63678 + 48))
				v42 = *(_QWORD*)(qword_140C63678 + 40);
			else
				v42 = *(_QWORD*)(qword_140C63678 + 40) + 32 * v41;
			(*(void(__fastcall**)(__int64, _QWORD, __int64, __int64, __int128*, int, __int64, int))(*(_QWORD*)qword_140C65680
				+ 264i64))(
					qword_140C65680,
					*(_QWORD*)(*(_QWORD*)(a1 + 696) + 96i64),
					v38,
					-1i64,
					v55,
					260,
					v42,
					1);
			if (v28 == v29)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65680 + 136i64))(qword_140C65680);
				v33 = qword_140C63678;
				v43 = *(unsigned int*)(a1 + 1172);
				if (v43 >= *(_QWORD*)(qword_140C63678 + 48))
					v44 = *(__m128**)(qword_140C63678 + 40);
				else
					v44 = (__m128*)(*(_QWORD*)(qword_140C63678 + 40) + 32 * v43);
				if (!*(_QWORD*)(qword_140C63650 + 1848))
					goto LABEL_40;
				sub_140103E60(
					*(_QWORD**)(qword_140C63650 + 1848),
					&v45,
					v44,
					0,
					COERCE_INT(
						(float)(*(float*)&dword_140C63664 - *(float*)(qword_140C63650 + 1856))
						* *(float*)(qword_140C63650 + 1860)));
			}
			v33 = qword_140C63678;
		LABEL_40:
			++v28;
			v35 += 32i64;
			v32 = v45.m128_f32[1] + v36;
			++v30;
			v45.m128_f32[1] = v45.m128_f32[1] + v36;
			if (v28 >= v3)
				return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65680 + 72i64))(qword_140C65680);
		}
	}
	return result;
}
// 1401139D5: conditional instruction was optimized away because r15d.4!=0
// 140113D17: conditional instruction was optimized away because r15d.4!=0
// 140A1C3D0: using guessed type char *off_140A1C3D0;
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140B7B3C0: using guessed type __int128 xmmword_140B7B3C0;
// 140C63650: using guessed type __int64 qword_140C63650;
// 140C63664: using guessed type int dword_140C63664;
// 140C63678: using guessed type __int64 qword_140C63678;
// 140C65680: using guessed type __int64 qword_140C65680;
// 140C777F0: using guessed type __int128 xmmword_140C777F0;

