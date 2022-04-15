#include "../winhttp.h"

//----- (00000001408C64E0) ----------------------------------------------------
__int64 __fastcall sub_1408C64E0(__int64 a1, __int64 a2)
{
	int v2; // eax
	__int64 v3; // r14
	int v4; // edx
	int v6; // ebx
	__int64 v7; // rax
	__int64 v8; // rcx
	int v9; // ebp
	__int64 v10; // rax
	__int64 v11; // r15
	int* v13; // r12
	__m128* v14; // r13
	__m128* v15; // rdi
	float v16; // xmm9_4
	float v17; // xmm7_4
	__m128 v18; // xmm1
	float v19; // xmm10_4
	__int64 v20; // rax
	float v21; // xmm8_4
	__m128 v22; // xmm1
	unsigned int v23; // eax
	unsigned int v24; // ecx
	char v25; // dl
	int* v26; // rbx
	unsigned int v27; // ebp
	unsigned __int8 i; // bl
	__m128* v29; // rcx
	int* v30; // rbx
	__int64 v31; // rdi
	unsigned int j; // r14d
	__int64 v33; // rbx
	float** v34; // rbx
	float* v35; // rdi
	__int64 v36; // r14
	float v37; // xmm6_4
	unsigned int v38; // ebx
	_OWORD* v39; // rbx
	float* v40; // rax
	float v41; // xmm0_4
	float v42; // xmm3_4
	float* v43; // r14
	float v44; // xmm2_4
	float v45; // xmm3_4
	float v46; // xmm0_4
	_OWORD* v47; // rdi
	float* v48; // rax
	float v49; // xmm3_4
	float v50; // xmm2_4
	float v51; // xmm3_4
	float* v52; // rdx
	unsigned int v53; // edi
	float v54; // xmm1_4
	float v55; // xmm0_4
	_OWORD* v56; // rdi
	float* v57; // rax
	float v58; // xmm3_4
	float v59; // xmm2_4
	float v60; // xmm3_4
	float v61; // xmm0_4
	_OWORD* v62; // rdi
	float* v63; // rax
	float v64; // xmm3_4
	float v65; // xmm2_4
	float v66; // xmm3_4
	float* v67; // rdx
	float v68; // xmm1_4
	_DWORD* v69; // rdx
	bool v70; // zf
	float v71; // [rsp+28h] [rbp-140h]
	float v72; // [rsp+28h] [rbp-140h]
	__m128* v73; // [rsp+50h] [rbp-118h]
	float* v74; // [rsp+58h] [rbp-110h]
	__m128* v75; // [rsp+60h] [rbp-108h]
	int v76; // [rsp+68h] [rbp-100h]
	int v77; // [rsp+6Ch] [rbp-FCh]
	int v78; // [rsp+70h] [rbp-F8h]
	int v79; // [rsp+74h] [rbp-F4h]
	int v80; // [rsp+78h] [rbp-F0h]
	int v81; // [rsp+7Ch] [rbp-ECh]
	__int64 v82[4]; // [rsp+80h] [rbp-E8h] BYREF
	unsigned int v83; // [rsp+170h] [rbp+8h]
	char v85; // [rsp+180h] [rbp+18h]
	int v86; // [rsp+180h] [rbp+18h]
	unsigned int v87; // [rsp+188h] [rbp+20h]

	v2 = *(_DWORD*)(a2 + 8);
	v3 = a2;
	v4 = *(unsigned __int8*)(a1 + 300);
	v85 = v2;
	v6 = v2 & 0x30;
	v7 = *(_QWORD*)(a1 + 328);
	v8 = *(_QWORD*)(a1 + 336);
	v9 = 0;
	if (*(_BYTE*)(v7 + 153))
		v9 = v6 != 0 ? 2 : 0;
	v81 = v9;
	v10 = (*(__int64(__fastcall**)(__int64, unsigned __int64))(*(_QWORD*)v8 + 8i64))(
		v8,
		(unsigned __int64)(unsigned int)(v9 + v4 + 6) << 10);
	v11 = v10;
	if (!v10)
		return 52i64;
	v13 = (int*)(v10 + 1024);
	v82[0] = v10 + 2048;
	v14 = 0i64;
	v82[1] = v10 + 3072;
	v15 = 0i64;
	v82[2] = v10 + 4096;
	v74 = 0i64;
	v75 = 0i64;
	v73 = 0i64;
	v82[3] = v10 + 5120;
	if (*(_BYTE*)(a1 + 300))
	{
		v15 = (__m128*)(v10 + 7168);
		v14 = (__m128*)(v10 + 6144);
		v74 = (float*)(v10 + 7168);
		if (v9 == 2)
		{
			v75 = (__m128*)(v10 + 0x2000);
			v73 = (__m128*)(v10 + 9216);
		}
	}
	v16 = 0.0;
	v17 = (float)((float)(*(float*)(a1 + 356) * 0.0055555557) * 0.29289401) + 0.70710599;
	v18 = (__m128)0x3F800000u;
	v18.m128_f32[0] = 1.0 - (float)(v17 * v17);
	if (v18.m128_f32[0] <= 0.0)
		v19 = 0.0;
	else
		LODWORD(v19) = _mm_sqrt_ps(v18).m128_u32[0];
	v20 = *(_QWORD*)(a1 + 328);
	v22 = (__m128)0x3F800000u;
	v21 = (float)((float)(*(float*)(v20 + 20) * 0.0055555557) * 0.29289401) + 0.70710599;
	v22.m128_f32[0] = 1.0 - (float)(v21 * v21);
	if (v22.m128_f32[0] > 0.0)
		LODWORD(v16) = _mm_sqrt_ps(v22).m128_u32[0];
	if (!v6)
	{
		*(_DWORD*)(v20 + 60) = 1065353216;
		*(_DWORD*)(*(_QWORD*)(a1 + 328) + 64i64) = 1065353216;
	}
	v23 = 0;
	v83 = 0;
	v24 = *(unsigned __int16*)(v3 + 18);
	v87 = v24;
	if (*(_WORD*)(v3 + 18))
	{
		v25 = v85;
		v26 = (int*)(a1 + 176);
		v77 = v85 & 1;
		v78 = v85 & 2;
		v80 = v85 & 4;
		v76 = v85 & 0x10;
		v86 = v85 & 8;
		v79 = v25 & 0x20;
		do
		{
			v27 = 256;
			if (v24 < 0x100)
				v27 = v24;
			sub_1408C5760(a1, v3, (int*)v11, v27, v23);
			if (*(_DWORD*)(a1 + 200))
				sub_1408CAC30((int*)(a1 + 200), (char*)v11, v13, v27);
			else
				sub_1407DB590(v13, (int*)v11, 4 * v27);
			if (*v26)
				sub_1408CAB40(v26, (int*)v11, v27);
			if (*(_BYTE*)(a1 + 300))
			{
				sub_1408CA160(*(unsigned int**)(a1 + 320), (__int128*)v11, v14, v15, v27);
				if (*(_BYTE*)(*(_QWORD*)(a1 + 328) + 152i64))
				{
					for (i = 0; i < *(_BYTE*)(a1 + 296); ++i)
					{
						v29 = (__m128*)(*(_QWORD*)(a1 + 312) + 192i64 * i);
						if (v29[11].m128_i32[0] == 1)
						{
							sub_1408A8970(v29, v14->m128_f32, v27);
							sub_1408A8970((__m128*)(*(_QWORD*)(a1 + 312) + 192i64 * ++i), v15->m128_f32, v27);
						}
					}
				}
				if (v81 == 2)
				{
					if (*(_DWORD*)(a1 + 224))
					{
						sub_1408CAC30((int*)(a1 + 224), (char*)v14, v75, v27);
						sub_1408CAC30((int*)(a1 + 248), (char*)v15, v73, v27);
					}
					else
					{
						v75 = v14;
						v73 = v15;
					}
				}
			}
			v30 = (int*)(a1 + 8);
			v31 = 4i64;
			do
			{
				sub_1408CA650(v30, (float*)v13, v27);
				v30 += 6;
				--v31;
			} while (v31);
			sub_1408C59D0(a1, (float*)v13, v27);
			sub_1407E4830((int*)(v11 + 2048), 0i64, 0x1000ui64);
			for (j = 0; j < *(_DWORD*)(a1 + 288); ++j)
			{
				v33 = 168i64 * j;
				sub_1408CAB40((int*)(v33 + *(_QWORD*)(a1 + 304) + 144i64), v13, v27);
				sub_1408CB140(v33 + *(_QWORD*)(a1 + 304), (__int64)v13, v82[j & 1], v82[(j & 1) + 2], v27);
			}
			v34 = (float**)v82;
			v35 = (float*)(a1 + 104);
			v36 = 4i64;
			v37 = *(float*)(a1 + 284) * 1.4142135;
			do
			{
				sub_1408AAE50(v35, *v34, v27, v37);
				v35 += 3;
				++v34;
				--v36;
			} while (v36);
			v38 = 0;
			if (v77)
			{
				v39 = (_OWORD*)(*(_QWORD*)a2 + 4i64 * v83);
				v40 = *(float**)(a1 + 328);
				v41 = *(float*)(a1 + 396) * *(float*)(a1 + 420);
				v42 = v40[21] * v40[15];
				sub_1408CBD10(
					v39,
					(float*)(v11 + 2048),
					(float*)(v11 + 3072),
					COERCE_DOUBLE((unsigned __int64)*(_DWORD*)(a1 + 412)),
					v40[19],
					v41 * v17,
					v42 * v21,
					v41 * v19,
					v42 * v16,
					v27);
				v43 = v74;
				if (*(_BYTE*)(a1 + 300))
				{
					v44 = *(float*)(a1 + 416) * *(float*)(a1 + 396);
					v45 = *(float*)(*(_QWORD*)(a1 + 328) + 80i64) * *(float*)(*(_QWORD*)(a1 + 328) + 60i64);
					sub_1408CBD10(
						v39,
						v14->m128_f32,
						v74,
						COERCE_DOUBLE(1065353216i64),
						1.0,
						v44 * v17,
						v45 * v21,
						v44 * v19,
						v45 * v16,
						v27);
				}
				v38 = 1;
			}
			else
			{
				v43 = v74;
			}
			if (v78)
			{
				v46 = *(float*)(a1 + 396) * *(float*)(a1 + 420);
				v47 = (_OWORD*)(*(_QWORD*)a2 + 4 * (v83 + v38 * (unsigned __int64)*(unsigned __int16*)(a2 + 16)));
				v48 = *(float**)(a1 + 328);
				v49 = v48[21] * v48[15];
				sub_1408CBD10(
					v47,
					(float*)(v11 + 2048),
					(float*)(v11 + 3072),
					COERCE_DOUBLE((unsigned __int64)*(_DWORD*)(a1 + 412)),
					v48[19],
					v46 * v19,
					v49 * v16,
					v46 * v17,
					v49 * v21,
					v27);
				if (*(_BYTE*)(a1 + 300))
				{
					v50 = *(float*)(a1 + 416) * *(float*)(a1 + 396);
					v51 = *(float*)(*(_QWORD*)(a1 + 328) + 80i64) * *(float*)(*(_QWORD*)(a1 + 328) + 60i64);
					sub_1408CBD10(
						v47,
						v14->m128_f32,
						v43,
						COERCE_DOUBLE(1065353216i64),
						1.0,
						v50 * v19,
						v51 * v16,
						v50 * v17,
						v51 * v21,
						v27);
				}
				++v38;
			}
			v3 = a2;
			if (v80)
			{
				v52 = *(float**)(a1 + 328);
				v53 = v83;
				v54 = (float)(v52[21] * v52[17]) * 0.70710599;
				v71 = (float)(*(float*)(a1 + 420) * *(float*)(a1 + 404)) * 0.70710599;
				sub_1408CBD10(
					(_OWORD*)(*(_QWORD*)a2 + 4 * (v83 + v38++ * (unsigned __int64)*(unsigned __int16*)(a2 + 16))),
					(float*)(v11 + 4096),
					(float*)(v11 + 5120),
					COERCE_DOUBLE((unsigned __int64)*(_DWORD*)(a1 + 412)),
					v52[19],
					v71,
					v54,
					v71,
					v54,
					v27);
			}
			else
			{
				v53 = v83;
			}
			if (v76)
			{
				v55 = *(float*)(a1 + 400) * *(float*)(a1 + 420);
				v56 = (_OWORD*)(*(_QWORD*)a2 + 4 * (v53 + v38 * (unsigned __int64)*(unsigned __int16*)(a2 + 16)));
				v57 = *(float**)(a1 + 328);
				v58 = v57[21] * v57[16];
				sub_1408CBD10(
					v56,
					(float*)(v11 + 4096),
					(float*)(v11 + 5120),
					COERCE_DOUBLE((unsigned __int64)*(_DWORD*)(a1 + 412)),
					v57[19],
					v55 * v17,
					v58 * v21,
					v55 * v19,
					v58 * v16,
					v27);
				if (*(_BYTE*)(a1 + 300))
				{
					v59 = *(float*)(a1 + 416) * *(float*)(a1 + 400);
					v60 = *(float*)(*(_QWORD*)(a1 + 328) + 80i64) * *(float*)(*(_QWORD*)(a1 + 328) + 64i64);
					sub_1408CBD10(
						v56,
						v75->m128_f32,
						v73->m128_f32,
						COERCE_DOUBLE(1065353216i64),
						1.0,
						v59 * v17,
						v60 * v21,
						v59 * v19,
						v60 * v16,
						v27);
				}
				++v38;
			}
			if (v79)
			{
				v61 = *(float*)(a1 + 400) * *(float*)(a1 + 420);
				v62 = (_OWORD*)(*(_QWORD*)a2 + 4 * (v83 + v38 * (unsigned __int64)*(unsigned __int16*)(a2 + 16)));
				v63 = *(float**)(a1 + 328);
				v64 = v63[21] * v63[16];
				sub_1408CBD10(
					v62,
					(float*)(v11 + 4096),
					(float*)(v11 + 5120),
					COERCE_DOUBLE((unsigned __int64)*(_DWORD*)(a1 + 412)),
					v63[19],
					v61 * v19,
					v64 * v16,
					v61 * v17,
					v64 * v21,
					v27);
				if (*(_BYTE*)(a1 + 300))
				{
					v65 = *(float*)(a1 + 416) * *(float*)(a1 + 400);
					v66 = *(float*)(*(_QWORD*)(a1 + 328) + 80i64) * *(float*)(*(_QWORD*)(a1 + 328) + 64i64);
					sub_1408CBD10(
						v62,
						v75->m128_f32,
						v73->m128_f32,
						COERCE_DOUBLE(1065353216i64),
						1.0,
						v65 * v19,
						v66 * v16,
						v65 * v17,
						v66 * v21,
						v27);
				}
				++v38;
			}
			if (v86)
			{
				v67 = *(float**)(a1 + 328);
				v68 = (float)(v67[21] * v67[18]) * 0.70710599;
				v72 = (float)(*(float*)(a1 + 408) * *(float*)(a1 + 420)) * 0.70710599;
				sub_1408CBD10(
					(_OWORD*)(*(_QWORD*)a2 + 4 * (v83 + v38 * (unsigned __int64)*(unsigned __int16*)(a2 + 16))),
					(float*)(v11 + 4096),
					(float*)(v11 + 5120),
					COERCE_DOUBLE((unsigned __int64)*(_DWORD*)(a1 + 412)),
					v67[19],
					v72,
					v68,
					v72,
					v68,
					v27);
			}
			v69 = *(_DWORD**)(a1 + 328);
			v15 = (__m128*)v74;
			v17 = v21;
			v19 = v16;
			v26 = (int*)(a1 + 176);
			*(_DWORD*)(a1 + 412) = v69[19];
			*(_DWORD*)(a1 + 416) = v69[20];
			*(_DWORD*)(a1 + 420) = v69[21];
			*(_DWORD*)(a1 + 396) = v69[15];
			*(_DWORD*)(a1 + 404) = v69[17];
			*(_DWORD*)(a1 + 400) = v69[16];
			v23 = v27 + v83;
			*(_DWORD*)(a1 + 408) = v69[18];
			v83 += v27;
			v70 = v87 == v27;
			v24 = v87 - v27;
			v87 -= v27;
		} while (!v70);
	}
	(*(void(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 336) + 16i64))(*(_QWORD*)(a1 + 336), v11);
	return 1i64;
}
// 140B79ED0: using guessed type int dword_140B79ED0;

