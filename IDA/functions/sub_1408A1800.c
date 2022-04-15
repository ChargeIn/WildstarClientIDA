//----- (00000001408A1800) ----------------------------------------------------
__int64 __fastcall sub_1408A1800(__int64 a1, __int64 a2, unsigned int* a3)
{
	__m128 v3; // xmm8
	__int64 v6; // rbx
	int v7; // edi
	int v8; // esi
	unsigned int v9; // ecx
	unsigned int v10; // edx
	__m128 v11; // xmm2
	int v12; // ebp
	__m128* v13; // r13
	__int64 v14; // rax
	_QWORD* v15; // r14
	float v16; // xmm4_4
	__int64 v17; // rcx
	__m128 v18; // xmm8
	__m128 v19; // xmm9
	__m128 v20; // xmm9
	float v21; // xmm0_4
	__m128 v22; // xmm2
	__m128 v23; // xmm12
	__m128 v24; // xmm10
	__m128 v25; // xmm10
	float v26; // xmm0_4
	__m128 v27; // xmm2
	__m128 v28; // xmm13
	__m128 v29; // xmm11
	__m128 v30; // xmm11
	__m128 v31; // xmm4
	__m128* v32; // r11
	unsigned int v33; // ebx
	__m128 v34; // xmm5
	__m128 v35; // xmm6
	__m128 v36; // xmm7
	unsigned int v37; // r8d
	unsigned int v38; // r9d
	__int64 v39; // r10
	__m128 v40; // xmm3
	__m128 v41; // xmm1
	__m128 v42; // xmm0
	__m128 v43; // xmm1
	__m128 v44; // xmm0
	__m128 v45; // xmm1
	__m128 v46; // xmm0
	int v47; // ecx
	int* v48; // rcx
	__int64 result; // rax
	__m128 v50; // [rsp+20h] [rbp-D8h]
	__m128 v51; // [rsp+20h] [rbp-D8h]
	__int64 v52; // [rsp+100h] [rbp+8h]
	__int64 v54; // [rsp+110h] [rbp+18h]

	v6 = a2;
	sub_1408A1640((unsigned int*)(a1 + 64), a2, *(_DWORD*)(a1 + 104));
	v7 = *(unsigned __int16*)(v6 + 18);
	v8 = 0;
	if (!*((_BYTE*)a3 + 12))
		*a3 = 0;
	if (*(_BYTE*)(a1 + 108))
		a3[1] = 1065353216;
	v9 = *(_DWORD*)(a1 + 96);
	v10 = 0;
	if (v9)
	{
		v11 = (__m128)a3[2];
		v12 = *(_DWORD*)(a1 + 48);
		v13 = *(__m128**)v6;
		v54 = *(unsigned int*)(a1 + 96);
		v52 = 4i64 * *(unsigned __int16*)(v6 + 16);
		v14 = v9;
		v15 = (_QWORD*)a1;
		v16 = 1.0 / (float)v7;
		v50.m128_i32[0] = *(_DWORD*)(a1 + 80);
		v17 = v52;
		v3.m128_f32[0] = 1.0;
		v11.m128_f32[0] = (float)(v11.m128_f32[0] - v50.m128_f32[0]) * v16;
		v18 = _mm_shuffle_ps(v3, v3, 0);
		v19 = v11;
		v19.m128_f32[0] = v11.m128_f32[0] * 4.0;
		v20 = _mm_shuffle_ps(v19, v19, 0);
		v50.m128_f32[1] = v11.m128_f32[0] + v50.m128_f32[0];
		v50.m128_f32[2] = (float)(v11.m128_f32[0] + v50.m128_f32[0]) + v11.m128_f32[0];
		v21 = v50.m128_f32[2] + v11.m128_f32[0];
		v22 = (__m128) * a3;
		v50.m128_f32[3] = v21;
		v23 = v50;
		v50.m128_i32[0] = *(_DWORD*)(a1 + 72);
		v22.m128_f32[0] = (float)(v22.m128_f32[0] - v50.m128_f32[0]) * v16;
		v24 = v22;
		v24.m128_f32[0] = v22.m128_f32[0] * 4.0;
		v25 = _mm_shuffle_ps(v24, v24, 0);
		v50.m128_f32[1] = v22.m128_f32[0] + v50.m128_f32[0];
		v50.m128_f32[2] = (float)(v22.m128_f32[0] + v50.m128_f32[0]) + v22.m128_f32[0];
		v26 = v50.m128_f32[2] + v22.m128_f32[0];
		v27 = (__m128)a3[1];
		v50.m128_f32[3] = v26;
		v28 = v50;
		v51.m128_i32[0] = *(_DWORD*)(a1 + 76);
		v27.m128_f32[0] = (float)(v27.m128_f32[0] - v51.m128_f32[0]) * v16;
		v29 = v27;
		v29.m128_f32[0] = v27.m128_f32[0] * 4.0;
		v51.m128_f32[1] = v27.m128_f32[0] + v51.m128_f32[0];
		v30 = _mm_shuffle_ps(v29, v29, 0);
		v51.m128_f32[2] = (float)(v27.m128_f32[0] + v51.m128_f32[0]) + v27.m128_f32[0];
		v51.m128_f32[3] = v51.m128_f32[2] + v27.m128_f32[0];
		do
		{
			v10 = *(_DWORD*)(a1 + 52);
			v31 = v51;
			v32 = v13;
			v33 = 0;
			v34 = v23;
			v35 = v28;
			v36 = _mm_sub_ps(v18, v51);
			if (v7)
			{
				do
				{
					v37 = v7 - v33;
					if (v12 - v10 < v7 - v33)
						v37 = v12 - v10;
					v38 = v37 >> 2;
					if (v37 >> 2)
					{
						v39 = *v15 + 4i64 * v10;
						do
						{
							v40 = *v32;
							v41 = v31;
							v31 = _mm_add_ps(v31, v30);
							v39 += 16i64;
							++v32;
							v42 = _mm_mul_ps(v40, v36);
							v36 = _mm_sub_ps(v18, v31);
							v43 = _mm_add_ps(_mm_mul_ps(v41, *(__m128*)(v39 - 16)), v42);
							v44 = v35;
							v35 = _mm_add_ps(v35, v25);
							v45 = _mm_mul_ps(v43, v34);
							v46 = _mm_add_ps(_mm_mul_ps(v44, *(__m128*)(v39 - 16)), v40);
							v34 = _mm_add_ps(v34, v20);
							v32[-1] = v45;
							*(__m128*)(v39 - 16) = v46;
							--v38;
						} while (v38);
					}
					v10 += v37;
					v33 += v37;
					if (v10 == v12)
						v10 = 0;
				} while (v33 < v7);
				v14 = v54;
				v17 = v52;
			}
			v13 = (__m128*)((char*)v13 + v17);
			++v15;
			v54 = --v14;
		} while (v14);
		v6 = a2;
	}
	*(_DWORD*)(a1 + 52) = v10;
	v47 = *(_DWORD*)(v6 + 8);
	if ((v47 & 8) != 0)
	{
		for (; v47; v47 &= v47 - 1)
			++v8;
		v48 = (int*)(*(_QWORD*)v6 + 4 * *(unsigned __int16*)(v6 + 16) * (unsigned __int64)(unsigned int)(v8 - 1));
		if (v48 && *(_BYTE*)(a1 + 108) && !*((_BYTE*)a3 + 20))
			sub_1407E4830(v48, 0i64, (unsigned int)(4 * v7));
	}
	*(_DWORD*)(a1 + 72) = *a3;
	*(_DWORD*)(a1 + 76) = a3[1];
	*(_DWORD*)(a1 + 80) = a3[2];
	*(_DWORD*)(a1 + 84) = a3[3];
	*(_DWORD*)(a1 + 88) = a3[4];
	result = a3[5];
	*(_DWORD*)(a1 + 92) = result;
	return result;
}
// 1408A1800: could not find valid save-restore pair for xmm8
// 1408A190E: variable 'v3' is possibly undefined
// 140B79ED0: using guessed type int dword_140B79ED0;

