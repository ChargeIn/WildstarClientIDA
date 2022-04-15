//----- (00000001405B3FC0) ----------------------------------------------------
void __fastcall sub_1405B3FC0(__int64 a1, __m128* a2)
{
	__m128 v3; // xmm2
	__m128 v4; // xmm0
	__m128 v5; // xmm1
	int v6; // esi
	__m128 v7; // xmm6
	__m128 v8; // xmm4
	__m128 v9; // xmm3
	__m128 v10; // xmm5
	__m128 v11; // xmm2
	__m128 v12; // xmm1
	__m128 v13; // xmm0
	int* v14; // rax
	__int32 v15; // xmm0_4
	__int32 v16; // xmm1_4
	__int32 v17; // xmm0_4
	int v18; // xmm1_4
	int v19; // xmm0_4
	int v20; // xmm0_4
	int v21; // eax
	__int64 v22; // r9
	int v23; // eax
	unsigned int v24; // r8d
	__int64 v25; // r9
	_QWORD* v26; // rcx
	__int64 v27; // rcx
	int v28[4]; // [rsp+38h] [rbp-29h] BYREF
	__m128 v29; // [rsp+48h] [rbp-19h]
	__m128 v30; // [rsp+58h] [rbp-9h] BYREF
	__m128 v31; // [rsp+68h] [rbp+7h] BYREF
	__m128 v32; // [rsp+78h] [rbp+17h] BYREF
	unsigned int v33[4]; // [rsp+88h] [rbp+27h] BYREF
	int* v34; // [rsp+98h] [rbp+37h]
	int v35; // [rsp+C8h] [rbp+67h] BYREF
	__int16 v36; // [rsp+CCh] [rbp+6Bh]

	if (a1 == *(_QWORD*)(qword_140C65898 + 25744) && *(_DWORD*)(a1 + 3408))
	{
		v3 = *(__m128*)(a1 + 4576);
		v4 = *(__m128*)(a1 + 4400);
		v5 = *(__m128*)(a1 + 4384);
		v33[2] = 0;
		v6 = 0;
		v7 = *(__m128*)(a1 + 4416);
		v29 = v3;
		v30 = v7;
		v31 = v4;
		v32 = v5;
		if (a2)
		{
			v8 = a2[288];
			v9 = a2[287];
			v10 = a2[289];
			v6 = a2->m128_i32[2];
			v29 = _mm_add_ps(
				_mm_add_ps(
					_mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v3, v3, 0), v9), _mm_mul_ps(_mm_shuffle_ps(v3, v3, 85), v8)),
					_mm_mul_ps(_mm_shuffle_ps(v3, v3, 170), v10)),
				a2[290]);
			v30 = _mm_add_ps(
				_mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v7, v7, 0), v9), _mm_mul_ps(_mm_shuffle_ps(v7, v7, 85), v8)),
				_mm_mul_ps(_mm_shuffle_ps(v7, v7, 170), v10));
			v31 = _mm_add_ps(
				_mm_add_ps(
					_mm_mul_ps(_mm_shuffle_ps(*(__m128*)(a1 + 4144), *(__m128*)(a1 + 4144), 0), v9),
					_mm_mul_ps(_mm_shuffle_ps(*(__m128*)(a1 + 4144), *(__m128*)(a1 + 4144), 85), v8)),
				_mm_mul_ps(_mm_shuffle_ps(*(__m128*)(a1 + 4144), *(__m128*)(a1 + 4144), 170), v10));
			v11 = _mm_sub_ps(*(__m128*)(a1 + 4080), a2[274]);
			v12 = _mm_shuffle_ps(v11, v11, 0);
			v13 = _mm_shuffle_ps(v11, v11, 85);
			v3 = _mm_mul_ps(_mm_shuffle_ps(v11, v11, 170), v10);
			v32 = _mm_add_ps(_mm_add_ps(_mm_mul_ps(v12, v9), _mm_mul_ps(v13, v8)), v3);
		}
		sub_1401B3170((__int64)v28, v30.m128_f32);
		v33[1] = 8;
		v14 = sub_14018C320(0i64, 0x240ui64, 8u);
		v15 = v29.m128_i32[0];
		v16 = v29.m128_i32[1];
		*v14 = 1;
		v14[2] = v6;
		v14[18] = 2;
		v14[20] = v15;
		v17 = v29.m128_i32[2];
		v14[21] = v16;
		v34 = v14;
		v18 = v28[1];
		v14[22] = v17;
		v19 = v28[0];
		v14[23] = 0;
		v14[36] = 14;
		v14[38] = v19;
		v20 = v28[2];
		v14[39] = v18;
		v14[40] = v20;
		v14[41] = 0;
		sub_1401C9800(&v35, (__m128i*) & v31);
		v21 = v35;
		*(_DWORD*)(v22 + 216) = 11;
		*(_DWORD*)(v22 + 224) = v21;
		*(_WORD*)(v22 + 228) = v36;
		*(_DWORD*)(v22 + 232) = 0;
		sub_1401C9800(&v35, (__m128i*) & v32);
		v23 = v35;
		v24 = dword_140C636A8;
		*(_DWORD*)(v25 + 288) = 8;
		*(_DWORD*)(v25 + 296) = v23;
		*(_WORD*)(v25 + 300) = v36;
		*(_DWORD*)(v25 + 304) = 0;
		v33[0] = 5;
		sub_1405B3B80(a1, (__int64)v33, v24, 0, a1 + 3568);
		sub_14057A190(qword_140C65898, v33);
		sub_1405B4E90(a1, dword_140C636A8, *(double*)v3.m128_u64);
		sub_14079A4F0((__int64)v33);
		sub_14018B900((__int64)v34, 0);
	}
	else
	{
		*(_QWORD*)(a1 + 3840) = 0i64;
		v26 = *(_QWORD**)(a1 + 3856);
		if (v26)
			*v26 = *(_QWORD*)(a1 + 3864);
		v27 = *(_QWORD*)(a1 + 3864);
		if (v27)
			*(_QWORD*)(v27 + 3856) = *(_QWORD*)(a1 + 3856);
		*(_QWORD*)(a1 + 3856) = 0i64;
		*(_QWORD*)(a1 + 3864) = 0i64;
	}
}
// 1405B41AB: variable 'v22' is possibly undefined
// 1405B41E7: variable 'v25' is possibly undefined
// 140C636A8: using guessed type int dword_140C636A8;
// 140C65898: using guessed type __int64 qword_140C65898;

