#include "../winhttp.h"

//----- (0000000140357DF0) ----------------------------------------------------
__int64 __fastcall sub_140357DF0(__int64 a1, __int64 a2)
{
	__int64* v2; // r12
	__int64 v4; // rdx
	_QWORD* v6; // rcx
	__int64 v7; // r8
	__int64 v8; // r13
	__int64 v9; // r15
	__m128* v10; // rax
	__m128 v11; // xmm1
	__m128 v12; // xmm2
	__int64 v13; // rcx
	float v14; // xmm15_4
	__m128 v15; // xmm1
	int v16; // ecx
	int v17; // r9d
	__m128 v18; // xmm2
	int v19; // ecx
	int v20; // r8d
	__m128 v21; // xmm1
	int v22; // ecx
	int v23; // edx
	int v24; // edx
	__m128 v25; // xmm1
	int v26; // ecx
	int v27; // ecx
	__int64 v28; // r14
	unsigned __int64 v29; // r11
	unsigned __int64 v30; // rsi
	unsigned __int32 v31; // edi
	unsigned __int64 v32; // rbx
	unsigned __int64 v33; // r8
	float v34; // xmm2_4
	unsigned __int32 v35; // edx
	unsigned __int64 v36; // r9
	float v37; // xmm1_4
	float v38; // xmm0_4
	float v39; // xmm0_4
	unsigned int v40; // r9d
	unsigned __int32 v41; // edi
	unsigned __int64 v42; // rbx
	unsigned __int64 v43; // r8
	float v44; // xmm2_4
	unsigned __int32 v45; // edx
	unsigned __int64 v46; // r9
	float v47; // xmm1_4
	float v48; // xmm0_4
	float v49; // xmm0_4
	__int128* v50; // rcx
	__m128* v51; // rdx
	__int64 v52; // rax
	__m128 v53; // xmm4
	__m128* v54; // rcx
	float* v55; // rax
	float v56; // xmm0_4
	float v57; // xmm1_4
	float v58; // xmm6_4
	unsigned int i; // ebx
	__m128* v60; // rdx
	float v61; // xmm2_4
	float v62; // xmm0_4
	__int64 v63; // rax
	float v64; // xmm0_4
	__m128* v65; // rcx
	float* v66; // rax
	float v67; // xmm4_4
	float v68; // xmm6_4
	__int128* v69; // rdx
	float v70; // xmm2_4
	float v71; // xmm0_4
	__int64 v72; // rax
	int v74; // edi
	int v75; // esi
	int v76; // r14d
	float v77; // xmm11_4
	__m128 v78; // xmm8
	__m128 v79; // xmm9
	float v80; // xmm7_4
	float v81; // xmm10_4
	float* v82; // rcx
	float* v83; // rdx
	__int64 v84; // r8
	float v85; // xmm5_4
	float v86; // xmm4_4
	float v87; // xmm6_4
	float v88; // xmm3_4
	float v89; // xmm0_4
	float v90; // xmm1_4
	float v91; // xmm3_4
	float* v92; // rcx
	float* v93; // rdx
	__int64 v94; // r8
	float v95; // xmm5_4
	float v96; // xmm4_4
	float v97; // xmm6_4
	float v98; // xmm3_4
	float v99; // xmm0_4
	float v100; // xmm1_4
	float v101; // xmm3_4
	int v102; // ecx
	int v103; // r10d
	int v104; // ecx
	int v105; // r11d
	__int64 v106; // rdx
	__int64 v107; // rax
	int v108; // [rsp+20h] [rbp-E0h]
	int v109; // [rsp+28h] [rbp-D8h]
	int v110; // [rsp+30h] [rbp-D0h]
	int v111; // [rsp+38h] [rbp-C8h]
	int v112; // [rsp+3Ch] [rbp-C4h]
	int v113; // [rsp+40h] [rbp-C0h]
	int v114; // [rsp+48h] [rbp-B8h]
	__m128 v115; // [rsp+50h] [rbp-B0h]
	__m128 v116; // [rsp+50h] [rbp-B0h]
	unsigned int v117; // [rsp+50h] [rbp-B0h]
	int v119; // [rsp+7Ch] [rbp-84h]
	__m128 v120; // [rsp+80h] [rbp-80h] BYREF
	__m128 v121; // [rsp+90h] [rbp-70h]
	__m128 v122; // [rsp+A0h] [rbp-60h] BYREF
	char v123; // [rsp+B8h] [rbp-48h] BYREF
	__m128 v124; // [rsp+120h] [rbp+20h] BYREF
	char v125[16]; // [rsp+130h] [rbp+30h] BYREF
	char v126[64]; // [rsp+140h] [rbp+40h] BYREF
	char v127[32]; // [rsp+180h] [rbp+80h] BYREF
	__m128 v128; // [rsp+1A0h] [rbp+A0h] BYREF
	char v129; // [rsp+1B8h] [rbp+B8h] BYREF

	v2 = (__int64*)(a1 + 2328);
	v4 = *(_QWORD*)(a1 + 2328);
	if (v4)
	{
		do
		{
			v6 = *(_QWORD**)(v4 + 1400);
			if (v6)
				*v6 = *(_QWORD*)(v4 + 1408);
			v7 = *(_QWORD*)(v4 + 1408);
			if (v7)
				*(_QWORD*)(v7 + 1400) = *(_QWORD*)(v4 + 1400);
			*(_QWORD*)(v4 + 1400) = 0i64;
			*(_QWORD*)(v4 + 1408) = 0i64;
			v4 = *v2;
		} while (*v2);
	}
	v8 = 0i64;
	sub_1401B2280(a2);
	v9 = 8i64;
	v10 = &v122;
	v11 = (__m128)xmmword_140C798C0;
	v12 = (__m128)xmmword_140C798D0;
	v13 = 8i64;
	do
	{
		v12 = _mm_max_ps(v12, *v10);
		v11 = _mm_min_ps(v11, *v10++);
		v121 = v12;
		--v13;
	} while (v13);
	v14 = *(float*)&dword_140C43FB8;
	v120 = v11;
	v11 = (__m128)v11.m128_u32[0];
	v15.m128_f32[0] = (float)((float)(v11.m128_f32[0] * *(float*)&dword_140C43FB8) + 0.5) * 2048.0;
	v16 = (int)v15.m128_f32[0];
	if ((int)v15.m128_f32[0] != 0x80000000 && (float)v16 != v15.m128_f32[0])
		v15.m128_f32[0] = (float)(v16 - (_mm_movemask_ps(_mm_unpacklo_ps(v15, v15)) & 1));
	v18 = (__m128)v120.m128_u32[2];
	v17 = (int)v15.m128_f32[0];
	v18.m128_f32[0] = (float)((float)(v120.m128_f32[2] * *(float*)&dword_140C43FB8) + 0.5) * 2048.0;
	v19 = (int)v18.m128_f32[0];
	if ((int)v18.m128_f32[0] != 0x80000000 && (float)v19 != v18.m128_f32[0])
		v18.m128_f32[0] = (float)(v19 - (_mm_movemask_ps(_mm_unpacklo_ps(v18, v18)) & 1));
	v21 = (__m128)v121.m128_u32[0];
	v20 = (int)v18.m128_f32[0];
	v21.m128_f32[0] = (float)((float)(v121.m128_f32[0] * *(float*)&dword_140C43FB8) + 0.5) * 2048.0;
	v22 = (int)v21.m128_f32[0];
	if ((int)v21.m128_f32[0] != 0x80000000 && (float)v22 != v21.m128_f32[0])
		v21.m128_f32[0] = (float)(v22 - (_mm_movemask_ps(_mm_unpacklo_ps(v21, v21)) & 1));
	v23 = (int)v21.m128_f32[0];
	v25 = (__m128)v121.m128_u32[2];
	v24 = v23 + 1;
	v25.m128_f32[0] = (float)((float)(v121.m128_f32[2] * *(float*)&dword_140C43FB8) + 0.5) * 2048.0;
	v26 = (int)v25.m128_f32[0];
	if ((int)v25.m128_f32[0] != 0x80000000 && (float)v26 != v25.m128_f32[0])
		v25.m128_f32[0] = (float)(v26 - (_mm_movemask_ps(_mm_unpacklo_ps(v25, v25)) & 1));
	v27 = (int)v25.m128_f32[0] + 1;
	if (*(_DWORD*)(a1 + 2264) < v24)
		v24 = *(_DWORD*)(a1 + 2264);
	v114 = v24;
	if (*(_DWORD*)(a1 + 2268) < v27)
		v27 = *(_DWORD*)(a1 + 2268);
	v108 = v27;
	if (v17 < *(_DWORD*)(a1 + 2256))
		v17 = *(_DWORD*)(a1 + 2256);
	v109 = v17;
	if (v20 < *(_DWORD*)(a1 + 2260))
		v20 = *(_DWORD*)(a1 + 2260);
	v113 = v20;
	if (v17 >= v24 || v20 >= v27)
		return 0i64;
	v28 = 4i64;
	v29 = 7i64;
	v110 = v17;
	v111 = v24;
	v121.m128_u64[0] = 0x500000004i64;
	v112 = v27;
	v120.m128_i32[0] = 0;
	*(unsigned __int64*)((char*)v120.m128_u64 + 4) = 0x200000001i64;
	v120.m128_i32[3] = 3;
	v121.m128_u64[1] = 0x700000006i64;
	v30 = 9i64;
	do
	{
		v31 = *(&v119 + v28--);
		v30 -= 2i64;
		v32 = v28;
		v33 = v30;
		if (v30 < 8)
		{
			v34 = v122.m128_f32[4 * v31 + 2];
			do
			{
				v35 = v120.m128_u32[v33];
				v36 = v33 + 1;
				if (v33 + 1 < 8)
				{
					v37 = v122.m128_f32[4 * v35 + 2];
					v38 = v122.m128_f32[4 * v120.m128_u32[v36] + 2];
					if (v38 >= v37 && (v38 > v37 || v120.m128_i32[v36] > v35))
					{
						++v33;
						v35 = v120.m128_u32[v36];
					}
				}
				v39 = v122.m128_f32[4 * v35 + 2];
				if (v39 < v34 || v39 <= v34 && v35 <= v31)
					break;
				v120.m128_i32[v32] = v35;
				v32 = v33;
				v33 = 2 * v33 + 1;
			} while (v33 < 8);
		}
		v120.m128_i32[v32] = v31;
	} while (v30 > 1);
	v40 = 1;
	do
	{
		v41 = v120.m128_u32[v29];
		v42 = 0i64;
		v43 = 1i64;
		v120.m128_i32[v29] = v120.m128_i32[0];
		if (v29 > 1)
		{
			v44 = v122.m128_f32[4 * v41 + 2];
			do
			{
				v45 = v120.m128_u32[v43];
				v46 = v43 + 1;
				if (v43 + 1 < v29)
				{
					v47 = v122.m128_f32[4 * v45 + 2];
					v48 = v122.m128_f32[4 * v120.m128_u32[v46] + 2];
					if (v48 >= v47 && (v48 > v47 || v120.m128_i32[v46] > v45))
					{
						++v43;
						v45 = v120.m128_u32[v46];
					}
				}
				v49 = v122.m128_f32[4 * v45 + 2];
				if (v49 < v44 || v49 <= v44 && v45 <= v41)
					break;
				v120.m128_i32[v42] = v45;
				v42 = v43;
				v43 = 2 * v43 + 1;
			} while (v43 < v29);
			v40 = 1;
		}
		v120.m128_i32[v42] = v41;
		--v29;
	} while (v29);
	v50 = (__int128*)&v120;
	v51 = &v124;
	do
	{
		v52 = *(unsigned int*)v50;
		++v51;
		v50 = (__int128*)((char*)v50 + 4);
		v51[-1] = *(&v122 + v52);
		--v9;
	} while (v9);
	v53 = v124;
	v54 = (__m128*)v125;
	v122 = v124;
	v55 = (float*)v126;
	v56 = v124.m128_f32[0];
	v57 = _mm_shuffle_ps(v122, v122, 170).m128_f32[0] + 0.0000099999997;
	while (v57 >= *(v55 - 2))
	{
		if (v54->m128_f32[0] < v56)
		{
			v56 = v54->m128_f32[0];
			v122.m128_i32[0] = v54->m128_i32[0];
		}
		if (v57 < v55[2])
		{
			++v54;
			break;
		}
		if (*v55 < v56)
		{
			v56 = *v55;
			v122.m128_f32[0] = *v55;
		}
		if (v57 < v55[6])
		{
			v54 += 2;
			break;
		}
		if (v55[4] < v56)
		{
			v56 = v55[4];
			v122.m128_f32[0] = v56;
		}
		if (v57 < v55[10])
		{
			v54 += 3;
			break;
		}
		if (v55[8] < v56)
		{
			v56 = v55[8];
			v122.m128_f32[0] = v56;
		}
		v55 += 16;
		v54 += 4;
		if ((__int64)v55 >= (__int64)v127)
		{
			for (; v54 < &v128; ++v54)
			{
				if (v57 < v54->m128_f32[2])
					break;
				if (v54->m128_f32[0] < v56)
				{
					v56 = v54->m128_f32[0];
					v122.m128_i32[0] = v54->m128_i32[0];
				}
			}
			break;
		}
	}
	v58 = *(float*)&dword_140C440D8;
	for (i = 1; ; ++i)
	{
		v60 = 0i64;
		v61 = v58;
		if (v54 >= &v128)
			break;
		do
		{
			v115 = _mm_sub_ps(*v54, *(&v122 + i - 1));
			v62 = _mm_shuffle_ps(v115, v115, 170).m128_f32[0];
			if (v62 >= 0.0000099999997 && v61 > (float)(v115.m128_f32[0] / v62))
			{
				v61 = v115.m128_f32[0] / v62;
				v60 = v54;
			}
			++v54;
		} while (v54 < &v128);
		if (!v60)
			break;
		v54 = v60 + 1;
		v63 = 2i64 * i;
		*(__m128*)((char*)&v122 + 8 * v63) = *v60;
	}
	if (i < 2)
		return 0i64;
	v128 = v53;
	v64 = v53.m128_f32[0];
	v65 = (__m128*)v125;
	v66 = (float*)v126;
	v67 = _mm_shuffle_ps(v53, v53, 170).m128_f32[0] + 0.0000099999997;
	while (v67 >= *(v66 - 2))
	{
		if (v65->m128_f32[0] > v64)
		{
			v64 = v65->m128_f32[0];
			v128.m128_i32[0] = v65->m128_i32[0];
		}
		if (v67 < v66[2])
		{
			++v65;
			break;
		}
		if (*v66 > v64)
		{
			v64 = *v66;
			v128.m128_f32[0] = *v66;
		}
		if (v67 < v66[6])
		{
			v65 += 2;
			break;
		}
		if (v66[4] > v64)
		{
			v64 = v66[4];
			v128.m128_f32[0] = v64;
		}
		if (v67 < v66[10])
		{
			v65 += 3;
			break;
		}
		if (v66[8] > v64)
		{
			v64 = v66[8];
			v128.m128_f32[0] = v64;
		}
		v66 += 16;
		v65 += 4;
		if ((__int64)v66 >= (__int64)v127)
		{
			for (; v65 < &v128; ++v65)
			{
				if (v67 < v65->m128_f32[2])
					break;
				if (v65->m128_f32[0] > v64)
				{
					v64 = v65->m128_f32[0];
					v128.m128_i32[0] = v65->m128_i32[0];
				}
			}
			break;
		}
	}
	v68 = -v58;
	while (1)
	{
		v69 = 0i64;
		v70 = v68;
		if (v65 >= &v128)
			break;
		do
		{
			v116 = _mm_sub_ps(*v65, *(&v128 + v40 - 1));
			v71 = _mm_shuffle_ps(v116, v116, 170).m128_f32[0];
			if (v71 >= 0.0000099999997 && v70 < (float)(v116.m128_f32[0] / v71))
			{
				v70 = v116.m128_f32[0] / v71;
				v69 = (__int128*)v65;
			}
			++v65;
		} while (v65 < &v128);
		if (!v69)
			break;
		v65 = (__m128*)(v69 + 1);
		v72 = 2i64 * v40++;
		*(__m128*)((char*)&v128 + 8 * v72) = (__m128) * v69;
	}
	v117 = v40;
	if (v40 < 2)
		return 0i64;
	v74 = v114;
	v75 = v113;
	v76 = v108;
	v77 = *(float*)&dword_140C44018;
	do
	{
		v78 = (__m128)(unsigned int)qword_140C79888;
		v79 = (__m128)HIDWORD(qword_140C79888);
		v80 = (float)((float)((float)v75 * 0.00048828125) - 0.5) * 65536.0;
		v81 = v80 + v77;
		v82 = (float*)&v123;
		v83 = &v122.m128_f32[2];
		v84 = i - 1;
		do
		{
			v85 = *v82;
			if (*v82 > v80)
			{
				v86 = *v83;
				if (*v83 < v81)
				{
					v87 = *(v83 - 2);
					if (v86 >= v80)
						v88 = *(v83 - 2);
					else
						v88 = (float)((float)((float)(*(v82 - 2) - v87) * (float)(v80 - v86)) / (float)(v85 - v86)) + v87;
					v89 = fminf(v78.m128_f32[0], v88);
					v90 = fmaxf(v79.m128_f32[0], v88);
					v91 = *(v82 - 2);
					if (v85 > v81)
						v91 = (float)((float)((float)(v91 - v87) * (float)(v81 - v86)) / (float)(v85 - v86)) + v87;
					v79 = (__m128)COERCE_UNSIGNED_INT(fmaxf(v90, v91));
					v78 = (__m128)COERCE_UNSIGNED_INT(fminf(v89, v91));
				}
			}
			v83 += 4;
			v82 += 4;
			--v84;
		} while (v84);
		if (v40 > 1)
		{
			v92 = (float*)&v129;
			v93 = &v128.m128_f32[2];
			v94 = v40 - 1;
			do
			{
				v95 = *v92;
				if (*v92 > v80)
				{
					v96 = *v93;
					if (*v93 < v81)
					{
						v97 = *(v93 - 2);
						if (v96 >= v80)
							v98 = *(v93 - 2);
						else
							v98 = (float)((float)((float)(*(v92 - 2) - v97) * (float)(v80 - v96)) / (float)(v95 - v96)) + v97;
						v99 = fminf(v78.m128_f32[0], v98);
						v100 = fmaxf(v79.m128_f32[0], v98);
						v101 = *(v92 - 2);
						if (v95 > v81)
							v101 = (float)((float)((float)(v101 - v97) * (float)(v81 - v96)) / (float)(v95 - v96)) + v97;
						v79 = (__m128)COERCE_UNSIGNED_INT(fmaxf(v100, v101));
						v78 = (__m128)COERCE_UNSIGNED_INT(fminf(v99, v101));
					}
				}
				v93 += 4;
				v92 += 4;
				--v94;
			} while (v94);
		}
		v78.m128_f32[0] = (float)((float)(v78.m128_f32[0] * v14) + 0.5) * 2048.0;
		v102 = (int)v78.m128_f32[0];
		if ((int)v78.m128_f32[0] != 0x80000000 && (float)v102 != v78.m128_f32[0])
			v78.m128_f32[0] = (float)(v102 - (_mm_movemask_ps(_mm_unpacklo_ps(v78, v78)) & 1));
		v103 = (int)v78.m128_f32[0];
		v79.m128_f32[0] = (float)((float)(v79.m128_f32[0] * v14) + 0.5) * 2048.0;
		v104 = (int)v79.m128_f32[0];
		if ((int)v79.m128_f32[0] != 0x80000000 && (float)v104 != v79.m128_f32[0])
			v79.m128_f32[0] = (float)(v104 - (_mm_movemask_ps(_mm_unpacklo_ps(v79, v79)) & 1));
		v105 = (int)v79.m128_f32[0] + 1;
		if (v103 < v109)
			v103 = v109;
		if (v105 > v74)
			v105 = v74;
		if (v103 < v105)
		{
			do
			{
				v106 = *(_QWORD*)(*(_QWORD*)(a1 + 2272)
					+ 8i64
					* (v103 % *(_DWORD*)(a1 + 2204)
						+ *(_DWORD*)(a1 + 2204)
						* (v75 % *(_DWORD*)(a1 + 2208) + *(_DWORD*)(a1 + 2208) * (v75 % *(_DWORD*)(a1 + 2208) < 0))
						+ *(_DWORD*)(a1 + 2204) * (unsigned int)(v103 % *(_DWORD*)(a1 + 2204) < 0)));
				if (v106)
				{
					if (!*(_QWORD*)(v106 + 1400))
					{
						*(_QWORD*)(v106 + 1400) = v2;
						*(_QWORD*)(v106 + 1408) = *v2;
						*v2 = v106;
						v107 = *(_QWORD*)(v106 + 1408);
						if (v107)
							*(_QWORD*)(v107 + 1400) = v106 + 1408;
					}
					++v8;
				}
				++v103;
			} while (v103 < v105);
			v76 = v112;
			v74 = v111;
			v109 = v110;
			v40 = v117;
		}
		++v75;
	} while (v75 < v76);
	return v8;
}
// 14035862A: conditional instruction was optimized away because ebx.4>=2u
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C43FB8: using guessed type int dword_140C43FB8;
// 140C44018: using guessed type int dword_140C44018;
// 140C440D8: using guessed type int dword_140C440D8;
// 140C79888: using guessed type __int64 qword_140C79888;
// 140C798C0: using guessed type __int128 xmmword_140C798C0;
// 140C798D0: using guessed type __int128 xmmword_140C798D0;
// 140357DF0: using guessed type __m128 var_260;
// 140357DF0: using guessed type __m128 var_160;

