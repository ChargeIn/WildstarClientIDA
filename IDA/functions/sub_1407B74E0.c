#include "../winhttp.h"

//----- (00000001407B74E0) ----------------------------------------------------
int* __fastcall sub_1407B74E0(__int64 a1)
{
	__m128 v2; // xmm1
	__m128 v3; // xmm1
	__m128 v4; // xmm1
	__int64 v5; // rcx
	unsigned __int64 v6; // rax
	__int64 v7; // rbx
	unsigned __int64 v8; // rbx
	unsigned __int64 v9; // r14
	int* v10; // rax
	__int64 v11; // rbx
	unsigned __int64 v12; // rcx
	__m128i si128; // xmm1
	__m128i v14; // xmm0
	int* result; // rax
	unsigned __int64 v16; // r13
	__m128* v17; // rcx
	unsigned __int64 v18; // r15
	__int64 v19; // r9
	__m128* v20; // rsi
	__m128 v21; // xmm2
	__m128 v22; // xmm1
	__m128 v23; // xmm6
	unsigned __int64 v24; // rbx
	__m128 v25; // xmm4
	__m128 v26; // xmm3
	float v27; // xmm1_4
	__m128 v28; // xmm6
	int* v29; // rbp
	unsigned __int64 v30; // rdx
	int* v31; // rcx
	__int128 v32; // [rsp+20h] [rbp-68h] BYREF
	__int64 v33; // [rsp+30h] [rbp-58h]

	v2 = _mm_mul_ps(*(__m128*)(a1 + 368), (__m128)xmmword_140B7A320);
	v2.m128_f32[0] = (float)(v2.m128_f32[0] + _mm_shuffle_ps(v2, v2, 85).m128_f32[0])
		+ _mm_shuffle_ps(v2, v2, 170).m128_f32[0];
	*(__m128*)(a1 + 928) = _mm_unpacklo_ps(
		_mm_unpacklo_ps(
			(__m128)xmmword_140B7A320,
			_mm_shuffle_ps((__m128)xmmword_140B7A320, (__m128)xmmword_140B7A320, 170)),
		_mm_unpacklo_ps(
			_mm_shuffle_ps((__m128)xmmword_140B7A320, (__m128)xmmword_140B7A320, 85),
			_mm_xor_ps(v2, (__m128)0x80000000)));
	v3 = _mm_mul_ps(*(__m128*)(a1 + 368), (__m128)xmmword_140B7A4A0);
	v3.m128_f32[0] = (float)(v3.m128_f32[0] + _mm_shuffle_ps(v3, v3, 85).m128_f32[0])
		+ _mm_shuffle_ps(v3, v3, 170).m128_f32[0];
	*(__m128*)(a1 + 944) = _mm_unpacklo_ps(
		_mm_unpacklo_ps(
			(__m128)xmmword_140B7A4A0,
			_mm_shuffle_ps((__m128)xmmword_140B7A4A0, (__m128)xmmword_140B7A4A0, 170)),
		_mm_unpacklo_ps(
			_mm_shuffle_ps((__m128)xmmword_140B7A4A0, (__m128)xmmword_140B7A4A0, 85),
			_mm_xor_ps(v3, (__m128)0x80000000)));
	v4 = _mm_mul_ps(*(__m128*)(a1 + 368), (__m128)xmmword_140B7A6F0);
	v4.m128_f32[0] = (float)(v4.m128_f32[0] + _mm_shuffle_ps(v4, v4, 85).m128_f32[0])
		+ _mm_shuffle_ps(v4, v4, 170).m128_f32[0];
	*(__m128*)(a1 + 960) = _mm_unpacklo_ps(
		_mm_unpacklo_ps(
			(__m128)xmmword_140B7A6F0,
			_mm_shuffle_ps((__m128)xmmword_140B7A6F0, (__m128)xmmword_140B7A6F0, 170)),
		_mm_unpacklo_ps(
			_mm_shuffle_ps((__m128)xmmword_140B7A6F0, (__m128)xmmword_140B7A6F0, 85),
			_mm_xor_ps(v4, (__m128)0x80000000)));
	sub_1407BC9B0();
	v6 = *(_QWORD*)(a1 + 904);
	v7 = *(_QWORD*)(a1 + 912);
	*(_QWORD*)(a1 + 976) = v6;
	v8 = v6 + 16 * v7;
	if (v6 < v8)
	{
		do
		{
			if ((unsigned int)sub_1407B6F20(a1))
				sub_1407B7C60((__m128*)a1);
			*(_QWORD*)(a1 + 976) += 48i64;
		} while (*(_QWORD*)(a1 + 976) < v8);
	}
	if (*(_DWORD*)(a1 + 308))
	{
		v32 = *(_OWORD*)(a1 + 1200);
		v33 = a1 + 1184;
		sub_1407BCA70(v5, (__int64)&v32);
	}
	v9 = qword_140C7F868;
	if (qword_140C7F888 <= (unsigned __int64)qword_140C7F868)
	{
		v10 = sub_14018DB00(qword_140C7F880, qword_140C7F868, 8i64);
		v11 = (__int64)v10;
		if ((int*)qword_140C7F880 != v10)
		{
			sub_1407DB590(v10, (int*)qword_140C7F880, 8 * qword_140C7F888);
			if (qword_140C7F880)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(qword_140C7F880 - 16) + 8i64))(qword_140C7F880 - 16);
			qword_140C7F880 = v11;
		}
	}
	v12 = 0i64;
	qword_140C7F888 = v9;
	if (v9)
	{
		if (v9 >= 2)
		{
			si128 = _mm_load_si128((const __m128i*) & xmmword_140B7A630);
			do
			{
				v14 = (__m128i)v12;
				v12 += 2i64;
				*(__m128i*)(qword_140C7F880 + 8 * v12 - 16) = _mm_add_epi64(_mm_unpacklo_epi64(v14, v14), si128);
			} while (v12 < v9 - (v9 & 1));
		}
		for (; v12 < v9; ++v12)
			*(_QWORD*)(qword_140C7F880 + 8 * v12) = v12;
	}
	result = (int*)sub_14001FEC0(
		(__int64(__fastcall*)(unsigned __int64, __int64, __int64))sub_1407B6210,
		(__int64*)qword_140C7F880,
		v9,
		qword_140C7F860);
	v16 = 0i64;
	v17 = 0i64;
	v18 = 0i64;
	qword_140C7F878 = 0i64;
	if (v9)
	{
		v19 = qword_140C7F870;
		do
		{
			result = (int*)qword_140C7F880;
			v20 = (__m128*)(qword_140C7F860 + 32i64 * *(_QWORD*)(qword_140C7F880 + 8 * v18));
			if (!v17
				|| (v21 = _mm_sub_ps(*v20, *v17),
					v22 = _mm_mul_ps(v21, v21),
					(float)((float)(v22.m128_f32[0] + _mm_shuffle_ps(v22, v22, 85).m128_f32[0])
						+ _mm_shuffle_ps(v22, v22, 170).m128_f32[0]) >= *(float*)&dword_140C3C7A8))
			{
				v23 = 0i64;
				v24 = v16++;
				v25 = _mm_mul_ps(*(__m128*)(a1 + 448), *v20);
				v26 = _mm_mul_ps(v25, v25);
				v26.m128_f32[0] = (float)(v26.m128_f32[0] + _mm_shuffle_ps(v26, v26, 85).m128_f32[0])
					+ _mm_shuffle_ps(v26, v26, 170).m128_f32[0];
				v27 = 1.0 / fsqrt(v26.m128_f32[0]);
				v23.m128_f32[0] = fmaxf((float)((float)(3.0 - (float)((float)(v26.m128_f32[0] * v27) * v27)) * 0.5) * v27, 0.0);
				v28 = _mm_mul_ps(_mm_shuffle_ps(v23, v23, 0), v25);
				v29 = sub_14018DB00(v19, v16, 16i64);
				result = &v29[4 * v24];
				if (result)
					*(__m128*)result = v28;
				v19 = qword_140C7F870;
				if ((int*)qword_140C7F870 != v29)
				{
					result = (int*)qword_140C7F878;
					v30 = 0i64;
					if (qword_140C7F878)
					{
						v31 = v29;
						do
						{
							if (v31)
							{
								*(_OWORD*)v31 = *(_OWORD*)((char*)v31 - (char*)v29 + v19);
								result = (int*)qword_140C7F878;
								v19 = qword_140C7F870;
							}
							++v30;
							v31 += 4;
						} while (v30 < (unsigned __int64)result);
					}
					if (v19)
						result = (int*)(*(__int64(__fastcall**)(__int64, unsigned __int64))(*(_QWORD*)(v19 - 16) + 8i64))(
							v19 - 16,
							v30);
					v19 = (__int64)v29;
					qword_140C7F870 = (__int64)v29;
				}
				qword_140C7F878 = v16;
				v17 = v20;
			}
			++v18;
		} while (v18 < v9);
	}
	*(_DWORD*)(a1 + 352) = 1;
	return result;
}
// 1407B765B: variable 'v5' is possibly undefined
// 140B7A320: using guessed type __int128 xmmword_140B7A320;
// 140B7A4A0: using guessed type __int128 xmmword_140B7A4A0;
// 140B7A630: using guessed type __int128 xmmword_140B7A630;
// 140B7A6F0: using guessed type __int128 xmmword_140B7A6F0;
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C3C7A8: using guessed type int dword_140C3C7A8;
// 140C7F860: using guessed type __int64 qword_140C7F860;
// 140C7F868: using guessed type __int64 qword_140C7F868;
// 140C7F870: using guessed type __int64 qword_140C7F870;
// 140C7F878: using guessed type __int64 qword_140C7F878;
// 140C7F880: using guessed type __int64 qword_140C7F880;
// 140C7F888: using guessed type __int64 qword_140C7F888;

