#include "../winhttp.h"

//----- (00000001404775F0) ----------------------------------------------------
__int64 __fastcall sub_1404775F0(__int64 a1, _DWORD* a2)
{
	int v4; // eax
	__int64* v5; // rcx
	bool v6; // zf
	__int64 v7; // rax
	__m128* v8; // rax
	_QWORD* v9; // rcx
	__m128 v10; // xmm2
	__m128* v11; // rax
	__m128* v12; // rax
	__m128 v13; // xmm1
	__int64 v14; // rax
	int v15; // edx
	int v16; // r8d
	__m128* v17; // rax
	__m128 v18; // xmm3
	int v19; // eax
	float v20; // xmm7_4
	float v21; // xmm4_4
	float v22; // xmm3_4
	float v23; // xmm5_4
	__m128 v24; // xmm1
	__int64 v25; // rax
	float v26; // xmm7_4
	int v27; // edx
	int v28; // r8d
	__int64 result; // rax
	__int128 v30; // [rsp+20h] [rbp-58h]
	char v31[16]; // [rsp+40h] [rbp-38h] BYREF

	v4 = (*(__int64(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 5864) + 848i64))(*(_QWORD*)(a1 + 5864), 25i64);
	v5 = *(__int64**)(a1 + 5864);
	v6 = v4 == 0;
	v7 = *v5;
	if (v6)
	{
		if ((*(unsigned int(__fastcall**)(__int64*, __int64))(v7 + 848))(v5, 1i64))
		{
			v11 = (__m128*)(*(__int64(__fastcall**)(_QWORD, char*, __int64))(**(_QWORD**)(a1 + 5864) + 856i64))(
				*(_QWORD*)(a1 + 5864),
				v31,
				1i64);
			v9 = (_QWORD*)qword_140C65898;
			v10 = *v11;
		}
		else
		{
			v9 = (_QWORD*)qword_140C65898;
			v12 = *(__m128**)(qword_140C65898 + 29096);
			if (!v12)
				v12 = *(__m128**)(qword_140C65898 + 29088);
			v13 = *(__m128*)(a1 + 4576);
			v10 = _mm_add_ps(
				_mm_add_ps(
					_mm_add_ps(
						_mm_mul_ps(_mm_shuffle_ps(v13, v13, 85), v12[11]),
						_mm_mul_ps(_mm_shuffle_ps(v13, v13, 0), v12[10])),
					_mm_mul_ps(_mm_shuffle_ps(v13, v13, 170), v12[12])),
				v12[13]);
		}
	}
	else
	{
		v8 = (__m128*)(*(__int64(__fastcall**)(__int64*, char*, __int64))(v7 + 856))(v5, v31, 25i64);
		v9 = (_QWORD*)qword_140C65898;
		v10 = *v8;
	}
	v14 = v9[3688];
	v15 = *(_DWORD*)(v14 + 80);
	v16 = *(_DWORD*)(v14 + 84);
	v17 = (__m128*)v9[3637];
	if (!v17)
		v17 = (__m128*)v9[3636];
	v18 = _mm_add_ps(
		_mm_add_ps(
			_mm_add_ps(
				_mm_mul_ps(_mm_shuffle_ps(v10, v10, 85), v17[15]),
				_mm_mul_ps(_mm_shuffle_ps(v10, v10, 0), v17[14])),
			_mm_mul_ps(_mm_shuffle_ps(v10, v10, 170), v17[16])),
		v17[17]);
	v19 = v15;
	if (v15 < v16)
		v19 = v16;
	v20 = _mm_shuffle_ps(v18, v18, 255).m128_f32[0];
	v21 = (float)v19 * 0.00050000002;
	*((float*)&v30 + 2) = (float)(1.0 / v20) * v18.m128_f32[2];
	v18.m128_f32[0] = (float)((float)((float)(v18.m128_f32[0] * 0.5) * (float)(1.0 / v20)) + 0.5) * (float)v15;
	LODWORD(v30) = v18.m128_i32[0];
	v23 = (float)(0.5 - (float)((float)(v18.m128_f32[1] * 0.5) * (float)(1.0 / v20))) * (float)v16;
	*((float*)&v30 + 1) = v23;
	if ((*(_BYTE*)(a1 + 4208) & 2) == 0)
	{
		v24 = _mm_mul_ps(*(__m128*)(a1 + 4384), *(__m128*)(a1 + 4384));
		if ((float)((float)(v24.m128_f32[0] + _mm_shuffle_ps(v24, v24, 85).m128_f32[0])
			+ _mm_shuffle_ps(v24, v24, 170).m128_f32[0]) < 0.0000099999997)
		{
			v25 = v9[3637];
			if (!v25)
				v25 = v9[3636];
			if (*(_DWORD*)(v25 + 516))
			{
				v26 = fabs(v20);
				if (v15 < v16)
					v15 = v16;
				v21 = (float)((float)v15 * 0.0024999999) / fmaxf(0.5, fminf(v26, 5.0));
			}
		}
	}
	if (fabs(v22 - *(float*)(a1 + 6288)) > v21 || fabs(v23 - *(float*)(a1 + 6292)) > v21)
		*(_OWORD*)(a1 + 6288) = v30;
	v27 = (int)*(float*)(a1 + 6292);
	v28 = (int)*(float*)(a1 + 6296);
	result = 1i64;
	*a2 = (int)*(float*)(a1 + 6288);
	a2[1] = v27;
	a2[2] = v28;
	return result;
}
// 14047786D: variable 'v30' is possibly undefined
// 140B7B500: using guessed type __int128 xmmword_140B7B500;
// 140C65898: using guessed type __int64 qword_140C65898;

