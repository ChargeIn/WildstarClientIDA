//----- (00000001405B98A0) ----------------------------------------------------
__int64 __fastcall sub_1405B98A0(__int64 a1)
{
	__int64 v2; // rsi
	__m128i v3; // xmm2
	__m128i v4; // xmm1
	__m128i v5; // xmm3
	float* v6; // r14
	__int64 v7; // rdi
	__m128 v8; // xmm4
	__m128 v9; // xmm3
	__m128 v10; // xmm2
	__m128 v11; // xmm1
	__m128 v12; // xmm1
	__m128 v13; // xmm2
	__m128 v14; // xmm2
	__int64 result; // rax
	__m128 v16; // xmm0
	__m128 v17; // xmm0
	__m128 v18; // xmm4
	__m128 v19; // xmm3
	float v20; // xmm1_4
	__m128 v21; // xmm0
	__m128 v22; // xmm1
	_QWORD* v23; // rcx
	_QWORD* v24; // rcx
	float v25; // xmm0_4
	_QWORD* v26; // rcx
	float v27; // xmm0_4
	__int64 v28; // r8
	unsigned __int64 v29; // rcx
	__m128 v30; // [rsp+48h] [rbp-49h] BYREF
	__m128 v31; // [rsp+58h] [rbp-39h]
	__m128 v32; // [rsp+68h] [rbp-29h] BYREF
	__m128 v33; // [rsp+78h] [rbp-19h] BYREF
	__m128 v34; // [rsp+88h] [rbp-9h]
	char v35[32]; // [rsp+98h] [rbp+7h] BYREF

	v2 = *(_QWORD*)(sub_1400E58C0(*(_QWORD*)(a1 + 32), (int*)L"CRB_Pixel_O") + 96);
	v3 = _mm_cvtsi32_si128(0);
	v4 = _mm_cvtsi32_si128(*(_DWORD*)(a1 + 720));
	v5 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD*)(a1 + 716)), v3);
	v31 = _mm_cvtepi32_ps(
		_mm_unpacklo_epi32(
			_mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD*)(a1 + 724)), v3),
			_mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD*)(a1 + 728)), v3)));
	v30 = _mm_cvtepi32_ps(_mm_unpacklo_epi32(v5, _mm_unpacklo_epi32(v4, v3)));
	v6 = (float*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v2 + 32i64))(v2);
	v7 = sub_1405BA0B0(a1);
	v8 = _mm_add_ps(v31, (__m128)xmmword_140B7B5C0);
	v9 = _mm_sub_ps(v30, (__m128)xmmword_140B7B5C0);
	v10 = v8;
	v11 = _mm_shuffle_ps(v8, v8, 85);
	v10.m128_f32[0] = v8.m128_f32[0] - v9.m128_f32[0];
	v11.m128_f32[0] = v11.m128_f32[0] - _mm_shuffle_ps(v9, v9, 85).m128_f32[0];
	v30 = v9;
	v31 = v8;
	if ((float)(v8.m128_f32[0] - v9.m128_f32[0]) <= v11.m128_f32[0])
	{
		if (v11.m128_f32[0] <= v10.m128_f32[0])
			goto LABEL_6;
		v11.m128_f32[0] = v11.m128_f32[0] - v10.m128_f32[0];
		v13 = 0i64;
		v11.m128_f32[0] = v11.m128_f32[0] * -0.5;
		v12 = _mm_unpacklo_ps(v11, (__m128)0i64);
	}
	else
	{
		v10.m128_f32[0] = v10.m128_f32[0] - v11.m128_f32[0];
		v12 = 0i64;
		v10.m128_f32[0] = v10.m128_f32[0] * -0.5;
		v13 = _mm_unpacklo_ps(v10, (__m128)0i64);
	}
	v14 = _mm_unpacklo_ps(v13, v12);
	v8 = _mm_add_ps(v8, v14);
	v9 = _mm_sub_ps(v9, v14);
	v31 = v8;
	v30 = v9;
LABEL_6:
	result = *(unsigned __int8*)(a1 + 1176);
	if (!(_BYTE)result)
		goto LABEL_12;
	v16 = (__m128) * (unsigned int*)(a1 + 1180);
	if (v16.m128_f32[0] >= 0.125)
	{
		v20 = *(float*)(a1 + 1180);
		if (v20 >= 0.25)
			goto LABEL_12;
		v21 = (__m128)0x3F800000u;
		v21.m128_f32[0] = (float)(1.0 - (float)((float)(v20 - 0.125) * 8.0)) * *v6;
		v22 = _mm_shuffle_ps(v21, v21, 0);
		v18 = _mm_add_ps(v8, v22);
		v19 = _mm_sub_ps(v9, v22);
	}
	else
	{
		v16.m128_f32[0] = (float)(v16.m128_f32[0] * 8.0) * *v6;
		v17 = _mm_shuffle_ps(v16, v16, 0);
		v18 = _mm_add_ps(v8, v17);
		v19 = _mm_sub_ps(v9, v17);
	}
	v31 = v18;
	v30 = v19;
