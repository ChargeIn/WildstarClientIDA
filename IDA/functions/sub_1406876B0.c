//----- (00000001406876B0) ----------------------------------------------------
__int64 __fastcall sub_1406876B0(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rax
	unsigned int* v4; // rcx
	unsigned int v5; // edx
	__m128 v6; // xmm6
	unsigned int v7; // edi
	unsigned int* v8; // rsi
	__int64 v9; // rcx
	__m128 v10; // xmm3
	__m128 v11; // xmm2
	__m128 v12; // xmm6
	__m128 v13; // xmm1
	__int64 v15; // rax
	__int64 v16; // rax

	if (*(_QWORD*)(qword_140C65898 + 120)
		&& (v2 = sub_140056AB0(a1, 1u)) != 0
		&& (v3 = *(_QWORD*)(v2 + 8)) != 0
		&& (v4 = *(unsigned int**)(v3 + 8)) != 0i64
		&& (unsigned int)sub_14048D5A0((__int64)v4, *v4))
	{
		v6 = *(__m128*)(*(_QWORD*)(qword_140C65898 + 120) + 4576i64);
		v7 = sub_14048D940(qword_140C65948, v5);
		v8 = (unsigned int*)sub_14024B980(v7);
		if (v8 && sub_1403F8270(qword_140C65898, v7, 0))
		{
			v9 = a1[2];
			v10 = _mm_unpacklo_ps((__m128)v8[3], (__m128)v8[5]);
			v11 = _mm_unpacklo_ps((__m128)v8[4], (__m128)0i64);
			*(_DWORD*)(v9 + 8) = 3;
			v12 = _mm_sub_ps(v6, _mm_unpacklo_ps(v10, v11));
			v13 = _mm_mul_ps(v12, v12);
			*(double*)v9 = fsqrt(
				(float)(v13.m128_f32[0] + _mm_shuffle_ps(v13, v13, 85).m128_f32[0])
				+ _mm_shuffle_ps(v13, v13, 170).m128_f32[0]);
		}
		else
		{
			v15 = a1[2];
			*(_QWORD*)v15 = 0x47EFFFFFE0000000i64;
			*(_DWORD*)(v15 + 8) = 3;
		}
		a1[2] += 16i64;
		return 1i64;
	}
	else
	{
		v16 = a1[2];
		*(_QWORD*)v16 = 0x47EFFFFFE0000000i64;
		*(_DWORD*)(v16 + 8) = 3;
		a1[2] += 16i64;
		return 1i64;
	}
}
// 140687736: variable 'v5' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65948: using guessed type __int64 qword_140C65948;

