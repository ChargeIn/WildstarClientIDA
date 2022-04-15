#include "../winhttp.h"

//----- (0000000140370000) ----------------------------------------------------
void __fastcall sub_140370000(__m128* a1)
{
	int* v2; // rax
	unsigned int v3; // r14d
	__int64 v4; // rdi
	int v5; // ecx
	int* v6; // rax
	__int32 v7; // ebx
	__int32 v8; // xmm0_4
	__int32 v9; // xmm1_4
	__m128 v10; // xmm7
	float v11; // xmm6_4
	__int128 v12; // xmm0
	unsigned __int64 v13; // rbx
	int v14; // edi
	__int128 v15; // xmm0
	__int128 v16; // xmm0
	unsigned __int64 v17; // rbx
	int v18; // edi
	__int128 v19; // xmm0
	unsigned __int64 v20; // rbx
	int v21; // edi
	float* v22; // rdx
	__int64 v23; // rcx
	__int128 v24; // [rsp+20h] [rbp-40h]
	__int128 v25; // [rsp+30h] [rbp-30h]

	if (a1->m128_i32[0] && !a1[3].m128_u64[0])
	{
		v2 = sub_14018B280(336i64, 0);
		v3 = 0;
		if (v2)
		{
			v4 = (__int64)(v2 + 4);
			*v2 = 4;
			v5 = 3;
			v6 = v2 + 20;
			do
			{
				--v5;
				*(v6 - 16) = 6;
				*((_OWORD*)v6 - 3) = xmmword_140C784E0;
				v6 += 20;
				*((_OWORD*)v6 - 7) = xmmword_140C784F0;
				*((_QWORD*)v6 - 12) = 0i64;
				*((_QWORD*)v6 - 10) = 0i64;
				*((_QWORD*)v6 - 11) = 0i64;
			} while (v5 >= 0);
		}
		else
		{
			v4 = 0i64;
		}
		v7 = a1->m128_i32[0];
		v8 = a1[1].m128_i32[0];
		v9 = a1[1].m128_i32[1];
		a1[3].m128_u64[0] = v4;
		*(_QWORD*)&v24 = __PAIR64__(v9, v8);
		v10 = _mm_mul_ps(_mm_add_ps(a1[2], a1[1]), (__m128)xmmword_140B7AC50);
		LODWORD(v25) = v10.m128_i32[0];
		LODWORD(v11) = _mm_shuffle_ps(v10, v10, 85).m128_u32[0];
		*((float*)&v25 + 1) = v11;
		sub_14036F9F0(v4);
		*(_OWORD*)(v4 + 16) = v24;
		v12 = v25;
		*((float*)&v24 + 1) = v11;
		LODWORD(v25) = v10.m128_i32[0];
		*(_OWORD*)(v4 + 32) = v12;
		*(_DWORD*)v4 = v7 - 1;
		v13 = a1[3].m128_u64[0];
		LODWORD(v24) = a1[1].m128_i32[0];
		DWORD1(v25) = a1[2].m128_i32[1];
		v14 = a1->m128_i32[0] - 1;
		sub_14036F9F0(v13 + 80);
		v15 = v24;
		LODWORD(v24) = v10.m128_i32[0];
		*(_OWORD*)(v13 + 96) = v15;
		v16 = v25;
		*((float*)&v25 + 1) = v11;
		*(_OWORD*)(v13 + 112) = v16;
		*(_DWORD*)(v13 + 80) = v14;
		v17 = a1[3].m128_u64[0];
		DWORD1(v24) = a1[1].m128_i32[1];
		LODWORD(v25) = a1[2].m128_i32[0];
		v18 = a1->m128_i32[0] - 1;
		sub_14036F9F0(v17 + 160);
		v19 = v24;
		*(_QWORD*)&v24 = __PAIR64__(LODWORD(v11), v10.m128_u32[0]);
		*(_OWORD*)(v17 + 176) = v19;
		*(_OWORD*)(v17 + 192) = v25;
		*(_DWORD*)(v17 + 160) = v18;
		v20 = a1[3].m128_u64[0];
		*(_QWORD*)&v25 = a1[2].m128_u64[0];
		v21 = a1->m128_i32[0] - 1;
		sub_14036F9F0(v20 + 240);
		*(_OWORD*)(v20 + 256) = v24;
		*(_OWORD*)(v20 + 272) = v25;
		*(_DWORD*)(v20 + 240) = v21;
		if (a1[4].m128_u64[0])
		{
			do
			{
				v22 = *(float**)(a1[3].m128_u64[1] + 8i64 * v3);
				if (v10.m128_f32[0] < v22[24])
				{
					if (v10.m128_f32[0] > v22[20])
						goto LABEL_20;
					if (v11 < v22[25])
					{
						if (v11 > v22[21])
						{
						LABEL_20:
							++v3;
							continue;
						}
						v23 = a1[3].m128_u64[0] + 240;
					}
					else
					{
						v23 = a1[3].m128_u64[0] + 160;
					}
				}
				else if (v11 < v22[25])
				{
					if (v11 > v22[21])
						goto LABEL_20;
					v23 = a1[3].m128_u64[0] + 80;
				}
				else
				{
					v23 = a1[3].m128_i64[0];
				}
				sub_14036FA60(v23);
				*(_QWORD*)(a1[3].m128_u64[1] + 8i64 * v3) = *(_QWORD*)(a1[3].m128_u64[1] + 8 * a1[4].m128_u64[0] - 8);
				sub_14004EED0(&a1[3].m128_i64[1], a1[4].m128_u64[0] - 1);
			} while (v3 < a1[4].m128_u64[0]);
		}
	}
}
// 1403700DE: variable 'v24' is possibly undefined
// 1403700E2: variable 'v25' is possibly undefined
// 14036FA60: using guessed type __int64 __fastcall sub_14036FA60(_QWORD);
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;
// 140C784E0: using guessed type __int128 xmmword_140C784E0;
// 140C784F0: using guessed type __int128 xmmword_140C784F0;