LABEL_12:
	v23 = *(_QWORD**)(a1 + 1040);
	v32 = _mm_unpacklo_ps(
		(__m128)xmmword_140B7A4C0,
		_mm_unpacklo_ps((__m128)0x3F800000u, (__m128) * (unsigned int*)(a1 + 1156)));
	if (v23)
		result = sub_140103E60(
			v23,
			&v30,
			&v32,
			0,
			COERCE_INT((float)(*(float*)&dword_140C63664 - *(float*)(a1 + 1048)) * *(float*)(a1 + 1052)));
	if (v7)
	{
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65680 + 144i64))(qword_140C65680, 1i64);
		if ((*(_DWORD*)(a1 + 664) & 0x800i64) != 0)
		{
			v24 = *(_QWORD**)(a1 + 1184);
			if (v24 && (*(_BYTE*)(v7 + 20) & 0x4C) != 0)
			{
				v33 = _mm_sub_ps(v30, (__m128)xmmword_140B7B2F0);
				v34 = _mm_add_ps(v31, (__m128)xmmword_140B7B2F0);
				v25 = *(float*)&dword_140C63664 - *(float*)(a1 + 1192);
				v32 = _mm_unpacklo_ps(
					(__m128)xmmword_140B7A4C0,
					_mm_unpacklo_ps((__m128)0x3F800000u, (__m128) * (unsigned int*)(a1 + 1156)));
				sub_140103E60(v24, &v33, &v32, 0, COERCE_INT(v25 * *(float*)(a1 + 1196)));
			}
			v26 = *(_QWORD**)(a1 + 1232);
			if (v26 && (*(_BYTE*)(v7 + 20) & 0x30) != 0)
			{
				v33 = _mm_sub_ps(v30, (__m128)xmmword_140B7B2F0);
				v34 = _mm_add_ps(v31, (__m128)xmmword_140B7B2F0);
				v27 = *(float*)&dword_140C63664 - *(float*)(a1 + 1240);
				v32 = _mm_unpacklo_ps(
					(__m128)xmmword_140B7A4C0,
					_mm_unpacklo_ps((__m128)0x3F800000u, (__m128) * (unsigned int*)(a1 + 1156)));
				sub_140103E60(v26, &v33, &v32, 0, COERCE_INT(v27 * *(float*)(a1 + 1244)));
			}
		}
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65680 + 144i64))(qword_140C65680, 1i64);
		v29 = *(_QWORD*)(a1 + 664);
		result = v29 >> 9;
		if ((v29 & 0x200) == 0)
		{
			result = (__int64)sub_1405B9740((_DWORD*)v7, v35, v28, (v29 & 0x400) != 0);
			if (result)
			{
				v32 = (__m128)xmmword_140B7B240;
				result = (*(__int64(__fastcall**)(__int64, __int64, __int64, __int64, __m128*, int, __m128*, int))(*(_QWORD*)qword_140C65680 + 264i64))(
					qword_140C65680,
					v2,
					result,
					-1i64,
					&v30,
					10,
					&v32,
					1);
			}
		}
		if (*(int*)(v7 + 28) > 1)
		{
			result = sub_14034BF80(v35, 16i64, L"%d");
			if ((int)result >= 0)
			{
				v32 = (__m128)xmmword_140B7B240;
				return (*(__int64(__fastcall**)(__int64, __int64, char*, __int64, __m128*, _DWORD, __m128*, int))(*(_QWORD*)qword_140C65680 + 264i64))(
					qword_140C65680,
					v2,
					v35,
					-1i64,
					&v30,
					0,
					&v32,
					1);
			}
		}
	}
	return result;
}
// 1405B9A1D: conditional instruction was optimized away because al.1!=0
// 1405B9C18: variable 'v28' is possibly undefined
// 140B15394: using guessed type wchar_t aD_54[3];
// 140B21390: using guessed type wchar_t aCrbPixelO[12];
// 140B7A4C0: using guessed type __int128 xmmword_140B7A4C0;
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140B7B2F0: using guessed type __int128 xmmword_140B7B2F0;
// 140B7B5C0: using guessed type __int128 xmmword_140B7B5C0;
// 140C63664: using guessed type int dword_140C63664;
// 140C65680: using guessed type __int64 qword_140C65680;

