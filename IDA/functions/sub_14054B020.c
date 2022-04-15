//----- (000000014054B020) ----------------------------------------------------
__int64 __fastcall sub_14054B020(__int64 a1, __m128* a2)
{
	__int64 v2; // rax
	__int64 v6; // rdx
	unsigned int v7; // ecx
	__int64 v8; // rax
	__int64 v9; // rbx
	int v10; // edx
	__m128* v11; // rax
	__m128 v12; // xmm1
	__m128 v13; // xmm2
	float v14; // xmm2_4
	int v15; // eax
	int v16; // edx
	int v17; // esi
	int v18; // ecx
	unsigned int v19; // r8d
	int v20; // esi

	v2 = *(_QWORD*)(a1 + 280);
	if (!v2)
		return 0i64;
	if (!*(_QWORD*)(a1 + 256))
		return 0i64;
	v6 = *(_QWORD*)(v2 + 112);
	v7 = *(_DWORD*)(v6 + 56);
	if (!v7)
	{
		v7 = *(_DWORD*)(v6 + 84);
		if (!v7)
			return 0i64;
	}
	v8 = sub_140237680(v7);
	v9 = v8;
	if (!v8)
		return 0i64;
	if (*(_DWORD*)(v8 + 12) == 1)
		v10 = *(_DWORD*)(*(_QWORD*)(a1 + 256) + 344i64);
	else
		v10 = *(_DWORD*)(a1 + 116);
	v11 = (__m128*)sub_1403D90D0(qword_140C65898, v10);
	if (!v11)
	{
		if (*(_DWORD*)(v9 + 8))
			return *(unsigned int*)(v9 + 72);
		else
			return (unsigned int)((int)*(float*)(v9 + 152) + *(_DWORD*)(v9 + 72));
	}
	v12 = _mm_sub_ps(*a2, v11[286]);
	v13 = _mm_mul_ps(v12, v12);
	v14 = fsqrt(
		(float)(v13.m128_f32[0] + _mm_shuffle_ps(v13, v13, 85).m128_f32[0])
		+ _mm_shuffle_ps(v13, v13, 170).m128_f32[0]);
	if (v14 < 0.0000099999997)
		return 0i64;
	v15 = *(_DWORD*)(v9 + 92);
	v16 = 0;
	if (v15)
		v17 = (int)(float)((float)((float)(v14 / (float)v15) * 1000.0)
			+ (float)*(int*)(*(_QWORD*)(*(_QWORD*)(a1 + 280) + 112i64) + 164i64));
	else
		v17 = 0;
	if (*(_DWORD*)(v9 + 8))
		v18 = 0;
	else
		v18 = (int)*(float*)(v9 + 152);
	v19 = *(_DWORD*)(v9 + 76);
	v20 = v18 + *(_DWORD*)(v9 + 72) + v17;
	if (v19)
		v16 = sub_140542E70(*(_QWORD*)(a1 + 256), 0, v19, 0);
	return (unsigned int)(v16 + v20);
}
// 140C65898: using guessed type __int64 qword_140C65898;

