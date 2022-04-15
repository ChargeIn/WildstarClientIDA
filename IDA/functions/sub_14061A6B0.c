//----- (000000014061A6B0) ----------------------------------------------------
void __fastcall sub_14061A6B0(__int64 a1)
{
	__m128 v1; // xmm0
	__m128 v2; // xmm1
	__int64 v4; // rcx
	__m128 v5; // xmm0
	__m128 v6; // xmm3
	__m128 v7; // xmm1
	__m128 v8; // xmm2
	__m128 v9; // xmm1
	float v10; // xmm1_4
	int v11; // eax
	int v12; // eax
	int v13; // ecx
	int v14; // eax
	__m128 v15; // [rsp+30h] [rbp-50h] BYREF
	__m128 v16; // [rsp+40h] [rbp-40h] BYREF
	__int64 v17; // [rsp+50h] [rbp-30h] BYREF
	__int64 v18; // [rsp+58h] [rbp-28h]
	_QWORD* (__fastcall * v19)(__m128*); // [rsp+60h] [rbp-20h]
	__int64 v20; // [rsp+68h] [rbp-18h]
	int v21; // [rsp+70h] [rbp-10h]
	__int64 v22; // [rsp+78h] [rbp-8h]
	__int64 v23; // [rsp+90h] [rbp+10h] BYREF
	int v24; // [rsp+98h] [rbp+18h] BYREF
	int v25; // [rsp+9Ch] [rbp+1Ch]

	v1 = *(__m128*)(a1 + 336);
	v2 = *(__m128*)(a1 + 352);
	v4 = *(_QWORD*)(qword_140C65898 + 29256);
	v15 = v1;
	v16 = v2;
	v5 = (__m128)0x3F800000u;
	v25 = 1065353216;
	v23 = 0i64;
	v17 = 69i64;
	LODWORD(v18) = 0;
	v19 = 0i64;
	v20 = 0i64;
	v21 = 0;
	v22 = 0i64;
	v24 = 0;
	if ((*(unsigned int(__fastcall**)(__int64, __m128*, __m128*, int*, __int64*, __int64*))(*(_QWORD*)v4 + 424i64))(
		v4,
		&v15,
		&v16,
		&v24,
		&v23,
		&v17))
	{
		*(double*)v5.m128_u64 = (*(double(__fastcall**)(__int64))(*(_QWORD*)v23 + 16i64))(v23);
		v6 = v15;
		v7 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(v16, v15), _mm_shuffle_ps(v5, v5, 0)), v15);
		*(__m128*)(a1 + 496) = v7;
		v8 = _mm_sub_ps(v7, v6);
		v9 = _mm_mul_ps(v8, v8);
		v10 = fsqrt((float)(v9.m128_f32[0] + _mm_shuffle_ps(v9, v9, 85).m128_f32[0]) + _mm_shuffle_ps(v9, v9, 170).m128_f32[0]);
		if (v10 < 0.0000099999997)
			v10 = 0.0;
		v11 = *(_DWORD*)(a1 + 976);
		if (v11)
			v12 = (int)(float)((float)(v10 / (float)v11) * 1000.0);
		else
			v12 = 0;
		if (*(_DWORD*)(a1 + 672))
			v13 = 0;
		else
			v13 = (int)*(float*)(a1 + 924);
		v14 = v13 + v12;
		if (v14)
		{
			v19 = sub_140622FD0;
			LODWORD(v17) = 0;
			v18 = a1;
			v20 = 0i64;
			sub_140195960(a1 + 1360, v14, (__int64)&v17, 4);
		}
	}
	if (v23)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v23 + 8i64))(v23);
}
// 140C65898: using guessed type __int64 qword_140C65898;

