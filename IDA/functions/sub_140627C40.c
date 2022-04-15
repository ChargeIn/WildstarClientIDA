#include "../winhttp.h"

//----- (0000000140627C40) ----------------------------------------------------
__int64 __fastcall sub_140627C40(__int64 a1)
{
	__int64 v2; // rdi
	__m128* v3; // r8
	__m128 v4; // xmm4
	__m128 v5; // xmm5
	__m128* v6; // rcx
	__m128 v7; // xmm3
	__m128 v8; // xmm2
	__m128 v9; // xmm1
	__m128 v10; // xmm2
	__m128* v11; // r8
	__m128* v12; // rcx
	__m128 v13; // xmm3
	float v14; // xmm1_4
	float v15; // xmm1_4
	float v16; // xmm0_4
	unsigned int v17; // edi
	__m128 v18; // xmm2
	__m128 v19; // xmm1
	__m128 v20; // xmm2
	__m128 v21; // xmm1
	__int64 v22; // rcx
	__int64 v23; // rdx
	__int64 v24; // rax
	__m128 v26; // [rsp+38h] [rbp-39h]
	__m128 v27; // [rsp+48h] [rbp-29h] BYREF
	__m128 v28; // [rsp+58h] [rbp-19h] BYREF
	__int64 v29; // [rsp+68h] [rbp-9h] BYREF
	int v30; // [rsp+70h] [rbp-1h]
	_BOOL8(__fastcall * v31)(__int64, _QWORD*); // [rsp+78h] [rbp+7h]
	__int64 v32; // [rsp+80h] [rbp+Fh]
	int v33; // [rsp+88h] [rbp+17h]
	__int128 v34; // [rsp+90h] [rbp+1Fh]
	__int64 v35; // [rsp+D8h] [rbp+67h] BYREF
	struct tagPOINT Point; // [rsp+E0h] [rbp+6Fh] BYREF
	int v37; // [rsp+E8h] [rbp+77h] BYREF
	int v38; // [rsp+ECh] [rbp+7Bh]

	v2 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 584i64))(qword_140C65670);
	GetCursorPos(&Point);
	ScreenToClient(*(HWND*)(qword_140C635F0 + 8), &Point);
	v3 = *(__m128**)(qword_140C65898 + 29096);
	v4 = (__m128)COERCE_UNSIGNED_INT((float)Point.x);
	v5 = (__m128)COERCE_UNSIGNED_INT((float)Point.y);
	if (!v3)
		v3 = *(__m128**)(qword_140C65898 + 29088);
	v6 = *(__m128**)(qword_140C65898 + 29096);
	if (!v6)
		v6 = *(__m128**)(qword_140C65898 + 29088);
	v7 = _mm_unpacklo_ps(_mm_unpacklo_ps(v4, (__m128)0i64), _mm_unpacklo_ps(v5, (__m128)0i64));
	v26.m128_f32[0] = (float)((float)((float)(v7.m128_f32[0] - (float)*(int*)v2) / (float)*(int*)(v2 + 8)) * 2.0) - 1.0;
	v26.m128_f32[1] = 1.0
		- (float)((float)((float)(_mm_shuffle_ps(v7, v7, 85).m128_f32[0] - (float)*(int*)(v2 + 4))
			/ (float)*(int*)(v2 + 12))
			* 2.0);
	v26.m128_f32[2] = (float)(_mm_shuffle_ps(v7, v7, 170).m128_f32[0] - *(float*)(v2 + 16))
		/ (float)(*(float*)(v2 + 20) - *(float*)(v2 + 16));
	v8 = _mm_add_ps(
		_mm_add_ps(
			_mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v26, v26, 85), v3[19]), _mm_mul_ps(_mm_shuffle_ps(v26, v26, 0), v3[18])),
			_mm_mul_ps(_mm_shuffle_ps(v26, v26, 170), v3[20])),
		v3[21]);
	v9 = _mm_shuffle_ps(v8, v8, 255);
	v10 = _mm_div_ps(v8, _mm_shuffle_ps(v9, v9, 0));
	v28 = _mm_add_ps(
		_mm_add_ps(
			_mm_add_ps(
				_mm_mul_ps(_mm_shuffle_ps(v10, v10, 85), v6[11]),
				_mm_mul_ps(_mm_shuffle_ps(v10, v10, 0), v6[10])),
			_mm_mul_ps(_mm_shuffle_ps(v10, v10, 170), v6[12])),
		v6[13]);
	v11 = *(__m128**)(qword_140C65898 + 29096);
	if (!v11)
		v11 = *(__m128**)(qword_140C65898 + 29088);
	v12 = *(__m128**)(qword_140C65898 + 29096);
	if (!v12)
		v12 = *(__m128**)(qword_140C65898 + 29088);
	v13 = _mm_unpacklo_ps(_mm_unpacklo_ps(v4, (__m128)0x3F800000u), _mm_unpacklo_ps(v5, (__m128)0i64));
	v26.m128_f32[0] = (float)((float)((float)(v13.m128_f32[0] - (float)*(int*)v2) / (float)*(int*)(v2 + 8)) * 2.0) - 1.0;
	v14 = _mm_shuffle_ps(v13, v13, 85).m128_f32[0];
	v13.m128_f32[0] = _mm_shuffle_ps(v13, v13, 170).m128_f32[0] - *(float*)(v2 + 16);
	v15 = (float)(v14 - (float)*(int*)(v2 + 4)) / (float)*(int*)(v2 + 12);
	v16 = *(float*)(v2 + 20) - *(float*)(v2 + 16);
	v17 = 0;
	v26.m128_f32[1] = 1.0 - (float)(v15 * 2.0);
	v26.m128_f32[2] = v13.m128_f32[0] / v16;
	v18 = _mm_add_ps(
		_mm_add_ps(
			_mm_add_ps(
				_mm_mul_ps(_mm_shuffle_ps(v26, v26, 85), v11[19]),
				_mm_mul_ps(_mm_shuffle_ps(v26, v26, 0), v11[18])),
			_mm_mul_ps(_mm_shuffle_ps(v26, v26, 170), v11[20])),
		v11[21]);
	v19 = _mm_shuffle_ps(v18, v18, 255);
	v20 = _mm_div_ps(v18, _mm_shuffle_ps(v19, v19, 0));
	v21 = _mm_add_ps(
		_mm_add_ps(
			_mm_add_ps(
				_mm_mul_ps(_mm_shuffle_ps(v20, v20, 85), v12[11]),
				_mm_mul_ps(_mm_shuffle_ps(v20, v20, 0), v12[10])),
			_mm_mul_ps(_mm_shuffle_ps(v20, v20, 170), v12[12])),
		v12[13]);
	v35 = 0i64;
	v27 = v21;
	v22 = *(_QWORD*)(qword_140C65898 + 29256);
	v23 = *(_QWORD*)(*(_QWORD*)(qword_140C65898 + 120) + 5872i64);
	v29 = 2048i64;
	v31 = sub_140627C00;
	v30 = 0;
	v32 = a1;
	*(_QWORD*)&v34 = v23;
	v33 = 0;
	v37 = 0;
	v38 = 1065353216;
	if ((*(unsigned int(__fastcall**)(__int64, __m128*, __m128*, int*, __int64*, __int64*, unsigned __int64, _DWORD))(*(_QWORD*)v22 + 424i64))(
		v22,
		&v28,
		&v27,
		&v37,
		&v35,
		&v29,
		v26.m128_u64[0],
		v13.m128_f32[0] / v16)
		&& ((v24 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v35 + 32i64))(v35)) != 0
			|| (v24 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v35 + 24i64))(v35)) != 0))
	{
		if (v24 == *(_QWORD*)(a1 + 96))
		{
			*(_DWORD*)(a1 + 184) = 1;
		}
		else if (v24 == *(_QWORD*)(a1 + 104))
		{
			*(_DWORD*)(a1 + 184) = 2;
		}
		else if (v24 == *(_QWORD*)(a1 + 112))
		{
			*(_DWORD*)(a1 + 184) = 3;
		}
		else if (v24 == *(_QWORD*)(a1 + 120))
		{
			*(_DWORD*)(a1 + 184) = 4;
		}
		else if (v24 == *(_QWORD*)(a1 + 128))
		{
			*(_DWORD*)(a1 + 184) = 5;
		}
		else if (v24 == *(_QWORD*)(a1 + 136))
		{
			*(_DWORD*)(a1 + 184) = 6;
		}
	}
	else
	{
		*(_DWORD*)(a1 + 184) = 0;
	}
	LOBYTE(v17) = *(_DWORD*)(a1 + 184) != 0;
	if (v35)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v35 + 8i64))(v35);
	return v17;
}
// 140627D78: variable 'v26' is possibly undefined
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C65670: using guessed type __int64 qword_140C65670;
// 140C65898: using guessed type __int64 qword_140C65898;

