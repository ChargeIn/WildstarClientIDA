//----- (000000014038B300) ----------------------------------------------------
__int64 __fastcall sub_14038B300(__int64 a1, int a2, __int64 a3, __int64 a4, int a5, int a6)
{
	__int64 v9; // rax
	__int64 result; // rax
	__int64 v11; // rcx
	int v12; // xmm6_4
	__m128 v13; // xmm1
	__m128* v14; // rax
	__m128 v15; // xmm0
	_QWORD* v16; // rcx
	__int64 v17; // rax
	_QWORD* v18; // rcx
	__int64 v19; // rax
	__m128 v20; // [rsp+20h] [rbp-38h] BYREF
	__int64 v21; // [rsp+30h] [rbp-28h]
	__int64 v22; // [rsp+38h] [rbp-20h]

	*(_DWORD*)(a1 + 24) = a2;
	v9 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 16) + 32i64))(*(_QWORD*)(a1 + 16));
	result = (*(__int64(__fastcall**)(__int64, __int64, __int64, _QWORD))(*(_QWORD*)v9 + 40i64))(v9, a4, a1 + 32, 0i64);
	if ((int)result >= 0)
	{
		(*(void(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 32) + 72i64))(*(_QWORD*)(a1 + 32), a3);
		v11 = *(_QWORD*)(a1 + 32);
		v12 = 1065353216;
		v20.m128_u64[0] = 150i64;
		v20.m128_u64[1] = 1065353216i64;
		v21 = 0i64;
		v22 = 0i64;
		(*(void(__fastcall**)(__int64, _QWORD, __m128*))(*(_QWORD*)v11 + 584i64))(v11, 0i64, &v20);
		*(_OWORD*)(a1 + 48) = *(_OWORD*)a3;
		*(_OWORD*)(a1 + 64) = *(_OWORD*)(a3 + 16);
		*(_OWORD*)(a1 + 80) = *(_OWORD*)(a3 + 32);
		*(_OWORD*)(a1 + 96) = *(_OWORD*)(a3 + 48);
		v13 = _mm_mul_ps(*(__m128*)(a1 + 48), *(__m128*)(a1 + 48));
		*(float*)(a1 + 128) = 1.0
			/ fsqrt(
				(float)(v13.m128_f32[0] + _mm_shuffle_ps(v13, v13, 85).m128_f32[0])
				+ _mm_shuffle_ps(v13, v13, 170).m128_f32[0]);
		v14 = *(__m128**)(a3 + 64);
		if (v14)
			v15 = *v14;
		else
			v15 = _mm_add_ps(*(__m128*)(a1 + 96), (__m128)xmmword_140C77870);
		v20 = v15;
		*(__m128*)(a1 + 112) = v15;
		*(_DWORD*)(a1 + 236) = a5;
		*(_DWORD*)(a1 + 188) = a6;
		if (!a5)
			v12 = 0;
		*(_DWORD*)(a1 + 244) = v12;
		*(_DWORD*)(a1 + 240) = v12;
		*(_QWORD*)(a1 + 248) = 0i64;
		v16 = (_QWORD*)(*(_QWORD*)(a1 + 16) + 5328i64);
		if (!*(_QWORD*)(a1 + 1168))
		{
			*(_QWORD*)(a1 + 1168) = v16;
			*(_QWORD*)(a1 + 1176) = *v16;
			*v16 = a1;
			v17 = *(_QWORD*)(a1 + 1176);
			if (v17)
				*(_QWORD*)(v17 + 1168) = a1 + 1176;
		}
		v18 = (_QWORD*)(*(_QWORD*)(a1 + 16) + 5336i64);
		if (!*(_QWORD*)(a1 + 1184))
		{
			*(_QWORD*)(a1 + 1184) = v18;
			*(_QWORD*)(a1 + 1192) = *v18;
			*v18 = a1;
			v19 = *(_QWORD*)(a1 + 1192);
			if (v19)
				*(_QWORD*)(v19 + 1184) = a1 + 1192;
		}
		return 0i64;
	}
	return result;
}
// 140C77870: using guessed type __int128 xmmword_140C77870;

