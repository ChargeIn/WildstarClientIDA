#include "../winhttp.h"

//----- (0000000140393740) ----------------------------------------------------
void __fastcall sub_140393740(__m128* a1, __m128* a2, char a3, __int64 a4)
{
	unsigned __int64 v4; // rax
	__m128 v8; // xmm3
	__m128 v9; // xmm2
	__int64 v10; // rax
	__int64 v11; // rax
	unsigned __int64 v12; // kr00_8
	int* v13; // rsi
	__int64 v14; // rax
	unsigned int v15; // edx
	__int64 v16; // rbp
	float v17; // xmm4_4
	float v18; // xmm5_4
	float v19; // xmm9_4
	float v20; // xmm8_4
	float v21; // xmm6_4
	float v22; // xmm7_4
	__m128 v23; // xmm3
	int v24; // eax
	unsigned __int64 v25; // rax
	unsigned __int64 v26; // r14
	unsigned int* v27; // rdi
	__int64 v28; // r8
	__int64 v29; // rdx
	__int64 v30; // rcx
	unsigned int(__fastcall * v31)(__m128*, __m128*, __m128*, _QWORD); // rax
	int v32; // eax
	__m128* v33; // rax
	__int64 v34; // rcx
	__m128 v35; // [rsp+20h] [rbp-98h] BYREF
	__m128 v36; // [rsp+30h] [rbp-88h] BYREF
	__m128 v37; // [rsp+40h] [rbp-78h] BYREF
	__m128 v38; // [rsp+50h] [rbp-68h]

	if ((a3 & 4) != 0)
	{
		v4 = a1->m128_u64[0];
		v37.m128_i32[0] = -1;
		(*(void(__fastcall**)(__m128*, __m128*))(v4 + 32))(a1, &v37);
		v8 = _mm_min_ps(a2[1], a1[8]);
		v9 = _mm_max_ps(*a2, a1[7]);
		if (v9.m128_f32[0] <= v8.m128_f32[0]
			&& _mm_shuffle_ps(v9, v9, 85).m128_f32[0] <= _mm_shuffle_ps(v8, v8, 85).m128_f32[0]
			&& _mm_shuffle_ps(v9, v9, 170).m128_f32[0] <= _mm_shuffle_ps(v8, v8, 170).m128_f32[0])
		{
			v10 = a1[2].m128_i64[0];
			v37 = v9;
			v38 = v8;
			v12 = *(unsigned int*)(v10 + 68);
			v11 = 4 * v12;
			if (!is_mul_ok(v12, 4ui64))
				v11 = -1i64;
			v13 = sub_14018B280(v11, 0);
			v14 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1[1].m128_u64[1] + 32i64))(a1[1].m128_i64[1]);
			v15 = 0;
			v16 = v14;
			if (*(_DWORD*)(a1[2].m128_u64[0] + 68))
			{
				v17 = v38.m128_f32[2];
				v18 = v38.m128_f32[1];
				v19 = v37.m128_f32[0];
				v20 = v38.m128_f32[0];
				v21 = v37.m128_f32[2];
				v22 = v37.m128_f32[1];
				do
				{
					v23 = _mm_unpacklo_ps(
						_mm_unpacklo_ps(
							(__m128) * (unsigned int*)(v16 + 72i64 * v15),
							(__m128) * (unsigned int*)(v16 + 72i64 * v15 + 8)),
						_mm_unpacklo_ps((__m128) * (unsigned int*)(v16 + 72i64 * v15 + 4), (__m128)0i64));
					v35 = v23;
					if (v23.m128_f32[0] >= v19)
					{
						v24 = 0;
						if (v23.m128_f32[0] > v20)
							v24 = 2;
					}
					else
					{
						v24 = 1;
					}
					if (v35.m128_f32[1] >= v22)
					{
						if (v35.m128_f32[1] > v18)
							v24 |= 8u;
					}
					else
					{
						v24 |= 4u;
					}
					if (v35.m128_f32[2] >= v21)
					{
						if (v35.m128_f32[2] > v17)
							v24 |= 0x20u;
					}
					else
					{
						v24 |= 0x10u;
					}
					v13[v15++] = v24;
				} while (v15 < *(_DWORD*)(a1[2].m128_u64[0] + 68));
			}
			v25 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1[1].m128_u64[1] + 24i64))(a1[1].m128_i64[1]);
			v26 = v25 + 4i64 * *(unsigned int*)(a1[2].m128_u64[0] + 64);
			if (v25 < v26)
			{
				v27 = (unsigned int*)(v25 + 8);
				do
				{
					v28 = *(v27 - 2);
					v29 = *(v27 - 1);
					v30 = *v27;
					if ((v13[v29] & v13[v28] & v13[v30]) == 0)
					{
						v37 = _mm_unpacklo_ps(
							_mm_unpacklo_ps(
								(__m128) * (unsigned int*)(v16 + 72 * v29),
								(__m128) * (unsigned int*)(v16 + 72 * v29 + 8)),
							_mm_unpacklo_ps((__m128) * (unsigned int*)(v16 + 72 * v29 + 4), (__m128)0i64));
						v36 = _mm_unpacklo_ps(
							_mm_unpacklo_ps(
								(__m128) * (unsigned int*)(v16 + 72 * v30),
								(__m128) * (unsigned int*)(v16 + 72 * v30 + 8)),
							_mm_unpacklo_ps((__m128) * (unsigned int*)(v16 + 72 * v30 + 4), (__m128)0i64));
						v31 = *(unsigned int(__fastcall**)(__m128*, __m128*, __m128*, _QWORD))(a4 + 40);
						v35 = _mm_unpacklo_ps(
							_mm_unpacklo_ps(
								(__m128) * (unsigned int*)(v16 + 72 * v28),
								(__m128) * (unsigned int*)(v16 + 72 * v28 + 8)),
							_mm_unpacklo_ps((__m128) * (unsigned int*)(v16 + 72 * v28 + 4), (__m128)0i64));
						if (!v31 || v31(&v35, &v36, &v37, *(_QWORD*)(a4 + 48)))
						{
							v32 = *(_DWORD*)(a4 + 16);
							if (*(_DWORD*)(a4 + 12) == v32)
							{
								if (v32)
									*(_DWORD*)(a4 + 16) = 2 * v32;
								else
									*(_DWORD*)(a4 + 16) = 16;
								*(_QWORD*)(a4 + 24) = sub_14018C320(*(_QWORD*)(a4 + 24), 48i64 * *(unsigned int*)(a4 + 16), 8u);
							}
							v33 = (__m128*)(*(_QWORD*)(a4 + 24) + 16i64 * (unsigned int)(3 * *(_DWORD*)(a4 + 12)));
							*v33 = v35;
							v33[1] = v36;
							v33[2] = v37;
							v34 = *(_QWORD*)(a4 + 32);
							++* (_DWORD*)(a4 + 12);
							if (v34)
							{
								sub_14018B900(v34, 0);
								*(_QWORD*)(a4 + 32) = 0i64;
							}
						}
					}
					v27 += 3;
				} while ((unsigned __int64)(v27 - 2) < v26);
			}
			sub_14018B900((__int64)v13, 0);
		}
	}
}

