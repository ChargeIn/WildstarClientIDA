//----- (00000001403577D0) ----------------------------------------------------
__int64 __fastcall sub_1403577D0(__int64 a1, float* a2)
{
	__int64* v2; // r11
	__int64 v3; // r8
	_QWORD* v5; // r9
	__int64 v6; // rcx
	__m128 v7; // xmm1
	__int64 v8; // rbx
	__m128 v9; // xmm2
	int v10; // ecx
	int v11; // r10d
	__m128 v12; // xmm3
	int v13; // ecx
	int v14; // edi
	__m128 v15; // xmm2
	int v16; // ecx
	float v17; // xmm1_4
	int v18; // edx
	int v19; // ecx
	int v20; // ecx
	__int64 v21; // rdx
	__int64 v22; // rax
	int v24; // [rsp+0h] [rbp-18h]
	int v25; // [rsp+8h] [rbp-10h]
	int v26; // [rsp+Ch] [rbp-Ch]

	v2 = (__int64*)(a1 + 2328);
	v3 = *(_QWORD*)(a1 + 2328);
	if (v3)
	{
		do
		{
			v5 = *(_QWORD**)(v3 + 1400);
			if (v5)
				*v5 = *(_QWORD*)(v3 + 1408);
			v6 = *(_QWORD*)(v3 + 1408);
			if (v6)
				*(_QWORD*)(v6 + 1400) = *(_QWORD*)(v3 + 1400);
			*(_QWORD*)(v3 + 1400) = 0i64;
			*(_QWORD*)(v3 + 1408) = 0i64;
			v3 = *v2;
		} while (*v2);
	}
	v7 = (__m128)(unsigned int)dword_140C43FB8;
	v8 = 0i64;
	v9 = (__m128)(unsigned int)dword_140C43FB8;
	v9.m128_f32[0] = (float)((float)(*(float*)&dword_140C43FB8 * *a2) + 0.5) * 2048.0;
	v10 = (int)v9.m128_f32[0];
	if ((int)v9.m128_f32[0] != 0x80000000 && (float)v10 != v9.m128_f32[0])
		v9.m128_f32[0] = (float)(v10 - (_mm_movemask_ps(_mm_unpacklo_ps(v9, v9)) & 1));
	v12 = (__m128)(unsigned int)dword_140C43FB8;
	v11 = (int)v9.m128_f32[0];
	v12.m128_f32[0] = (float)((float)(*(float*)&dword_140C43FB8 * a2[2]) + 0.5) * 2048.0;
	v13 = (int)v12.m128_f32[0];
	if ((int)v12.m128_f32[0] != 0x80000000 && (float)v13 != v12.m128_f32[0])
		v12.m128_f32[0] = (float)(v13 - (_mm_movemask_ps(_mm_unpacklo_ps(v12, v12)) & 1));
	v15 = (__m128)(unsigned int)dword_140C43FB8;
	v14 = (int)v12.m128_f32[0];
	v15.m128_f32[0] = (float)((float)(*(float*)&dword_140C43FB8 * a2[4]) + 0.5) * 2048.0;
	v16 = (int)v15.m128_f32[0];
	if ((int)v15.m128_f32[0] != 0x80000000 && (float)v16 != v15.m128_f32[0])
		v15.m128_f32[0] = (float)(v16 - (_mm_movemask_ps(_mm_unpacklo_ps(v15, v15)) & 1));
	v17 = (float)(*(float*)&dword_140C43FB8 * a2[6]) + 0.5;
	v18 = (int)v15.m128_f32[0] + 1;
	v7.m128_f32[0] = v17 * 2048.0;
	v19 = (int)v7.m128_f32[0];
	if ((int)v7.m128_f32[0] != 0x80000000 && (float)v19 != v7.m128_f32[0])
		v7.m128_f32[0] = (float)(v19 - (_mm_movemask_ps(_mm_unpacklo_ps(v7, v7)) & 1));
	v20 = (int)v7.m128_f32[0] + 1;
	if (*(_DWORD*)(a1 + 2264) < v18)
		v18 = *(_DWORD*)(a1 + 2264);
	if (*(_DWORD*)(a1 + 2268) < v20)
		v20 = *(_DWORD*)(a1 + 2268);
	if (v11 < *(_DWORD*)(a1 + 2256))
		v11 = *(_DWORD*)(a1 + 2256);
	if (v14 < *(_DWORD*)(a1 + 2260))
		v14 = *(_DWORD*)(a1 + 2260);
	if (v11 >= v18 || v14 >= v20)
		return 0i64;
	v24 = v11;
	v25 = v18;
	v26 = v20;
	do
	{
		if (v11 < v25)
		{
			do
			{
				v21 = *(_QWORD*)(*(_QWORD*)(a1 + 2272)
					+ 8i64
					* (v11 % *(_DWORD*)(a1 + 2204)
						+ *(_DWORD*)(a1 + 2204)
						* (v14 % *(_DWORD*)(a1 + 2208) + *(_DWORD*)(a1 + 2208) * (v14 % *(_DWORD*)(a1 + 2208) < 0))
						+ *(_DWORD*)(a1 + 2204) * (unsigned int)(v11 % *(_DWORD*)(a1 + 2204) < 0)));
				if (v21)
				{
					if (!*(_QWORD*)(v21 + 1400))
					{
						*(_QWORD*)(v21 + 1400) = v2;
						*(_QWORD*)(v21 + 1408) = *v2;
						*v2 = v21;
						v22 = *(_QWORD*)(v21 + 1408);
						if (v22)
							*(_QWORD*)(v22 + 1400) = v21 + 1408;
					}
					++v8;
				}
				++v11;
			} while (v11 < v25);
			v20 = v26;
			v11 = v24;
		}
		++v14;
	} while (v14 < v20);
	return v8;
}
// 140C43FB8: using guessed type int dword_140C43FB8;

