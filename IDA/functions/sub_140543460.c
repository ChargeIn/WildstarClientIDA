//----- (0000000140543460) ----------------------------------------------------
__int64 __fastcall sub_140543460(__int64 a1, unsigned int a2, int a3)
{
	__int64 v4; // rcx
	__int64 v6; // rax
	__int64 v8; // rdx
	__int64 v10; // rdx
	unsigned int v11; // ecx
	__int64 v12; // rbx
	__m128* v13; // rdi
	__m128* v14; // rax
	__m128 v15; // xmm1
	__m128 v16; // xmm2
	float v17; // xmm2_4
	int v18; // eax
	int v19; // edx
	int v20; // ecx
	__int64 v21; // [rsp+30h] [rbp+8h]

	v4 = *(_QWORD*)(a1 + 504);
	v6 = *(_QWORD*)(v4 + 8);
	v8 = v4;
	while (v6)
	{
		if (*(_DWORD*)(v6 + 32) < a2)
		{
			v6 = *(_QWORD*)(v6 + 24);
		}
		else
		{
			v8 = v6;
			v6 = *(_QWORD*)(v6 + 16);
		}
	}
	if (v8 == v4 || (v21 = v8, a2 < *(_DWORD*)(v8 + 32)))
		v21 = v4;
	if (v21 != v4)
		return *(unsigned int*)(v21 + 36);
	v10 = *(_QWORD*)(*(_QWORD*)(a1 + 312) + 112i64);
	v11 = *(_DWORD*)(v10 + 56);
	if (!v11)
	{
		v11 = *(_DWORD*)(v10 + 84);
		if (!v11)
			return 0i64;
	}
	v12 = sub_140237680(v11);
	if (!v12)
		return 0i64;
	if (!a2 || !a3 || a2 == a3)
	{
		a3 = *(_DWORD*)(a1 + 340);
		a2 = *(_DWORD*)(a1 + 344);
	}
	v13 = (__m128*)sub_1403D90D0(qword_140C65898, a2);
	if (!v13)
		return 0i64;
	v14 = (__m128*)sub_1403D90D0(qword_140C65898, a3);
	if (!v14)
	{
		if (*(_DWORD*)(v12 + 8))
			return *(unsigned int*)(v12 + 72);
		else
			return (unsigned int)((int)*(float*)(v12 + 152) + *(_DWORD*)(v12 + 72));
	}
	v15 = _mm_sub_ps(v13[286], v14[286]);
	v16 = _mm_mul_ps(v15, v15);
	v17 = fsqrt(
		(float)(v16.m128_f32[0] + _mm_shuffle_ps(v16, v16, 85).m128_f32[0])
		+ _mm_shuffle_ps(v16, v16, 170).m128_f32[0]);
	if (v17 < 0.0000099999997)
		return 0i64;
	v18 = *(_DWORD*)(v12 + 92);
	if (v18)
		v19 = (int)(float)((float)((float)(v17 / (float)v18) * 1000.0)
			+ (float)*(int*)(*(_QWORD*)(*(_QWORD*)(a1 + 312) + 112i64) + 164i64));
	else
		v19 = 0;
	if (*(_DWORD*)(v12 + 8))
		v20 = 0;
	else
		v20 = (int)*(float*)(v12 + 152);
	return (unsigned int)(v19 + v20 + *(_DWORD*)(v12 + 72));
}
// 140C65898: using guessed type __int64 qword_140C65898;

