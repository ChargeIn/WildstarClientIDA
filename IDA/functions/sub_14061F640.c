//----- (000000014061F640) ----------------------------------------------------
__int64 __fastcall sub_14061F640(__int64 a1)
{
	__int64 v2; // rsi
	__int64 v3; // rax
	__int64 v4; // rcx
	char v5; // r14
	char v6; // r12
	__int64 v7; // r15
	__int64 v8; // rcx
	__int64 v10; // rcx
	__int64 v11; // rax
	__int64 v12; // rax
	_DWORD* v13; // rdi
	__int64 v14; // rdi
	__int64 v15; // rax
	__int64 v16; // rcx
	__int64 v17; // rdi
	__int64 v18; // rdx
	__int64 v19; // rax
	int v20; // eax
	__int64 v21; // rcx
	__int64 v22; // rax
	__int64 v23; // rax
	_DWORD* v24; // rdi
	__int64 v25; // rdi
	__int64 v26; // rax
	__int64 v27; // rcx
	__int64 v28; // rdi
	__int64 v29; // rax
	__int64 v30; // rcx
	__int64 v31; // rax
	__int64 v32; // rcx
	__m128 v33; // xmm0
	__m128 v34; // xmm1
	__m128 v35; // xmm0
	__m128 v36; // xmm1
	float v37; // xmm3_4
	__m128 v38; // xmm6
	__m128 v39; // xmm6
	__int64 v40; // rcx
	__m128i v41; // xmm1
	__m128 v42; // xmm0
	__m128 v43; // xmm2
	__int64 v44; // rcx
	__m128 v45; // xmm2
	__m128 v46; // [rsp+30h] [rbp-D0h] BYREF
	__m128 v47; // [rsp+40h] [rbp-C0h]
	__m128 v48; // [rsp+50h] [rbp-B0h]
	__int128 v49; // [rsp+60h] [rbp-A0h]
	__m128 v50; // [rsp+70h] [rbp-90h] BYREF
	__int128 v51; // [rsp+80h] [rbp-80h]
	__int128 v52; // [rsp+90h] [rbp-70h]
	__m128 v53; // [rsp+A0h] [rbp-60h]
	__int128 v54; // [rsp+B0h] [rbp-50h] BYREF
	__int128 v55; // [rsp+C0h] [rbp-40h]
	__int128 v56; // [rsp+D0h] [rbp-30h]
	__m128 v57; // [rsp+E0h] [rbp-20h]
	__m128 v58; // [rsp+F0h] [rbp-10h] BYREF
	__m128 v59; // [rsp+100h] [rbp+0h]
	__m128 v60; // [rsp+110h] [rbp+10h]
	__int128 v61; // [rsp+120h] [rbp+20h]
	__int64 v62; // [rsp+130h] [rbp+30h]

	v2 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(a1 + 900));
	v3 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(a1 + 904));
	v5 = 0;
	v6 = 0;
	v7 = v3;
	if (!v2 && !v3)
	{
		sub_1407E4830((int*)&v46, 0i64, 0x40ui64);
		v8 = *(_QWORD*)(a1 + 120);
		v62 = 0i64;
		v58 = v46;
		v59 = v47;
		v60 = v48;
		v61 = v49;
		return (*(__int64(__fastcall**)(__int64, __m128*))(*(_QWORD*)v8 + 320i64))(v8, &v58);
	}
	if (!*(_DWORD*)(a1 + 932) || !*(_QWORD*)(a1 + 48))
	{
		if (!v2)
			goto LABEL_31;
		v17 = *(_QWORD*)(v2 + 5864);
		if (v17)
		{
			if ((*(unsigned int(__fastcall**)(_QWORD, _QWORD))(*(_QWORD*)v17 + 848i64))(
				*(_QWORD*)(v2 + 5864),
				*(unsigned int*)(a1 + 940)))
			{
				goto LABEL_20;
			}
			v18 = *(unsigned int*)(a1 + 948);
			if ((_DWORD)v18)
			{
				v4 = *(_QWORD*)(v2 + 3264);
				if (v4)
				{
					v19 = (*(__int64(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)v4 + 112i64))(
						v4,
						v18,
						*(unsigned int*)(a1 + 952));
					v17 = v19;
					if (v19)
					{
						if ((*(unsigned int(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v19 + 848i64))(
							v19,
							*(unsigned int*)(a1 + 940)))
						{
							if ((*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v17 + 944i64))(v17))
							{
							LABEL_20:
								(*(void(__fastcall**)(__int64, _QWORD, __m128*, _QWORD))(*(_QWORD*)v17 + 888i64))(
									v17,
									*(unsigned int*)(a1 + 940),
									&v50,
									0i64);
								*(__m128*)(a1 + 400) = v53;
								if ((*(unsigned int(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 56) + 464i64))(
									*(_QWORD*)(a1 + 56),
									60i64))
								{
									(*(void(__fastcall**)(_QWORD, __int64, __int64, _QWORD))(**(_QWORD**)(a1 + 56) + 496i64))(
										*(_QWORD*)(a1 + 56),
										60i64,
										v17,
										*(unsigned int*)(a1 + 940));
									v5 = 1;
									goto LABEL_31;
								}
								goto LABEL_16;
							}
							v20 = *(_DWORD*)(a1 + 948);
							if (v20 == 20 || v20 == 7)
								*(_DWORD*)(a1 + 708) = 1;
						}
					}
				}
			}
		}
		*(_OWORD*)(a1 + 400) = *(_OWORD*)(v2 + 4656);
		goto LABEL_31;
	}
	if ((*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 128) + 328i64))(*(_QWORD*)(a1 + 128))
		&& (v11 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 128) + 328i64))(*(_QWORD*)(a1 + 128)),
			(*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)v11 + 848i64))(v11, 67i64)))
	{
		v12 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 128) + 328i64))(*(_QWORD*)(a1 + 128));
		v13 = (_DWORD*)(a1 + 400);
		(*(void(__fastcall**)(__int64, __int64, __int64))(*(_QWORD*)v12 + 872i64))(v12, 67i64, a1 + 400);
	}
	else
	{
		v14 = *(_QWORD*)(a1 + 80);
		if (v14
			&& (*(__int64(__fastcall**)(_QWORD))(*(_QWORD*)v14 + 968i64))(*(_QWORD*)(a1 + 80)) != v14
			&& (*(unsigned int(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 80) + 848i64))(
				*(_QWORD*)(a1 + 80),
				67i64))
		{
			v13 = (_DWORD*)(a1 + 400);
			(*(void(__fastcall**)(_QWORD, __int64, __int64))(**(_QWORD**)(a1 + 80) + 872i64))(
				*(_QWORD*)(a1 + 80),
				67i64,
				a1 + 400);
		}
		else
		{
			v13 = (_DWORD*)(a1 + 400);
			*(_OWORD*)(a1 + 400) = *(_OWORD*)(a1 + 432);
		}
	}
	v15 = sub_14061F3D0(v10, (__int64)&v46, (__m128*)(a1 + 352), (__m128*)(a1 + 336), v13);
	v16 = *(_QWORD*)(a1 + 56);
	v50 = *(__m128*)v15;
	v51 = *(_OWORD*)(v15 + 16);
	v52 = *(_OWORD*)(v15 + 32);
	v53 = *(__m128*)(v15 + 48);
	if ((*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)v16 + 464i64))(v16, 60i64))
		(*(void(__fastcall**)(_QWORD, __int64, __m128*))(**(_QWORD**)(a1 + 56) + 488i64))(
			*(_QWORD*)(a1 + 56),
			60i64,
			&v50);
