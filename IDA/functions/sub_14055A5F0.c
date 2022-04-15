//----- (000000014055A5F0) ----------------------------------------------------
__int64 __fastcall sub_14055A5F0(_QWORD* a1, int a2, int a3, int a4, int a5, int a6, int a7, float a8)
{
	__int64 v9; // r8
	int v10; // eax
	__m128* v11; // rbx
	unsigned __int64 v12; // rsi
	float v13; // xmm7_4
	unsigned __int64 v14; // r14
	__int64 v15; // rdi
	int v16; // r12d
	unsigned int v17; // r15d
	int v19; // edi
	__int32 v20; // eax
	int v21; // eax
	unsigned __int64 v22; // rcx
	unsigned __int64 v23; // rax
	__m128 v24; // xmm1
	__m128 v25; // xmm6
	float v26; // xmm6_4
	unsigned __int64 v27; // rcx
	bool v28; // zf
	__m128* v29; // rcx
	__m128* v30; // rax
	__m128 v31; // xmm1
	__m128 v32; // xmm8
	__int64 v33; // r12
	unsigned __int64 v34; // rdi
	__int64 v35; // rbx
	__m128* v36; // rax
	__m128 v37; // xmm1
	__m128 v38; // xmm2
	float v39; // xmm0_4
	_QWORD* v40; // rbx
	unsigned __int64 v41; // r8
	_QWORD* v42; // rdx
	unsigned __int64 v43; // r9
	__int64 v44; // rcx
	__int64 v45; // rax
	__int64 v46; // rcx
	__int64 v47; // rax
	__int64 v48; // r12
	unsigned __int64 v49; // rcx
	_QWORD* v50; // rdx
	__int64 v51; // rax
	__int64 v52; // rax
	__int64 v53; // rax
	__int64 v54; // rax
	__int64 v55; // rax
	int v56; // edx
	unsigned __int64 v57; // rcx
	__int64 v58; // rax
	unsigned __int64 v59; // rax
	__int64 v60; // rcx
	__int64 v61; // r12
	unsigned __int64 v62; // rdi
	__int64 v63; // rbx
	__m128* v64; // rax
	__m128 v65; // xmm1
	__m128 v66; // xmm3
	__m128 v67; // xmm7
	__m128 v68; // xmm2
	float v69; // xmm0_4
	__m128 v70; // xmm6
	__m128 v71; // xmm3
	double v72; // xmm0_8
	_QWORD* v73; // rcx
	__int64 v74; // rax
	__int64 v75; // rax
	__int64 v76; // rax
	__int64 v77; // rax
	__int64 v78; // rax
	__int64 v80; // [rsp+38h] [rbp-D0h] BYREF
	unsigned __int64 v81; // [rsp+40h] [rbp-C8h]
	__int64 v82; // [rsp+48h] [rbp-C0h]
	unsigned __int64 v83; // [rsp+50h] [rbp-B8h] BYREF
	unsigned __int64 v84; // [rsp+58h] [rbp-B0h]
	_QWORD* v85; // [rsp+60h] [rbp-A8h]
	unsigned __int64 v86[2]; // [rsp+70h] [rbp-98h] BYREF
	__int64 v87; // [rsp+80h] [rbp-88h]
	unsigned __int64 v88[2]; // [rsp+88h] [rbp-80h] BYREF
	__int64 v89; // [rsp+98h] [rbp-70h]

	v9 = *(_QWORD*)(qword_140C65898 + 120);
	v82 = v9;
	if (!v9 || !a1[3218])
		return 0i64;
	v10 = a5;
	v11 = (__m128*)a1[3558];
	v12 = 0i64;
	v13 = 3.4028235e38;
	v14 = 0i64;
	v81 = 0i64;
	v15 = 0i64;
	v80 = 0i64;
	v16 = 0;
	v17 = 0;
	if (!v11)
		goto LABEL_39;
	do
	{
		v19 = v11->m128_i32[2];
		if (!a1[3218] || (v10 = a5, v19 != *(_DWORD*)(a1[3218] + 8i64)))
		{
			if (!v11[37].m128_i32[0] && (v11[2].m128_i8[4] & 1) == 0)
			{
				if (v11[1].m128_u64[1])
				{
					if (!sub_140466B90(v9, (__int64)v11))
						goto LABEL_36;
					v9 = v82;
				}
				v20 = v11[8].m128_i32[0];
				if (v20 != 20 && v20)
					goto LABEL_36;
				v21 = sub_14045A950(v9, v19);
				if (!a2 && !v21)
					goto LABEL_36;
				if (!a3 && v21 == 1 || !a4 && v21 == 2)
					goto LABEL_36;
				v22 = v11[367].m128_u64[0];
				v23 = v22;
				if (!v22)
					v23 = v11[367].m128_u64[1];
				if (!v23)
					goto LABEL_36;
				v24 = _mm_sub_ps(v11[286], *(__m128*)(a1[3218] + 4576i64));
				v25 = _mm_mul_ps(v24, v24);
				v26 = (float)(v25.m128_f32[0] + _mm_shuffle_ps(v25, v25, 85).m128_f32[0])
					+ _mm_shuffle_ps(v25, v25, 170).m128_f32[0];
				if (v26 > (float)(a8 * a8) || HIDWORD(qword_140C7DC60) == v11->m128_i32[2] || v11[5].m128_i32[1] > 1)
					goto LABEL_36;
				if (!v22)
					v22 = v11[367].m128_u64[1];
				if (!(*(unsigned int(__fastcall**)(unsigned __int64))(*(_QWORD*)v22 + 256i64))(v22))
					goto LABEL_36;
				v27 = v11[367].m128_u64[0];
				if (!v27)
					v27 = v11[367].m128_u64[1];
				v28 = (*(unsigned int(__fastcall**)(unsigned __int64, _QWORD, __int64, __int64))(*(_QWORD*)v27 + 264i64))(
					v27,
					0i64,
					1i64,
					1i64) == 1;
				v10 = a5;
				if (!v28)
				{
					if (!a5)
					{
						LODWORD(v83) = v19;
						sub_14055C580(&v80, (int*)&v83);
						if (v19 == a7)
							v16 = 1;
					LABEL_36:
						v10 = a5;
						goto LABEL_37;
					}
					if (v26 < v13)
					{
						v17 = v19;
						v13 = v26;
					}
				}
			}
		}
	LABEL_37:
		v11 = (__m128*)v11[6].m128_u64[0];
		v9 = v82;
	} while (v11);
	v14 = v81;
	v15 = v80;
LABEL_39:
	if (!v10)
	{
		if (!v14)
		{
			v17 = 0;
			goto LABEL_97;
		}
		v29 = (__m128*)a1[3218];
		if (v29)
		{
			v30 = (__m128*)a1[3637];
			if (!v30)
				v30 = (__m128*)a1[3636];
			v31 = v29[286];
			v32 = _mm_add_ps(
				_mm_add_ps(
					_mm_add_ps(
						_mm_mul_ps(_mm_shuffle_ps(v31, v31, 85), v30[7]),
						_mm_mul_ps(_mm_shuffle_ps(v31, v31, 0), v30[6])),
					_mm_mul_ps(_mm_shuffle_ps(v31, v31, 170), v30[8])),
				v30[9]);
		}
		else
		{
			v32 = 0i64;
		}
		v17 = 0;
		if (v16)
		{
			v33 = v15 + 28;
			v34 = v14;
			do
			{
				v35 = sub_1403D90D0((__int64)a1, *(_DWORD*)(v33 - 28));
				v36 = (__m128*)sub_140401060((__int64)a1);
				v37 = *(__m128*)(v35 + 4576);
				v38 = _mm_add_ps(
					_mm_add_ps(
						_mm_add_ps(
							_mm_mul_ps(_mm_shuffle_ps(v37, v37, 85), v36[1]),
							_mm_mul_ps(_mm_shuffle_ps(v37, v37, 0), *v36)),
						_mm_mul_ps(_mm_shuffle_ps(v37, v37, 170), v36[2])),
					v36[3]);
				v37.m128_f32[0] = -_mm_shuffle_ps(v38, v38, 170).m128_f32[0];
				*(float*)(v33 - 12) = fmaxf(v37.m128_f32[0], 0.0);
				v39 = sub_1408FD190(v38.m128_f32[0], v37.m128_f32[0]);
				*(_DWORD*)(v33 - 4) = 0;
				v33 += 32i64;
				*(float*)(v33 - 32) = v39;
				--v34;
			} while (v34);
			v15 = v80;
			v80 = 0i64;
			v81 = v14;
			sub_1401D3110(
				&v83,
				(__int64(__fastcall*)(unsigned __int64, __int64, __int64))sub_14055A550,
				(unsigned __int64*)&v80,
				v15,
				2);
			v40 = v85;
			v41 = 1i64;
			*(_DWORD*)(32i64 * *v85 + v15 + 20) = 0;
			if (v14 > 1)
			{
				if ((__int64)(v14 - 1) >= 4)
				{
					v42 = v40 + 2;
					v43 = ((v14 - 5) >> 2) + 1;
					v41 = 4 * v43 + 1;
					do
					{
						v44 = *(v42 - 1);
						v45 = *(v42 - 2);
						v42 += 4;
						*(float*)(32 * v44 + v15 + 20) = _mm_sqrt_ps((__m128) * (unsigned int*)(32 * v44 + v15 + 16)).m128_f32[0]
							- _mm_sqrt_ps((__m128) * (unsigned int*)(32 * v45 + v15 + 16)).m128_f32[0];
						*(float*)(32i64 * *(v42 - 4) + v15 + 20) = _mm_sqrt_ps((__m128) * (unsigned int*)(32i64 * *(v42 - 4)
							+ v15
							+ 16)).m128_f32[0]
							- _mm_sqrt_ps((__m128) * (unsigned int*)(32i64 * *(v42 - 5)
								+ v15
								+ 16)).m128_f32[0];
						*(float*)(32i64 * *(v42 - 3) + v15 + 20) = _mm_sqrt_ps((__m128) * (unsigned int*)(32i64 * *(v42 - 3)
							+ v15
							+ 16)).m128_f32[0]
							- _mm_sqrt_ps((__m128) * (unsigned int*)(32i64 * *(v42 - 4)
								+ v15
								+ 16)).m128_f32[0];
						*(float*)(32i64 * *(v42 - 2) + v15 + 20) = _mm_sqrt_ps((__m128) * (unsigned int*)(32i64 * *(v42 - 2)
							+ v15
							+ 16)).m128_f32[0]
							- _mm_sqrt_ps((__m128) * (unsigned int*)(32i64 * *(v42 - 3)
								+ v15
								+ 16)).m128_f32[0];
						--v43;
					} while (v43);
				}
				for (;
					v41 < v14;
					*(float*)(32 * v46 + v15 + 20) = _mm_sqrt_ps((__m128) * (unsigned int*)(32 * v46 + v15 + 16)).m128_f32[0]
					- _mm_sqrt_ps((__m128) * (unsigned int*)(32 * v47 + v15 + 16)).m128_f32[0])
				{
					v46 = v40[v41];
					v47 = v40[v41++ - 1];
				}
			}
			v80 = 0i64;
			v81 = v14;
			sub_1401D3110(
				v88,
				(__int64(__fastcall*)(unsigned __int64, __int64, __int64))sub_14055A580,
				(unsigned __int64*)&v80,
				v15,
				2);
			v48 = v89;
			v49 = 0i64;
			if ((__int64)v14 < 4)
			{
			LABEL_63:
				while (v49 < v14)
				{
					v55 = 32i64 * *(_QWORD*)(v48 + 8 * v49);
					if (*(float*)(v55 + v15 + 20) < 1.0)
						break;
					++v49;
					*(_DWORD*)(v55 + v15 + 24) = 1;
				}
			}
			else
			{
				v50 = (_QWORD*)(v89 + 16);
				while (1)
				{
					v51 = 32i64 * *(v50 - 2);
					if (*(float*)(v51 + v15 + 20) < 1.0)
						break;
					*(_DWORD*)(v51 + v15 + 24) = 1;
					v52 = 32i64 * *(v50 - 1);
					if (*(float*)(v52 + v15 + 20) < 1.0)
						break;
					*(_DWORD*)(v52 + v15 + 24) = 1;
					v53 = 32i64 * *v50;
					if (*(float*)(v53 + v15 + 20) < 1.0)
						break;
					*(_DWORD*)(v53 + v15 + 24) = 1;
					v54 = 32i64 * v50[1];
					if (*(float*)(v54 + v15 + 20) < 1.0)
						break;
					*(_DWORD*)(v54 + v15 + 24) = 1;
					v49 += 4i64;
					v50 += 4;
					if (v49 >= v14 - 3)
						goto LABEL_63;
				}
			}
			v56 = 0;
			v57 = 0i64;
			do
			{
				v58 = v40[v57++];
				v58 *= 32i64;
				*(_DWORD*)(v58 + v15 + 24) += v56;
				v56 = *(_DWORD*)(v58 + v15 + 24);
			} while (v57 < v14);
			v80 = 0i64;
			v81 = v14;
			sub_1401D3110(
				v86,
				(__int64(__fastcall*)(unsigned __int64, __int64, __int64))sub_14055A5B0,
				(unsigned __int64*)&v80,
				v15,
				2);
			while (*(_DWORD*)(32i64 * *(_QWORD*)(v87 + 8 * v12) + v15) != a7)
			{
				if (++v12 >= v14)
					goto LABEL_76;
			}
			if (a6)
				v59 = v12 + 1;
			else
				v59 = v14 + v12 - 1;
			v17 = *(_DWORD*)(32i64 * *(_QWORD*)(v87 + 8 * (v59 % v14)) + v15);
		LABEL_76:
			if (v86[0] < v86[1])
				sub_14018B900(v87 + 8 * v86[0], 0);
			if (v88[0] < v88[1])
				sub_14018B900(v48 + 8 * v88[0], 0);
			if (v83 < v84)
			{
				v60 = (__int64)&v40[v83];
				goto LABEL_96;
			}
		}
		else
		{
			v61 = v15 + 28;
			v62 = v14;
			do
			{
				v63 = sub_1403D90D0((__int64)a1, *(_DWORD*)(v61 - 28));
				v64 = (__m128*)sub_140401060((__int64)a1);
				v65 = *(__m128*)(v63 + 4576);
				v66 = (__m128)0x40400000u;
				v67 = _mm_sub_ps(
					_mm_add_ps(
						_mm_add_ps(
							_mm_add_ps(
								_mm_mul_ps(_mm_shuffle_ps(v65, v65, 85), v64[1]),
								_mm_mul_ps(_mm_shuffle_ps(v65, v65, 0), *v64)),
							_mm_mul_ps(_mm_shuffle_ps(v65, v65, 170), v64[2])),
						v64[3]),
					v32);
				v68 = _mm_mul_ps(v67, v67);
				v68.m128_f32[0] = (float)(v68.m128_f32[0] + _mm_shuffle_ps(v68, v68, 85).m128_f32[0])
					+ _mm_shuffle_ps(v68, v68, 170).m128_f32[0];
				v69 = 1.0 / fsqrt(v68.m128_f32[0]);
				v70 = _mm_mul_ps(v67, v67);
				v66.m128_f32[0] = fmaxf((float)((float)(3.0 - (float)((float)(v68.m128_f32[0] * v69) * v69)) * 0.5) * v69, 0.0);
				v71 = _mm_mul_ps(_mm_shuffle_ps(v66, v66, 0), v67);
				v71.m128_u64[0] = _mm_shuffle_ps(v71, v71, 170).m128_u64[0];
				v71.m128_f32[0] = (float)(v71.m128_f32[0] * 0.44999999) + 0.55000001;
				v72 = sub_1408FBFC0(*(double*)v71.m128_u64, 8.0);
				v61 += 32i64;
				*(float*)(v61 - 32) = -_mm_shuffle_ps(v67, v67, 170).m128_f32[0];
				*(float*)(v61 - 44) = fsqrt(
					(float)(v70.m128_f32[0] + _mm_shuffle_ps(v70, v70, 85).m128_f32[0])
					+ _mm_shuffle_ps(v70, v70, 170).m128_f32[0])
					* *(float*)&v72;
				--v62;
			} while (v62);
			v15 = v80;
			v80 = 0i64;
			v81 = v14;
			sub_1401D3110(
				&v83,
				(__int64(__fastcall*)(unsigned __int64, __int64, __int64))sub_14055A550,
				(unsigned __int64*)&v80,
				v15,
				2);
			if ((__int64)v14 < 4)
			{
			LABEL_91:
				while (v12 < v14)
				{
					v78 = 32i64 * v85[v12];
					v17 = *(_DWORD*)(v78 + v15);
					if (*(float*)(v78 + v15 + 28) >= 0.0)
						break;
					++v12;
				}
			}
			else
			{
				v73 = v85 + 2;
				while (1)
				{
					v74 = 32i64 * *(v73 - 2);
					v17 = *(_DWORD*)(v74 + v15);
					if (*(float*)(v74 + v15 + 28) >= 0.0)
						break;
					v75 = 32i64 * *(v73 - 1);
					v17 = *(_DWORD*)(v75 + v15);
					if (*(float*)(v75 + v15 + 28) >= 0.0)
						break;
					v76 = 32i64 * *v73;
					v17 = *(_DWORD*)(v76 + v15);
					if (*(float*)(v76 + v15 + 28) >= 0.0)
						break;
					v77 = 32i64 * v73[1];
					v17 = *(_DWORD*)(v77 + v15);
					if (*(float*)(v77 + v15 + 28) >= 0.0)
						break;
					v12 += 4i64;
					v73 += 4;
					if (v12 >= v14 - 3)
						goto LABEL_91;
				}
			}
			if (v83 < v84)
			{
				v60 = (__int64)&v85[v83];
			LABEL_96:
				sub_14018B900(v60, 0);
			}
		}
	}
LABEL_97:
	if (v15)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v15 - 16) + 8i64))(v15 - 16);
	return v17;
}
// 14055A8EB: conditional instruction was optimized away because r14.8!=0
// 14055ABD9: conditional instruction was optimized away because r14.8!=0
// 14055AC2B: conditional instruction was optimized away because r14.8!=0
// 14055ACB9: conditional instruction was optimized away because r14.8!=0
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C7DC60: using guessed type __int64 qword_140C7DC60;

