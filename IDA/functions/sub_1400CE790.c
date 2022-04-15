#include "../winhttp.h"

//----- (00000001400CE790) ----------------------------------------------------
unsigned __int64 __fastcall sub_1400CE790(__int64 a1, float* a2, unsigned int* a3)
{
	char v3; // si
	unsigned __int64 result; // rax
	unsigned __int64 v8; // rdx
	__int64 v9; // rdx
	__int64 v10; // rax
	float* v11; // rax
	float v12; // xmm9_4
	__m128 v13; // xmm1
	float v14; // xmm9_4
	float v15; // xmm7_4
	float v16; // xmm6_4
	__m128 v17; // xmm1
	__m128 v18; // xmm4
	float v19; // xmm0_4
	float v20; // xmm1_4
	float v21; // xmm5_4
	float v22; // xmm1_4
	float v23; // xmm0_4
	float v24; // xmm4_4
	float v25; // xmm2_4
	float v26; // xmm2_4
	float v27; // xmm0_4
	float v28; // xmm7_4
	float v29; // xmm6_4
	float v30; // xmm0_4
	float v31; // xmm1_4
	float v32; // xmm5_4
	float v33; // xmm4_4
	float v34; // xmm0_4
	float v35; // xmm1_4
	__m128 v36; // xmm1
	__m128 v37; // xmm1
	__int64 v38; // r11
	unsigned __int64 v39; // rdx
	__int64 v40; // rdx
	__m128 v41; // [rsp+58h] [rbp-B0h]
	__m128 v42; // [rsp+68h] [rbp-A0h]
	__int128 v43; // [rsp+78h] [rbp-90h] BYREF
	__int128 v44; // [rsp+88h] [rbp-80h]
	__m128 v45; // [rsp+98h] [rbp-70h] BYREF
	__m128 v46; // [rsp+A8h] [rbp-60h]
	__m128 v47; // [rsp+B8h] [rbp-50h]
	__int128 v48; // [rsp+C8h] [rbp-40h]

	v3 = 0;
	result = (unsigned __int64)*(unsigned int*)(a1 + 656) >> 19;
	if ((*(_DWORD*)(a1 + 656) & 0x80000i64) == 0 && (*(_BYTE*)(a1 + 704) & 0x10) == 0)
	{
		result = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 688) + 48i64))(*(_QWORD*)(a1 + 688));
		if (result)
		{
			v8 = *(unsigned int*)(a1 + 708);
			v43 = *(_OWORD*)a2;
			v44 = *((_OWORD*)a2 + 1);
			v9 = v8 >= *(_QWORD*)(qword_140C63678 + 48)
				? *(_QWORD*)(qword_140C63678 + 40)
				: *(_QWORD*)(qword_140C63678 + 40) + 32 * v8;
			(*(void(__fastcall**)(__int64, _QWORD, _QWORD, __int64, __int128*, int, __int64, int, _QWORD))(*(_QWORD*)qword_140C65680 + 280i64))(
				qword_140C65680,
				*(_QWORD*)(a1 + 688),
				0i64,
				-1i64,
				&v43,
				*(_DWORD*)(a1 + 704) | 0x500,
				v9,
				1,
				0i64);
			v10 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 688) + 48i64))(*(_QWORD*)(a1 + 688));
			v11 = (float*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v10 + 32i64))(v10);
			v13 = (__m128)(unsigned int)v44;
			v12 = a2[4] - *a2;
			*(float*)&v44 = *(float*)&v44 + (float)(*v11 * 0.5);
			v13.m128_f32[0] = *(float*)&v44 - *(float*)&v43;
			result = (unsigned int)(int)(float)(*(float*)&v44 - *(float*)&v43);
			if ((float)(int)(float)(*(float*)&v44 - *(float*)&v43) > v12 && v13.m128_f32[0] > 0.0)
			{
				v14 = v12 / v13.m128_f32[0];
				(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65680 + 64i64))(qword_140C65680, 1i64);
				v15 = *a2;
				v16 = a2[4];
				v13.m128_f32[0] = 1.0 / v14;
				v17 = _mm_shuffle_ps(v13, v13, 0);
				v18 = _mm_mul_ps((__m128)xmmword_140C78410, v17);
				v46 = _mm_mul_ps((__m128)xmmword_140C78420, v17);
				v45 = v18;
				v47 = _mm_mul_ps((__m128)xmmword_140C78430, (__m128)xmmword_140B7B240);
				v42 = _mm_unpacklo_ps(
					_mm_unpacklo_ps((__m128)xmmword_140C78440, (__m128)0i64),
					_mm_unpacklo_ps(_mm_shuffle_ps((__m128)xmmword_140C78440, (__m128)xmmword_140C78440, 85), (__m128)0i64));
				v41 = v42;
				if (v18.m128_f32[0] <= 0.0)
				{
					v19 = v16;
					v20 = v15;
				}
				else
				{
					v19 = v15;
					v20 = v16;
				}
				v21 = a2[1];
				v22 = v20 * v18.m128_f32[0];
				v23 = v19 * v18.m128_f32[0];
				v24 = a2[5];
				v25 = v42.m128_f32[0] + v23;
				if (v46.m128_f32[0] <= 0.0)
				{
					v26 = v25 + (float)(v24 * v46.m128_f32[0]);
					v27 = a2[1];
				}
				else
				{
					v26 = v25 + (float)(v21 * v46.m128_f32[0]);
					v27 = a2[5];
				}
				v41.m128_f32[0] = v26;
				v28 = v15 * v45.m128_f32[1];
				v29 = v16 * v45.m128_f32[1];
				v42.m128_f32[0] = (float)(v42.m128_f32[0] + v22) + (float)(v27 * v46.m128_f32[0]);
				if (v45.m128_f32[1] <= 0.0)
				{
					v30 = v41.m128_f32[1] + v29;
					v31 = v42.m128_f32[1] + v28;
				}
				else
				{
					v30 = v41.m128_f32[1] + v28;
					v31 = v42.m128_f32[1] + v29;
				}
				v32 = v21 * v46.m128_f32[1];
				v33 = v24 * v46.m128_f32[1];
				if (v46.m128_f32[1] <= 0.0)
				{
					v34 = v30 + v33;
					v35 = v31 + v32;
				}
				else
				{
					v34 = v30 + v32;
					v35 = v31 + v33;
				}
				v41.m128_f32[1] = v34;
				v42.m128_f32[1] = v35;
				v36 = v42;
				*(__m128*)a2 = v41;
				*((__m128*)a2 + 1) = v42;
				v36.m128_f32[0] = v14;
				v37 = _mm_shuffle_ps(v36, v36, 0);
				v45 = _mm_mul_ps((__m128)xmmword_140C78410, v37);
				v46 = _mm_mul_ps((__m128)xmmword_140C78420, v37);
				v47 = _mm_mul_ps((__m128)xmmword_140C78430, (__m128)xmmword_140B7B240);
				v48 = xmmword_140C78440;
				result = (*(__int64(__fastcall**)(__int64, __m128*))(*(_QWORD*)qword_140C65680 + 88i64))(
					qword_140C65680,
					&v45);
				v3 = 1;
			}
		}
	}
	v38 = *(_QWORD*)(a1 + 688);
	if (v38)
	{
		v39 = *a3;
		if (v39 >= *(_QWORD*)(qword_140C63678 + 48))
			v40 = *(_QWORD*)(qword_140C63678 + 40);
		else
			v40 = *(_QWORD*)(qword_140C63678 + 40) + 32 * v39;
		result = (*(__int64(__fastcall**)(__int64, __int64, _QWORD, __int64, float*, unsigned int, __int64, int, _QWORD))(*(_QWORD*)qword_140C65680 + 280i64))(
			qword_140C65680,
			v38,
			0i64,
			-1i64,
			a2,
			*(_DWORD*)(a1 + 704) | 0x100u,
			v40,
			1,
			0i64);
	}
	if (v3)
		return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65680 + 72i64))(qword_140C65680);
	return result;
}
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140C63678: using guessed type __int64 qword_140C63678;
// 140C65680: using guessed type __int64 qword_140C65680;
// 140C78410: using guessed type __int128 xmmword_140C78410;
// 140C78420: using guessed type __int128 xmmword_140C78420;
// 140C78430: using guessed type __int128 xmmword_140C78430;
// 140C78440: using guessed type __int128 xmmword_140C78440;