LABEL_16:
	v5 = 1;
LABEL_31:
	if (*(_DWORD*)(a1 + 936) && *(_QWORD*)(a1 + 48))
	{
		if ((*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 128) + 328i64))(*(_QWORD*)(a1 + 128))
			&& (v22 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 128) + 328i64))(*(_QWORD*)(a1 + 128)),
				(*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)v22 + 848i64))(v22, 67i64)))
		{
			v23 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 128) + 328i64))(*(_QWORD*)(a1 + 128));
			v24 = (_DWORD*)(a1 + 416);
			(*(void(__fastcall**)(__int64, __int64, __int64))(*(_QWORD*)v23 + 872i64))(v23, 67i64, a1 + 416);
		}
		else
		{
			v25 = *(_QWORD*)(a1 + 80);
			if (v25
				&& (*(__int64(__fastcall**)(_QWORD))(*(_QWORD*)v25 + 968i64))(*(_QWORD*)(a1 + 80)) != v25
				&& (*(unsigned int(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 80) + 848i64))(
					*(_QWORD*)(a1 + 80),
					67i64))
			{
				v24 = (_DWORD*)(a1 + 416);
				(*(void(__fastcall**)(_QWORD, __int64, __int64))(**(_QWORD**)(a1 + 80) + 872i64))(
					*(_QWORD*)(a1 + 80),
					67i64,
					a1 + 416);
			}
			else
			{
				v24 = (_DWORD*)(a1 + 416);
				*(_OWORD*)(a1 + 416) = *(_OWORD*)(a1 + 432);
			}
		}
		v26 = sub_14061F3D0(v21, (__int64)&v46, (__m128*)(a1 + 352), (__m128*)(a1 + 336), v24);
		v27 = *(_QWORD*)(a1 + 56);
		v54 = *(_OWORD*)v26;
		v55 = *(_OWORD*)(v26 + 16);
		v56 = *(_OWORD*)(v26 + 32);
		v57 = *(__m128*)(v26 + 48);
		if ((*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)v27 + 464i64))(v27, 61i64))
			(*(void(__fastcall**)(_QWORD, __int64, __int128*))(**(_QWORD**)(a1 + 56) + 488i64))(
				*(_QWORD*)(a1 + 56),
				61i64,
				&v54);
		goto LABEL_43;
	}
	if (v7)
	{
		v28 = *(_QWORD*)(v7 + 5864);
		if (v28
			&& (*(unsigned int(__fastcall**)(_QWORD, _QWORD))(*(_QWORD*)v28 + 848i64))(
				*(_QWORD*)(v7 + 5864),
				*(unsigned int*)(a1 + 944)))
		{
			(*(void(__fastcall**)(__int64, _QWORD, __int128*, _QWORD))(*(_QWORD*)v28 + 888i64))(
				v28,
				*(unsigned int*)(a1 + 944),
				&v54,
				0i64);
			*(__m128*)(a1 + 416) = v57;
			if (!(*(unsigned int(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 56) + 464i64))(
				*(_QWORD*)(a1 + 56),
				61i64))
			{
			LABEL_43:
				v6 = 1;
				goto LABEL_50;
			}
			(*(void(__fastcall**)(_QWORD, __int64, __int64, _QWORD))(**(_QWORD**)(a1 + 56) + 496i64))(
				*(_QWORD*)(a1 + 56),
				61i64,
				v28,
				*(unsigned int*)(a1 + 944));
			v6 = 1;
		}
		else
		{
			*(_OWORD*)(a1 + 416) = *(_OWORD*)(v7 + 4656);
		}
	}
