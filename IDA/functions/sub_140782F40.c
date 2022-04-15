//----- (0000000140782F40) ----------------------------------------------------
__int64 __fastcall sub_140782F40(__int64 a1, __int64 a2, int a3, __int64 a4)
{
	int v5; // ecx
	int v7; // edi
	int v8; // edi
	__int64 result; // rax
	__m128 v10; // xmm2
	float v11; // xmm1_4
	int v12; // ecx
	float v13; // xmm2_4
	int v14; // xmm1_4

	v5 = *(_DWORD*)(a1 + 76);
	v7 = a3;
	if (a3 - v5 > 0)
	{
		v7 = v5;
		if (*(_QWORD*)(a1 + 24))
			sub_14079AB20(*(_QWORD*)(a1 + 16), a1);
	}
	v8 = v7 - *(_DWORD*)(a1 + 72);
	v10 = 0i64;
	result = (unsigned int)v8;
	v10.m128_f32[0] = (float)((float)((float)((float)((float)v8 * 0.001) * *(float*)(a1 + 68)) + *(float*)(a1 + 56))
		+ 3.1415927)
		* 0.15915494;
	v11 = v10.m128_f32[0];
	v12 = (int)v10.m128_f32[0];
	if ((int)v10.m128_f32[0] != 0x80000000 && (float)v12 != v10.m128_f32[0])
	{
		result = _mm_movemask_ps(_mm_unpacklo_ps(v10, v10)) & 1;
		v11 = (float)(v12 - result);
	}
	v13 = v10.m128_f32[0] - v11;
	v14 = *(_DWORD*)(a1 + 64);
	*(_DWORD*)(a4 + 4) = *(_DWORD*)(a1 + 60);
	*(_DWORD*)(a4 + 8) = v14;
	*(float*)a4 = (float)(v13 * 6.2831855) - 3.1415927;
	return result;
}

