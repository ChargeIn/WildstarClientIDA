//----- (000000014061A840) ----------------------------------------------------
__int64 __fastcall sub_14061A840(__int64 a1, __int64 a2)
{
	__m128* v4; // rbx
	__m128* v5; // rax
	__m128* v6; // rax
	__m128 v7; // xmm1
	__m128 v8; // xmm1
	__m128 v9; // xmm5
	__m128 v10; // xmm4
	__m128 v11; // xmm3
	float v12; // xmm0_4
	unsigned int* v13; // rbx
	unsigned int v14; // r12d
	__int64 v15; // rax
	__int64 v16; // rbx
	__int64 v17; // rax
	__int64 v18; // rax
	_WORD* v19; // rdx
	__int64 result; // rax
	__int64 v21; // rcx
	unsigned int* v22; // rdi
	__int64 v23; // r14
	_WORD* v24; // rdx
	__int64 v25; // rcx
	__int64 v26; // rdi
	__int64 v27; // rcx
	_WORD* v28; // rdx
	_WORD* v29; // rdx
	_WORD* v30; // rdx
	_WORD* v31; // rdx
	__int64 v32; // rcx
	_WORD* v33; // rdx
	__int64 v34; // rcx
	double v35; // xmm6_8
	double v36; // xmm7_8
	float v37; // xmm11_4
	float v38; // xmm10_4
	float v39; // xmm9_4
	float v40; // xmm0_4
	__m128 v41; // xmm0
	float v42; // xmm3_4
	__m128 v43; // xmm0
	__m128 v44; // xmm1
	__m128 v45; // xmm0
	__m128 v46; // xmm2
	__int64 v47; // rcx
	int v48; // r12d
	int v49; // ebx
	__int128 v50; // xmm1
	__m128 v51; // xmm0
	__m128 v52; // xmm1
	__m128 v53; // xmm6
	float v54; // xmm6_4
	__int64 v55; // rax
	float v56; // xmm2_4
	float v57; // xmm0_4
	float v58; // xmm1_4
	int v59; // eax
	int v60; // edx
	int v61; // edx
	int* v62; // r14
	__int64 v63; // r15
	__int64 v64; // rbx
	int* v65; // rax
	int* v66; // rdi
	unsigned __int64 v67; // rbx
	int* v68; // r14
	__int64 v69; // r15
	__int64 v70; // rbx
	int* v71; // rax
	int* v72; // rdi
	unsigned __int64 v73; // rbx
	int* v74; // r14
	__int64 v75; // r15
	__int64 v76; // rbx
	int* v77; // rax
	int* v78; // rdi
	unsigned __int64 v79; // rbx
	__int64 v80; // [rsp+40h] [rbp-C0h] BYREF
	__int128 v81; // [rsp+48h] [rbp-B8h]
	__int64 v82; // [rsp+58h] [rbp-A8h]
	__m128 v83; // [rsp+60h] [rbp-A0h] BYREF
	_OWORD TlsValue[2]; // [rsp+70h] [rbp-90h] BYREF
	int v85[4]; // [rsp+90h] [rbp-70h] BYREF
	__int128 v86[4]; // [rsp+A0h] [rbp-60h] BYREF
	__m256 v87; // [rsp+E0h] [rbp-20h] BYREF
	__int128 v88; // [rsp+100h] [rbp+0h]
	__int128 v89; // [rsp+110h] [rbp+10h]
	__int64 v90; // [rsp+120h] [rbp+20h]

	sub_14061B670(a1 + 720, a2);
	v4 = (__m128*)sub_1403D90D0(qword_140C65898, *(_DWORD*)(a1 + 900));
	v5 = (__m128*)sub_1403D90D0(qword_140C65898, *(_DWORD*)(a1 + 904));
	if (v4)
		*(_OWORD*)(a1 + 576) = 0i64;
	if (*(char*)(a1 + 896) < 0)
	{
		if (v4)
		{
			*(__m128*)(a1 + 528) = v4[372];
			v6 = (__m128*)sub_1405B4520((__int64)v4, (__int64)v85);
			*(__m128*)(a1 + 480) = _mm_sub_ps(
				_mm_mul_ps(_mm_shuffle_ps(*v6, *v6, 210), _mm_shuffle_ps(v4[372], v4[372], 201)),
				_mm_mul_ps(_mm_shuffle_ps(*v6, *v6, 201), _mm_shuffle_ps(v4[372], v4[372], 210)));
		}
		else
		{
			if (!v5)
			{
			LABEL_9:
				v9 = *(__m128*)(a1 + 480);
				v10 = (__m128)0x40400000u;
				v11 = _mm_mul_ps(v9, v9);
				v11.m128_f32[0] = (float)(v11.m128_f32[0] + _mm_shuffle_ps(v11, v11, 85).m128_f32[0])
					+ _mm_shuffle_ps(v11, v11, 170).m128_f32[0];
				v12 = 1.0 / fsqrt(v11.m128_f32[0]);
				v10.m128_f32[0] = fmaxf((float)((float)(3.0 - (float)((float)(v11.m128_f32[0] * v12) * v12)) * 0.5) * v12, 0.0);
				*(__m128*)(a1 + 480) = _mm_mul_ps(_mm_shuffle_ps(v10, v10, 0), v9);
				goto LABEL_10;
			}
			*(__m128*)(a1 + 528) = v5[372];
			*(__m128*)(a1 + 480) = _mm_sub_ps(
				(__m128)0i64,
				_mm_sub_ps(
					_mm_mul_ps(
						_mm_shuffle_ps(v5[283], v5[283], 210),
						_mm_shuffle_ps(v5[372], v5[372], 201)),
					_mm_mul_ps(
						_mm_shuffle_ps(v5[283], v5[283], 201),
						_mm_shuffle_ps(v5[372], v5[372], 210))));
		}
		v7 = _mm_shuffle_ps(*(__m128*)(a1 + 480), *(__m128*)(a1 + 480), 136);
		v8 = _mm_mul_ps(v7, v7);
		*(float*)(a1 + 512) = sub_1408FD190(
			*(float*)(a1 + 484),
			fsqrt(v8.m128_f32[0] + _mm_shuffle_ps(v8, v8, 85).m128_f32[0]));
		goto LABEL_9;
	}
LABEL_10:
	v13 = 0i64;
	v14 = 0;
	if (*(_DWORD*)(a1 + 1004))
	{
		v15 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(a1 + 900));
		if (!v15)
			return 2147942487i64;
		v16 = *(_QWORD*)(v15 + 3264);
		if (!v16)
			return 2147942487i64;
		v17 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)v16 + 112i64))(
			v16,
			*(unsigned int*)(a1 + 1004),
			*(unsigned int*)(a1 + 1008));
		if (!v17)
			return 2147942487i64;
		*(_QWORD*)(a1 + 832) = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v17 + 48i64))(v17);
		v14 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v16 + 152i64))(v16);
		v13 = (unsigned int*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v16 + 144i64))(v16);
	}
	if (*(_DWORD*)(a1 + 968) == 1)
	{
		v18 = *(_QWORD*)(a1 + 832);
		*(_DWORD*)(a1 + 968) = 2;
		*(_QWORD*)(a1 + 832) = 0i64;
		*(_QWORD*)(a1 + 880) = v18;
	}
	v19 = *(_WORD**)(a1 + 832);
	if (v19 && *v19)
	{
		result = (*(__int64(__fastcall**)(_QWORD, _WORD*, __int64, _QWORD))(**(_QWORD**)(qword_140C65898 + 29264) + 40i64))(
			*(_QWORD*)(qword_140C65898 + 29264),
			v19,
			a1 + 48,
			0i64);
		if ((int)result < 0)
			return result;
		v21 = *(_QWORD*)(a1 + 48);
		if (v21)
		{
			v83 = _mm_mul_ps(
				_mm_cvtepi32_ps(
					_mm_shuffle_epi32(
						_mm_unpacklo_epi16(
							_mm_unpacklo_epi8(_mm_shuffle_epi32(_mm_cvtsi32_si128(*(_DWORD*)(a1 + 1056)), 0), (__m128i)0i64),
							(__m128i)0i64),
						198)),
				(__m128)xmmword_140B7AB70);
			(*(void(__fastcall**)(__int64, __m128*))(*(_QWORD*)v21 + 1136i64))(v21, &v83);
			if (v14)
			{
				v22 = v13;
				v23 = v14;
				do
				{
					(*(void(__fastcall**)(_QWORD, _QWORD, __int64))(**(_QWORD**)(a1 + 48) + 728i64))(
						*(_QWORD*)(a1 + 48),
						*v22++,
						1i64);
					--v23;
				} while (v23);
			}
		}
	}
	v24 = *(_WORD**)(a1 + 880);
	if (v24 && *v24)
	{
		result = (*(__int64(__fastcall**)(_QWORD, _WORD*, __int64, _QWORD))(**(_QWORD**)(qword_140C65898 + 29264) + 40i64))(
			*(_QWORD*)(qword_140C65898 + 29264),
			v24,
			a1 + 56,
			0i64);
		if ((int)result < 0)
			return result;
		v25 = *(_QWORD*)(a1 + 56);
		if (v25)
		{
			TlsValue[0] = _mm_mul_ps(
				_mm_cvtepi32_ps(
					_mm_shuffle_epi32(
						_mm_unpacklo_epi16(
							_mm_unpacklo_epi8(
								_mm_shuffle_epi32(_mm_cvtsi32_si128(*(_DWORD*)(a1 + 1052)), 0),
								(__m128i)0i64),
							(__m128i)0i64),
						198)),
				(__m128)xmmword_140B7AB70);
			(*(void(__fastcall**)(__int64, _OWORD*))(*(_QWORD*)v25 + 1136i64))(v25, TlsValue);
		}
		if (v14 && *(_QWORD*)(a1 + 56))
		{
			v26 = v14;
			do
			{
				(*(void(__fastcall**)(_QWORD, _QWORD, __int64))(**(_QWORD**)(a1 + 56) + 728i64))(
					*(_QWORD*)(a1 + 56),
					*v13++,
					1i64);
				--v26;
			} while (v26);
		}
		result = (*(__int64(__fastcall**)(_QWORD, const wchar_t*, __int64, _QWORD))(**(_QWORD**)(qword_140C65898 + 29264)
			+ 40i64))(
				*(_QWORD*)(qword_140C65898 + 29264),
				L"Art\\Dev\\BeamScale.m3",
				a1 + 64,
				0i64);
		if ((int)result < 0)
			return result;
		v27 = *(_QWORD*)(a1 + 64);
		v80 = 150i64;
		v81 = 0x3F800000ui64;
		v82 = 0i64;
		(*(void(__fastcall**)(__int64, _QWORD, __int64*))(*(_QWORD*)v27 + 584i64))(v27, 0i64, &v80);
		(*(void(__fastcall**)(_QWORD, __int64, _QWORD))(**(_QWORD**)(a1 + 64) + 896i64))(
			*(_QWORD*)(a1 + 64),
			9i64,
			*(_QWORD*)(a1 + 56));
	}
	v28 = *(_WORD**)(a1 + 848);
	if (!v28
		|| !*v28
		|| (result = (*(__int64(__fastcall**)(_QWORD, _WORD*, __int64, _QWORD))(**(_QWORD**)(qword_140C65898 + 29264)
			+ 40i64))(
				*(_QWORD*)(qword_140C65898 + 29264),
				v28,
				a1 + 72,
				0i64),
			(int)result >= 0))
	{
		v29 = *(_WORD**)(a1 + 856);
		if (!v29
			|| !*v29
			|| (result = (*(__int64(__fastcall**)(_QWORD, _WORD*, __int64, _QWORD))(**(_QWORD**)(qword_140C65898 + 29264)
				+ 40i64))(
					*(_QWORD*)(qword_140C65898 + 29264),
					v29,
					a1 + 80,
					0i64),
				(int)result >= 0))
		{
			v30 = *(_WORD**)(a1 + 864);
			if (!v30
				|| !*v30
				|| (result = (*(__int64(__fastcall**)(_QWORD, _WORD*, __int64, _QWORD))(**(_QWORD**)(qword_140C65898 + 29264)
					+ 40i64))(
						*(_QWORD*)(qword_140C65898 + 29264),
						v30,
						a1 + 88,
						0i64),
					(int)result >= 0))
			{
				v31 = *(_WORD**)(a1 + 840);
				if (v31 && *v31)
				{
					result = (*(__int64(__fastcall**)(_QWORD, _WORD*, __int64, _QWORD))(**(_QWORD**)(qword_140C65898 + 29264)
						+ 40i64))(
							*(_QWORD*)(qword_140C65898 + 29264),
							v31,
							a1 + 96,
							0i64);
					if ((int)result < 0)
						return result;
					v32 = *(_QWORD*)(a1 + 96);
					v80 = 150i64;
					v81 = 0x3F800000ui64;
					v82 = 0i64;
					(*(void(__fastcall**)(__int64, _QWORD, __int64*))(*(_QWORD*)v32 + 584i64))(v32, 0i64, &v80);
				}
				v33 = *(_WORD**)(a1 + 872);
				if (v33 && *v33)
				{
					result = (*(__int64(__fastcall**)(_QWORD, _WORD*, __int64, _QWORD))(**(_QWORD**)(qword_140C65898 + 29264)
						+ 40i64))(
							*(_QWORD*)(qword_140C65898 + 29264),
							v33,
							a1 + 104,
							0i64);
					if ((int)result < 0)
						return result;
					v34 = *(_QWORD*)(a1 + 104);
					v80 = 150i64;
					v81 = 0x3F800000ui64;
					v82 = 0i64;
					(*(void(__fastcall**)(__int64, _QWORD, __int64*))(*(_QWORD*)v34 + 584i64))(v34, 0i64, &v80);
					(*(void(__fastcall**)(_QWORD, __int64, _QWORD))(**(_QWORD**)(a1 + 48) + 896i64))(
						*(_QWORD*)(a1 + 48),
						168i64,
						*(_QWORD*)(a1 + 104));
				}
				if (*(float*)(a1 + 1024) == 0.0 && *(float*)(a1 + 1028) == 0.0)
				{
					*(_DWORD*)(a1 + 1028) = 1065353216;
					*(_DWORD*)(a1 + 1024) = 1065353216;
				}
				*(_QWORD*)&v35 = *(unsigned int*)(a1 + 816);
				*(_QWORD*)&v36 = *(unsigned int*)(a1 + 820);
				*(_DWORD*)(a1 + 660) = *(_DWORD*)(a1 + 1024);
				v37 = sub_1408FE3D0(v35);
				v38 = sub_1408FC950(v35);
				v39 = sub_1408FE3D0(v36);
				LODWORD(v36) = sub_1408FC950(v36);
				LODWORD(v35) = sub_1408FE3D0(COERCE_DOUBLE((unsigned __int64)*(_DWORD*)(a1 + 824)));
				v40 = sub_1408FC950(COERCE_DOUBLE((unsigned __int64)*(_DWORD*)(a1 + 824)));
				*(_DWORD*)(a1 + 156) = 0;
				*(_DWORD*)(a1 + 172) = 0;
				*(_DWORD*)(a1 + 188) = 0;
				*(float*)(a1 + 180) = -v37;
				*(float*)(a1 + 144) = (float)((float)(v39 * v37) * *(float*)&v35) + (float)(v40 * *(float*)&v36);
				*(float*)(a1 + 148) = *(float*)&v35 * v38;
				*(float*)(a1 + 152) = (float)((float)(*(float*)&v36 * v37) * *(float*)&v35) - (float)(v40 * v39);
				*(float*)(a1 + 164) = v40 * v38;
				*(float*)(a1 + 160) = (float)((float)(v39 * v37) * v40) - (float)(*(float*)&v35 * *(float*)&v36);
				*(float*)(a1 + 168) = (float)((float)(*(float*)&v36 * v37) * v40) + (float)(*(float*)&v35 * v39);
				*(float*)(a1 + 176) = v39 * v38;
				*(float*)(a1 + 184) = *(float*)&v36 * v38;
				v41 = (__m128)xmmword_140C78440;
				*(_OWORD*)(a1 + 192) = xmmword_140C78440;
				v42 = *(float*)(a1 + 1024);
				v41.m128_f32[0] = v42;
				*(float*)v85 = v42;
				*(float*)&v85[1] = v42;
				v43 = _mm_shuffle_ps(v41, v41, 0);
				v44 = _mm_mul_ps((__m128)xmmword_140C78410, v43);
				v43.m128_f32[0] = v42;
				*(float*)&v85[2] = v42;
				v45 = _mm_shuffle_ps(v43, v43, 0);
				v86[0] = (__int128)v44;
				v46 = _mm_mul_ps((__m128)xmmword_140C78420, v45);
				v45.m128_f32[0] = v42;
				v86[1] = (__int128)v46;
				v86[3] = xmmword_140C78440;
				v83.m128_u64[0] = (unsigned __int64)v86;
				v83.m128_u64[1] = a1 + 144;
				v86[2] = (__int128)_mm_mul_ps((__m128)xmmword_140C78430, _mm_shuffle_ps(v45, v45, 0));
				*(_QWORD*)v87.m256_f32 = v86;
				*(_QWORD*)&v87.m256_f32[2] = a1 + 144;
				sub_1401AFB10((__m128**) & v87, (__m128*)(a1 + 208));
				if (*(_QWORD*)(a1 + 48) || *(_QWORD*)(a1 + 56))
				{
					v90 = 0i64;
					v87 = ymmword_140C78390;
					v47 = *(_QWORD*)(qword_140C65898 + 29256);
					v88 = xmmword_140C783B0;
					v89 = xmmword_140C783C0;
					v48 = (*(__int64(__fastcall**)(__int64, _QWORD, __m256*, _QWORD, int, _DWORD, __int64, _DWORD))(*(_QWORD*)v47 + 184i64))(
						v47,
						0i64,
						&v87,
						0i64,
						1,
						0,
						a1 + 128,
						0);
					if (v48 >= 0)
					{
						*(_OWORD*)(a1 + 272) = *(_OWORD*)(a1 + 736);
						*(_OWORD*)(a1 + 288) = *(_OWORD*)(a1 + 752);
						*(_OWORD*)(a1 + 304) = *(_OWORD*)(a1 + 768);
						*(_OWORD*)(a1 + 320) = *(_OWORD*)(a1 + 784);
						sub_140622800(a1);
						*(_OWORD*)(a1 + 736) = *(_OWORD*)(a1 + 272);
						*(_OWORD*)(a1 + 752) = *(_OWORD*)(a1 + 288);
						*(_OWORD*)(a1 + 768) = *(_OWORD*)(a1 + 304);
						v50 = *(_OWORD*)(a1 + 320);
						*(_OWORD*)(a1 + 784) = v50;
						*(_OWORD*)(a1 + 400) = v50;
						*(_OWORD*)(a1 + 336) = v50;
						v51 = *(__m128*)(a1 + 800);
						*(__m128*)(a1 + 416) = v51;
						*(__m128*)(a1 + 352) = v51;
						if ((*(_BYTE*)(a1 + 896) & 8) != 0)
						{
							v52 = _mm_sub_ps(*(__m128*)(a1 + 336), v51);
							v53 = _mm_mul_ps(v52, v52);
							v54 = fsqrt(
								(float)(v53.m128_f32[0] + _mm_shuffle_ps(v53, v53, 85).m128_f32[0])
								+ _mm_shuffle_ps(v53, v53, 170).m128_f32[0]);
							if ((dword_140DC3E48 & 1) != 0)
							{
								v56 = *(float*)&dword_140DC3E4C;
							}
							else
							{
								dword_140DC3E48 |= 1u;
								v55 = sub_140200220(0x4ABu);
								if (v55)
								{
									v56 = *(float*)(v55 + 24);
									dword_140DC3E4C = LODWORD(v56);
								}
								else
								{
									v56 = 0.1;
									dword_140DC3E4C = 1036831949;
								}
							}
							if (v54 > 0.0)
							{
								v57 = (float)*(int*)(a2 + 256);
								if (v57 > 0.0 && v56 > 0.0 && v54 < (float)(v57 * v56))
									*(_DWORD*)(a1 + 976) = (int)fmaxf(v54 / v56, 1.0);
							}
						}
						if (*(_DWORD*)(a1 + 968) == 2)
						{
							v58 = *(float*)(a1 + 980);
							if (v58 <= 0.0)
								v58 = 0.0;
							v59 = *(_DWORD*)(a1 + 976);
							*(float*)(a1 + 980) = v58;
							if ((float)v59 == 0.0 && v58 == 0.0)
								*(_DWORD*)(a1 + 980) = 1084227584;
						}
						v60 = *(_DWORD*)(a1 + 956);
						if (v60)
						{
							LODWORD(v80) = 0;
							*(_QWORD*)&v81 = a1;
							*((_QWORD*)&v81 + 1) = sub_140622E60;
							v82 = 0i64;
							sub_140195960(a1 + 1072, v60, (__int64)&v80, 4);
						}
						else
						{
							sub_140622E60((_QWORD*)a1);
						}
						v61 = *(_DWORD*)(a1 + 960);
						if (v61 != -1
							&& (*(_DWORD*)(a1 + 896) & 0x400) == 0
							&& v61
							&& (*(_DWORD*)(a1 + 968) == 3 || *(_QWORD*)(a1 + 56)))
						{
							LODWORD(v80) = 0;
							*(_QWORD*)&v81 = a1;
							*((_QWORD*)&v81 + 1) = sub_140623150;
							v82 = 0i64;
							sub_140195960(a1 + 1144, v61, (__int64)&v80, 4);
						}
						v62 = *(int**)(a1 + 832);
						if (v62)
						{
							v63 = *(_QWORD*)(a1 + 1600);
							v64 = 0i64;
							if (*(_WORD*)v62)
							{
								do
									++v64;
								while (*((_WORD*)v62 + v64));
							}
							v65 = sub_14018B280(2 * v64 + 18, 0);
							if (v65)
							{
								*(_QWORD*)v65 = off_140B55060;
								*((_QWORD*)v65 + 1) = v64;
							}
							else
							{
								v65 = 0i64;
							}
							v66 = v65 + 4;
							v67 = 2 * v64;
							sub_1407DB590(v65 + 4, v62, v67);
							*(_WORD*)((char*)v66 + v67) = 0;
							*(_QWORD*)(a1 + 1600) = v66;
							if (v63)
								(*(void(__fastcall**)(__int64))(*(_QWORD*)(v63 - 16) + 8i64))(v63 - 16);
							*(_QWORD*)(a1 + 832) = *(_QWORD*)(a1 + 1600);
						}
						v68 = *(int**)(a1 + 872);
						if (v68)
						{
							v69 = *(_QWORD*)(a1 + 1608);
							v70 = 0i64;
							if (*(_WORD*)v68)
							{
								do
									++v70;
								while (*((_WORD*)v68 + v70));
							}
							v71 = sub_14018B280(2 * v70 + 18, 0);
							if (v71)
							{
								*(_QWORD*)v71 = off_140B55060;
								*((_QWORD*)v71 + 1) = v70;
							}
							else
							{
								v71 = 0i64;
							}
							v72 = v71 + 4;
							v73 = 2 * v70;
							sub_1407DB590(v71 + 4, v68, v73);
							*(_WORD*)((char*)v72 + v73) = 0;
							*(_QWORD*)(a1 + 1608) = v72;
							if (v69)
								(*(void(__fastcall**)(__int64))(*(_QWORD*)(v69 - 16) + 8i64))(v69 - 16);
							*(_QWORD*)(a1 + 872) = *(_QWORD*)(a1 + 1608);
						}
						v74 = *(int**)(a1 + 880);
						if (v74)
						{
							v75 = *(_QWORD*)(a1 + 1616);
							v76 = 0i64;
							if (*(_WORD*)v74)
							{
								do
									++v76;
								while (*((_WORD*)v74 + v76));
							}
							v77 = sub_14018B280(2 * v76 + 18, 0);
							if (v77)
							{
								*((_QWORD*)v77 + 1) = v76;
								*(_QWORD*)v77 = off_140B55060;
							}
							else
							{
								v77 = 0i64;
							}
							v78 = v77 + 4;
							v79 = 2 * v76;
							sub_1407DB590(v77 + 4, v74, v79);
							*(_WORD*)((char*)v78 + v79) = 0;
							*(_QWORD*)(a1 + 1616) = v78;
							if (v75)
								(*(void(__fastcall**)(__int64))(*(_QWORD*)(v75 - 16) + 8i64))(v75 - 16);
							*(_QWORD*)(a1 + 880) = *(_QWORD*)(a1 + 1616);
						}
						if (*(_DWORD*)(a1 + 1036)
							&& (*(_QWORD*)(a1 + 1624)
								|| (*(int(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65848 + 40i64))(
									qword_140C65848,
									a1 + 1624,
									0i64) >= 0))
						{
							(*(void(__fastcall**)(_QWORD, __int64, _QWORD, _QWORD))(**(_QWORD**)(a1 + 1624) + 32i64))(
								*(_QWORD*)(a1 + 1624),
								a1 + 1632,
								*(unsigned int*)(a1 + 1036),
								*(unsigned int*)(a1 + 1040));
						}
						if (*(_DWORD*)(a1 + 1044))
							(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65848 + 24i64))(
								qword_140C65848,
								a1 + 1640);
					}
					else
					{
						*(_QWORD*)&TlsValue[0] = &off_140B5E648;
						*((_QWORD*)&TlsValue[0] + 1) = 0i64;
						*(_QWORD*)&TlsValue[1] = TlsGetValue(dwTlsIndex);
						TlsSetValue(dwTlsIndex, TlsValue);
						v80 = *(_QWORD*)&TlsValue[0];
						v83.m128_u64[0] = 0x141E22030i64;
						v81 = *(_OWORD*)((char*)TlsValue + 8);
						v49 = sub_1401971E0(&dword_140C8AFEC, 5, &v83, &v80);
						*(_QWORD*)&TlsValue[0] = &off_140B5E648;
						TlsSetValue(dwTlsIndex, *(LPVOID*)&TlsValue[1]);
						if (v49)
							DebugBreak();
					}
					return (unsigned int)v48;
				}
				else
				{
					return 2147942487i64;
				}
			}
		}
	}
	return result;
}
// 14061ABEF: conditional instruction was optimized away because r12d.4!=0
// 140B27988: using guessed type wchar_t aArtDevBeamscal[21];
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140B7AB70: using guessed type __int128 xmmword_140B7AB70;
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C65848: using guessed type __int64 qword_140C65848;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C78390: using guessed type __m256 ymmword_140C78390;
// 140C783B0: using guessed type __int128 xmmword_140C783B0;
// 140C783C0: using guessed type __int128 xmmword_140C783C0;
// 140C78410: using guessed type __int128 xmmword_140C78410;
// 140C78420: using guessed type __int128 xmmword_140C78420;
// 140C78430: using guessed type __int128 xmmword_140C78430;
// 140C78440: using guessed type __int128 xmmword_140C78440;
// 140C8AFEC: using guessed type _DWORD dword_140C8AFEC;
// 140DC3E48: using guessed type int dword_140DC3E48;
// 140DC3E4C: using guessed type int dword_140DC3E4C;