LABEL_50:
	if (!v5)
	{
		v29 = sub_14061F3D0(v4, (__int64)&v46, (__m128*)(a1 + 416), (__m128*)(a1 + 400), (_DWORD*)(a1 + 400));
		v30 = *(_QWORD*)(a1 + 56);
		v50 = *(__m128*)v29;
		v51 = *(_OWORD*)(v29 + 16);
		v52 = *(_OWORD*)(v29 + 32);
		v53 = *(__m128*)(v29 + 48);
		if ((*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)v30 + 464i64))(v30, 60i64))
			(*(void(__fastcall**)(_QWORD, __int64, __m128*))(**(_QWORD**)(a1 + 56) + 488i64))(
				*(_QWORD*)(a1 + 56),
				60i64,
				&v50);
	}
	if (!v6)
	{
		v31 = sub_14061F3D0(v4, (__int64)&v46, (__m128*)(a1 + 416), (__m128*)(a1 + 400), (_DWORD*)(a1 + 416));
		v32 = *(_QWORD*)(a1 + 56);
		v54 = *(_OWORD*)v31;
		v55 = *(_OWORD*)(v31 + 16);
		v56 = *(_OWORD*)(v31 + 32);
		v57 = *(__m128*)(v31 + 48);
		if ((*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)v32 + 464i64))(v32, 61i64))
			(*(void(__fastcall**)(_QWORD, __int64, __int128*))(**(_QWORD**)(a1 + 56) + 488i64))(
				*(_QWORD*)(a1 + 56),
				61i64,
				&v54);
	}
	v33 = (__m128)v53.m128_u32[1];
	v34 = (__m128)v53.m128_u32[2];
	v33.m128_f32[0] = v53.m128_f32[1] - v57.m128_f32[1];
	v34.m128_f32[0] = v53.m128_f32[2] - v57.m128_f32[2];
	v35 = _mm_and_ps(v33, (__m128)0x7FFFFFFFu);
	v36 = _mm_and_ps(v34, (__m128)0x7FFFFFFFu);
	if (v35.m128_f32[0] <= v36.m128_f32[0])
		v37 = v36.m128_f32[0];
	else
		v37 = v35.m128_f32[0];
	v38 = (__m128)v53.m128_u32[0];
	v38.m128_f32[0] = v53.m128_f32[0] - v57.m128_f32[0];
	v39 = _mm_and_ps(v38, (__m128)0x7FFFFFFFu);
	if (v39.m128_f32[0] <= v37)
	{
		if (v35.m128_f32[0] <= v36.m128_f32[0])
			v39 = v36;
		else
			v39 = v35;
	}
	v40 = *(_QWORD*)(a1 + 120);
	v62 = 0i64;
	v41 = (__m128i)_mm_mul_ps(_mm_add_ps(v57, v53), (__m128)xmmword_140B7AC50);
	v42 = _mm_shuffle_ps(v39, v39, 0);
	*(_QWORD*)&v49 = v41.m128i_i64[0];
	*((_QWORD*)&v49 + 1) = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v41, 8)) | 0x3F80000000000000i64;
	v58 = _mm_mul_ps((__m128)xmmword_140C78410, v42);
	v59 = _mm_mul_ps((__m128)xmmword_140C78420, v42);
	v60 = _mm_mul_ps((__m128)xmmword_140C78430, v42);
	v61 = v49;
	(*(void(__fastcall**)(__int64, __m128*))(*(_QWORD*)v40 + 320i64))(v40, &v58);
	v43 = _mm_mul_ps(v50, v50);
	v43.m128_f32[0] = fsqrt(
		(float)(v43.m128_f32[0] + _mm_shuffle_ps(v43, v43, 85).m128_f32[0])
		+ _mm_shuffle_ps(v43, v43, 170).m128_f32[0]);
	if (v39.m128_f32[0] > 0.0000099999997)
		v43.m128_f32[0] = v43.m128_f32[0] / v39.m128_f32[0];
	v44 = *(_QWORD*)(a1 + 56);
	v45 = _mm_shuffle_ps(v43, v43, 0);
	v46 = _mm_mul_ps((__m128)xmmword_140C78410, v45);
	v48 = _mm_mul_ps((__m128)xmmword_140C78430, v45);
	v47 = _mm_mul_ps((__m128)xmmword_140C78420, v45);
	v49 = xmmword_140C78440;
	return (*(__int64(__fastcall**)(__int64, __m128*))(*(_QWORD*)v44 + 72i64))(v44, &v46);
}
// 14061F7F7: variable 'v10' is possibly undefined
// 14061FA56: variable 'v21' is possibly undefined
// 14061FB68: variable 'v4' is possibly undefined
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;
// 140B7B500: using guessed type __int128 xmmword_140B7B500;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C78410: using guessed type __int128 xmmword_140C78410;
// 140C78420: using guessed type __int128 xmmword_140C78420;
// 140C78430: using guessed type __int128 xmmword_140C78430;
// 140C78440: using guessed type __int128 xmmword_140C78440;

