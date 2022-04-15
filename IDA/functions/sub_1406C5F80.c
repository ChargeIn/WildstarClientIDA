//----- (00000001406C5F80) ----------------------------------------------------
void __fastcall sub_1406C5F80(__int64 a1, unsigned int a2)
{
	void(__fastcall * **v4)(_QWORD, __int64); // rax
	int v5; // r14d
	int* v6; // r15
	int* v7; // rdi
	__int64* v8; // r13
	__int64 v9; // rax
	unsigned int v10; // ebx
	__int64 v11; // r11
	float* v12; // r12
	__int64 v13; // r8
	int v14; // r9d
	unsigned __int64 v15; // rax
	__m128* v16; // rax
	int v17; // ecx
	BOOL v18; // edx
	int v19; // ecx
	int v20; // ecx
	int v21; // ecx
	_QWORD* v22; // rax
	int* v23; // rcx
	__int128 v24; // xmm0
	__int64 v25; // xmm1_8
	__int64 v26; // rax
	__int64 j; // rax
	int* i; // rdx
	int* v29; // r8
	__int64 v30; // rbx
	__int64 v31; // rax
	__int64 v32; // r13
	unsigned __int64 v33; // rax
	int v34; // ebx
	__int64 v35; // rax
	__m128 v36; // xmm5
	__m128i v37; // xmm1
	__m128i v38; // xmm3
	__m128* v39; // rax
	__m128i v40; // xmm3
	__m128i v41; // xmm1
	int v42; // r9d
	__int64 v43; // r15
	int v44; // r9d
	int v45; // eax
	int v46; // eax
	unsigned __int64 v47; // rdx
	__int64 v48; // rdx
	float v49; // xmm1_4
	__int32 v50; // eax
	__m128 v51; // xmm6
	__m128 v52; // xmm0
	__m128 v53; // xmm4
	float v54; // xmm0_4
	float v55; // xmm4_4
	float v56; // xmm1_4
	float v57; // xmm0_4
	float v58; // xmm3_4
	float v59; // xmm0_4
	float v60; // xmm3_4
	float v61; // xmm2_4
	float v62; // xmm1_4
	float v63; // xmm0_4
	float v64; // xmm3_4
	unsigned __int64 v65; // rdx
	__int64 v66; // rdx
	unsigned __int64 v67; // rdx
	__int64 v68; // rdx
	_QWORD* v69; // r10
	int v70; // eax
	float v71; // xmm4_4
	float v72; // xmm0_4
	__int64 v73; // rcx
	float v74; // xmm0_4
	float v75; // xmm2_4
	__m128 v76; // [rsp+40h] [rbp-C0h] BYREF
	__m128 v77; // [rsp+50h] [rbp-B0h]
	__m128 v78; // [rsp+60h] [rbp-A0h] BYREF
	__m128 v79; // [rsp+70h] [rbp-90h] BYREF
	__m128 v80; // [rsp+80h] [rbp-80h]
	int v81[4]; // [rsp+90h] [rbp-70h] BYREF
	__int128 v82; // [rsp+A0h] [rbp-60h] BYREF
	__int64 v83; // [rsp+B0h] [rbp-50h]
	int v84; // [rsp+B8h] [rbp-48h]
	__int128 v85[4]; // [rsp+C0h] [rbp-40h] BYREF
	__m128 v86; // [rsp+100h] [rbp+0h] BYREF
	__m128 v87; // [rsp+110h] [rbp+10h]
	__m128 v88; // [rsp+120h] [rbp+20h]

	v4 = sub_1406C5440(a1);
	if (!v4 || !((unsigned int(__fastcall*)(void(__fastcall***)(_QWORD, __int64)))(*v4)[1])(v4))
		return;
	v5 = 0;
	v6 = sub_14018B280(16i64, 0);
	v7 = v6;
	v76.m128_u64[1] = (unsigned __int64)v6;
	v77.m128_u64[0] = (unsigned __int64)v6;
	v77.m128_u64[1] = (unsigned __int64)(v6 + 4);
	if (v6)
		*(_WORD*)v6 = 0;
	v8 = *(__int64**)(qword_140C65898 + 30088);
	v9 = (*(__int64(__fastcall**)(__int64*, _QWORD, _QWORD))(*v8 + 336))(v8, a2, 0i64);
	v10 = 0;
	v11 = v9;
	if (qword_140C65898 && (unsigned int)sub_14055A260((_DWORD*)(qword_140C65898 + 29488)))
	{
		if (v11 && *(_DWORD*)(v11 + 212))
			v10 = 2;
	}
	else if (v11 && *(_DWORD*)(v11 + 184))
	{
		v10 = 1;
	}
	v12 = 0i64;
	if (!v11)
		goto LABEL_35;
	v13 = 28i64 * v10;
	v14 = *(_DWORD*)(v13 + v11 + 156);
	if (v14 != 2)
		goto LABEL_31;
	v15 = *(unsigned int*)(a1 + 708);
	if (v15 >= *(_QWORD*)(qword_140C63678 + 48))
		v16 = *(__m128**)(qword_140C63678 + 40);
	else
		v16 = (__m128*)(*(_QWORD*)(qword_140C63678 + 40) + 32 * v15);
	v17 = *(_DWORD*)(v13 + v11 + 164);
	v18 = _mm_movemask_ps(_mm_cmpneq_ps((__m128)xmmword_140B7B240, *v16)) != 0;
	if (v17)
	{
		v19 = v17 - 1;
		if (v19)
		{
			v20 = v19 - 1;
			if (v20)
			{
				v21 = v20 - 3;
				if (v21)
				{
					if (v21 != 1)
						goto LABEL_31;
					v12 = (float*)(48i64 * v18 + a1 + 2856);
				}
				else
				{
					v12 = (float*)(48i64 * v18 + a1 + 2760);
				}
			}
			else
			{
				v12 = (float*)(48i64 * v18 + a1 + 2664);
			}
		}
		else
		{
			v12 = (float*)(48i64 * v18 + a1 + 2568);
		}
	}
	else
	{
		v12 = (float*)(48i64 * v18 + a1 + 2472);
	}
	if (v12)
	{
		v22 = (_QWORD*)(*(__int64(__fastcall**)(__int64*, __int128*, _QWORD, __int64))(*v8 + 256))(
			v8,
			&v82,
			*(unsigned int*)(v13 + v11 + 160),
			1i64);
		v23 = v6;
		v7 = (int*)v22[1];
		v22[1] = v6;
		v6 = (int*)v22[2];
		v22[2] = v23;
		v22[3] = v77.m128_u64[1];
		if (*((_QWORD*)&v82 + 1))
			sub_14018B900(*((__int64*)&v82 + 1), 0);
		goto LABEL_41;
	}
LABEL_31:
	if (!v14)
	{
	LABEL_35:
		v31 = 0i64;
		for (i = (int*)"'"; asc_140B39FF8[v31]; ++v31)
			;
		v29 = (int*)&asc_140B39FF8[v31];
		v30 = 2 * v31;
		goto LABEL_38;
	}
	v24 = *(_OWORD*)(v13 + v11 + 156);
	v25 = *(_QWORD*)(v13 + v11 + 172);
	v84 = *(_DWORD*)(v13 + v11 + 180);
	v26 = *v8;
	v82 = v24;
	v83 = v25;
	(*(void(__fastcall**)(__int64*, __int128*, __m128*, __int64, int))(v26 + 248))(v8, &v82, &v86, 32i64, 1);
	for (j = 0i64; v86.m128_i16[j]; ++j)
		;
	i = (int*)&v86;
	v29 = (int*)((char*)&v86 + 2 * j);
	v30 = 2 * j;
LABEL_38:
	if (v30 >> 1)
	{
		sub_14001C310(&v76, i, v29);
		v7 = (int*)v76.m128_u64[1];
		v6 = (int*)v77.m128_u64[0];
	}
	else
	{
		sub_1407DB590(v6, i, 0i64);
	}
LABEL_41:
	v32 = *(_QWORD*)(a1 + 3064);
	v33 = 0i64;
	v34 = 0;
	if (*(_WORD*)v7)
	{
		do
			++v33;
		while (*((_WORD*)v7 + v33));
		if (v33 > 1)
		{
			v32 = *(_QWORD*)(a1 + 3056);
			v34 = 16;
		}
	}
	if ((*(_DWORD*)(a1 + 664) & 0x2000i64) != 0 && v32)
	{
		v35 = *(_QWORD*)(a1 + 3056);
		v34 = 1;
		v36 = _mm_cvtepi32_ps(
			_mm_unpacklo_epi32(
				_mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD*)(a1 + 724)), _mm_cvtsi32_si128(0)),
				_mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD*)(a1 + 728)), _mm_cvtsi32_si128(0))));
		v37 = _mm_cvtsi32_si128(*(_DWORD*)(a1 + 720));
		v38 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD*)(a1 + 716)), _mm_cvtsi32_si128(0));
		v80 = v36;
		v79 = _mm_cvtepi32_ps(_mm_unpacklo_epi32(v38, _mm_unpacklo_epi32(v37, _mm_cvtsi32_si128(0))));
		v79.m128_f32[1] = _mm_shuffle_ps(v36, v36, 85).m128_f32[0] - *(float*)(v35 + 92);
	}
	else
	{
		v39 = sub_1406C5D70(a1, (__m128*) & v82);
		v40 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD*)(a1 + 3088)), _mm_cvtsi32_si128(0));
		v41 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD*)(a1 + 3092)), _mm_cvtsi32_si128(0));
		v79 = *v39;
		v36 = v39[1];
		v80 = v36;
		v79 = _mm_add_ps(_mm_cvtepi32_ps(_mm_unpacklo_epi32(v40, v41)), v79);
	}
	v42 = 0;
	v43 = ((char*)v6 - (char*)v7) >> 1;
	if (v43)
	{
		if (v12)
		{
			v44 = v34 & 1;
			if ((v34 & 1) != 0)
			{
				if (*(_QWORD*)v12)
				{
					sub_140101470(*(_QWORD**)v12, v81);
					v45 = v81[0];
				}
				else
				{
					v45 = 0;
				}
				v46 = v45 + 1;
				if (v44)
					v46 /= 2;
				v80.m128_f32[0] = v80.m128_f32[0] - (float)v46;
				v79.m128_f32[0] = v79.m128_f32[0] - (float)v46;
				v36 = v80;
			}
		}
		v47 = *(unsigned int*)(a1 + 708);
		v76 = v79;
		v77 = v36;
		if (v47 >= *(_QWORD*)(qword_140C63678 + 48))
			v48 = *(_QWORD*)(qword_140C63678 + 40);
		else
			v48 = *(_QWORD*)(qword_140C63678 + 40) + 32 * v47;
		(*(void(__fastcall**)(__int64, _QWORD, int*, __int64, __m128*, int, __int64, int))(*(_QWORD*)qword_140C65680
			+ 264i64))(
				qword_140C65680,
				*(_QWORD*)(v32 + 96),
				v7,
				-1i64,
				&v76,
				v34 | 0x400,
				v48,
				1);
		v49 = v77.m128_f32[0];
		v81[0] = (int)(float)(v77.m128_f32[0] + 1.0);
		if (v12)
		{
			if (*(_QWORD*)v12)
			{
				sub_140101470(*(_QWORD**)v12, (int*)&v78);
				v50 = v78.m128_i32[0];
			}
			else
			{
				v50 = 0;
			}
			v49 = v49 + (float)(v50 + 1);
			v77.m128_f32[0] = v49;
		}
		if ((float)(v49 - v76.m128_f32[0]) <= (float)(v80.m128_f32[0] - v79.m128_f32[0]))
		{
			v67 = *(unsigned int*)(a1 + 708);
			if (v67 >= *(_QWORD*)(qword_140C63678 + 48))
				v68 = *(_QWORD*)(qword_140C63678 + 40);
			else
				v68 = *(_QWORD*)(qword_140C63678 + 40) + 32 * v67;
			(*(void(__fastcall**)(__int64, _QWORD, int*, __int64, __m128*, int, __int64, int))(*(_QWORD*)qword_140C65680
				+ 264i64))(
					qword_140C65680,
					*(_QWORD*)(v32 + 96),
					v7,
					-1i64,
					&v79,
					v34,
					v68,
					1);
		}
		else
		{
			(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65680 + 64i64))(qword_140C65680, 1i64);
			v51 = (__m128)v80.m128_u32[0];
			v51.m128_f32[0] = (float)(v80.m128_f32[0] - v79.m128_f32[0]) / (float)(v77.m128_f32[0] - v76.m128_f32[0]);
			v85[0] = (__int128)_mm_mul_ps(*(__m128*)ymmword_140C78410.m256_f32, _mm_shuffle_ps(v51, v51, 0));
			v85[1] = (__int128)_mm_mul_ps(*(__m128*) & ymmword_140C78410.m256_f32[4], (__m128)xmmword_140B7B240);
			v85[2] = (__int128)_mm_mul_ps((__m128)xmmword_140C78430, (__m128)xmmword_140B7B240);
			v85[3] = xmmword_140C78440;
			v52 = ((__m128 (__fastcall*)(__int64, __int128*)) * (_QWORD*)(*(_QWORD*)qword_140C65680 + 88i64))(
				qword_140C65680,
				v85);
			v52.m128_f32[0] = 1.0 / v51.m128_f32[0];
			v88 = _mm_mul_ps((__m128)xmmword_140C78430, (__m128)xmmword_140B7B240);
			v53 = _mm_mul_ps(*(__m128*)ymmword_140C78410.m256_f32, _mm_shuffle_ps(v52, v52, 0));
			v86 = v53;
			v87 = _mm_mul_ps(*(__m128*) & ymmword_140C78410.m256_f32[4], (__m128)xmmword_140B7B240);
			v78 = _mm_unpacklo_ps(
				_mm_unpacklo_ps((__m128)xmmword_140C78440, (__m128)0i64),
				_mm_unpacklo_ps(_mm_shuffle_ps((__m128)xmmword_140C78440, (__m128)xmmword_140C78440, 85), (__m128)0i64));
			v82 = (__int128)v78;
			if (v53.m128_f32[0] <= 0.0)
			{
				v54 = v53.m128_f32[0] * v80.m128_f32[0];
				v55 = v53.m128_f32[0] * v79.m128_f32[0];
			}
			else
			{
				v54 = v53.m128_f32[0] * v79.m128_f32[0];
				v55 = v53.m128_f32[0] * v80.m128_f32[0];
			}
			v56 = v78.m128_f32[0] + v54;
			if (v87.m128_f32[0] <= 0.0)
			{
				v57 = v87.m128_f32[0] * v80.m128_f32[1];
				v58 = v87.m128_f32[0] * v79.m128_f32[1];
			}
			else
			{
				v57 = v87.m128_f32[0] * v79.m128_f32[1];
				v58 = v87.m128_f32[0] * v80.m128_f32[1];
			}
			*(float*)&v82 = (float)(v78.m128_f32[0] + v55) + v58;
			v78.m128_f32[0] = v56 + v57;
			if (v86.m128_f32[1] <= 0.0)
			{
				v59 = v86.m128_f32[1] * v80.m128_f32[0];
				v60 = v86.m128_f32[1] * v79.m128_f32[0];
			}
			else
			{
				v59 = v86.m128_f32[1] * v79.m128_f32[0];
				v60 = v86.m128_f32[1] * v80.m128_f32[0];
			}
			v61 = *((float*)&v82 + 1) + v60;
			v62 = v78.m128_f32[1] + v59;
			if (v87.m128_f32[1] <= 0.0)
			{
				v63 = v87.m128_f32[1] * v80.m128_f32[1];
				v64 = v87.m128_f32[1] * v79.m128_f32[1];
			}
			else
			{
				v63 = v87.m128_f32[1] * v79.m128_f32[1];
				v64 = v87.m128_f32[1] * v80.m128_f32[1];
			}
			v65 = *(unsigned int*)(a1 + 708);
			v78.m128_f32[1] = v62 + v63;
			*((float*)&v82 + 1) = v61 + v64;
			v79 = v78;
			v80 = (__m128)v82;
			if (v65 >= *(_QWORD*)(qword_140C63678 + 48))
				v66 = *(_QWORD*)(qword_140C63678 + 40);
			else
				v66 = *(_QWORD*)(qword_140C63678 + 40) + 32 * v65;
			(*(void(__fastcall**)(__int64, _QWORD, int*, __int64, __m128*, int, __int64, int))(*(_QWORD*)qword_140C65680
				+ 264i64))(
					qword_140C65680,
					*(_QWORD*)(v32 + 96),
					v7,
					-1i64,
					&v79,
					v34,
					v66,
					1);
			(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65680 + 72i64))(qword_140C65680);
		}
		v42 = v81[0];
		v36 = v80;
	}
	if (v12)
	{
		v69 = *(_QWORD**)v12;
		v77 = v36;
		v76 = v79;
		if (v69)
		{
			sub_140101470(v69, (int*)&v78);
			v70 = v78.m128_i32[0];
		}
		else
		{
			v70 = 0;
		}
		v71 = 0.5;
		if (v43)
		{
			v76.m128_f32[0] = (float)v42;
			v77.m128_f32[0] = (float)(v42 + v70);
		}
		else if ((v34 & 1) != 0)
		{
			v72 = (float)(int)(float)((float)((float)(v77.m128_f32[0] - v76.m128_f32[0]) - (float)v70) * 0.5);
			v76.m128_f32[0] = v76.m128_f32[0] + v72;
			v77.m128_f32[0] = v77.m128_f32[0] - v72;
		}
		if (v69)
		{
			sub_140101470(v69, (int*)&v78);
			v5 = v78.m128_i32[1];
		}
		v73 = *(_QWORD*)(a1 + 3056);
		v74 = (float)(int)(float)((float)(*(float*)(v73 + 92) - (float)v5) * v71);
		v76.m128_f32[1] = v76.m128_f32[1] + v74;
		v75 = (float)(v76.m128_f32[1] + *(float*)(v73 + 92)) - v74;
		v82 = xmmword_140B7B240;
		v77.m128_f32[1] = v75;
		if (v69)
			sub_140103E60(v69, &v76, (__m128*) & v82, 0, COERCE_INT((float)(*(float*)&dword_140C63664 - v12[2]) * v12[3]));
	}
	sub_14018B900((__int64)v7, 0);
}
// 1406C640A: conditional instruction was optimized away because bl.1 is in (<2u|==10)
// 1406C6894: conditional instruction was optimized away because bl.1 is in (<2u|==10)
// 1406C6066: variable 'v11' is possibly undefined
// 1406C642B: variable 'v44' is possibly undefined
// 1406C68BE: variable 'v42' is possibly undefined
// 1406C68D0: variable 'v69' is possibly undefined
// 1406C6902: variable 'v71' is possibly undefined
// 140B39FF8: using guessed type _WORD asc_140B39FF8[4];
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140C63664: using guessed type int dword_140C63664;
// 140C63678: using guessed type __int64 qword_140C63678;
// 140C65680: using guessed type __int64 qword_140C65680;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C78410: using guessed type __m256 ymmword_140C78410;
// 140C78430: using guessed type __int128 xmmword_140C78430;
// 140C78440: using guessed type __int128 xmmword_140C78440;
// 1406C5F80: using guessed type int var_120[4];

