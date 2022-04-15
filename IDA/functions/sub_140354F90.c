//----- (0000000140354F90) ----------------------------------------------------
__int64 __fastcall sub_140354F90(__int64 a1)
{
	__m128 v2; // xmm2
	int v3; // edx
	__m128 v4; // xmm1
	int v5; // ecx
	int v6; // r10d
	int v7; // r11d
	int v8; // r9d
	int v9; // edx
	signed int v10; // r9d
	signed int v11; // edx
	__int64 result; // rax
	unsigned __int64 v13; // [rsp+20h] [rbp-18h] BYREF
	__int64 v14; // [rsp+28h] [rbp-10h]
	__int64 v15; // [rsp+40h] [rbp+8h]
	int v16; // [rsp+40h] [rbp+8h]
	int v17; // [rsp+48h] [rbp+10h]

	v2 = _mm_mul_ps(
		_mm_add_ps(
			(__m128)xmmword_140B7AC50,
			_mm_mul_ps(
				_mm_shuffle_ps(*(__m128*)(a1 + 864), *(__m128*)(a1 + 864), 136),
				_mm_shuffle_ps((__m128)(unsigned int)dword_140C43FB8, (__m128)(unsigned int)dword_140C43FB8, 0))),
		(__m128)xmmword_140B7B490);
	v3 = (int)_mm_shuffle_ps(v2, v2, 85).m128_f32[0];
	LODWORD(v15) = (int)v2.m128_f32[0];
	HIDWORD(v15) = v3;
	if (*(_QWORD*)(a1 + 2180) != v15)
	{
		*(_DWORD*)(a1 + 2180) = (int)v2.m128_f32[0];
		*(_DWORD*)(a1 + 2184) = v3;
		*(_DWORD*)(a1 + 2288) = 0;
		*(_DWORD*)(a1 + 2304) = 0;
		*(_DWORD*)(a1 + 2320) = 0;
	}
	v4 = (__m128) * (unsigned int*)(a1 + 136);
	v4.m128_f32[0] = v4.m128_f32[0] / *(float*)&dword_140C44018;
	v5 = (int)v4.m128_f32[0];
	if ((int)v4.m128_f32[0] != 0x80000000 && (float)v5 != v4.m128_f32[0])
		v4.m128_f32[0] = (float)(!(_mm_movemask_ps(_mm_unpacklo_ps(v4, v4)) & 1) + v5);
	v16 = (int)v4.m128_f32[0] + 2;
	v17 = (int)v4.m128_f32[0] + 1;
	v7 = v16 + *(_DWORD*)(a1 + 2184);
	v8 = *(_DWORD*)(a1 + 2180);
	v9 = *(_DWORD*)(a1 + 2184);
	LODWORD(v14) = v16 + v8;
	v6 = v16 + v8;
	v10 = v8 - v17;
	v11 = v9 - v17;
	v13 = __PAIR64__(v11, v10);
	*(_DWORD*)(a1 + 2256) = v10 + qword_140C77768;
	HIDWORD(v14) = v7;
	*(_DWORD*)(a1 + 2260) = v11 + HIDWORD(qword_140C77768);
	*(_DWORD*)(a1 + 2264) = v6 - qword_140C77768;
	*(_DWORD*)(a1 + 2268) = v7 - HIDWORD(qword_140C77768);
	if (*(_DWORD*)(a1 + 2188) >= v10)
		LODWORD(v14) = v6 + 1;
	else
		LODWORD(v13) = v10 - 1;
	if (*(_DWORD*)(a1 + 2192) >= v11)
		HIDWORD(v14) = v7 + 1;
	else
		HIDWORD(v13) = v11 - 1;
	if (v13 == *(_QWORD*)(a1 + 2188) && v14 == *(_QWORD*)(a1 + 2196))
		return 0i64;
	result = sub_140355440(a1, (int*)&v13);
	if ((int)result >= 0)
		return 0i64;
	return result;
}
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;
// 140B7B490: using guessed type __int128 xmmword_140B7B490;
// 140C43FB8: using guessed type int dword_140C43FB8;
// 140C44018: using guessed type int dword_140C44018;
// 140C77768: using guessed type __int64 qword_140C77768;

