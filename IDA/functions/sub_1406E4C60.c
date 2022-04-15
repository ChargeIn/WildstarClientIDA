//----- (00000001406E4C60) ----------------------------------------------------
__int64 __fastcall sub_1406E4C60(__m128* a1, unsigned int* a2)
{
	unsigned __int64 v2; // rbx
	__m128i v5; // xmm2
	__m128 v7; // xmm0
	float v8; // xmm2_4
	__int32* v9; // rax
	unsigned __int64 v10; // r15
	int v11; // ecx
	int v12; // ebp
	int v13; // esi
	unsigned __int64 v14; // rax
	__m128 v15; // [rsp+20h] [rbp-28h] BYREF
	int v16; // [rsp+50h] [rbp+8h] BYREF
	int v17; // [rsp+54h] [rbp+Ch]

	v2 = 0i64;
	v5 = _mm_cvtsi32_si128(0);
	if (a1[70].m128_i32[0])
	{
		v15 = _mm_sub_ps(
			a1[69],
			_mm_cvtepi32_ps(
				_mm_unpacklo_epi32(
					_mm_unpacklo_epi32(_mm_cvtsi32_si128(a1[70].m128_i32[2] - *a2), v5),
					_mm_unpacklo_epi32(_mm_cvtsi32_si128(a1[70].m128_i32[3] - a2[1]), v5))));
		sub_1406E4880(a1, v15.m128_f32);
		a1[70].m128_i32[2] = *a2;
		a1[70].m128_i32[3] = a2[1];
		return 0i64;
	}
	else
	{
		v7 = _mm_sub_ps(
			a1[69],
			_mm_cvtepi32_ps(
				_mm_unpacklo_epi32(
					_mm_unpacklo_epi32(_mm_cvtsi32_si128(*a2), v5),
					_mm_unpacklo_epi32(_mm_cvtsi32_si128(a2[1]), v5))));
		v8 = a1[71].m128_f32[0];
		v15 = v7;
		v9 = sub_1406DF8A0(&v16, v15.m128_f32, v8);
		a1[161].m128_i32[2] = *v9;
		a1[161].m128_i32[3] = v9[1];
		v10 = a1[154].m128_u64[0];
		v11 = (int)a1[69].m128_f32[1];
		v16 = (int)a1[69].m128_f32[0];
		v17 = v11;
		v15 = _mm_div_ps(
			_mm_cvtepi32_ps(
				_mm_unpacklo_epi32(
					_mm_unpacklo_epi32(_mm_cvtsi32_si128(*a2 - v16), _mm_cvtsi32_si128(0)),
					_mm_unpacklo_epi32(_mm_cvtsi32_si128(a2[1] - v11), _mm_cvtsi32_si128(0)))),
			_mm_shuffle_ps((__m128)a1[71].m128_u32[0], (__m128)a1[71].m128_u32[0], 0));
		if (v10)
		{
			v12 = (int)v15.m128_f32[1];
			v13 = (int)v15.m128_f32[0];
			do
			{
				v14 = a1[153].m128_u64[1];
				v16 = v13;
				v17 = v12;
				sub_1400C3F20(*(_QWORD*)(v14 + 8 * v2++) + 72i64, &v16);
			} while (v2 < v10);
		}
		return sub_1400D23B0((__int64)a1, (int*)a2);
	}
}
// 1406E4C60: using guessed type __m128 var_28;

