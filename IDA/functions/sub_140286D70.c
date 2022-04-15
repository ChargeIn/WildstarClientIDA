//----- (0000000140286D70) ----------------------------------------------------
__m128* __fastcall sub_140286D70(__int64 a1, __m128* a2, __m128* a3)
{
	__int64 v3; // rax
	__m128* v4; // r10
	__int64 v5; // r9
	__m128 v6; // xmm3
	__m128 v7; // xmm1
	int v8; // ecx
	__m128 v9; // xmm1
	int v10; // ecx
	__m128* result; // rax
	__m128 v12; // [rsp+20h] [rbp-78h]
	__int64 v13[10]; // [rsp+30h] [rbp-68h] BYREF

	v3 = *(_QWORD*)(a1 + 224);
	v4 = a2;
	v5 = *(_QWORD*)(v3 + 16);
	if (!*(_DWORD*)(v5 + 128))
	{
		v13[0] = *(_QWORD*)(v3 + 16);
		sub_1401AFC20(v13, (double*)(v5 + 64));
		*(_DWORD*)(v5 + 128) = 1;
	}
	v6 = *a3;
	v7 = _mm_add_ps(
		_mm_add_ps(
			_mm_mul_ps(_mm_shuffle_ps(v6, v6, 85), *(__m128*)(v5 + 16)),
			_mm_mul_ps(_mm_shuffle_ps(*a3, *a3, 0), *(__m128*)v5)),
		*(__m128*)(v5 + 48));
	v12 = v7;
	v7.m128_f32[0] = v7.m128_f32[0] + 0.5;
	v8 = (int)v7.m128_f32[0];
	if ((int)v7.m128_f32[0] != 0x80000000 && (float)v8 != v7.m128_f32[0])
		v7.m128_f32[0] = (float)(v8 - (_mm_movemask_ps(_mm_unpacklo_ps(v7, v7)) & 1));
	v12.m128_i32[0] = v7.m128_i32[0];
	v9 = (__m128)v12.m128_u32[1];
	v9.m128_f32[0] = v12.m128_f32[1] + 0.5;
	v10 = (int)(float)(v12.m128_f32[1] + 0.5);
	if (v10 != 0x80000000 && (float)v10 != v9.m128_f32[0])
		v9.m128_f32[0] = (float)(v10 - (_mm_movemask_ps(_mm_unpacklo_ps(v9, v9)) & 1));
	v12.m128_i32[1] = v9.m128_i32[0];
	result = v4;
	*v4 = _mm_sub_ps(
		_mm_add_ps(
			_mm_add_ps(
				_mm_mul_ps(_mm_shuffle_ps(v12, v12, 85), *(__m128*)(v5 + 80)),
				_mm_mul_ps(_mm_shuffle_ps(v12, v12, 0), *(__m128*)(v5 + 64))),
			*(__m128*)(v5 + 112)),
		v6);
	return result;
}
// 140286DB4: variable 'v5' is possibly undefined
// 140286DBF: variable 'a3' is possibly undefined
// 140286E62: variable 'v4' is possibly undefined
// 140286D70: using guessed type __int64 var_68[10];

