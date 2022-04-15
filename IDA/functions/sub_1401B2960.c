//----- (00000001401B2960) ----------------------------------------------------
__int64 __fastcall sub_1401B2960(__int64 a1, __int128* a2, __int128* a3, __int128* a4)
{
	float v4; // xmm1_4
	__int128 v5; // xmm0
	__m128* v6; // rdx
	__m128* v7; // r11
	__int128 v8; // xmm0
	int v9; // xmm1_4
	unsigned __int64 v10; // r9
	__m128 v11; // xmm2
	__m128* v12; // rax
	__m128* v13; // rcx
	__m128* v14; // r8
	float v15; // xmm1_4
	unsigned __int64 v16; // rax
	__int64 v17; // rcx
	__int64 v18; // rax
	__m128* v19; // r8
	__int64 v20; // rcx
	__int64 v21; // rax
	__m128 v22; // xmm2
	__m128* v23; // rax
	int v25[4]; // [rsp+0h] [rbp-F8h]
	__int128 v26; // [rsp+10h] [rbp-E8h] BYREF
	__int128* v27; // [rsp+28h] [rbp-D0h]
	__int128 v28; // [rsp+30h] [rbp-C8h] BYREF
	__int128* v29; // [rsp+48h] [rbp-B0h]
	__int128 v30; // [rsp+50h] [rbp-A8h] BYREF
	__int128* v31; // [rsp+68h] [rbp-90h]
	char v32; // [rsp+70h] [rbp-88h] BYREF

	v4 = *(float*)(a1 + 16);
	v26 = *a2;
	v5 = *a3;
	v27 = &v28;
	v6 = (__m128*) & v26;
	v29 = &v30;
	v7 = (__m128*) & v32;
	v28 = v5;
	v8 = *a4;
	*(float*)&v25[1] = -v4;
	*(float*)&v9 = -*(float*)(a1 + 20);
	v30 = v8;
	v10 = 0i64;
	v31 = &v26;
	LODWORD(v8) = *(_DWORD*)a1;
	v25[3] = v9;
	v25[0] = v8;
	v25[2] = *(_DWORD*)(a1 + 4);
	while (1)
	{
		v11 = (__m128)(unsigned int)v25[v10 / 4];
		v12 = (__m128*)v6[1].m128_u64[1];
		v13 = v6;
		v14 = v6;
		for (v6[1].m128_f32[0] = (float)((float)(v6->m128_f32[1] * *(float*)((char*)&unk_140B5F0F0 + v10))
			+ (float)(v6->m128_f32[0] * *(float*)((char*)&unk_140B5F100 + v10)))
			+ v11.m128_f32[0]; v12 != v6; v12 = (__m128*)v12[1].m128_u64[1])
		{
			v15 = (float)((float)(v12->m128_f32[1] * *(float*)((char*)&unk_140B5F0F0 + v10))
				+ (float)(*(float*)((char*)&unk_140B5F100 + v10) * v12->m128_f32[0]))
				+ v11.m128_f32[0];
			v12[1].m128_f32[0] = v15;
			if (v15 < v13[1].m128_f32[0])
				v13 = v12;
			if (v15 > v14[1].m128_f32[0])
				v14 = v12;
		}
		if (v13[1].m128_f32[0] > 0.0)
			break;
		if (v14[1].m128_f32[0] > 0.0)
		{
			v16 = v13[1].m128_u64[1];
			v6 = v13;
			v17 = (__int64)&v13[1].m128_i64[1];
			if (*(float*)(v16 + 16) <= 0.0)
			{
				do
				{
					v6 = *(__m128**)v17;
					v18 = *(_QWORD*)(*(_QWORD*)v17 + 24i64);
					v17 = *(_QWORD*)v17 + 24i64;
				} while (*(float*)(v18 + 16) <= 0.0);
			}
			v19 = v6;
			if (*(float*)(v6[1].m128_u64[1] + 16) > 0.0)
			{
				v20 = (__int64)&v6[1].m128_i64[1];
				do
				{
					v19 = *(__m128**)v20;
					v21 = *(_QWORD*)(*(_QWORD*)v20 + 24i64);
					v20 = *(_QWORD*)v20 + 24i64;
				} while (*(float*)(v21 + 16) > 0.0);
			}
			v6[1].m128_u64[1] = (unsigned __int64)v7;
			v11.m128_f32[0] = v6[1].m128_f32[0] / (float)(v6[1].m128_f32[0] - v7[1].m128_f32[0]);
			v22 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v11, v11, 0), _mm_sub_ps(*v7, *v6)), *v6);
			*v7 = v22;
			v7[1].m128_i32[0] = 0;
			v7[1].m128_u64[1] = (unsigned __int64)v19;
			v23 = (__m128*)v19[1].m128_u64[1];
			v22.m128_f32[0] = v19[1].m128_f32[0] / (float)(v19[1].m128_f32[0] - v23[1].m128_f32[0]);
			*v19 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v22, v22, 0), _mm_sub_ps(*v23, *v19)), *v19);
			v19[1].m128_i32[0] = 0;
		}
		v10 += 4i64;
		v7 += 2;
		if (v10 >= 0x10)
			return 1i64;
	}
	return 0i64;
}

