#include "../winhttp.h"

//----- (00000001402E3710) ----------------------------------------------------
__int64 __fastcall sub_1402E3710(__int64 a1, __m128* a2)
{
	__int64 v4; // rdi
	__int64 v5; // rbx
	float v6; // xmm0_4
	int v7; // ebx
	__int64 v8; // rsi
	__int64 v9; // rdi
	__int64 v10; // rbx
	float v11; // xmm0_4
	__int64 result; // rax
	__m128 v13; // xmm1
	__m128 v14; // xmm0
	__int64 v15; // [rsp+28h] [rbp-E0h] BYREF
	__int128 v16; // [rsp+30h] [rbp-D8h] BYREF
	__int64 v17; // [rsp+40h] [rbp-C8h]
	__m128 v18; // [rsp+48h] [rbp-C0h]
	__m128 v19; // [rsp+58h] [rbp-B0h] BYREF
	__m128 v20; // [rsp+68h] [rbp-A0h]
	__m128 v21; // [rsp+78h] [rbp-90h]
	__m128 v22; // [rsp+88h] [rbp-80h]
	unsigned __int64 v23; // [rsp+98h] [rbp-70h]
	__int64 v24; // [rsp+A0h] [rbp-68h]
	__int128 v25; // [rsp+A8h] [rbp-60h]
	char v26[16]; // [rsp+B8h] [rbp-50h] BYREF
	__m128 v27; // [rsp+C8h] [rbp-40h] BYREF
	__m128 v28; // [rsp+D8h] [rbp-30h]
	__m128 v29; // [rsp+E8h] [rbp-20h]
	__m128 v30; // [rsp+F8h] [rbp-10h]
	__int128 v31[6]; // [rsp+128h] [rbp+20h] BYREF

	v4 = (*(__int64(__fastcall**)(__int64, __int64*))(*(_QWORD*)a1 + 160i64))(a1, &v15);
	v5 = (*(__int64(__fastcall**)(__int64, char*))(*(_QWORD*)a1 + 144i64))(a1, v26);
	v6 = (*(float(__fastcall**)(__int64))(*(_QWORD*)a1 + 128i64))(a1);
	v18.m128_u64[0] = v5;
	v18.m128_u64[1] = v4;
	v17 = 0i64;
	*((float*)&v16 + 2) = v6;
	v27 = (__m128) * ((unsigned __int64*)&v16 + 1);
	v28 = v18;
	sub_1401B0590((int*)&v27, (__int64)&v19);
	(**(void(__fastcall***)(__int64))a1)(a1);
	v7 = (*(__int64(__fastcall**)(__int64, __int64*))(*(_QWORD*)a1 + 80i64))(a1, &v15);
	(*(void(__fastcall**)(__int64))(*(_QWORD*)a1 + 8i64))(a1);
	if (v7 < 0)
		return (unsigned int)v7;
	while (1)
	{
		v8 = v15;
		if (!v15)
			break;
		v9 = (*(__int64(__fastcall**)(__int64, char*))(*(_QWORD*)v15 + 160i64))(v15, v26);
		v10 = (*(__int64(__fastcall**)(__int64, char*))(*(_QWORD*)v8 + 144i64))(v8, (char*)&v16 + 8);
		v11 = (*(float(__fastcall**)(__int64))(*(_QWORD*)v8 + 128i64))(v8);
		v24 = 0i64;
		*(_QWORD*)&v25 = v10;
		*((_QWORD*)&v25 + 1) = v9;
		*(float*)&v23 = v11;
		v31[0] = v23;
		v31[1] = v25;
		sub_1401B0590((int*)v31, (__int64)&v27);
		v19 = _mm_add_ps(
			_mm_add_ps(
				_mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v19, v19, 85), v28), _mm_mul_ps(_mm_shuffle_ps(v19, v19, 0), v27)),
				_mm_mul_ps(_mm_shuffle_ps(v19, v19, 170), v29)),
			_mm_mul_ps(_mm_shuffle_ps(v19, v19, 255), v30));
		v20 = _mm_add_ps(
			_mm_add_ps(
				_mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v20, v20, 85), v28), _mm_mul_ps(_mm_shuffle_ps(v20, v20, 0), v27)),
				_mm_mul_ps(_mm_shuffle_ps(v20, v20, 170), v29)),
			_mm_mul_ps(_mm_shuffle_ps(v20, v20, 255), v30));
		v21 = _mm_add_ps(
			_mm_add_ps(
				_mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v21, v21, 85), v28), _mm_mul_ps(_mm_shuffle_ps(v21, v21, 0), v27)),
				_mm_mul_ps(_mm_shuffle_ps(v21, v21, 170), v29)),
			_mm_mul_ps(_mm_shuffle_ps(v21, v21, 255), v30));
		v22 = _mm_add_ps(
			_mm_add_ps(
				_mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v22, v22, 85), v28), _mm_mul_ps(_mm_shuffle_ps(v22, v22, 0), v27)),
				_mm_mul_ps(_mm_shuffle_ps(v22, v22, 170), v29)),
			_mm_mul_ps(_mm_shuffle_ps(v22, v22, 255), v30));
		v7 = (*(__int64(__fastcall**)(__int64, __int64*))(*(_QWORD*)v8 + 80i64))(v8, &v15);
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v8 + 8i64))(v8);
		if (v7 < 0)
			return (unsigned int)v7;
	}
	v13 = v21;
	result = 0i64;
	*a2 = v19;
	a2[1] = v20;
	v14 = v22;
	a2[2] = v13;
	a2[3] = v14;
	return result;
}

