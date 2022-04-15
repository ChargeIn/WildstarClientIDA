//----- (000000014037D540) ----------------------------------------------------
void __fastcall sub_14037D540(__m128** a1)
{
	__m128* v1; // rdi
	__m128* v3; // rax
	__m128 v4; // xmm1
	__m128 v5; // xmm7
	float v6; // xmm7_4
	__m128** v7; // rbp
	__int64 v8; // r14
	_QWORD* v9; // rdi
	__int64 v10; // rcx
	__int64 v11; // rcx
	__int64 v12; // rcx
	__m128* v13; // rcx
	__m128* v14; // rcx
	int v15; // [rsp+20h] [rbp-48h] BYREF
	__m128** v16; // [rsp+28h] [rbp-40h]
	void(__fastcall * v17)(_QWORD*); // [rsp+30h] [rbp-38h]
	__int64 v18; // [rsp+38h] [rbp-30h]

	v1 = *a1;
	if ((*a1)[100].m128_i32[2])
	{
		v6 = 1.0;
	}
	else
	{
		v3 = (__m128*)(*(__int64(__fastcall**)(__m128*))(a1[2]->m128_u64[0] + 40))(a1[2]);
		v4 = _mm_sub_ps(_mm_max_ps(v3[2], _mm_min_ps(v1[57], v3[3])), (*a1)[57]);
		v5 = _mm_mul_ps(v4, v4);
		v6 = fsqrt((float)(v5.m128_f32[0] + _mm_shuffle_ps(v5, v5, 85).m128_f32[0]) + _mm_shuffle_ps(v5, v5, 170).m128_f32[0]);
	}
	v7 = a1 + 90;
	v8 = 4i64;
	v9 = a1 + 11;
	do
	{
		if (*(v9 - 4))
		{
			if (*v9)
				(*(void(__fastcall**)(_QWORD, _QWORD))(*(_QWORD*)*v9 + 48i64))(*v9, (*a1)[119].m128_u32[1]);
			v10 = v9[4];
			if (v10)
				(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v10 + 48i64))(v10, (*a1)[119].m128_u32[1]);
			v11 = v9[69];
			if (v11)
				(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v11 + 48i64))(v11, (*a1)[119].m128_u32[1]);
			v12 = v9[73];
			if (v12)
				(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v12 + 48i64))(v12, (*a1)[119].m128_u32[1]);
		}
		++v9;
		v7 = (__m128**)((char*)v7 + 4);
		--v8;
	} while (v8);
	v13 = a1[179];
	if (v13)
		v13->m128_u64[0] = (unsigned __int64)a1[180];
	v14 = a1[180];
	if (v14)
		v14[89].m128_u64[1] = (unsigned __int64)a1[179];
	a1[179] = 0i64;
	a1[180] = 0i64;
	v15 = 0;
	v18 = 0i64;
	v16 = a1;
	v17 = sub_140383720;
	sub_140195960((__int64)(a1 + 55), (int)fminf(fmaxf((float)(v6 * 250.0) * 0.03125, 250.0), 8000.0), (__int64)&v15, 4);
}

