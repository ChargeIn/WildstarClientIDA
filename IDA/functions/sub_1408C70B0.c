#include "../winhttp.h"

//----- (00000001408C70B0) ----------------------------------------------------
__int64 __fastcall sub_1408C70B0(__int64 a1, __int64 a2)
{
	int v2; // ebp
	__int64 v3; // rbx
	__int64 v5; // rax
	__int64 v6; // r15
	int* v8; // r12
	__m128* v9; // rdi
	float* v10; // r14
	__m128* v11; // r13
	float v12; // xmm9_4
	float v13; // xmm7_4
	__m128 v14; // xmm1
	float v15; // xmm10_4
	float v16; // xmm8_4
	__m128 v17; // xmm1
	unsigned int v18; // eax
	unsigned int v19; // ecx
	unsigned int v20; // ebp
	unsigned __int8 i; // bl
	__m128* v22; // rcx
	int* v23; // rbx
	__int64 v24; // rdi
	unsigned int j; // r14d
	__int64 v26; // rbx
	float** v27; // rbx
	float* v28; // rdi
	__int64 v29; // r14
	float v30; // xmm6_4
	float v31; // xmm0_4
	_OWORD* v32; // rbx
	float* v33; // rax
	float v34; // xmm3_4
	float v35; // xmm2_4
	float v36; // xmm3_4
	float v37; // xmm0_4
	_OWORD* v38; // rbx
	float* v39; // rax
	float v40; // xmm3_4
	float v41; // xmm2_4
	float v42; // xmm3_4
	unsigned int v43; // ebx
	float* v44; // rdx
	float v45; // xmm0_4
	_OWORD* v46; // rdi
	float* v47; // rax
	float v48; // xmm3_4
	float v49; // xmm2_4
	float v50; // xmm3_4
	unsigned int v51; // ebx
	float v52; // xmm0_4
	_OWORD* v53; // rdi
	float* v54; // rax
	float v55; // xmm3_4
	float v56; // xmm2_4
	float v57; // xmm3_4
	float* v58; // rdx
	__int64 v59; // rcx
	float v60; // xmm1_4
	_DWORD* v61; // rcx
	bool v62; // zf
	float v63; // [rsp+28h] [rbp-140h]
	float v64; // [rsp+28h] [rbp-140h]
	float v65; // [rsp+30h] [rbp-138h]
	int v66; // [rsp+50h] [rbp-118h]
	__m128* v67; // [rsp+58h] [rbp-110h]
	float* v68; // [rsp+60h] [rbp-108h]
	float* v69; // [rsp+68h] [rbp-100h]
	__int64 v70[6]; // [rsp+70h] [rbp-F8h] BYREF
	unsigned int v71; // [rsp+170h] [rbp+8h]
	unsigned int v73; // [rsp+180h] [rbp+18h]
	int v74; // [rsp+188h] [rbp+20h]

	v2 = *(_DWORD*)(a2 + 8);
	v3 = a2;
	v5 = (*(__int64(__fastcall**)(_QWORD, unsigned __int64))(**(_QWORD**)(a1 + 336) + 8i64))(
		*(_QWORD*)(a1 + 336),
		(unsigned __int64)(2 * (unsigned int)*(unsigned __int8*)(a1 + 300) + 8) << 10);
	v6 = v5;
	if (!v5)
		return 52i64;
	v8 = (int*)(v5 + 1024);
	v70[0] = v5 + 2048;
	v9 = 0i64;
	v70[1] = v5 + 3072;
	v10 = 0i64;
	v70[2] = v5 + 4096;
	v11 = 0i64;
	v70[3] = v5 + 5120;
	v69 = 0i64;
	v70[4] = v5 + 6144;
	v68 = 0i64;
	v67 = 0i64;
	v70[5] = v5 + 7168;
	if (*(_BYTE*)(a1 + 300))
	{
		v9 = (__m128*)(v5 + 9216);
		v10 = (float*)(v5 + 10240);
		v69 = (float*)(v5 + 9216);
		v68 = (float*)(v5 + 10240);
		v67 = (__m128*)(v5 + 11264);
		v11 = (__m128*)(v5 + 0x2000);
	}
	v12 = 0.0;
	v13 = (float)((float)(*(float*)(a1 + 356) * 0.0055555557) * 0.29289401) + 0.70710599;
	v14 = (__m128)0x3F800000u;
	v14.m128_f32[0] = 1.0 - (float)(v13 * v13);
	if (v14.m128_f32[0] <= 0.0)
		v15 = 0.0;
	else
		LODWORD(v15) = _mm_sqrt_ps(v14).m128_u32[0];
	v17 = (__m128)0x3F800000u;
	v16 = (float)((float)(*(float*)(*(_QWORD*)(a1 + 328) + 20i64) * 0.0055555557) * 0.29289401) + 0.70710599;
	v17.m128_f32[0] = 1.0 - (float)(v16 * v16);
	if (v17.m128_f32[0] > 0.0)
		LODWORD(v12) = _mm_sqrt_ps(v17).m128_u32[0];
	v18 = *(unsigned __int16*)(v3 + 18);
	v19 = 0;
	v71 = 0;
	v73 = v18;
	if (*(_WORD*)(v3 + 18))
	{
		v66 = v2 & 8;
		v74 = v2 & 4;
		do
		{
			v20 = 256;
			if (v18 < 0x100)
				v20 = v18;
			sub_1408C5760(a1, v3, (int*)v6, v20, v19);
			if (*(_DWORD*)(a1 + 200))
				sub_1408CAC30((int*)(a1 + 200), (char*)v6, v8, v20);
			else
				sub_1407DB590(v8, (int*)v6, 4 * v20);
			if (*(_DWORD*)(a1 + 176))
				sub_1408CAB40((int*)(a1 + 176), (int*)v6, v20);
			if (*(_BYTE*)(a1 + 300))
			{
				sub_1408CA160(*(unsigned int**)(a1 + 320), (__int128*)v6, v11, v9, v20);
				if (*(_BYTE*)(*(_QWORD*)(a1 + 328) + 152i64))
				{
					for (i = 0; i < *(_BYTE*)(a1 + 296); ++i)
					{
						v22 = (__m128*)(*(_QWORD*)(a1 + 312) + 192i64 * i);
						if (v22[11].m128_i32[0] == 1)
						{
							sub_1408A8970(v22, v11->m128_f32, v20);
							sub_1408A8970((__m128*)(*(_QWORD*)(a1 + 312) + 192i64 * ++i), v9->m128_f32, v20);
						}
					}
				}
				if (*(_DWORD*)(a1 + 224))
				{
					sub_1408CAC30((int*)(a1 + 224), (char*)v11, v10, v20);
					sub_1408CAC30((int*)(a1 + 248), (char*)v9, v67, v20);
				}
				else
				{
					v68 = (float*)v11;
					v67 = v9;
				}
			}
			v23 = (int*)(a1 + 8);
			v24 = 4i64;
			do
			{
				sub_1408CA650(v23, (float*)v8, v20);
				v23 += 6;
				--v24;
			} while (v24);
			sub_1408C59D0(a1, (float*)v8, v20);
			sub_1407E4830((int*)(v6 + 2048), 0i64, 0x1800ui64);
			for (j = 0; j < *(_DWORD*)(a1 + 288); ++j)
			{
				v26 = 168i64 * j;
				sub_1408CAB40((int*)(v26 + *(_QWORD*)(a1 + 304) + 144i64), v8, v20);
				sub_1408CB3C0(v26 + *(_QWORD*)(a1 + 304), (__int64)v8, v70[j & 1], v70[(j & 1) + 2], v70[(j & 1) + 4], v20);
			}
			v27 = (float**)v70;
			v28 = (float*)(a1 + 104);
			v29 = 6i64;
			v30 = *(float*)(a1 + 284) * 1.4142135;
			do
			{
				sub_1408AAE50(v28, *v27, v20, v30);
				v28 += 3;
				++v27;
				--v29;
			} while (v29);
			v31 = *(float*)(a1 + 420) * *(float*)(a1 + 396);
			v32 = (_OWORD*)(*(_QWORD*)a2 + 4i64 * v71);
			v33 = *(float**)(a1 + 328);
			v34 = v33[21] * v33[15];
			sub_1408CBD10(
				v32,
				(float*)(v6 + 2048),
				(float*)(v6 + 3072),
				COERCE_DOUBLE((unsigned __int64)*(_DWORD*)(a1 + 412)),
				v33[19],
				v31 * v13,
				v34 * v16,
				v31 * v15,
				v34 * v12,
				v20);
			if (*(_BYTE*)(a1 + 300))
			{
				v35 = *(float*)(a1 + 416) * *(float*)(a1 + 396);
				v36 = *(float*)(*(_QWORD*)(a1 + 328) + 80i64) * *(float*)(*(_QWORD*)(a1 + 328) + 60i64);
				sub_1408CBD10(
					v32,
					v11->m128_f32,
					v69,
					COERCE_DOUBLE(1065353216i64),
					1.0,
					v35 * v13,
					v36 * v16,
					v35 * v15,
					v36 * v12,
					v20);
			}
			v37 = *(float*)(a1 + 420) * *(float*)(a1 + 396);
			v38 = (_OWORD*)(*(_QWORD*)a2 + 4 * (v71 + (unsigned __int64)*(unsigned __int16*)(a2 + 16)));
			v39 = *(float**)(a1 + 328);
			v40 = v39[21] * v39[15];
			sub_1408CBD10(
				v38,
				(float*)(v6 + 2048),
				(float*)(v6 + 3072),
				COERCE_DOUBLE((unsigned __int64)*(_DWORD*)(a1 + 412)),
				v39[19],
				v37 * v15,
				v40 * v12,
				v37 * v13,
				v40 * v16,
				v20);
			if (*(_BYTE*)(a1 + 300))
			{
				v41 = *(float*)(a1 + 416) * *(float*)(a1 + 396);
				v42 = *(float*)(*(_QWORD*)(a1 + 328) + 80i64) * *(float*)(*(_QWORD*)(a1 + 328) + 60i64);
				sub_1408CBD10(
					v38,
					v11->m128_f32,
					v69,
					COERCE_DOUBLE(1065353216i64),
					1.0,
					v41 * v15,
					v42 * v12,
					v41 * v13,
					v42 * v16,
					v20);
			}
			v43 = 2;
			if (v74)
			{
				v44 = *(float**)(a1 + 328);
				v65 = (float)(v44[21] * v44[17]) * 0.70710599;
				v63 = (float)(*(float*)(a1 + 420) * *(float*)(a1 + 404)) * 0.70710599;
				sub_1408CBD10(
					(_OWORD*)(*(_QWORD*)a2 + 4 * (v71 + 2i64 * *(unsigned __int16*)(a2 + 16))),
					(float*)(v6 + 4096),
					(float*)(v6 + 5120),
					COERCE_DOUBLE((unsigned __int64)*(_DWORD*)(a1 + 412)),
					v44[19],
					v63,
					v65,
					v63,
					v65,
					v20);
				v43 = 3;
			}
			v45 = *(float*)(a1 + 420) * *(float*)(a1 + 400);
			v46 = (_OWORD*)(*(_QWORD*)a2 + 4 * (v71 + v43 * (unsigned __int64)*(unsigned __int16*)(a2 + 16)));
			v47 = *(float**)(a1 + 328);
			v48 = v47[21] * v47[16];
			sub_1408CBD10(
				v46,
				(float*)(v6 + 6144),
				(float*)(v6 + 7168),
				COERCE_DOUBLE((unsigned __int64)*(_DWORD*)(a1 + 412)),
				v47[19],
				v45 * v13,
				v48 * v16,
				v45 * v15,
				v48 * v12,
				v20);
			if (*(_BYTE*)(a1 + 300))
			{
				v49 = *(float*)(a1 + 416) * *(float*)(a1 + 400);
				v50 = *(float*)(*(_QWORD*)(a1 + 328) + 80i64) * *(float*)(*(_QWORD*)(a1 + 328) + 64i64);
				sub_1408CBD10(
					v46,
					v68,
					v67->m128_f32,
					COERCE_DOUBLE(1065353216i64),
					1.0,
					v49 * v13,
					v50 * v16,
					v49 * v15,
					v50 * v12,
					v20);
			}
			v51 = v43 + 1;
			v52 = *(float*)(a1 + 420) * *(float*)(a1 + 400);
			v53 = (_OWORD*)(*(_QWORD*)a2 + 4 * (v71 + v51 * (unsigned __int64)*(unsigned __int16*)(a2 + 16)));
			v54 = *(float**)(a1 + 328);
			v55 = v54[21] * v54[16];
			sub_1408CBD10(
				v53,
				(float*)(v6 + 6144),
				(float*)(v6 + 7168),
				COERCE_DOUBLE((unsigned __int64)*(_DWORD*)(a1 + 412)),
				v54[19],
				v52 * v15,
				v55 * v12,
				v52 * v13,
				v55 * v16,
				v20);
			if (*(_BYTE*)(a1 + 300))
			{
				v56 = *(float*)(a1 + 416) * *(float*)(a1 + 400);
				v57 = *(float*)(*(_QWORD*)(a1 + 328) + 80i64) * *(float*)(*(_QWORD*)(a1 + 328) + 64i64);
				sub_1408CBD10(
					v53,
					v68,
					v67->m128_f32,
					COERCE_DOUBLE(1065353216i64),
					1.0,
					v56 * v15,
					v57 * v12,
					v56 * v13,
					v57 * v16,
					v20);
			}
			if (v66)
			{
				v58 = *(float**)(a1 + 328);
				v59 = v51 + 1;
				v3 = a2;
				v60 = (float)(v58[21] * v58[18]) * 0.70710599;
				v64 = (float)(*(float*)(a1 + 420) * *(float*)(a1 + 408)) * 0.70710599;
				sub_1408CBD10(
					(_OWORD*)(*(_QWORD*)a2 + 4 * (v71 + *(unsigned __int16*)(a2 + 16) * v59)),
					(float*)(v6 + 4096),
					(float*)(v6 + 5120),
					COERCE_DOUBLE((unsigned __int64)*(_DWORD*)(a1 + 412)),
					v58[19],
					v64,
					v60,
					v64,
					v60,
					v20);
			}
			else
			{
				v3 = a2;
			}
			v61 = *(_DWORD**)(a1 + 328);
			v9 = (__m128*)v69;
			v10 = v68;
			v13 = v16;
			v15 = v12;
			*(_DWORD*)(a1 + 412) = v61[19];
			*(_DWORD*)(a1 + 416) = v61[20];
			*(_DWORD*)(a1 + 420) = v61[21];
			*(_DWORD*)(a1 + 396) = v61[15];
			*(_DWORD*)(a1 + 404) = v61[17];
			*(_DWORD*)(a1 + 400) = v61[16];
			*(_DWORD*)(a1 + 408) = v61[18];
			v19 = v20 + v71;
			v62 = v73 == v20;
			v18 = v73 - v20;
			v71 += v20;
			v73 -= v20;
		} while (!v62);
	}
	(*(void(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 336) + 16i64))(*(_QWORD*)(a1 + 336), v6);
	return 1i64;
}
// 140B79ED0: using guessed type int dword_140B79ED0;

