#include "../winhttp.h"

//----- (00000001402B98B0) ----------------------------------------------------
__int64 __fastcall sub_1402B98B0(
	__int64 a1,
	_QWORD* a2,
	unsigned __int64 a3,
	unsigned __int64 a4,
	__m128* a5,
	int a6,
	__int64 a7,
	__int64 a8,
	int a9,
	float* a10,
	__int64* a11)
{
	_QWORD* v13; // r14
	char v15; // r9
	__int64 result; // rax
	__int64 v17; // rax
	__int64 v18; // rcx
	unsigned __int64 v19; // r13
	__int64 v20; // rax
	__int64 v21; // r8
	__int64 v22; // rcx
	unsigned __int64 v23; // rax
	unsigned __int64 v24; // rcx
	unsigned __int64 i; // rax
	__int64 v26; // rax
	__int64 v27; // rax
	int* v28; // rax
	signed __int64 v29; // r12
	unsigned __int64 j; // rdx
	__int64 v31; // rcx
	__m128* v32; // r15
	int v33; // esi
	__m128 v34; // xmm6
	__m128 v35; // xmm9
	int v36; // ecx
	__int64 v37; // r8
	__int64 v38; // r11
	float v39; // xmm8_4
	__int64 v40; // rdi
	float v41; // xmm7_4
	unsigned __int64 v42; // r15
	__int64 v43; // rdx
	unsigned __int16 v44; // cx
	_WORD* k; // rax
	char v46; // r9
	unsigned int v47; // esi
	__int64 v48; // r14
	__int16 v49; // cx
	__int64* v50; // rsi
	float v51; // xmm6_4
	float v52; // xmm6_4
	__int64 v53; // r8
	float v54; // xmm1_4
	unsigned int v55; // r9d
	__int64 v56; // r8
	__int64 v57; // rdx
	unsigned int v58; // eax
	__int64 v59; // rcx
	float v60; // xmm1_4
	float* v61; // rcx
	__int64 v62; // rdx
	unsigned int v63; // r9d
	__int64 v64; // rdx
	__int64 v65; // rcx
	unsigned int v66; // eax
	__int64 v67; // r8
	__int64 v68; // rdx
	__int64 v69; // rcx
	float v70; // xmm6_4
	__int64 v71; // r8
	__int64 v72; // rdx
	unsigned int v73; // eax
	__int64 v74; // rcx
	float v75; // xmm6_4
	__int64 v76; // rdx
	float* v77; // rcx
	__int64 v78; // rax
	float v79; // xmm7_4
	float v80; // xmm8_4
	float v81; // xmm0_4
	float v82; // xmm7_4
	float v83; // xmm0_4
	__m128 v84; // xmm0
	__m128* v85; // rdi
	__m128 v86; // xmm1
	unsigned __int64 v87; // r14
	float v88; // xmm4_4
	__m128 v89; // xmm1
	int v90; // ecx
	unsigned __int64 v91; // rax
	bool v92; // cf
	__m128 v93; // xmm1
	int v94; // ecx
	unsigned __int64 v95; // rax
	float v96; // xmm0_4
	float v97; // xmm0_4
	float v98; // xmm0_4
	float v99; // xmm1_4
	float v100; // xmm0_4
	__m128 v101; // xmm6
	__m128 v102; // xmm3
	__m128 v103; // xmm2
	int v104; // esi
	__int64 v105; // r15
	__int64 v106; // [rsp+60h] [rbp-A0h]
	unsigned __int64 v107; // [rsp+68h] [rbp-98h]
	__m128 v108; // [rsp+70h] [rbp-90h] BYREF
	__m128 v109; // [rsp+80h] [rbp-80h] BYREF
	unsigned __int64 v110; // [rsp+90h] [rbp-70h] BYREF
	__int128 v111[2]; // [rsp+A0h] [rbp-60h] BYREF
	__m128 v112; // [rsp+C0h] [rbp-40h] BYREF
	__m128 v113; // [rsp+D0h] [rbp-30h]
	__m128 v114; // [rsp+E0h] [rbp-20h] BYREF

	v13 = a2;
	if (a11)
		sub_140115D60(a11, 0i64);
	if (!v13)
		return 2147942487i64;
	if (!a10)
		return 2147942487i64;
	v15 = a6;
	if ((a6 & 0xFFFDFA80) != 0)
		return 2147942487i64;
	v17 = v13[8];
	if (a4 > v13[5])
		a4 = v13[5];
	v18 = *(unsigned __int16*)(v17 + 2 * a4);
	if (a3 >= a4)
		a3 = a4;
	v110 = *(unsigned __int16*)(v17 + 2 * a4);
	v19 = *(unsigned __int16*)(v17 + 2 * a3);
	v20 = v13[10];
	v21 = *(unsigned __int16*)(v20 + 2 * v19);
	v22 = *(unsigned __int16*)(v20 + 2 * v18);
	v23 = *(_QWORD*)(a1 + 2400);
	v24 = v22 - v21;
	v106 = v21;
	*(_QWORD*)(a1 + 2392) = v24;
	if (v24 > v23)
	{
		if (!v23)
			*(_QWORD*)(a1 + 2400) = 16i64;
		for (i = *(_QWORD*)(a1 + 2400); i < v24; *(_QWORD*)(a1 + 2400) = i)
			i *= 2i64;
		sub_14018B900(*(_QWORD*)(a1 + 2376), 0);
		sub_14018B900(*(_QWORD*)(a1 + 2384), 0);
		v26 = 4i64 * *(_QWORD*)(a1 + 2400);
		if (!is_mul_ok(*(_QWORD*)(a1 + 2400), 4ui64))
			v26 = -1i64;
		*(_QWORD*)(a1 + 2376) = sub_14018B280(v26, 0);
		v27 = 4i64 * *(_QWORD*)(a1 + 2400);
		if (!is_mul_ok(*(_QWORD*)(a1 + 2400), 4ui64))
			v27 = -1i64;
		v28 = sub_14018B280(v27, 0);
		v21 = v106;
		v15 = a6;
		*(_QWORD*)(a1 + 2384) = v28;
	}
	v29 = 0i64;
	for (j = 0i64;
		j < *(_QWORD*)(a1 + 2392);
		*(float*)(*(_QWORD*)(a1 + 2376) + 4 * j - 4) = (float)*(int*)(v31 + 4 * v21) * *(float*)(a1 + 36))
	{
		v31 = v13[18] + 4 * j++;
	}
	v32 = a5;
	v33 = 0;
	v34 = 0i64;
	v109 = 0i64;
	v111[0] = (__int128)_mm_shuffle_ps((__m128)(unsigned int)dword_140C40F64, (__m128)(unsigned int)dword_140C40F64, 0);
	if (a5
		&& (v35 = (__m128)a5[1].m128_u32[0], a5->m128_f32[0] < v35.m128_f32[0])
		&& (v15 & 0x10) != 0
		&& (v15 & 0x20) == 0)
	{
		v35.m128_f32[0] = v35.m128_f32[0] - a5->m128_f32[0];
		v36 = (int)v35.m128_f32[0];
		if ((int)v35.m128_f32[0] != 0x80000000 && (float)v36 != v35.m128_f32[0])
			v35.m128_f32[0] = (float)(!(_mm_movemask_ps(_mm_unpacklo_ps(v35, v35)) & 1) + v36);
		v33 = 1;
	}
	else
	{
		v35.m128_i32[0] = v111[0];
	}
	sub_140115D60((__int64*)(a1 + 2408), 0i64);
	v37 = v33;
	v38 = v19;
	v39 = *(float*)(a1 + 80);
	v107 = v19;
	v40 = v19;
	v41 = v39;
	*(_QWORD*)&v111[0] = v33;
	if (v19 < v110)
	{
		while (1)
		{
			v42 = v40 + 1;
			v43 = a2[10];
			v44 = *(_WORD*)(v43 + 2 * v40);
			for (k = (_WORD*)(v43 + 2 * (v40 + 1)); *k == v44; ++v42)
				++k;
			v46 = *(_BYTE*)(v40 + a2[9]);
			if ((v46 & 1) != 0)
			{
				v38 = v40;
				v107 = v40;
				v39 = v41;
			}
			v47 = *(unsigned __int16*)(v43 + 2 * v42);
			v48 = v44;
			v49 = *(_WORD*)(a2[7] + 2 * v40);
			if (v49 == 10 && (a6 & 0x20) == 0)
				break;
			if (v49 == 9 && (a6 & 0x40) != 0)
			{
				v50 = a11;
				if (v37 && v41 >= v35.m128_f32[0])
				{
					result = sub_1402BA4F0(a1, (__int64)a2, v19, v40, v106, v109.m128_f32, a11);
					if ((int)result < 0)
						return result;
					v39 = *(float*)(a1 + 80);
					v107 = v40;
					v19 = v40;
					v41 = v39;
				}
				v51 = *(float*)(a1 + 72) * 8.0;
				v52 = v51 - sub_1408FDE98(v41, v51);
				if (*(_QWORD*)&v111[0] && (float)(v52 + v41) > v35.m128_f32[0])
					v52 = v35.m128_f32[0] - v41;
				v53 = v106;
				v38 = v107;
				v41 = v41 + v52;
				*(float*)(*(_QWORD*)(a1 + 2376) + 4 * (v48 - v106)) = v52;
			}
			else
			{
				if ((v46 & 2) == 0)
				{
					v70 = 0.0;
					v71 = v48;
					if ((unsigned int)v48 >= v47)
					{
						v76 = v106;
					}
					else
					{
						if ((int)(v47 - v48) >= 4)
						{
							v72 = *(_QWORD*)(a1 + 2376) + 8i64 + 4 * (v48 - v106);
							v73 = ((v47 - (unsigned int)v48 - 4) >> 2) + 1;
							v74 = v73;
							LODWORD(v48) = v48 + 4 * v73;
							v71 += 4i64 * v73;
							do
							{
								v75 = v70 + *(float*)(v72 - 8);
								v72 += 16i64;
								v70 = (float)((float)(v75 + *(float*)(v72 - 20)) + *(float*)(v72 - 16)) + *(float*)(v72 - 12);
								--v74;
							} while (v74);
						}
						v76 = v106;
						if ((unsigned int)v48 < v47)
						{
							v77 = (float*)(*(_QWORD*)(a1 + 2376) + 4 * (v71 - v106));
							v78 = (int)(v47 - v48);
							do
							{
								v70 = v70 + *v77++;
								--v78;
							} while (v78);
						}
					}
					v50 = a11;
					if (*(_QWORD*)&v111[0] && (float)(v70 + v41) > v35.m128_f32[0])
					{
						v79 = v41 - v39;
						if ((float)((float)(v79 + *(float*)(a1 + 80)) + v70) > v35.m128_f32[0])
						{
							result = sub_1402BA4F0(a1, (__int64)a2, v19, v40, v76, v109.m128_f32, a11);
							if ((int)result < 0)
								return result;
							v39 = *(float*)(a1 + 80);
							v38 = v40;
							v107 = v40;
							v19 = v40;
							v41 = v39;
						}
						else
						{
							result = sub_1402BA4F0(a1, (__int64)a2, v19, v38, v76, v109.m128_f32, a11);
							if ((int)result < 0)
								return result;
							v38 = v107;
							v39 = *(float*)(a1 + 80);
							v19 = v107;
							v41 = v79 + v39;
						}
					}
					v41 = v41 + v70;
					goto LABEL_93;
				}
				if (v37 && v41 >= v35.m128_f32[0])
				{
					result = sub_1402BA4F0(a1, (__int64)a2, v19, v40, v106, v109.m128_f32, a11);
					if ((int)result < 0)
						return result;
					v39 = *(float*)(a1 + 80);
					v38 = v40;
					v107 = v40;
					v19 = v40;
					v41 = v39;
				}
				v54 = 0.0;
				v55 = v48;
				v56 = v48;
				if ((unsigned int)v48 < v47)
				{
					if ((int)(v47 - v48) >= 4)
					{
						v57 = *(_QWORD*)(a1 + 2376) + 8i64 + 4 * (v48 - v106);
						v58 = ((v47 - (unsigned int)v48 - 4) >> 2) + 1;
						v59 = v58;
						v55 = v48 + 4 * v58;
						v56 = v48 + 4i64 * v58;
						do
						{
							v60 = v54 + *(float*)(v57 - 8);
							v57 += 16i64;
							v54 = (float)((float)(v60 + *(float*)(v57 - 20)) + *(float*)(v57 - 16)) + *(float*)(v57 - 12);
							--v59;
						} while (v59);
					}
					if (v55 < v47)
					{
						v61 = (float*)(*(_QWORD*)(a1 + 2376) + 4 * (v56 - v106));
						v62 = (int)(v47 - v55);
						do
						{
							v54 = v54 + *v61++;
							--v62;
						} while (v62);
					}
					v38 = v107;
				}
				if (*(_QWORD*)&v111[0] && (float)(v54 + v41) > v35.m128_f32[0])
					v54 = v35.m128_f32[0] - v41;
				v53 = v106;
				v63 = v48 + 1;
				v64 = (unsigned int)(v48 + 1);
				*(float*)(*(_QWORD*)(a1 + 2376) + 4 * (v48 - v106)) = v54;
				if ((int)v48 + 1 < v47)
				{
					if ((int)(v47 - v63) >= 4)
					{
						v65 = 4 * (v63 - v106);
						v66 = ((v47 - v63 - 4) >> 2) + 1;
						v67 = v66;
						v63 += 4 * v66;
						v64 += 4i64 * v66;
						do
						{
							v65 += 16i64;
							*(_DWORD*)(v65 + *(_QWORD*)(a1 + 2376) - 16) = 0;
							*(_DWORD*)(v65 + *(_QWORD*)(a1 + 2376) - 12) = 0;
							*(_DWORD*)(v65 + *(_QWORD*)(a1 + 2376) - 8) = 0;
							*(_DWORD*)(v65 + *(_QWORD*)(a1 + 2376) - 4) = 0;
							--v67;
						} while (v67);
						v53 = v106;
					}
					if (v63 < v47)
					{
						v68 = 4 * (v64 - v53);
						v69 = (int)(v47 - v63);
						do
						{
							v68 += 4i64;
							*(_DWORD*)(v68 + *(_QWORD*)(a1 + 2376) - 4) = 0;
							--v69;
						} while (v69);
					}
				}
				v50 = a11;
				v41 = v41 + v54;
			}
		LABEL_94:
			v40 = v42;
			if (v42 >= v110)
			{
				v13 = a2;
				if (v19 >= v110
					|| (result = sub_1402BA4F0(a1, (__int64)a2, v19, v110, v53, v109.m128_f32, v50), (int)result >= 0))
				{
					v34 = v109;
					v32 = a5;
					goto LABEL_99;
				}
				return result;
			}
			v37 = *(_QWORD*)&v111[0];
		}
		v50 = a11;
		result = sub_1402BA4F0(a1, (__int64)a2, v19, v42, v106, v109.m128_f32, a11);
		if ((int)result < 0)
			return result;
		v39 = *(float*)(a1 + 80);
		v38 = v42;
		v107 = v42;
		v19 = v42;
		v41 = v39;
	LABEL_93:
		v53 = v106;
		goto LABEL_94;
	}
LABEL_99:
	v80 = v109.m128_f32[0];
	if (v32)
	{
		if ((a6 & 1) != 0)
		{
			v81 = (float)((float)(v32[1].m128_f32[0] + v32->m128_f32[0]) - v109.m128_f32[0]) * 0.5;
		}
		else if ((a6 & 2) != 0)
		{
			v81 = v32[1].m128_f32[0] - v109.m128_f32[0];
		}
		else
		{
			v81 = v32->m128_f32[0];
		}
		v82 = v109.m128_f32[1];
		v108.m128_f32[0] = v81;
		if ((a6 & 4) != 0)
		{
			v83 = (float)((float)(v32[1].m128_f32[1] + v32->m128_f32[1]) - v109.m128_f32[1]) * 0.5;
		}
		else if ((a6 & 8) != 0)
		{
			v83 = v32[1].m128_f32[1] - v109.m128_f32[1];
		}
		else
		{
			v83 = v32->m128_f32[1];
		}
		v108.m128_f32[1] = v83;
		*a10 = (float)(v83 + v109.m128_f32[1]) - v32->m128_f32[1];
	}
	else
	{
		v108 = 0i64;
		LODWORD(v82) = _mm_shuffle_ps(v34, v34, 85).m128_u32[0];
		*a10 = v82;
	}
	(*(void(__fastcall**)(_QWORD, __m128*, __m128*))(**(_QWORD**)(a1 + 16) + 288i64))(
		*(_QWORD*)(a1 + 16),
		&v114,
		&v108);
	v84 = _mm_add_ps(v108, v114);
	v108 = v84;
	if ((a6 & 0x400) != 0)
	{
		if (v32)
		{
			*v32 = v84;
			v32[1] = _mm_add_ps(v34, v84);
		}
		return 0i64;
	}
	if ((a6 & 0x100) != 0)
	{
		v85 = 0i64;
	}
	else
	{
		v85 = (__m128*)v111;
		v86 = _mm_add_ps(v32[1], v114);
		v111[0] = (__int128)_mm_add_ps(*v32, v114);
		v111[1] = (__int128)v86;
	}
	LODWORD(v110) = 0;
	if (!(unsigned int)sub_1402BBA10(v13, (unsigned int*)&v110))
		return 1i64;
	v87 = *(_QWORD*)(a1 + 2416);
	if (v85)
	{
		v88 = *(float*)(a1 + 52);
		if (v88 != 0.0)
		{
			v89 = (__m128)v85[1].m128_u32[1];
			if (v89.m128_f32[0] < (float)(v108.m128_f32[1] + v82))
			{
				v89.m128_f32[0] = (float)(v89.m128_f32[0] - v108.m128_f32[1]) / v88;
				v90 = (int)v89.m128_f32[0];
				if ((int)v89.m128_f32[0] != 0x80000000 && (float)v90 != v89.m128_f32[0])
					v89.m128_f32[0] = (float)(!(_mm_movemask_ps(_mm_unpacklo_ps(v89, v89)) & 1) + v90);
				v91 = 0i64;
				if (v89.m128_f32[0] >= 9.223372e18)
				{
					v89.m128_f32[0] = v89.m128_f32[0] - 9.223372e18;
					if (v89.m128_f32[0] < 9.223372e18)
						v91 = 0x8000000000000000ui64;
				}
				v92 = v87 < v91 + (unsigned int)(int)v89.m128_f32[0];
				v87 = v91 + (unsigned int)(int)v89.m128_f32[0];
				if (v92)
					v87 = *(_QWORD*)(a1 + 2416);
			}
			v93 = (__m128)v85->m128_u32[1];
			if (v93.m128_f32[0] > v108.m128_f32[1])
			{
				v93.m128_f32[0] = (float)(v93.m128_f32[0] - v108.m128_f32[1]) / v88;
				v94 = (int)v93.m128_f32[0];
				if ((int)v93.m128_f32[0] != 0x80000000 && (float)v94 != v93.m128_f32[0])
					v93.m128_f32[0] = (float)(v94 - (_mm_movemask_ps(_mm_unpacklo_ps(v93, v93)) & 1));
				v95 = 0i64;
				if (v93.m128_f32[0] >= 9.223372e18)
				{
					v93.m128_f32[0] = v93.m128_f32[0] - 9.223372e18;
					if (v93.m128_f32[0] < 9.223372e18)
						v95 = 0x8000000000000000ui64;
				}
				v29 = v95 + (unsigned int)(int)v93.m128_f32[0];
				if (v87 < v29)
					v29 = v87;
			}
			v96 = (float)(int)v29;
			if (v29 < 0)
				v96 = v96 + 1.8446744e19;
			v108.m128_f32[1] = v108.m128_f32[1] + (float)(v96 * v88);
			v97 = (float)((int)v87 - v29);
			if ((__int64)(v87 - v29) < 0)
				v97 = v97 + 1.8446744e19;
			v109.m128_f32[1] = v97 * v88;
			v34 = v109;
		}
		if (*(float*)(a8 + 12) != 0.0 && (*(_BYTE*)(a1 + 40) & 0x18) != 0)
		{
			v98 = *(float*)(a1 + 36);
			v99 = (float)(v98 * 2.0) + v85[1].m128_f32[1];
			v100 = (float)(v98 * 3.0) + v85[1].m128_f32[0];
			v85[1].m128_f32[1] = v99;
			v85[1].m128_f32[0] = v100;
		}
	}
	v112 = v108;
	v101 = _mm_add_ps(v34, v108);
	v113 = v101;
	if (v85)
	{
		v102 = _mm_min_ps(v85[1], v101);
		v103 = _mm_max_ps(*v85, v108);
		if (v103.m128_f32[0] >= v102.m128_f32[0]
			|| _mm_shuffle_ps(v103, v103, 85).m128_f32[0] >= _mm_shuffle_ps(v102, v102, 85).m128_f32[0])
		{
			return 0i64;
		}
		v112 = v103;
		v113 = v102;
	}
	v104 = a9;
	if (a9 == 1)
		v104 = (*(__int64(__fastcall**)(_QWORD, __m128*))(**(_QWORD**)(a1 + 16) + 216i64))(*(_QWORD*)(a1 + 16), &v112);
	if (!v104)
		return 0i64;
	if (*(float*)(a8 + 12) == 0.0 || (*(_BYTE*)(a1 + 40) & 0x18) == 0)
	{
		v105 = (__int64)a2;
	}
	else
	{
		v105 = (__int64)a2;
		result = sub_1402BA770(a1, (__int64)a2, v85->m128_f32, a6, a8, v108.m128_f32, v80, v29, v87, v106, 1, v104);
		if ((int)result < 0)
			return result;
	}
	if (*(float*)(a7 + 12) == 0.0)
		return 0i64;
	result = sub_1402BA770(a1, v105, v85->m128_f32, a6, a7, v108.m128_f32, v80, v29, v87, v106, 2, v104);
	if ((int)result >= 0)
		return 0i64;
	return result;
}
// 140C40F64: using guessed type int dword_140C40F64;

