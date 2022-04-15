#include "../winhttp.h"

//----- (00000001406CE340) ----------------------------------------------------
__int64 __fastcall sub_1406CE340(__int64 a1)
{
	__int64 v2; // rcx
	__int64 v3; // rcx
	bool v4; // dl
	char v5; // al
	int v6; // ecx
	int v7; // eax
	__int64 v8; // rdi
	_QWORD* v9; // rcx
	int v10; // ecx
	int v11; // eax
	__m128i v12; // xmm3
	unsigned int v13; // r8d
	_QWORD* v14; // rcx
	unsigned int v15; // edx
	__m128i v16; // xmm2
	__m128 v17; // xmm4
	__m128 v18; // xmm2
	__int64 v19; // rax
	__m128 v20; // xmm1
	int v21; // ecx
	int v22; // r8d
	__int64 v23; // rsi
	__int64 v24; // rsi
	__int64 result; // rax
	_QWORD* v26; // rcx
	__int64 v27; // [rsp+48h] [rbp-9h] BYREF
	__int64 v28; // [rsp+50h] [rbp-1h]
	__m128 v29; // [rsp+58h] [rbp+7h] BYREF
	__m128 v30; // [rsp+78h] [rbp+27h] BYREF
	__m128 v31; // [rsp+88h] [rbp+37h]

	v2 = *(_QWORD*)(*(_QWORD*)(a1 + 32) + 2896i64);
	v4 = 1;
	if (v2 != a1 && (!v2 || (v3 = *(_QWORD*)(v2 + 16)) == 0 || v3 != a1 && !sub_1400D1A90(v3, a1)))
		v4 = 0;
	v5 = *(_BYTE*)(a1 + 1436);
	if ((v5 & 0x10) == 0)
	{
		v6 = 4;
		goto LABEL_20;
	}
	if (v5 < 0)
	{
		if ((v5 & 0x40) == 0)
			goto LABEL_16;
		if (v4)
		{
			v6 = 3;
			goto LABEL_20;
		}
	}
	if ((v5 & 0x40) != 0)
	{
		v6 = 1;
		goto LABEL_20;
	}
LABEL_16:
	if (v5 < 0 && v4)
		v6 = 2;
	else
		v6 = (*(_BYTE*)(a1 + 1438) & 1) != 0 ? 5 : 0;
LABEL_20:
	LODWORD(v27) = *(_DWORD*)(a1 + 716);
	v7 = *(_DWORD*)(a1 + 720);
	v29 = (__m128)xmmword_140B7B240;
	HIDWORD(v27) = v7;
	v28 = *(_QWORD*)(a1 + 724);
	v8 = 6i64 * v6;
	v9 = *(_QWORD**)(a1 + 48i64 * v6 + 1568);
	if (v9)
		sub_140103CF0(
			v9,
			(unsigned int*)&v27,
			&v29,
			0,
			COERCE_INT((float)(*(float*)&dword_140C63664 - *(float*)(a1 + 8 * v8 + 1576)) * *(float*)(a1 + 8 * v8 + 1580)));
	(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65680 + 144i64))(qword_140C65680, 1i64);
	v10 = *(_DWORD*)(a1 + 724);
	v11 = *(_DWORD*)(a1 + 728);
	v29 = (__m128)xmmword_140B7B240;
	v12 = _mm_cvtsi32_si128(v10 - *(_DWORD*)(a1 + 2200));
	v13 = *(_DWORD*)(a1 + 2192) + *(_DWORD*)(a1 + 716);
	v14 = *(_QWORD**)(a1 + 2144);
	v15 = *(_DWORD*)(a1 + 2196) + *(_DWORD*)(a1 + 720);
	v16 = _mm_cvtsi32_si128(0);
	v17 = _mm_cvtepi32_ps(
		_mm_unpacklo_epi32(
			_mm_unpacklo_epi32(v12, v16),
			_mm_unpacklo_epi32(_mm_cvtsi32_si128(v11 - *(_DWORD*)(a1 + 2204)), v16)));
	v31 = v17;
	v18 = _mm_cvtepi32_ps(
		_mm_unpacklo_epi32(
			_mm_unpacklo_epi32(_mm_cvtsi32_si128(v13), v16),
			_mm_unpacklo_epi32(_mm_cvtsi32_si128(v15), v16)));
	v30 = v18;
	if (v14)
	{
		sub_140103E60(
			v14,
			&v30,
			&v29,
			0,
			COERCE_INT((float)(*(float*)&dword_140C63664 - *(float*)(a1 + 2152)) * *(float*)(a1 + 2156)));
		v17 = v31;
		v18 = v30;
	}
	v19 = *(_QWORD*)(a1 + 696);
	v30 = _mm_sub_ps(v18, (__m128)xmmword_140B7B5C0);
	v31 = _mm_add_ps(v17, (__m128)xmmword_140B7B5C0);
	v20 = (__m128) * (unsigned int*)(*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(v19 + 96) + 32i64))(*(_QWORD*)(v19 + 96));
	v21 = (int)v20.m128_f32[0];
	if ((int)v20.m128_f32[0] != 0x80000000 && (float)v21 != v20.m128_f32[0])
		v20.m128_f32[0] = (float)(!(_mm_movemask_ps(_mm_unpacklo_ps(v20, v20)) & 1) + v21);
	v22 = *(_DWORD*)(a1 + 2248);
	v30.m128_f32[1] = (float)(v31.m128_f32[1] - v20.m128_f32[0]) - 4.0;
	if (v22)
	{
		sub_14018EFA0(&v29, (__int64)L"(%d)");
		v23 = v29.m128_i64[1];
		(*(void(__fastcall**)(__int64, _QWORD, unsigned __int64, __int64, __m128*, _DWORD, __int128*, int, __int64, __int64, unsigned __int64))(*(_QWORD*)qword_140C65680 + 264i64))(
			qword_140C65680,
			*(_QWORD*)(*(_QWORD*)(a1 + 696) + 96i64),
			v29.m128_u64[1],
			-1i64,
			&v30,
			0,
			&xmmword_140C67350,
			1,
			v27,
			v28,
			v29.m128_u64[0]);
		if (v23)
			sub_14018B900(v23, 0);
	}
	if (*(_DWORD*)(a1 + 2208))
	{
		if (*(_QWORD*)(a1 + 2240) > 1ui64)
		{
			sub_14018EFA0(&v29, (__int64)L"%d");
			v24 = v29.m128_i64[1];
			(*(void(__fastcall**)(__int64, _QWORD, unsigned __int64, __int64, __m128*, int, __int128*, int))(*(_QWORD*)qword_140C65680 + 264i64))(
				qword_140C65680,
				*(_QWORD*)(*(_QWORD*)(a1 + 696) + 96i64),
				v29.m128_u64[1],
				-1i64,
				&v30,
				2,
				&xmmword_140C67350,
				1);
			if (v24)
				sub_14018B900(v24, 0);
		}
	}
	result = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65680 + 144i64))(qword_140C65680, 1i64);
	v26 = *(_QWORD**)(a1 + 8 * v8 + 1856);
	v29 = (__m128)xmmword_140B7B240;
	if (v26)
		return sub_140103CF0(
			v26,
			(unsigned int*)&v27,
			&v29,
			0,
			COERCE_INT((float)(*(float*)&dword_140C63664 - *(float*)(a1 + 8 * v8 + 1864)) * *(float*)(a1 + 8 * v8 + 1868)));
	return result;
}
// 140B38894: using guessed type wchar_t aD_61[3];
// 140B3AC20: using guessed type wchar_t aD_60[5];
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140B7B5C0: using guessed type __int128 xmmword_140B7B5C0;
// 140C63664: using guessed type int dword_140C63664;
// 140C65680: using guessed type __int64 qword_140C65680;
// 140C67350: using guessed type __int128 xmmword_140C67350;
// 1406CE340: using guessed type __m128 var_50;
// 1406CE340: using guessed type __m128 var_20;

