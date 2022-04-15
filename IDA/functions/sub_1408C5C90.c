#include "../winhttp.h"

//----- (00000001408C5C90) ----------------------------------------------------
__int64 __fastcall sub_1408C5C90(__int64 a1, __int64 a2)
{
	__int64 v2; // r14
	__int64 v4; // rax
	__int64 v5; // r13
	int* v7; // r15
	__m128* v8; // rdi
	__m128* v9; // r12
	float v10; // xmm10_4
	float v11; // xmm7_4
	__m128 v12; // xmm1
	float v13; // xmm9_4
	float v14; // xmm8_4
	__m128 v15; // xmm1
	unsigned int v16; // ecx
	unsigned int v17; // eax
	int* v18; // rbx
	unsigned int v19; // ebp
	unsigned __int8 i; // bl
	__m128* v21; // rcx
	int* v22; // rbx
	__int64 v23; // rdi
	unsigned int j; // r14d
	__int64 v25; // rbx
	float** v26; // rbx
	float* v27; // rdi
	__int64 v28; // r14
	float v29; // xmm6_4
	__int64 v30; // r14
	unsigned int v31; // ebx
	int v32; // edi
	_OWORD* v33; // rbx
	_OWORD* v34; // r14
	_OWORD* v35; // r14
	float v36; // xmm1_4
	float* v37; // rdx
	float v38; // xmm1_4
	_DWORD* v39; // rdx
	bool v40; // zf
	float v41; // [rsp+28h] [rbp-100h]
	__int64 v42[2]; // [rsp+50h] [rbp-D8h] BYREF
	unsigned int v43; // [rsp+130h] [rbp+8h]
	unsigned int v45; // [rsp+140h] [rbp+18h]
	float* v46; // [rsp+148h] [rbp+20h]

	v2 = a2;
	v4 = (*(__int64(__fastcall**)(_QWORD, unsigned __int64))(**(_QWORD**)(a1 + 336) + 8i64))(
		*(_QWORD*)(a1 + 336),
		(unsigned __int64)((unsigned int)*(unsigned __int8*)(a1 + 300) + 4) << 10);
	v5 = v4;
	if (!v4)
		return 52i64;
	v7 = (int*)(v4 + 1024);
	v8 = 0i64;
	v42[0] = v4 + 2048;
	v9 = 0i64;
	v46 = 0i64;
	v42[1] = v4 + 3072;
	if (*(_BYTE*)(a1 + 300))
	{
		v8 = (__m128*)(v4 + 5120);
		v9 = (__m128*)(v4 + 4096);
		v46 = (float*)(v4 + 5120);
	}
	v10 = 0.0;
	v11 = (float)((float)(*(float*)(a1 + 356) * 0.0055555557) * 0.29289401) + 0.70710599;
	v12 = (__m128)0x3F800000u;
	v12.m128_f32[0] = 1.0 - (float)(v11 * v11);
	if (v12.m128_f32[0] <= 0.0)
		v13 = 0.0;
	else
		LODWORD(v13) = _mm_sqrt_ps(v12).m128_u32[0];
	v15 = (__m128)0x3F800000u;
	v14 = (float)((float)(*(float*)(*(_QWORD*)(a1 + 328) + 20i64) * 0.0055555557) * 0.29289401) + 0.70710599;
	v15.m128_f32[0] = 1.0 - (float)(v14 * v14);
	if (v15.m128_f32[0] > 0.0)
		LODWORD(v10) = _mm_sqrt_ps(v15).m128_u32[0];
	v16 = *(unsigned __int16*)(v2 + 18);
	v17 = 0;
	v43 = 0;
	v45 = v16;
	if (*(_WORD*)(v2 + 18))
	{
		v18 = (int*)(a1 + 176);
		do
		{
			v19 = 256;
			if (v16 < 0x100)
				v19 = v16;
			sub_1408C5760(a1, v2, (int*)v5, v19, v17);
			if (*(_DWORD*)(a1 + 200))
				sub_1408CAC30((int*)(a1 + 200), (char*)v5, v7, v19);
			else
				sub_1407DB590(v7, (int*)v5, 4 * v19);
			if (*v18)
				sub_1408CAB40(v18, (int*)v5, v19);
			if (*(_BYTE*)(a1 + 300))
			{
				sub_1408CA160(*(unsigned int**)(a1 + 320), (__int128*)v5, v9, v8, v19);
				if (*(_BYTE*)(*(_QWORD*)(a1 + 328) + 152i64))
				{
					for (i = 0; i < *(_BYTE*)(a1 + 296); ++i)
					{
						v21 = (__m128*)(*(_QWORD*)(a1 + 312) + 192i64 * i);
						if (v21[11].m128_i32[0] == 1)
						{
							sub_1408A8970(v21, v9->m128_f32, v19);
							sub_1408A8970((__m128*)(*(_QWORD*)(a1 + 312) + 192i64 * ++i), v8->m128_f32, v19);
						}
					}
				}
			}
			v22 = (int*)(a1 + 8);
			v23 = 4i64;
			do
			{
				sub_1408CA650(v22, (float*)v7, v19);
				v22 += 6;
				--v23;
			} while (v23);
			sub_1408C59D0(a1, (float*)v7, v19);
			sub_1407E4830((int*)(v5 + 2048), 0i64, 0x800ui64);
			for (j = 0; j < *(_DWORD*)(a1 + 288); ++j)
			{
				v25 = 168i64 * j;
				sub_1408CAB40((int*)(v25 + *(_QWORD*)(a1 + 304) + 144i64), v7, v19);
				sub_1408CAEF0(v25 + *(_QWORD*)(a1 + 304), (__int64)v7, v42[j & 1], v19);
			}
			v26 = (float**)v42;
			v27 = (float*)(a1 + 104);
			v28 = 2i64;
			v29 = *(float*)(a1 + 284) * 1.4142135;
			do
			{
				sub_1408AAE50(v27, *v26, v19, v29);
				v27 += 3;
				++v26;
				--v28;
			} while (v28);
			v30 = a2;
			v31 = 0;
			v32 = *(_DWORD*)(a2 + 8);
			if ((v32 & 1) != 0)
			{
				v33 = (_OWORD*)(*(_QWORD*)a2 + 4i64 * v43);
				sub_1408CBD10(
					v33,
					(float*)(v5 + 2048),
					(float*)(v5 + 3072),
					COERCE_DOUBLE((unsigned __int64)*(_DWORD*)(a1 + 412)),
					*(float*)(*(_QWORD*)(a1 + 328) + 76i64),
					*(float*)(a1 + 420) * v11,
					*(float*)(*(_QWORD*)(a1 + 328) + 84i64) * v14,
					*(float*)(a1 + 420) * v13,
					*(float*)(*(_QWORD*)(a1 + 328) + 84i64) * v10,
					v19);
				if (*(_BYTE*)(a1 + 300))
					sub_1408CBD10(
						v33,
						v9->m128_f32,
						v46,
						COERCE_DOUBLE(1065353216i64),
						1.0,
						*(float*)(a1 + 416) * v11,
						*(float*)(*(_QWORD*)(a1 + 328) + 80i64) * v14,
						*(float*)(a1 + 416) * v13,
						*(float*)(*(_QWORD*)(a1 + 328) + 80i64) * v10,
						v19);
				v31 = 1;
			}
			if ((v32 & 2) != 0)
			{
				v34 = (_OWORD*)(*(_QWORD*)a2 + 4 * (v43 + v31 * (unsigned __int64)*(unsigned __int16*)(a2 + 16)));
				sub_1408CBD10(
					v34,
					(float*)(v5 + 2048),
					(float*)(v5 + 3072),
					COERCE_DOUBLE((unsigned __int64)*(_DWORD*)(a1 + 412)),
					*(float*)(*(_QWORD*)(a1 + 328) + 76i64),
					*(float*)(a1 + 420) * v13,
					*(float*)(*(_QWORD*)(a1 + 328) + 84i64) * v10,
					*(float*)(a1 + 420) * v11,
					*(float*)(*(_QWORD*)(a1 + 328) + 84i64) * v14,
					v19);
				if (*(_BYTE*)(a1 + 300))
					sub_1408CBD10(
						v34,
						v9->m128_f32,
						v46,
						COERCE_DOUBLE(1065353216i64),
						1.0,
						*(float*)(a1 + 416) * v13,
						*(float*)(*(_QWORD*)(a1 + 328) + 80i64) * v10,
						*(float*)(a1 + 416) * v11,
						*(float*)(*(_QWORD*)(a1 + 328) + 80i64) * v14,
						v19);
				v30 = a2;
				++v31;
			}
			if ((v32 & 4) != 0)
			{
				v35 = (_OWORD*)(*(_QWORD*)v30 + 4 * (v43 + v31 * (unsigned __int64)*(unsigned __int16*)(v30 + 16)));
				sub_1408CBD10(
					v35,
					(float*)(v5 + 2048),
					(float*)(v5 + 3072),
					COERCE_DOUBLE((unsigned __int64)*(_DWORD*)(a1 + 412)),
					*(float*)(*(_QWORD*)(a1 + 328) + 76i64),
					*(float*)(a1 + 420) * 0.70710599,
					*(float*)(*(_QWORD*)(a1 + 328) + 84i64) * 0.70710599,
					*(float*)(a1 + 420) * 0.70710599,
					*(float*)(*(_QWORD*)(a1 + 328) + 84i64) * 0.70710599,
					v19);
				if (*(_BYTE*)(a1 + 300))
				{
					v36 = *(float*)(*(_QWORD*)(a1 + 328) + 80i64) * 0.70710599;
					sub_1408CBD10(
						v35,
						v9->m128_f32,
						v46,
						COERCE_DOUBLE(1065353216i64),
						1.0,
						*(float*)(a1 + 416) * 0.70710599,
						v36,
						*(float*)(a1 + 416) * 0.70710599,
						v36,
						v19);
				}
				++v31;
			}
			v2 = a2;
			if ((v32 & 8) != 0)
			{
				v37 = *(float**)(a1 + 328);
				v38 = (float)(v37[21] * v37[18]) * 0.70710599;
				v41 = (float)(*(float*)(a1 + 420) * *(float*)(a1 + 408)) * 0.70710599;
				sub_1408CBD10(
					(_OWORD*)(*(_QWORD*)a2 + 4 * (v43 + v31 * (unsigned __int64)*(unsigned __int16*)(a2 + 16))),
					(float*)(v5 + 2048),
					(float*)(v5 + 3072),
					COERCE_DOUBLE((unsigned __int64)*(_DWORD*)(a1 + 412)),
					v37[19],
					v41,
					v38,
					v41,
					v38,
					v19);
			}
			v39 = *(_DWORD**)(a1 + 328);
			v8 = (__m128*)v46;
			v11 = v14;
			v13 = v10;
			v18 = (int*)(a1 + 176);
			*(_DWORD*)(a1 + 412) = v39[19];
			*(_DWORD*)(a1 + 416) = v39[20];
			*(_DWORD*)(a1 + 420) = v39[21];
			v17 = v19 + v43;
			*(_DWORD*)(a1 + 408) = v39[18];
			v43 += v19;
			v40 = v45 == v19;
			v16 = v45 - v19;
			v45 -= v19;
		} while (!v40);
	}
	(*(void(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 336) + 16i64))(*(_QWORD*)(a1 + 336), v5);
	return 1i64;
}
// 140B79ED0: using guessed type int dword_140B79ED0;

