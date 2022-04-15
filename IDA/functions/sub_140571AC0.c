//----- (0000000140571AC0) ----------------------------------------------------
__int64 __fastcall sub_140571AC0(__int64 a1, __m128* a2, __int64* a3)
{
	__int64 v7; // rax
	__int64 v8; // rsi
	unsigned int* v9; // r9
	unsigned int* v10; // r8
	unsigned int* v11; // rcx
	__int64 v12; // rax
	unsigned int v13; // eax
	__int64 v14; // rax
	__m128 v15; // xmm2
	__m128 v16; // xmm1
	unsigned int* v17; // [rsp+48h] [rbp+20h] BYREF

	if (*(_DWORD*)(qword_140C65970 + 8) != 3 || !a2 || !a2[1].m128_u64[1] || !*(_QWORD*)(a1 + 88))
		return 0i64;
	if ((unsigned int)sub_14077D4E0(a1, (__int64)a2, 1, a3))
		return 1i64;
	if (!*(_QWORD*)(a1 + 88))
		return 0i64;
	v7 = sub_140574380(a1, (__int64)a2, (__int64*)&v17);
	v8 = v7;
	if (!v7)
		return 0i64;
	if ((*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v7 + 56i64))(v7))
		return 0i64;
	v9 = v17;
	if (v17[2])
		return 0i64;
	v10 = *(unsigned int**)(a1 + 168);
	v11 = v10;
	v12 = *((_QWORD*)v10 + 1);
	while (v12)
	{
		if (*(_DWORD*)(v12 + 32) < *v17)
		{
			v12 = *(_QWORD*)(v12 + 24);
		}
		else
		{
			v11 = (unsigned int*)v12;
			v12 = *(_QWORD*)(v12 + 16);
		}
	}
	if (v11 == v10 || (v13 = v11[8], v17 = v11, *v9 < v13))
		v17 = v10;
	if (v17 == v10)
		return 0i64;
	v14 = sub_14024B980(v17[9]);
	if (!v14)
		return 0i64;
	v15 = _mm_sub_ps(
		a2[286],
		_mm_unpacklo_ps(
			_mm_unpacklo_ps((__m128) * (unsigned int*)(v14 + 12), (__m128) * (unsigned int*)(v14 + 20)),
			_mm_unpacklo_ps((__m128) * (unsigned int*)(v14 + 16), (__m128)0i64)));
	v16 = _mm_mul_ps(v15, v15);
	if ((float)((float)(v16.m128_f32[0] + _mm_shuffle_ps(v16, v16, 85).m128_f32[0])
		+ _mm_shuffle_ps(v16, v16, 170).m128_f32[0]) >= (float)(*(float*)(v14 + 4) * *(float*)(v14 + 4)))
		return 0i64;
	if (a3)
		*a3 = v8;
	return 1i64;
}
// 140C65970: using guessed type __int64 qword_140C65970;

