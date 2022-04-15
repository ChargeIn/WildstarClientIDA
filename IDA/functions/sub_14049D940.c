//----- (000000014049D940) ----------------------------------------------------
__int64 __fastcall sub_14049D940(__int64 a1, __m128* a2, int a3, __m128* a4, unsigned int a5)
{
	__m128* v5; // rdi
	__int64 v8; // rax
	__int64 v9; // rcx
	__m128* v10; // rax
	float v11; // xmm10_4
	float v12; // xmm11_4
	float v13; // xmm6_4
	float v14; // xmm0_4
	float v15; // xmm8_4
	float v16; // xmm6_4
	float v17; // xmm6_4
	__m128 v18; // xmm0
	float v19; // xmm0_4
	unsigned int v20; // ecx
	unsigned int v21; // edx
	int v22; // ebx

	v5 = a4;
	if (!a4)
		return a3 == 2;
	if (!a5)
		return a3 == 2;
	v8 = sub_140225580(a5);
	v9 = v8;
	if (!v8)
		return a3 == 2;
	if ((*(_BYTE*)(v8 + 12) & 1) != 0)
	{
		v10 = a2;
		a2 = v5;
		v5 = v10;
	}
	v11 = *(float*)&dword_140C3B438 * 0.0055555557;
	v12 = (float)*(int*)(v9 + 4);
	v13 = (float)*(int*)(v9 + 8) * 0.5;
	v14 = (float)((float)(v12 - v13) * (float)(*(float*)&dword_140C3B438 * 0.0055555557)) + a2[300].m128_f32[0];
	if (v14 < 0.0)
		v15 = sub_1408FDE98(v14 - 3.1415927, 6.2831855) + 3.1415927;
	else
		v15 = sub_1408FDE98(v14 + 3.1415927, 6.2831855) - 3.1415927;
	v16 = (float)((float)(v13 + v12) * v11) + a2[300].m128_f32[0];
	if (v16 < 0.0)
		v17 = sub_1408FDE98(v16 - 3.1415927, 6.2831855) + 3.1415927;
	else
		v17 = sub_1408FDE98(v16 + 3.1415927, 6.2831855) - 3.1415927;
	v18 = _mm_sub_ps(v5[286], a2[286]);
	v19 = sub_1408FD190(-v18.m128_f32[0], -_mm_shuffle_ps(v18, v18, 170).m128_f32[0]);
	v20 = 0;
	if (v15 <= v17)
	{
		if (v15 > v19 || v17 < v19)
		{
			v21 = 0;
			goto LABEL_19;
		}
		goto LABEL_18;
	}
	if (v15 <= v19 || (v21 = 0, v17 >= v19))
		LABEL_18:
	v21 = 1;
LABEL_19:
	v22 = a3 - 1;
	if (v22)
	{
		if (v22 == 1)
			LOBYTE(v20) = v21 == 0;
	}
	else
	{
		return v21;
	}
	return v20;
}
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C3B438: using guessed type int dword_140C3B438;

