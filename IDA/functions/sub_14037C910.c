//----- (000000014037C910) ----------------------------------------------------
__int64 __fastcall sub_14037C910(__m128* a1, __int32* a2)
{
	__int64 result; // rax
	int v5; // eax
	__m128** v6; // rcx
	unsigned __int64 v7; // rax
	__m128** v8; // rcx
	unsigned __int64 v9; // rax
	__m128** v10; // rcx
	unsigned __int64 v11; // rax
	__int64 v12; // rax
	__m128 v13; // xmm3
	__m128 v14; // xmm2
	__m128 v15; // xmm1

	a1->m128_i32[2] = *a2;
	a1->m128_i32[3] = a2[1];
	result = (*(__int64(__fastcall**)(_QWORD, __int32*, __m128*))(**(_QWORD**)(a1->m128_u64[0] + 24) + 144i64))(
		*(_QWORD*)(a1->m128_u64[0] + 24),
		a2,
		a1 + 1);
	if ((int)result >= 0)
	{
		if (*a2 < (int)qword_140C44530)
			return 2147942487i64;
		if (*a2 >= dword_140C44538)
			return 2147942487i64;
		v5 = a2[1];
		if (v5 < SHIDWORD(qword_140C44530) || v5 >= dword_140C4453C)
		{
			return 2147942487i64;
		}
		else
		{
			result = sub_14035BEC0(a1->m128_u64[0], a2, &a1[1].m128_i64[1]);
			if ((int)result >= 0)
			{
				sub_14038F890(a1[1].m128_i64[1], (__int64)a1);
				v6 = (__m128**)(a1->m128_u64[0] + 2280);
				a1[2].m128_u64[0] = 0i64;
				a1[2].m128_u64[1] = 0i64;
				a1[49].m128_i32[0] = 0;
				if (!a1[90].m128_u64[1])
				{
					a1[90].m128_u64[1] = (unsigned __int64)v6;
					a1[91].m128_u64[0] = (unsigned __int64)*v6;
					*v6 = a1;
					v7 = a1[91].m128_u64[0];
					if (v7)
						*(_QWORD*)(v7 + 1448) = a1 + 91;
				}
				*(_DWORD*)(a1->m128_u64[0] + 2288) = 0;
				++* (_DWORD*)(a1->m128_u64[0] + 2164);
				v8 = (__m128**)(a1->m128_u64[0] + 2296);
				if (!a1[91].m128_u64[1])
				{
					a1[91].m128_u64[1] = (unsigned __int64)v8;
					a1[92].m128_u64[0] = (unsigned __int64)*v8;
					*v8 = a1;
					v9 = a1[92].m128_u64[0];
					if (v9)
						*(_QWORD*)(v9 + 1464) = a1 + 92;
				}
				*(_DWORD*)(a1->m128_u64[0] + 2304) = 0;
				++* (_DWORD*)(a1->m128_u64[0] + 2168);
				v10 = (__m128**)(a1->m128_u64[0] + 2312);
				if (!a1[92].m128_u64[1])
				{
					a1[92].m128_u64[1] = (unsigned __int64)v10;
					a1[93].m128_u64[0] = (unsigned __int64)*v10;
					*v10 = a1;
					v11 = a1[93].m128_u64[0];
					if (v11)
						*(_QWORD*)(v11 + 1480) = a1 + 93;
				}
				*(_DWORD*)(a1->m128_u64[0] + 2320) = 0;
				++* (_DWORD*)(a1->m128_u64[0] + 2172);
				v12 = (*(__int64(__fastcall**)(unsigned __int64))(*(_QWORD*)a1[1].m128_u64[0] + 40i64))(a1[1].m128_u64[0]);
				a1[74] = *(__m128*)(v12 + 32);
				a1[75] = *(__m128*)(v12 + 48);
				a1[74].m128_i32[1] = -998637568;
				a1[75].m128_i32[1] = -998637568;
				v13 = a1[74];
				v14 = _mm_sub_ps(a1[75], v13);
				v15 = _mm_mul_ps(v14, v14);
				a1[76] = _mm_mul_ps(_mm_add_ps(v13, a1[75]), (__m128)xmmword_140B7AC50);
				a1[77].m128_f32[0] = fsqrt(
					(float)(v15.m128_f32[0] + _mm_shuffle_ps(v15, v15, 85).m128_f32[0])
					+ _mm_shuffle_ps(v15, v15, 170).m128_f32[0])
					* 0.5;
				a1[26].m128_u64[1] = 0x3F8000003F800000i64;
				a1[27].m128_i32[0] = 1065353216;
				return 0i64;
			}
		}
	}
	return result;
}
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;
// 140C44530: using guessed type __int64 qword_140C44530;
// 140C44538: using guessed type int dword_140C44538;
// 140C4453C: using guessed type int dword_140C4453C;

