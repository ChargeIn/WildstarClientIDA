#include "../winhttp.h"

//----- (00000001405D3870) ----------------------------------------------------
__int64 __fastcall sub_1405D3870(__int64 a1, int a2, int a3, int a4, int a5)
{
	bool v5; // zf
	int v7; // esi
	unsigned int v8; // edx
	int v9; // eax
	__int64 v10; // rbx
	int v11; // xmm1_4
	float v12; // xmm0_4
	int v13; // eax
	__int64 v14; // rcx
	int v15; // eax
	int v16; // xmm1_4
	__m128 v17; // xmm3
	float v18; // xmm11_4
	__m128 v19; // xmm1
	__m128 v20; // xmm15
	float v21; // xmm2_4
	float v22; // xmm0_4
	__m128 v23; // xmm1
	__m128i v24; // xmm3
	__m128 v25; // xmm3
	__m128 v26; // xmm1
	float v27; // xmm2_4
	__m128 v28; // xmm1
	float v29; // xmm0_4
	__m128i v30; // xmm1
	__m128i v31; // xmm2
	int v32; // ecx
	int v33; // ecx
	__int64 v34; // rcx
	unsigned int v35; // edx
	int v36; // eax
	__int64 v37; // rbx
	int v38; // edx
	__int64 v39; // rax
	__m128* v40; // r14
	__int64 v41; // rbx
	float v42; // xmm6_4
	float v43; // xmm0_4
	__m128 v44; // xmm0
	int v45; // ecx
	__m128 v46; // xmm10
	int v47; // ecx
	__int64 v48; // rcx
	unsigned int v49; // edx
	int v50; // eax
	__int64 v51; // rbx
	int v52; // eax
	float v53; // xmm11_4
	float v54; // xmm8_4
	float v55; // xmm3_4
	float v56; // xmm6_4
	float v57; // xmm7_4
	float v58; // xmm2_4
	float v59; // xmm9_4
	float v60; // xmm4_4
	float v61; // xmm8_4
	float v62; // xmm5_4
	float v63; // xmm11_4
	float v64; // xmm6_4
	__m128 v65; // xmm1
	float v66; // xmm0_4
	int v67; // edx
	__int64 v68; // rax
	__int64 v69; // r14
	__int64 v70; // rbx
	float v71; // xmm6_4
	__int128 v72; // xmm0
	__m128 v73; // xmm3
	__m128 v74; // xmm1
	float v75; // xmm2_4
	__m128 v76; // xmm1
	float v77; // xmm0_4
	__m128 v78; // xmm2
	__m128i v79; // xmm3
	__m128 v80; // xmm3
	__m128 v81; // xmm1
	float v82; // xmm2_4
	float v83; // xmm0_4
	__m128i v84; // xmm15
	__m128i v85; // xmm2
	float* v86; // rax
	int v87; // ecx
	__int64 v88; // rdx
	__int64 v89; // rbx
	int v90; // eax
	int v91; // eax
	unsigned int v93; // edx
	int v94; // eax
	__int64 v95; // rbx
	int v96; // eax
	int v97; // ebx
	__int128* v98; // r8
	int v99; // [rsp+50h] [rbp-B0h]
	int v100; // [rsp+50h] [rbp-B0h]
	__int64 v101[2]; // [rsp+70h] [rbp-90h] BYREF
	__m128 v102; // [rsp+80h] [rbp-80h] BYREF
	__int128 v103; // [rsp+90h] [rbp-70h]
	__m128 v104; // [rsp+A0h] [rbp-60h]
	__int128 v105; // [rsp+B0h] [rbp-50h]
	__m128 v106; // [rsp+C0h] [rbp-40h] BYREF
	__m128i v107; // [rsp+D0h] [rbp-30h] BYREF
	int v108[2]; // [rsp+E0h] [rbp-20h] BYREF
	__int64 v109; // [rsp+E8h] [rbp-18h]
	__m128 v110; // [rsp+F0h] [rbp-10h]
	__m128 v111; // [rsp+100h] [rbp+0h]
	__int128 v112; // [rsp+110h] [rbp+10h]
	__int128 v113; // [rsp+120h] [rbp+20h] BYREF
	__m128 v114; // [rsp+130h] [rbp+30h] BYREF
	__int128 v115; // [rsp+140h] [rbp+40h] BYREF

	v5 = *(_DWORD*)(a1 + 1044) == 0;
	*(_DWORD*)(a1 + 1052) = a2;
	*(_DWORD*)(a1 + 1056) = a3;
	*(_DWORD*)(a1 + 1060) = a4;
	*(_DWORD*)(a1 + 1064) = a5;
	if (!v5)
	{
		*(_DWORD*)(a1 + 752) = *(_DWORD*)(a1 + 944);
		*(_OWORD*)(a1 + 768) = *(_OWORD*)(a1 + 960);
		*(_OWORD*)(a1 + 784) = *(_OWORD*)(a1 + 976);
		*(_DWORD*)(a1 + 768) = *(_DWORD*)(a1 + 960);
		*(_DWORD*)(a1 + 772) = *(_DWORD*)(a1 + 964);
		*(_DWORD*)(a1 + 776) = *(_DWORD*)(a1 + 968);
		*(_DWORD*)(a1 + 780) = *(_DWORD*)(a1 + 972);
		*(_DWORD*)(a1 + 768) = *(_DWORD*)(a1 + 960);
		*(_DWORD*)(a1 + 772) = *(_DWORD*)(a1 + 964);
		*(_DWORD*)(a1 + 776) = *(_DWORD*)(a1 + 968);
		*(_DWORD*)(a1 + 780) = *(_DWORD*)(a1 + 972);
		*(_DWORD*)(a1 + 784) = *(_DWORD*)(a1 + 976);
		*(_DWORD*)(a1 + 800) = *(_DWORD*)(a1 + 992);
		*(_OWORD*)(a1 + 816) = *(_OWORD*)(a1 + 1008);
		*(_OWORD*)(a1 + 832) = *(_OWORD*)(a1 + 1024);
		*(_DWORD*)(a1 + 816) = *(_DWORD*)(a1 + 1008);
		*(_DWORD*)(a1 + 820) = *(_DWORD*)(a1 + 1012);
		*(_DWORD*)(a1 + 824) = *(_DWORD*)(a1 + 1016);
		*(_DWORD*)(a1 + 828) = *(_DWORD*)(a1 + 1020);
		*(_DWORD*)(a1 + 816) = *(_DWORD*)(a1 + 1008);
		*(_DWORD*)(a1 + 820) = *(_DWORD*)(a1 + 1012);
		*(_DWORD*)(a1 + 824) = *(_DWORD*)(a1 + 1016);
		*(_DWORD*)(a1 + 828) = *(_DWORD*)(a1 + 1020);
		*(_DWORD*)(a1 + 832) = *(_DWORD*)(a1 + 1024);
	}
	*(_DWORD*)(a1 + 944) = *(_DWORD*)(a1 + 848);
	*(_OWORD*)(a1 + 960) = *(_OWORD*)(a1 + 864);
	*(_OWORD*)(a1 + 976) = *(_OWORD*)(a1 + 880);
	*(_DWORD*)(a1 + 960) = *(_DWORD*)(a1 + 864);
	*(_DWORD*)(a1 + 964) = *(_DWORD*)(a1 + 868);
	*(_DWORD*)(a1 + 968) = *(_DWORD*)(a1 + 872);
	*(_DWORD*)(a1 + 972) = *(_DWORD*)(a1 + 876);
	*(_DWORD*)(a1 + 960) = *(_DWORD*)(a1 + 864);
	*(_DWORD*)(a1 + 964) = *(_DWORD*)(a1 + 868);
	*(_DWORD*)(a1 + 968) = *(_DWORD*)(a1 + 872);
	*(_DWORD*)(a1 + 972) = *(_DWORD*)(a1 + 876);
	*(_DWORD*)(a1 + 976) = *(_DWORD*)(a1 + 880);
	*(_DWORD*)(a1 + 992) = *(_DWORD*)(a1 + 896);
	*(_OWORD*)(a1 + 1008) = *(_OWORD*)(a1 + 912);
	*(_OWORD*)(a1 + 1024) = *(_OWORD*)(a1 + 928);
	*(_DWORD*)(a1 + 1008) = *(_DWORD*)(a1 + 912);
	*(_DWORD*)(a1 + 1012) = *(_DWORD*)(a1 + 916);
	*(_DWORD*)(a1 + 1016) = *(_DWORD*)(a1 + 920);
	*(_DWORD*)(a1 + 1020) = *(_DWORD*)(a1 + 924);
	*(_DWORD*)(a1 + 1008) = *(_DWORD*)(a1 + 912);
	*(_DWORD*)(a1 + 1012) = *(_DWORD*)(a1 + 916);
	*(_DWORD*)(a1 + 1016) = *(_DWORD*)(a1 + 920);
	*(_DWORD*)(a1 + 1020) = *(_DWORD*)(a1 + 924);
	*(_DWORD*)(a1 + 1024) = *(_DWORD*)(a1 + 928);
	if (!a2)
	{
		v7 = 0;
		*(_DWORD*)(a1 + 752) = *(_DWORD*)(a1 + 848);
		*(_OWORD*)(a1 + 768) = *(_OWORD*)(a1 + 864);
		*(_OWORD*)(a1 + 784) = *(_OWORD*)(a1 + 880);
		*(_DWORD*)(a1 + 768) = *(_DWORD*)(a1 + 864);
		*(_DWORD*)(a1 + 772) = *(_DWORD*)(a1 + 868);
		*(_DWORD*)(a1 + 776) = *(_DWORD*)(a1 + 872);
		*(_DWORD*)(a1 + 780) = *(_DWORD*)(a1 + 876);
		*(_DWORD*)(a1 + 768) = *(_DWORD*)(a1 + 864);
		*(_DWORD*)(a1 + 772) = *(_DWORD*)(a1 + 868);
		*(_DWORD*)(a1 + 776) = *(_DWORD*)(a1 + 872);
		*(_DWORD*)(a1 + 780) = *(_DWORD*)(a1 + 876);
		*(_DWORD*)(a1 + 784) = *(_DWORD*)(a1 + 880);
		*(_DWORD*)(a1 + 800) = *(_DWORD*)(a1 + 896);
		*(_OWORD*)(a1 + 816) = *(_OWORD*)(a1 + 912);
		*(_OWORD*)(a1 + 832) = *(_OWORD*)(a1 + 928);
		*(_DWORD*)(a1 + 816) = *(_DWORD*)(a1 + 912);
		*(_DWORD*)(a1 + 820) = *(_DWORD*)(a1 + 916);
		*(_DWORD*)(a1 + 824) = *(_DWORD*)(a1 + 920);
		*(_DWORD*)(a1 + 828) = *(_DWORD*)(a1 + 924);
		*(_DWORD*)(a1 + 816) = *(_DWORD*)(a1 + 912);
		*(_DWORD*)(a1 + 820) = *(_DWORD*)(a1 + 916);
		*(_DWORD*)(a1 + 824) = *(_DWORD*)(a1 + 920);
		*(_DWORD*)(a1 + 828) = *(_DWORD*)(a1 + 924);
		*(_DWORD*)(a1 + 832) = *(_DWORD*)(a1 + 928);
		v5 = *(_DWORD*)(a1 + 752) == 2;
		*(_DWORD*)(a1 + 720) = dword_140C636A8;
		*(_DWORD*)(a1 + 80) = 1065353216;
		if (v5)
		{
			v8 = *(_DWORD*)(a1 + 768);
			v101[0] = 0i64;
			v9 = sub_140633CB0(a1, v8, v101);
			v10 = v101[0];
			if (v9 >= 0)
			{
				v99 = *(_DWORD*)(a1 + 772);
				v113 = 0i64;
				(*(void(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, __int64*, int, __int128*, int))(*(_QWORD*)v101[0] + 144i64))(
					v101[0],
					*(_QWORD*)v101[0],
					0i64,
					0i64,
					0i64,
					0i64,
					0i64,
					0i64,
					0i64,
					v101,
					v99,
					&v113,
					-1082130432);
				v11 = v101[0];
				if (*(float*)v101 != 0.0)
				{
					*(_DWORD*)(a1 + 20) = v101[0];
					*(_DWORD*)(a1 + 16) = v11;
				}
			}
			if (v10)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v10 + 8i64))(v10);
		}
		v5 = *(_DWORD*)(a1 + 688) == 0;
		*(_QWORD*)(a1 + 1040) = 0i64;
		LOBYTE(v7) = v5;
		*(_DWORD*)(a1 + 696) = v7;
		return 1i64;
	}
	*(_DWORD*)(a1 + 1048) = a3;
	*(_DWORD*)(a1 + 944) = *(_DWORD*)(a1 + 848);
	*(_OWORD*)(a1 + 960) = *(_OWORD*)(a1 + 864);
	*(_OWORD*)(a1 + 976) = *(_OWORD*)(a1 + 880);
	*(_DWORD*)(a1 + 960) = *(_DWORD*)(a1 + 864);
	*(_DWORD*)(a1 + 964) = *(_DWORD*)(a1 + 868);
	*(_DWORD*)(a1 + 968) = *(_DWORD*)(a1 + 872);
	*(_DWORD*)(a1 + 972) = *(_DWORD*)(a1 + 876);
	*(_DWORD*)(a1 + 960) = *(_DWORD*)(a1 + 864);
	*(_DWORD*)(a1 + 964) = *(_DWORD*)(a1 + 868);
	*(_DWORD*)(a1 + 968) = *(_DWORD*)(a1 + 872);
	*(_DWORD*)(a1 + 972) = *(_DWORD*)(a1 + 876);
	*(_DWORD*)(a1 + 976) = *(_DWORD*)(a1 + 880);
	*(_DWORD*)(a1 + 992) = *(_DWORD*)(a1 + 896);
	*(_OWORD*)(a1 + 1008) = *(_OWORD*)(a1 + 912);
	v12 = *(float*)&dword_140C3B438 * 0.0055555557;
	*(_OWORD*)(a1 + 1024) = *(_OWORD*)(a1 + 928);
	*(_DWORD*)(a1 + 1008) = *(_DWORD*)(a1 + 912);
	*(_DWORD*)(a1 + 1012) = *(_DWORD*)(a1 + 916);
	*(_DWORD*)(a1 + 1016) = *(_DWORD*)(a1 + 920);
	*(_DWORD*)(a1 + 1020) = *(_DWORD*)(a1 + 924);
	*(_DWORD*)(a1 + 1008) = *(_DWORD*)(a1 + 912);
	*(_DWORD*)(a1 + 1012) = *(_DWORD*)(a1 + 916);
	*(_DWORD*)(a1 + 1016) = *(_DWORD*)(a1 + 920);
	*(_DWORD*)(a1 + 1020) = *(_DWORD*)(a1 + 924);
	*(_DWORD*)(a1 + 1024) = *(_DWORD*)(a1 + 928);
	v13 = dword_140C4DEA0;
	if (*(_DWORD*)qword_140C63750 < dword_140C4DEA0)
		v13 = *(_DWORD*)qword_140C63750;
	v14 = v13;
	v15 = *(_DWORD*)(a1 + 1052);
	*(float*)(a1 + 1140) = v12 * *((float*)&off_140C4DE90 + v14 + 8);
	if (v15 == 1)
	{
		*(_DWORD*)(a1 + 1044) = 1;
		*(_OWORD*)(a1 + 1072) = *(_OWORD*)(a1 + 32);
		v16 = *(_DWORD*)(a1 + 20);
		*(_DWORD*)(a1 + 16) = v16;
		*(_DWORD*)(a1 + 1136) = v16;
		v17 = _mm_sub_ps(*(__m128*)(a1 + 32), *(__m128*)(a1 + 64));
		v103 = *(_OWORD*)&ymmword_140C78390.m256_f32[4];
		v102 = *(__m128*)ymmword_140C78390.m256_f32;
		v105 = xmmword_140C783C0;
		v18 = 0.5;
		v19 = _mm_mul_ps(v17, v17);
		v113 = 0x3F000000u;
		v20 = (__m128)0x40400000u;
		v21 = (float)(v19.m128_f32[0] + _mm_shuffle_ps(v19, v19, 85).m128_f32[0])
			+ _mm_shuffle_ps(v19, v19, 170).m128_f32[0];
		v22 = 1.0 / fsqrt(v21);
		v23 = (__m128)0x40400000u;
		v23.m128_f32[0] = fmaxf((float)((float)(3.0 - (float)((float)(v21 * v22) * v22)) * 0.5) * v22, 0.0);
		v114 = _mm_mul_ps(_mm_shuffle_ps(v23, v23, 0), v17);
		v104.m128_u64[0] = v114.m128_u64[0];
		v104.m128_u64[1] = __PAIR64__(HIDWORD(xmmword_140C783B0), _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v114, 8)));
		if (fabs(v114.m128_f32[0]) > 0.0000099999997 || fabs(v114.m128_f32[2]) > 0.0000099999997)
		{
			v25 = _mm_sub_ps(
				_mm_mul_ps(
					_mm_shuffle_ps(v104, v104, 210),
					_mm_shuffle_ps(*(__m128*)(a1 + 704), *(__m128*)(a1 + 704), 201)),
				_mm_mul_ps(
					_mm_shuffle_ps(v104, v104, 201),
					_mm_shuffle_ps(*(__m128*)(a1 + 704), *(__m128*)(a1 + 704), 210)));
			v26 = _mm_mul_ps(v25, v25);
			v27 = (float)(v26.m128_f32[0] + _mm_shuffle_ps(v26, v26, 85).m128_f32[0])
				+ _mm_shuffle_ps(v26, v26, 170).m128_f32[0];
			v28 = (__m128)0x40400000u;
			v29 = fsqrt(v27);
			v28.m128_f32[0] = fmaxf(
				(float)((float)(3.0 - (float)((float)(v27 * (float)(1.0 / v29)) * (float)(1.0 / v29))) * 0.5)
				* (float)(1.0 / v29),
				0.0);
			v30 = (__m128i)_mm_mul_ps(_mm_shuffle_ps(v28, v28, 0), v25);
			v102.m128_u64[0] = v30.m128i_i64[0];
			v102.m128_i32[2] = _mm_cvtsi128_si32(_mm_srli_si128(v30, 8));
			v31 = (__m128i)_mm_sub_ps(
				_mm_mul_ps(_mm_shuffle_ps(v102, v102, 210), _mm_shuffle_ps(v104, v104, 201)),
				_mm_mul_ps(_mm_shuffle_ps(v102, v102, 201), _mm_shuffle_ps(v104, v104, 210)));
			*(_QWORD*)&v103 = v31.m128i_i64[0];
			DWORD2(v103) = _mm_cvtsi128_si32(_mm_srli_si128(v31, 8));
		}
		else
		{
			v102.m128_u64[0] = xmmword_140C77860;
			v102.m128_i32[2] = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)xmmword_140C77860, 8));
			v24 = (__m128i)_mm_sub_ps(
				_mm_mul_ps(_mm_shuffle_ps(v102, v102, 210), _mm_shuffle_ps(v104, v104, 201)),
				_mm_mul_ps(_mm_shuffle_ps(v102, v102, 201), _mm_shuffle_ps(v104, v104, 210)));
			*(_QWORD*)&v103 = v24.m128i_i64[0];
			DWORD2(v103) = _mm_cvtsi128_si32(_mm_srli_si128(v24, 8));
		}
		*(_OWORD*)(a1 + 1104) = *(_OWORD*)sub_1401B1D60((float*)v108, v102.m128_f32);
		v32 = *(_DWORD*)(a1 + 992);
		if (v32)
		{
			v33 = v32 - 1;
			if (v33)
			{
				v34 = (unsigned int)(v33 - 1);
				if (!(_DWORD)v34)
				{
					v35 = *(_DWORD*)(a1 + 1008);
					v101[0] = 0i64;
					v36 = sub_140633CB0(v34, v35, v101);
					v37 = v101[0];
					if (v36 >= 0)
					{
						v115 = 0i64;
						(*(void(__fastcall**)(__int64, _QWORD, __m128*, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, __int128*, int))(*(_QWORD*)v101[0] + 144i64))(
							v101[0],
							*(_QWORD*)v101[0],
							&v106,
							0i64,
							0i64,
							0i64,
							0i64,
							0i64,
							0i64,
							0i64,
							*(_DWORD*)(a1 + 1012),
							&v115,
							-1082130432);
					}
					if (v37)
						(*(void(__fastcall**)(__int64))(*(_QWORD*)v37 + 8i64))(v37);
				}
			LABEL_33:
				v45 = *(_DWORD*)(a1 + 944);
				v46 = (__m128)xmmword_140C77870;
				if (v45)
				{
					v47 = v45 - 1;
					if (v47)
					{
						v48 = (unsigned int)(v47 - 1);
						if (!(_DWORD)v48)
						{
							v49 = *(_DWORD*)(a1 + 960);
							v101[0] = 0i64;
							v50 = sub_140633CB0(v48, v49, v101);
							v51 = v101[0];
							if (v50 < 0)
							{
								v114 = (__m128)xmmword_140C78450;
							}
							else
							{
								v107 = 0i64;
								(*(void(__fastcall**)(__int64, _QWORD, __int64, _QWORD, _QWORD, __m128*, _QWORD, _QWORD, _QWORD, __int64*, _DWORD, __m128i*, int))(*(_QWORD*)v101[0] + 144i64))(
									v101[0],
									*(_QWORD*)v101[0],
									a1 + 1088,
									0i64,
									0i64,
									&v114,
									0i64,
									0i64,
									0i64,
									v101,
									*(_DWORD*)(a1 + 964),
									&v107,
									-1082130432);
								if (*(float*)v101 == 0.0)
								{
									v52 = dword_140C4DEA0;
									if (*(_DWORD*)qword_140C63750 < dword_140C4DEA0)
										v52 = *(_DWORD*)qword_140C63750;
									*(float*)(a1 + 1140) = (float)(*(float*)&dword_140C3B438 * 0.0055555557)
										* *((float*)&off_140C4DE90 + v52 + 8);
								}
								else
								{
									*(_DWORD*)(a1 + 1140) = v101[0];
								}
							}
							if (*(_DWORD*)(a1 + 968))
							{
								v110.m128_i32[3] = 0;
								v53 = _mm_shuffle_ps(v114, v114, 85).m128_f32[0];
								v54 = _mm_shuffle_ps(v114, v114, 170).m128_f32[0];
								v55 = v54 * 2.0;
								v56 = _mm_shuffle_ps(v114, v114, 255).m128_f32[0];
								v57 = v56 * (float)(v53 * 2.0);
								v58 = (float)(v53 * 2.0) * v114.m128_f32[0];
								v59 = v56 * (float)(v114.m128_f32[0] * 2.0);
								v60 = (float)(v54 * 2.0) * v114.m128_f32[0];
								v61 = v54 * (float)(v54 * 2.0);
								v62 = v53 * (float)(v53 * 2.0);
								v63 = v53 * v55;
								v64 = v56 * v55;
								v111.m128_f32[0] = v60 + v57;
								v109 = COERCE_UNSIGNED_INT(v60 - v57);
								*(float*)v108 = (float)(1.0 - v62) - v61;
								v110.m128_f32[2] = v63 + v59;
								v65 = *(__m128*)(a1 + 1088);
								v110.m128_f32[0] = v58 - v64;
								*(float*)&v108[1] = v58 + v64;
								v111.m128_f32[1] = v63 - v59;
								v18 = *(float*)&v113;
								v66 = 1.0 - (float)((float)(v114.m128_f32[0] * 2.0) * v114.m128_f32[0]);
								v111.m128_u64[1] = COERCE_UNSIGNED_INT(v66 - v62);
								v110.m128_f32[1] = v66 - v61;
								v46 = v110;
								v112 = xmmword_140B7AD00;
								v106 = _mm_sub_ps(v65, v111);
							}
							if (v51)
								(*(void(__fastcall**)(__int64))(*(_QWORD*)v51 + 8i64))(v51);
						}
						goto LABEL_55;
					}
					v67 = *(_DWORD*)(a1 + 960);
					if (!v67 || (v68 = sub_1403D90D0(qword_140C65898, v67), (v69 = v68) == 0))
					{
					LABEL_55:
						v73 = _mm_sub_ps(*(__m128*)(a1 + 1088), v106);
						v74 = _mm_mul_ps(v73, v73);
						v75 = (float)(v74.m128_f32[0] + _mm_shuffle_ps(v74, v74, 85).m128_f32[0])
							+ _mm_shuffle_ps(v74, v74, 170).m128_f32[0];
						v76 = (__m128)0x40400000u;
						v77 = 1.0 / fsqrt(v75);
						v76.m128_f32[0] = fmaxf((float)((float)(3.0 - (float)((float)(v75 * v77) * v77)) * v18) * v77, 0.0);
						v107 = (__m128i)_mm_mul_ps(_mm_shuffle_ps(v76, v76, 0), v73);
						v104.m128_u64[0] = v107.m128i_i64[0];
						v104.m128_i32[2] = _mm_cvtsi128_si32(_mm_srli_si128(v107, 8));
						if (fabs(*(float*)v107.m128i_i32) > 0.0000099999997
							|| fabs(*(float*)&v107.m128i_i32[2]) > 0.0000099999997)
						{
							v80 = _mm_sub_ps(
								_mm_mul_ps(_mm_shuffle_ps(v104, v104, 210), _mm_shuffle_ps(v46, v46, 201)),
								_mm_mul_ps(_mm_shuffle_ps(v104, v104, 201), _mm_shuffle_ps(v46, v46, 210)));
							v81 = _mm_mul_ps(v80, v80);
							v82 = (float)(v81.m128_f32[0] + _mm_shuffle_ps(v81, v81, 85).m128_f32[0])
								+ _mm_shuffle_ps(v81, v81, 170).m128_f32[0];
							v83 = 1.0 / fsqrt(v82);
							v20.m128_f32[0] = fmaxf((float)((float)(3.0 - (float)((float)(v82 * v83) * v83)) * v18) * v83, 0.0);
							v84 = (__m128i)_mm_mul_ps(_mm_shuffle_ps(v20, v20, 0), v80);
							v102.m128_u64[0] = v84.m128i_i64[0];
							v102.m128_i32[2] = _mm_cvtsi128_si32(_mm_srli_si128(v84, 8));
							v85 = (__m128i)_mm_sub_ps(
								_mm_mul_ps(_mm_shuffle_ps(v104, v104, 201), _mm_shuffle_ps(v102, v102, 210)),
								_mm_mul_ps(_mm_shuffle_ps(v104, v104, 210), _mm_shuffle_ps(v102, v102, 201)));
							*(_QWORD*)&v103 = v85.m128i_i64[0];
							v78 = (__m128)_mm_srli_si128(v85, 8);
							DWORD2(v103) = _mm_cvtsi128_si32((__m128i)v78);
						}
						else
						{
							v102.m128_u64[0] = xmmword_140C77860;
							v102.m128_i32[2] = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)xmmword_140C77860, 8));
							v78 = _mm_shuffle_ps(v104, v104, 201);
							v79 = (__m128i)_mm_sub_ps(
								_mm_mul_ps(_mm_shuffle_ps(v102, v102, 210), v78),
								_mm_mul_ps(_mm_shuffle_ps(v102, v102, 201), _mm_shuffle_ps(v104, v104, 210)));
							*(_QWORD*)&v103 = v79.m128i_i64[0];
							v80 = (__m128)_mm_srli_si128(v79, 8);
							DWORD2(v103) = _mm_cvtsi128_si32((__m128i)v80);
						}
						v86 = sub_1401B1D60((float*)v108, v102.m128_f32);
						v87 = dword_140C636A8;
						*(_OWORD*)(a1 + 1120) = *(_OWORD*)v86;
						v88 = *(unsigned int*)(a1 + 1056);
						*(_DWORD*)(a1 + 1144) = v87;
						*(_DWORD*)(a1 + 1148) = v88 + v87;
						if ((_DWORD)v88)
							*(float*)(a1 + 1152) = 1.0 / (float)(int)v88;
						else
							*(_DWORD*)(a1 + 1152) = 1232348160;
						*(_DWORD*)(a1 + 1040) = 0;
						*(_DWORD*)(a1 + 720) = v87;
						if (*(_DWORD*)(a1 + 688))
						{
							sub_1405CC9A0(*(_QWORD*)(qword_140C65898 + 29080), v88, *(double*)v78.m128_u64, *(double*)v80.m128_u64);
							v89 = qword_140C65898;
							*(_DWORD*)(a1 + 696) = 0;
							if (*(_DWORD*)(v89 + 29776))
							{
								v90 = *(_DWORD*)(v89 + 29820);
								if (v90 <= 0)
								{
									if (*(float*)(v89 + 29760) != 0.0 || (float)0.0 != *(float*)(v89 + 29764))
									{
										v91 = dword_140C636A8;
										*(_QWORD*)(v89 + 29760) = 0i64;
										*(_DWORD*)(v89 + 29752) = 0;
										*(_DWORD*)(v89 + 29744) = v91;
									}
								}
								else
								{
									sub_1400C3230(v89 + 29736, 1.0, 0.0, 1000.0 / (float)v90);
								}
								*(_DWORD*)(v89 + 29768) = 1;
								*(_QWORD*)(v89 + 29772) = 1065353216i64;
							}
						}
						else
						{
							*(_DWORD*)(a1 + 696) = 1;
						}
						return 1i64;
					}
					v70 = *(_QWORD*)(v68 + 5864);
					if (v70 && (*(unsigned int(__fastcall**)(_QWORD))(*(_QWORD*)v70 + 1072i64))(*(_QWORD*)(v68 + 5864)))
					{
						*(_OWORD*)(a1 + 1088) = *(_OWORD*)(v69 + 4576);
						v71 = *(float*)(v69 + 4804);
						*(float*)(a1 + 1092) = (float)((*(float(__fastcall**)(__int64))(*(_QWORD*)v70 + 1096i64))(v70) * v71)
							+ *(float*)(a1 + 1092);
						goto LABEL_55;
					}
					v72 = *(_OWORD*)(v69 + 4656);
				}
				else
				{
					v72 = *(_OWORD*)(a1 + 960);
				}
				*(_OWORD*)(a1 + 1088) = v72;
				goto LABEL_55;
			}
			v38 = *(_DWORD*)(a1 + 1008);
			if (!v38)
				goto LABEL_33;
			v39 = sub_1403D90D0(qword_140C65898, v38);
			v40 = (__m128*)v39;
			if (!v39)
				goto LABEL_33;
			v41 = *(_QWORD*)(v39 + 5864);
			if (v41 && (*(unsigned int(__fastcall**)(_QWORD))(*(_QWORD*)v41 + 1072i64))(*(_QWORD*)(v39 + 5864)))
			{
				v106 = v40[286];
				v42 = v40[300].m128_f32[1];
				v43 = (*(float(__fastcall**)(__int64))(*(_QWORD*)v41 + 1096i64))(v41);
				v106.m128_f32[1] = v106.m128_f32[1] + (float)(v43 * v42);
				goto LABEL_33;
			}
			v44 = v40[291];
		}
		else
		{
			v44 = *(__m128*)(a1 + 1008);
		}
		v106 = v44;
		goto LABEL_33;
	}
	if ((unsigned int)(v15 - 2) <= 1)
	{
		if (*(_DWORD*)(a1 + 944) == 2)
		{
			v93 = *(_DWORD*)(a1 + 960);
			v101[0] = 0i64;
			v94 = sub_140633CB0(v14, v93, v101);
			v95 = v101[0];
			if (v94 >= 0)
			{
				v100 = *(_DWORD*)(a1 + 964);
				v107 = 0i64;
				(*(void(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, __int64*, int, __m128i*, int))(*(_QWORD*)v101[0] + 144i64))(
					v101[0],
					*(_QWORD*)v101[0],
					0i64,
					0i64,
					0i64,
					0i64,
					0i64,
					0i64,
					0i64,
					v101,
					v100,
					&v107,
					-1082130432);
				if (*(float*)v101 == 0.0)
				{
					v96 = dword_140C4DEA0;
					if (*(_DWORD*)qword_140C63750 < dword_140C4DEA0)
						v96 = *(_DWORD*)qword_140C63750;
					v14 = v96;
					*(float*)(a1 + 1140) = (float)(*(float*)&dword_140C3B438 * 0.0055555557)
						* *((float*)&off_140C4DE90 + v96 + 8);
				}
				else
				{
					*(_DWORD*)(a1 + 1140) = v101[0];
				}
			}
			if (v95)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v95 + 8i64))(v95);
		}
		v97 = *(_DWORD*)(a1 + 1056);
		v98 = &xmmword_140C7E140;
		if (*(_DWORD*)(a1 + 1052) == 2)
			v98 = &xmmword_140C7E130;
		sub_14053B920(v14, *(_DWORD*)(a1 + 1056), v98);
		v110.m128_u64[0] = (unsigned __int64)sub_1405D3270;
		v108[0] = 0;
		v109 = a1;
		v110.m128_u64[1] = 0i64;
		sub_140195960(a1 + 608, v97, (__int64)v108, 4);
	}
	return 1i64;
}
// 1405D4992: variable 'v14' is possibly undefined
// 140B7AD00: using guessed type __int128 xmmword_140B7AD00;
// 140B7B500: using guessed type __int128 xmmword_140B7B500;
// 140C3B438: using guessed type int dword_140C3B438;
// 140C4DE90: using guessed type __int64 (__fastcall *off_140C4DE90)();
// 140C4DEA0: using guessed type int dword_140C4DEA0;
// 140C636A8: using guessed type int dword_140C636A8;
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C77860: using guessed type __int128 xmmword_140C77860;
// 140C77870: using guessed type __int128 xmmword_140C77870;
// 140C78390: using guessed type __m256 ymmword_140C78390;
// 140C783B0: using guessed type __int128 xmmword_140C783B0;
// 140C783C0: using guessed type __int128 xmmword_140C783C0;
// 140C78450: using guessed type __int128 xmmword_140C78450;
// 140C7E130: using guessed type __int128 xmmword_140C7E130;
// 140C7E140: using guessed type __int128 xmmword_140C7E140;

