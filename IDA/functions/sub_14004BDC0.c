#include "../winhttp.h"

//----- (000000014004BDC0) ----------------------------------------------------
__int64 __fastcall sub_14004BDC0(_QWORD* a1)
{
	_DWORD* v1; // rax
	__int64 v3; // rax
	__int64 v4; // rsi
	_DWORD* v5; // rax
	unsigned int v6; // ebx
	__int64 v7; // rax
	__int64 v8; // rax
	__int64 v9; // rcx
	__m128 v10; // xmm4
	__m128 v11; // xmm0
	int v12; // eax
	__m128 v13; // xmm2
	float v14; // xmm1_4
	__int64 v15; // rbx
	__int64 v16; // rax
	__int64 v17; // r9
	__int128 v19; // [rsp+20h] [rbp-28h] BYREF
	__m128 v20; // [rsp+30h] [rbp-18h] BYREF

	v1 = (_DWORD*)a1[3];
	if ((unsigned __int64)v1 < a1[2] && v1 != dword_140A12138 && !v1[2])
		return 0i64;
	v3 = sub_140056AB0(a1, 1u);
	if (!v3)
		return 0i64;
	v4 = *(_QWORD*)(*(_QWORD*)v3 + 16i64);
	if (!v4)
		return 0i64;
	v5 = (_DWORD*)(a1[3] + 16i64);
	if ((unsigned __int64)v5 >= a1[2] || v5 == dword_140A12138 || *(int*)(a1[3] + 24i64) <= 0)
		v6 = 0;
	else
		v6 = sub_140056D60(a1, 2u);
	v7 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(v4 + 24) + 328i64))(*(_QWORD*)(v4 + 24));
	if ((*(unsigned int(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v7 + 848i64))(v7, v6))
	{
		v8 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(v4 + 24) + 328i64))(*(_QWORD*)(v4 + 24));
		(*(void(__fastcall**)(__int64, _QWORD, __m128*, _QWORD))(*(_QWORD*)v8 + 872i64))(v8, v6, &v20, 0i64);
	}
	else
	{
		v20 = 0i64;
	}
	v9 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 584i64))(qword_140C65670);
	v10 = _mm_add_ps(
		_mm_add_ps(
			_mm_add_ps(
				_mm_mul_ps(_mm_shuffle_ps(v20, v20, 85), *(__m128*)(*(_QWORD*)(v4 + 5088) + 320i64)),
				_mm_mul_ps(_mm_shuffle_ps(v20, v20, 0), *(__m128*)(*(_QWORD*)(v4 + 5088) + 304i64))),
			_mm_mul_ps(_mm_shuffle_ps(v20, v20, 170), *(__m128*)(*(_QWORD*)(v4 + 5088) + 336i64))),
		*(__m128*)(*(_QWORD*)(v4 + 5088) + 352i64));
	v11 = _mm_and_ps(_mm_shuffle_ps(v10, v10, 255), (__m128)xmmword_140B7B500);
	v12 = *(_DWORD*)(v9 + 12);
	v13 = _mm_div_ps(v10, _mm_shuffle_ps(v11, v11, 0));
	*(float*)&v19 = (float)((float)((float)(v13.m128_f32[0] + 1.0) * 0.5) * (float)*(int*)(v9 + 8)) + (float)*(int*)v9;
	v14 = *(float*)(v9 + 20) - *(float*)(v9 + 16);
	*((float*)&v19 + 1) = (float)((float)(0.5 - (float)(_mm_shuffle_ps(v13, v13, 85).m128_f32[0] * 0.5)) * (float)v12)
		+ (float)*(int*)(v9 + 4);
	*((float*)&v19 + 2) = (float)(v14 * _mm_shuffle_ps(v13, v13, 170).m128_f32[0]) + *(float*)(v9 + 16);
	*(_OWORD*)sub_140059170(a1, 0x10ui64) = v19;
	v15 = a1[4];
	v16 = sub_140062650((__int64)a1, (unsigned __int64*)"Vector3", 7ui64);
	v17 = a1[2];
	*(_QWORD*)&v19 = v16;
	DWORD2(v19) = 4;
	sub_14005E8E0((__int64)a1, v15 + 160, (int*)&v19, v17);
	a1[2] += 16i64;
	sub_140058BF0((__int64)a1, -2);
	return 1i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B7B500: using guessed type __int128 xmmword_140B7B500;
// 140C65670: using guessed type __int64 qword_140C65670;
// 14004BDC0: using guessed type __m128 var_18;

