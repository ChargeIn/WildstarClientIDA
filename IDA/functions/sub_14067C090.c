//----- (000000014067C090) ----------------------------------------------------
__int64 __fastcall sub_14067C090(_QWORD* a1)
{
	__int64 v2; // rax
	__int64* v3; // rdi
	float v4; // xmm6_4
	unsigned int v5; // eax
	__int64 v6; // rax
	__m128 v7; // xmm3
	__m128 v8; // xmm6
	__int64 v9; // rax

	v2 = sub_14067B760(a1);
	v3 = (__int64*)v2;
	if (v2 && *(_QWORD*)(qword_140C65898 + 120) && (*(int(__fastcall**)(__int64))(*(_QWORD*)v2 + 208i64))(v2) >= 2)
	{
		v4 = 3.4028235e38;
		v5 = sub_14056C2B0(v3);
		if (v5)
		{
			v6 = sub_14024B980(v5);
			if (v6)
			{
				v7 = _mm_sub_ps(
					_mm_unpacklo_ps(
						_mm_unpacklo_ps((__m128) * (unsigned int*)(v6 + 12), (__m128) * (unsigned int*)(v6 + 20)),
						_mm_unpacklo_ps((__m128) * (unsigned int*)(v6 + 16), (__m128)0i64)),
					*(__m128*)(*(_QWORD*)(qword_140C65898 + 120) + 4576i64));
				v8 = _mm_mul_ps(v7, v7);
				v4 = fsqrt(
					(float)(v8.m128_f32[0] + _mm_shuffle_ps(v8, v8, 85).m128_f32[0])
					+ _mm_shuffle_ps(v8, v8, 170).m128_f32[0])
					- *(float*)(v6 + 4);
			}
		}
		v9 = a1[2];
		*(double*)v9 = v4;
	}
	else
	{
		v9 = a1[2];
		*(_QWORD*)v9 = 0x47EFFFFFE0000000i64;
	}
	*(_DWORD*)(v9 + 8) = 3;
	a1[2] += 16i64;
	return 1i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;

