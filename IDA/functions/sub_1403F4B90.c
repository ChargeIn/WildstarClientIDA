//----- (00000001403F4B90) ----------------------------------------------------
_QWORD* __fastcall sub_1403F4B90(__int64 a1)
{
	_QWORD* result; // rax
	_QWORD** v3; // rax
	_QWORD* v4; // rbx
	__m128 v5; // xmm2
	__m128 v6; // xmm0
	__m128 v7; // xmm2
	__m128 v8; // xmm0
	__m128 v9; // xmm4
	__m128 v10; // xmm0
	__m128 v11; // xmm5
	float* v12; // rax
	int v13; // ecx
	int* v14; // r10
	__m128 v15; // xmm0
	int v16; // eax
	__m128 v17; // xmm0
	__m128 v18; // xmm6
	__m128 v19; // xmm7
	float v20; // xmm0_4
	float v21; // xmm1_4
	float v22; // xmm3_4
	float v23; // xmm2_4
	float v24; // xmm2_4
	float v25; // xmm0_4
	float v26; // xmm6_4
	float v27; // xmm7_4
	float v28; // xmm0_4
	float v29; // xmm1_4
	float v30; // xmm4_4
	float v31; // xmm5_4
	float v32; // xmm0_4
	float v33; // xmm1_4
	float* v34; // r9
	int v35; // edx
	unsigned int v36; // r8d
	int v37; // ecx
	__m128i v38; // xmm0
	__int64 v39; // rax
	int v40; // ecx
	float v41; // xmm0_4
	__m128 v42; // xmm6
	__m128 v43; // xmm1
	float v44; // xmm0_4
	float v45; // xmm0_4
	__int64 v46; // rax
	__m128 v47; // [rsp+40h] [rbp-C0h]
	__m128 v48; // [rsp+50h] [rbp-B0h]
	unsigned int v49; // [rsp+60h] [rbp-A0h] BYREF
	int v50; // [rsp+64h] [rbp-9Ch]
	__m128 v51; // [rsp+70h] [rbp-90h] BYREF
	__m128 v52; // [rsp+80h] [rbp-80h]
	__m128 v53; // [rsp+90h] [rbp-70h] BYREF
	__m128 v54; // [rsp+A0h] [rbp-60h]
	__int128 v55; // [rsp+B0h] [rbp-50h] BYREF
	__int128 v56; // [rsp+C0h] [rbp-40h]
	__int128 v57; // [rsp+D0h] [rbp-30h]
	__m128 v58; // [rsp+E0h] [rbp-20h]
	float* v59; // [rsp+F0h] [rbp-10h] BYREF
	__int64 v60; // [rsp+F8h] [rbp-8h]
	__int64 v61; // [rsp+108h] [rbp+8h]
	__int64 v62; // [rsp+110h] [rbp+10h]
	float* v63; // [rsp+120h] [rbp+20h]
	float v64; // [rsp+12Ch] [rbp+2Ch]
	__m128 v65; // [rsp+140h] [rbp+40h] BYREF
	__m128 v66; // [rsp+150h] [rbp+50h]
	char v67[12]; // [rsp+170h] [rbp+70h] BYREF
	unsigned int v68; // [rsp+17Ch] [rbp+7Ch]
	__m128 v69; // [rsp+180h] [rbp+80h] BYREF
	__m128 v70; // [rsp+190h] [rbp+90h] BYREF
	float v71[4]; // [rsp+1A0h] [rbp+A0h] BYREF
	__m128 v72[4]; // [rsp+1B0h] [rbp+B0h] BYREF
	float v73; // [rsp+1F0h] [rbp+F0h]
	float v74; // [rsp+1F4h] [rbp+F4h]
	int v75; // [rsp+1F8h] [rbp+F8h]
	__int128 v76[4]; // [rsp+200h] [rbp+100h] BYREF
	__m128* v77[10]; // [rsp+240h] [rbp+140h] BYREF

	result = *(_QWORD**)(a1 + 31848);
	if ((_QWORD*)*result != result)
	{
		sub_1403FC850(a1 + 31840);
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 584i64))(qword_140C65670);
		v3 = *(_QWORD***)(a1 + 31848);
		v4 = *v3;
		if (*v3 != v3)
		{
			do
			{
				sub_1403F4AD0((__int64)&v59, (__int64)(v4 + 2));
				(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65680 + 136i64))(qword_140C65680);
				(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65680 + 64i64))(qword_140C65680, 1i64);
				v75 = 1065353216;
				v77[0] = (__m128*)v76;
				v77[1] = (__m128*) & v55;
				v55 = xmmword_140C78410;
				v5 = _mm_mul_ps(_mm_add_ps(v66, v65), (__m128)xmmword_140B7AC50);
				v56 = xmmword_140C78420;
				v57 = xmmword_140C78430;
				v73 = v64;
				v74 = v64;
				v6 = _mm_unpacklo_ps(_mm_shuffle_ps(v5, v5, 85), (__m128)0x3F800000u);
				v7 = _mm_unpacklo_ps(_mm_unpacklo_ps(v5, (__m128)0x3F800000u), v6);
				v6.m128_f32[0] = v64;
				v8 = _mm_shuffle_ps(v6, v6, 0);
				v58 = v7;
				v9 = _mm_mul_ps((__m128)xmmword_140C78410, v8);
				v8.m128_f32[0] = v64;
				v10 = _mm_shuffle_ps(v8, v8, 0);
				v76[0] = (__int128)v9;
				v11 = _mm_mul_ps((__m128)xmmword_140C78420, v10);
				v10.m128_f32[0] = 1.0;
				v76[1] = (__int128)v11;
				v76[3] = xmmword_140C78440;
				v76[2] = (__int128)_mm_mul_ps((__m128)xmmword_140C78430, _mm_shuffle_ps(v10, v10, 0));
				sub_1401AFB10(v77, v72);
				(*(void(__fastcall**)(__int64, __m128*))(*(_QWORD*)qword_140C65680 + 80i64))(qword_140C65680, v72);
				if (v59)
				{
					v12 = sub_140141910((__int64)v59, v71);
					v13 = dword_140C48100;
					v14 = (int*)qword_140C63750;
					v15 = *(__m128*)v12;
					v53 = 0i64;
					v16 = dword_140C48100;
					v54 = v15;
					if (*(_DWORD*)qword_140C63750 < dword_140C48100)
						v16 = *(_DWORD*)qword_140C63750;
					if (*((float*)&off_140C480F0 + v16 + 8) > v59[207])
					{
						v54.m128_i32[0] = fmaxf(25.0, v54.m128_f32[0]);
					}
					else
					{
						if (*(_DWORD*)qword_140C63750 < dword_140C48100)
							v13 = *(_DWORD*)qword_140C63750;
						v54.m128_i32[0] = *((_DWORD*)&off_140C480F0 + v13 + 8);
					}
					v17 = _mm_sub_ps(v54, (__m128)0i64);
					v18 = _mm_sub_ps((__m128)0i64, v17);
					v19 = _mm_sub_ps(v54, v17);
					v53 = v18;
					v54 = v19;
				}
				else
				{
					v77[0] = v72;
					sub_1401AFC20((__int64*)v77, (double*)&v55);
					v48 = _mm_unpacklo_ps(
						_mm_unpacklo_ps((__m128)v58.m128_u32[0], (__m128)0i64),
						_mm_unpacklo_ps((__m128)v58.m128_u32[1], (__m128)0i64));
					v47 = v48;
					if (*(float*)&v55 <= 0.0)
					{
						v20 = v66.m128_f32[0];
						v21 = v65.m128_f32[0];
					}
					else
					{
						v20 = v65.m128_f32[0];
						v21 = v66.m128_f32[0];
					}
					v22 = v48.m128_f32[0] + (float)(v21 * *(float*)&v55);
					v23 = v48.m128_f32[0] + (float)(v20 * *(float*)&v55);
					if (*(float*)&v56 <= 0.0)
					{
						v24 = v23 + (float)(v66.m128_f32[1] * *(float*)&v56);
						v25 = v65.m128_f32[1];
					}
					else
					{
						v24 = v23 + (float)(v65.m128_f32[1] * *(float*)&v56);
						v25 = v66.m128_f32[1];
					}
					v48.m128_f32[0] = v24;
					v26 = v65.m128_f32[0] * *((float*)&v55 + 1);
					v27 = v66.m128_f32[0] * *((float*)&v55 + 1);
					v47.m128_f32[0] = v22 + (float)(v25 * *(float*)&v56);
					if (*((float*)&v55 + 1) <= 0.0)
					{
						v28 = v48.m128_f32[1] + v27;
						v29 = v47.m128_f32[1] + v26;
					}
					else
					{
						v28 = v48.m128_f32[1] + v26;
						v29 = v47.m128_f32[1] + v27;
					}
					v30 = v65.m128_f32[1] * *((float*)&v56 + 1);
					v31 = v66.m128_f32[1] * *((float*)&v56 + 1);
					if (*((float*)&v56 + 1) <= 0.0)
					{
						v32 = v28 + v31;
						v33 = v29 + v30;
					}
					else
					{
						v32 = v28 + v30;
						v33 = v29 + v31;
					}
					v14 = (int*)qword_140C63750;
					v47.m128_f32[1] = v33;
					v19 = v47;
					v48.m128_f32[1] = v32;
					v18 = v48;
				}
				v34 = v63;
				v52 = v19;
				v51 = v18;
				if (v63)
				{
					if (*(_QWORD*)v63)
					{
						sub_1401015B0(*(_QWORD**)v63, (int*)&v49);
						v35 = v50;
						v36 = v49;
					}
					else
					{
						v35 = 0;
						v36 = 0;
						v49 = 0;
						v50 = 0;
					}
					v37 = dword_140C45B10;
					v38 = _mm_cvtsi32_si128(v36);
					if (*v14 < dword_140C45B10)
						v37 = *v14;
					v39 = v37;
					v40 = dword_140C45BD0;
					LODWORD(v41) = _mm_cvtepi32_ps(v38).m128_u32[0];
					v42 = _mm_sub_ps(v18, stru_140C45B20[v39]);
					v51 = v42;
					if (*v14 < dword_140C45BD0)
						v40 = *v14;
					v51.m128_i32[0] = v42.m128_i32[0];
					v43 = _mm_add_ps(stru_140C45BE0[v40], v19);
					v52 = v43;
					v52.m128_i32[0] = v43.m128_i32[0];
					if ((float)(v43.m128_f32[0] - v42.m128_f32[0]) < v41)
					{
						v44 = (float)(v41 - (float)(v43.m128_f32[0] - v42.m128_f32[0])) * 0.5;
						v51.m128_f32[0] = v42.m128_f32[0] - v44;
						v52.m128_f32[0] = v43.m128_f32[0] + v44;
					}
					if ((float)(v52.m128_f32[1] - v51.m128_f32[1]) < (float)v35)
					{
						v45 = (float)((float)v35 - (float)(v52.m128_f32[1] - v51.m128_f32[1])) * 0.5;
						v51.m128_f32[1] = v51.m128_f32[1] - v45;
						v52.m128_f32[1] = v52.m128_f32[1] + v45;
					}
					if (*(_QWORD*)v34)
						sub_140103E60(
							*(_QWORD**)v34,
							&v51,
							&v69,
							0,
							COERCE_INT((float)(*(float*)&dword_140C63664 - v34[2]) * v34[3]));
				}
				v46 = *(_QWORD*)qword_140C65680;
				if (v59)
				{
					(*(void(__fastcall**)(__int64, __int64))(v46 + 64))(qword_140C65680, 16i64);
					sub_140141100((__int64)v59, fmaxf(25.0, v54.m128_f32[0] - v53.m128_f32[0]));
					v70 = _mm_unpacklo_ps((__m128)xmmword_140B7A4C0, _mm_unpacklo_ps((__m128)0x3F800000u, (__m128)v68));
					(*(void(__fastcall**)(__int64, __m128*))(*(_QWORD*)qword_140C65680 + 168i64))(qword_140C65680, &v70);
					sub_140141820((__int64)v59, (__int128*)&v53, v59[207] + 1.0);
					(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65680 + 72i64))(qword_140C65680);
				}
				else
				{
					(*(void(__fastcall**)(__int64, __int64, __int64, __int64, __m128*, int, char*, int))(v46 + 264))(
						qword_140C65680,
						v60,
						v61,
						(v62 - v61) >> 1,
						&v65,
						17,
						v67,
						1);
				}
				(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65680 + 72i64))(qword_140C65680);
				if (v60)
				{
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v60 + 8i64))(v60);
					v60 = 0i64;
				}
				if (v59)
				{
					(*(void(__fastcall**)(float*))(*(_QWORD*)v59 + 8i64))(v59);
					v59 = 0i64;
				}
				if (v61)
					sub_14018B900(v61, 0);
				v4 = (_QWORD*)*v4;
			} while (v4 != *(_QWORD**)(a1 + 31848));
		}
		return (_QWORD*)sub_1403FE1B0(a1 + 31840);
	}
	return result;
}
// 1403F4FF8: variable 'v14' is possibly undefined
// 1403F509F: variable 'v34' is possibly undefined
// 140B7A4C0: using guessed type __int128 xmmword_140B7A4C0;
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;
// 140C45B10: using guessed type int dword_140C45B10;
// 140C45B20: using guessed type __m128 stru_140C45B20[7];
// 140C45BD0: using guessed type int dword_140C45BD0;
// 140C45BE0: using guessed type __m128 stru_140C45BE0[7];
// 140C480F0: using guessed type __int64 (__fastcall **off_140C480F0)();
// 140C48100: using guessed type int dword_140C48100;
// 140C63664: using guessed type int dword_140C63664;
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C65670: using guessed type __int64 qword_140C65670;
// 140C65680: using guessed type __int64 qword_140C65680;
// 140C78410: using guessed type __int128 xmmword_140C78410;
// 140C78420: using guessed type __int128 xmmword_140C78420;
// 140C78430: using guessed type __int128 xmmword_140C78430;
// 140C78440: using guessed type __int128 xmmword_140C78440;
// 1403F4B90: using guessed type __m128 var_1F0;
// 1403F4B90: using guessed type __m128 var_190[4];
// 1403F4B90: using guessed type float var_1A0[4];
// 1403F4B90: using guessed type char var_1D0[12];

