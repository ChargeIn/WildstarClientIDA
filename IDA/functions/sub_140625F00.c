#include "../winhttp.h"

//----- (0000000140625F00) ----------------------------------------------------
__m128* __fastcall sub_140625F00(__int64 a1)
{
	__int64 v2; // rax
	__int64 v3; // rax
	__m128 v4; // xmm1
	__m128 v5; // xmm0
	__m128 v6; // xmm1
	unsigned int* v7; // rax
	__m128 v8; // xmm3
	__m128 v9; // xmm8
	__m128 v10; // xmm10
	__m128 v11; // xmm5
	__m128 v12; // xmm1
	float v13; // xmm2_4
	__m128 v14; // xmm1
	float v15; // xmm0_4
	float v16; // xmm2_4
	float v17; // xmm0_4
	__m128 v18; // xmm1
	__m128 v19; // xmm10
	float v20; // xmm2_4
	float v21; // xmm0_4
	__m128 v22; // xmm5
	__m128 v23; // xmm8
	__int64 v24; // rax
	double v25; // xmm6_8
	float v26; // xmm7_4
	float v27; // xmm0_4
	__m128* result; // rax
	_QWORD* v29; // r13
	__int64 v30; // r8
	_QWORD* v31; // rbx
	_QWORD* v32; // rsi
	_QWORD* v33; // r15
	_QWORD* v34; // r12
	_QWORD* v35; // r14
	__int64 v36; // rcx
	__int64 v37; // rcx
	__int64 v38; // rcx
	__m128 v39; // [rsp+58h] [rbp-B0h] BYREF
	__int128 v40; // [rsp+68h] [rbp-A0h]
	__int128 v41; // [rsp+78h] [rbp-90h]
	__m128 v42; // [rsp+88h] [rbp-80h]
	__int128 v43[4]; // [rsp+98h] [rbp-70h] BYREF
	__int64 v44; // [rsp+D8h] [rbp-30h]
	__m128 v45; // [rsp+E8h] [rbp-20h] BYREF
	__m128 v46; // [rsp+F8h] [rbp-10h]
	__m128 v47; // [rsp+108h] [rbp+0h]
	__m128 v48; // [rsp+118h] [rbp+10h]
	__m128 v49[4]; // [rsp+128h] [rbp+20h] BYREF
	__int64 v50; // [rsp+168h] [rbp+60h]
	__m128 v51[4]; // [rsp+178h] [rbp+70h] BYREF
	__m128* v52; // [rsp+1B8h] [rbp+B0h] BYREF
	__m128* v53; // [rsp+1C0h] [rbp+B8h]
	__m128* v54[2]; // [rsp+208h] [rbp+100h] BYREF
	__m128 v55[4]; // [rsp+218h] [rbp+110h] BYREF
	__m128* v56; // [rsp+258h] [rbp+150h] BYREF
	double v57[8]; // [rsp+268h] [rbp+160h] BYREF

	v2 = **(_QWORD**)(a1 + 8);
	if (*(_DWORD*)(a1 + 188) == 1)
	{
		v3 = (*(__int64 (**)(void))(v2 + 56))();
		v4 = *(__m128*)(v3 + 16);
		v39 = *(__m128*)v3;
		v5 = *(__m128*)(v3 + 32);
		v40 = (__int128)v4;
		v6 = *(__m128*)(v3 + 48);
		v41 = (__int128)v5;
		v42 = v6;
	}
	else
	{
		v7 = (unsigned int*)(*(__int64 (**)(void))(v2 + 56))();
		v8 = (__m128)v7[12];
		v39 = *(__m128*)ymmword_140C78410.m256_f32;
		v41 = xmmword_140C78430;
		v40 = *(_OWORD*)&ymmword_140C78410.m256_f32[4];
		v42 = _mm_unpacklo_ps(_mm_unpacklo_ps(v8, (__m128)v7[14]), _mm_unpacklo_ps((__m128)v7[13], (__m128)0x3F800000u));
	}
	v9 = (__m128)0x40400000u;
	v10 = (__m128)0x40400000u;
	v11 = (__m128)0x40400000u;
	v12 = _mm_mul_ps((__m128)v41, (__m128)v41);
	v13 = (float)(v12.m128_f32[0] + _mm_shuffle_ps(v12, v12, 85).m128_f32[0]) + _mm_shuffle_ps(v12, v12, 170).m128_f32[0];
	v14 = _mm_mul_ps((__m128)v40, (__m128)v40);
	v15 = 1.0 / fsqrt(v13);
	v10.m128_f32[0] = fmaxf((float)((float)(3.0 - (float)((float)(v13 * v15) * v15)) * 0.5) * v15, 0.0);
	v16 = (float)(v14.m128_f32[0] + _mm_shuffle_ps(v14, v14, 85).m128_f32[0]) + _mm_shuffle_ps(v14, v14, 170).m128_f32[0];
	v17 = 1.0 / fsqrt(v16);
	v18 = _mm_mul_ps(v39, v39);
	v19 = _mm_mul_ps(_mm_shuffle_ps(v10, v10, 0), (__m128)v41);
	v11.m128_f32[0] = fmaxf((float)((float)(3.0 - (float)((float)(v16 * v17) * v17)) * 0.5) * v17, 0.0);
	v20 = (float)(v18.m128_f32[0] + _mm_shuffle_ps(v18, v18, 85).m128_f32[0]) + _mm_shuffle_ps(v18, v18, 170).m128_f32[0];
	v21 = fsqrt(v20);
	v22 = _mm_mul_ps(_mm_shuffle_ps(v11, v11, 0), (__m128)v40);
	v9.m128_f32[0] = fmaxf(
		(float)((float)(3.0 - (float)((float)(v20 * (float)(1.0 / v21)) * (float)(1.0 / v21))) * 0.5)
		* (float)(1.0 / v21),
		0.0);
	v23 = _mm_mul_ps(_mm_shuffle_ps(v9, v9, 0), v39);
	v45 = _mm_unpacklo_ps(
		_mm_unpacklo_ps(v23, _mm_shuffle_ps(v23, v23, 170)),
		_mm_unpacklo_ps(_mm_shuffle_ps(v23, v23, 85), (__m128)0i64));
	v46 = _mm_unpacklo_ps(
		_mm_unpacklo_ps(v22, _mm_shuffle_ps(v22, v22, 170)),
		_mm_unpacklo_ps(_mm_shuffle_ps(v22, v22, 85), (__m128)0i64));
	v47 = _mm_unpacklo_ps(
		_mm_unpacklo_ps(v19, _mm_shuffle_ps(v19, v19, 170)),
		_mm_unpacklo_ps(_mm_shuffle_ps(v19, v19, 85), (__m128)0i64));
	v48 = _mm_unpacklo_ps(
		_mm_unpacklo_ps(v42, _mm_shuffle_ps(v42, v42, 170)),
		_mm_unpacklo_ps(_mm_shuffle_ps(v42, v42, 85), (__m128)0x3F800000u));
	v24 = *(_QWORD*)(qword_140C65898 + 120);
	v43[0] = (__int128)v45;
	*(_QWORD*)&v25 = (unsigned int)dword_140C4A908;
	v44 = v24 + 4576;
	v43[1] = (__int128)v46;
	v43[2] = (__int128)v47;
	v43[3] = (__int128)v48;
	*(float*)&v25 = *(float*)&dword_140C4A908 * 0.5;
	v26 = sub_1408FE3D0(v25);
	v27 = sub_1408FC950(v25);
	*(_QWORD*)&v41 = LODWORD(v26);
	v39.m128_u64[0] = LODWORD(v27);
	*((_QWORD*)&v41 + 1) = LODWORD(v27);
	v42 = (__m128)xmmword_140C78440;
	v39.m128_i32[3] = 0;
	v39.m128_f32[2] = -v26;
	v40 = xmmword_140B7A4B0;
	v56 = &v45;
	sub_1401AFC20((__int64*)&v56, v57);
	v54[0] = (__m128*)v57;
	v54[1] = &v39;
	sub_1401AFB10(v54, v55);
	v52 = v55;
	v53 = &v45;
	sub_1401AFB10(&v52, v51);
	v52 = &v45;
	v53 = v51;
	result = sub_1401AFB10(&v52, v49);
	v29 = (_QWORD*)(a1 + 96);
	v50 = v30 + 4576;
	if (!*(_QWORD*)(a1 + 96))
	{
		result = (__m128*)(*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)a1 + 112i64))(a1, 1i64);
		if ((_DWORD)result)
			result = (__m128*)(*(__int64(__fastcall**)(_QWORD, _QWORD, __m128*, const wchar_t*, int, _DWORD, __int64))(**(_QWORD**)(qword_140C65898 + 29256) + 176i64))(
				*(_QWORD*)(qword_140C65898 + 29256),
				0i64,
				v49,
				L"Art\\FX\\Housing\\Transform_UI\\Translate\\TranslateAxis_Z.m3",
				1,
				0,
				a1 + 96);
	}
	v31 = (_QWORD*)(a1 + 104);
	if (!*(_QWORD*)(a1 + 104))
	{
		result = (__m128*)(*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)a1 + 112i64))(a1, 2i64);
		if ((_DWORD)result)
			result = (__m128*)(*(__int64(__fastcall**)(_QWORD, _QWORD, __int128*, const wchar_t*, int, _DWORD, __int64))(**(_QWORD**)(qword_140C65898 + 29256) + 176i64))(
				*(_QWORD*)(qword_140C65898 + 29256),
				0i64,
				v43,
				L"Art\\FX\\Housing\\Transform_UI\\Translate\\TranslateAxis_Y.m3",
				1,
				0,
				a1 + 104);
	}
	v32 = (_QWORD*)(a1 + 112);
	if (!*(_QWORD*)(a1 + 112))
	{
		result = (__m128*)(*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)a1 + 112i64))(a1, 3i64);
		if ((_DWORD)result)
			result = (__m128*)(*(__int64(__fastcall**)(_QWORD, _QWORD, __m128*, const wchar_t*, int, _DWORD, __int64))(**(_QWORD**)(qword_140C65898 + 29256) + 176i64))(
				*(_QWORD*)(qword_140C65898 + 29256),
				0i64,
				v49,
				L"Art\\FX\\Housing\\Transform_UI\\Translate\\TranslateAxis_X.m3",
				1,
				0,
				a1 + 112);
	}
	v33 = (_QWORD*)(a1 + 120);
	if (!*(_QWORD*)(a1 + 120))
	{
		result = (__m128*)(*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)a1 + 112i64))(a1, 4i64);
		if ((_DWORD)result)
		{
			(*(void(__fastcall**)(_QWORD, _QWORD, __int128*, const wchar_t*, int, _DWORD, __int64))(**(_QWORD**)(qword_140C65898 + 29256)
				+ 176i64))(
					*(_QWORD*)(qword_140C65898 + 29256),
					0i64,
					v43,
					L"Art\\FX\\Housing\\Transform_UI\\Rotate\\RotateAxis_X.m3",
					1,
					0,
					a1 + 120);
			result = (__m128*)(*(__int64(__fastcall**)(_QWORD, _QWORD, __int128*, const wchar_t*, int, _DWORD, __int64))(**(_QWORD**)(qword_140C65898 + 29256) + 176i64))(
				*(_QWORD*)(qword_140C65898 + 29256),
				0i64,
				v43,
				L"Art\\FX\\Housing\\Transform_UI\\Rotate\\RotateAxis_X_noSelect.m3",
				1,
				0,
				a1 + 144);
		}
	}
	v34 = (_QWORD*)(a1 + 128);
	if (!*(_QWORD*)(a1 + 128))
	{
		result = (__m128*)(*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)a1 + 112i64))(a1, 5i64);
		if ((_DWORD)result)
		{
			(*(void(__fastcall**)(_QWORD, _QWORD, __int128*, const wchar_t*, int, _DWORD, __int64))(**(_QWORD**)(qword_140C65898 + 29256)
				+ 176i64))(
					*(_QWORD*)(qword_140C65898 + 29256),
					0i64,
					v43,
					L"Art\\FX\\Housing\\Transform_UI\\Rotate\\RotateAxis_Y.m3",
					1,
					0,
					a1 + 128);
			result = (__m128*)(*(__int64(__fastcall**)(_QWORD, _QWORD, __int128*, const wchar_t*, int, _DWORD, __int64))(**(_QWORD**)(qword_140C65898 + 29256) + 176i64))(
				*(_QWORD*)(qword_140C65898 + 29256),
				0i64,
				v43,
				L"Art\\FX\\Housing\\Transform_UI\\Rotate\\RotateAxis_Y_noSelect.m3",
				1,
				0,
				a1 + 152);
		}
	}
	v35 = (_QWORD*)(a1 + 136);
	if (!*(_QWORD*)(a1 + 136))
	{
		result = (__m128*)(*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)a1 + 112i64))(a1, 6i64);
		if ((_DWORD)result)
		{
			(*(void(__fastcall**)(_QWORD, _QWORD, __int128*, const wchar_t*, int, _DWORD, __int64))(**(_QWORD**)(qword_140C65898 + 29256)
				+ 176i64))(
					*(_QWORD*)(qword_140C65898 + 29256),
					0i64,
					v43,
					L"Art\\FX\\Housing\\Transform_UI\\Rotate\\RotateAxis_Z.m3",
					1,
					0,
					a1 + 136);
			result = (__m128*)(*(__int64(__fastcall**)(_QWORD, _QWORD, __int128*, const wchar_t*, int, _DWORD, __int64))(**(_QWORD**)(qword_140C65898 + 29256) + 176i64))(
				*(_QWORD*)(qword_140C65898 + 29256),
				0i64,
				v43,
				L"Art\\FX\\Housing\\Transform_UI\\Rotate\\RotateAxis_Z_noSelect.m3",
				1,
				0,
				a1 + 160);
		}
	}
	if (*v29)
	{
		result = (__m128*)(*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)a1 + 112i64))(a1, 1i64);
		if (!(_DWORD)result)
		{
			if (*v29)
			{
				result = (__m128*)(*(__int64(__fastcall**)(_QWORD))(*(_QWORD*)*v29 + 8i64))(*v29);
				*v29 = 0i64;
			}
		}
	}
	if (*v31)
	{
		result = (__m128*)(*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)a1 + 112i64))(a1, 2i64);
		if (!(_DWORD)result)
		{
			if (*v31)
			{
				result = (__m128*)(*(__int64(__fastcall**)(_QWORD))(*(_QWORD*)*v31 + 8i64))(*v31);
				*v31 = 0i64;
			}
		}
	}
	if (*v32)
	{
		result = (__m128*)(*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)a1 + 112i64))(a1, 3i64);
		if (!(_DWORD)result)
		{
			if (*v32)
			{
				result = (__m128*)(*(__int64(__fastcall**)(_QWORD))(*(_QWORD*)*v32 + 8i64))(*v32);
				*v32 = 0i64;
			}
		}
	}
	if (*v33)
	{
		result = (__m128*)(*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)a1 + 112i64))(a1, 4i64);
		if (!(_DWORD)result)
		{
			if (*v33)
			{
				result = (__m128*)(*(__int64(__fastcall**)(_QWORD))(*(_QWORD*)*v33 + 8i64))(*v33);
				*v33 = 0i64;
			}
			v36 = *(_QWORD*)(a1 + 144);
			if (v36)
			{
				result = (__m128*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v36 + 8i64))(v36);
				*(_QWORD*)(a1 + 144) = 0i64;
			}
		}
	}
	if (*v34)
	{
		result = (__m128*)(*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)a1 + 112i64))(a1, 5i64);
		if (!(_DWORD)result)
		{
			if (*v34)
			{
				result = (__m128*)(*(__int64(__fastcall**)(_QWORD))(*(_QWORD*)*v34 + 8i64))(*v34);
				*v34 = 0i64;
			}
			v37 = *(_QWORD*)(a1 + 152);
			if (v37)
			{
				result = (__m128*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v37 + 8i64))(v37);
				*(_QWORD*)(a1 + 152) = 0i64;
			}
		}
	}
	if (*v35)
	{
		result = (__m128*)(*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)a1 + 112i64))(a1, 6i64);
		if (!(_DWORD)result)
		{
			if (*v35)
			{
				result = (__m128*)(*(__int64(__fastcall**)(_QWORD))(*(_QWORD*)*v35 + 8i64))(*v35);
				*v35 = 0i64;
			}
			v38 = *(_QWORD*)(a1 + 160);
			if (v38)
			{
				result = (__m128*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v38 + 8i64))(v38);
				*(_QWORD*)(a1 + 160) = 0i64;
			}
		}
	}
	return result;
}
// 1406262FC: variable 'v30' is possibly undefined
// 140B27D20: using guessed type wchar_t aArtFxHousingTr_15[51];
// 140B27DB0: using guessed type wchar_t aArtFxHousingTr_16[60];
// 140B27E60: using guessed type wchar_t aArtFxHousingTr_13[51];
// 140B27EF0: using guessed type wchar_t aArtFxHousingTr_14[60];
// 140B27FA0: using guessed type wchar_t aArtFxHousingTr_11[51];
// 140B28030: using guessed type wchar_t aArtFxHousingTr_12[60];
// 140B280E0: using guessed type wchar_t aArtFxHousingTr_9[57];
// 140B28180: using guessed type wchar_t aArtFxHousingTr_10[57];
// 140B28220: using guessed type wchar_t aArtFxHousingTr_8[57];
// 140B7A4B0: using guessed type __int128 xmmword_140B7A4B0;
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C4A908: using guessed type int dword_140C4A908;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C78410: using guessed type __m256 ymmword_140C78410;
// 140C78430: using guessed type __int128 xmmword_140C78430;
// 140C78440: using guessed type __int128 xmmword_140C78440;
// 140625F00: using guessed type double var_D0[8];
// 140625F00: using guessed type __m128 var_120[4];
// 140625F00: using guessed type __m128 var_1C0[4];
// 140625F00: using guessed type __m128 var_210[4];

