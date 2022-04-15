//----- (00000001402644A0) ----------------------------------------------------
void __fastcall sub_1402644A0(unsigned __int64 a1, const __m128i* a2, unsigned int a3)
{
	unsigned __int64 v4; // rcx
	unsigned __int64 v5; // r9
	unsigned __int64 v6; // rax
	unsigned __int64 v7; // r8
	__m128i si128; // xmm4
	__m128i v9; // xmm5
	__m128i v10; // xmm6
	__m128i v11; // xmm7
	__m128i v12; // xmm3
	const __m128i* v13; // rax
	__m128i v14; // xmm2
	unsigned __int64 v15; // r10
	const __m128i* v16; // rax
	unsigned __int64 v17; // r9
	__int32 v18; // edx
	int v19; // ecx

	v4 = 0i64;
	v5 = a3;
	if (a3)
	{
		if (a3 >= 4ui64)
		{
			v6 = (unsigned __int64)&a2[-1].m128i_u64[1] + 4 * a3 + 4;
			v7 = a1 + 4 * (a3 - 1i64);
			if (a1 > v6 || v7 < (unsigned __int64)a2)
			{
				si128 = _mm_load_si128((const __m128i*) & xmmword_140B7A9E0);
				v9 = _mm_load_si128((const __m128i*) & xmmword_140B7B610);
				v10 = _mm_load_si128((const __m128i*) & xmmword_140B7AA40);
				v11 = _mm_load_si128((const __m128i*) & xmmword_140B7AAB0);
				v12 = _mm_cvtsi32_si128(0x10u);
				v13 = a2;
				do
				{
					v14 = _mm_loadu_si128(v13);
					v4 += 4i64;
					++v13;
					*(const __m128i*)((char*)&v13[-1] + a1 - (_QWORD)a2) = _mm_or_si128(
						_mm_or_si128(
							_mm_or_si128(
								_mm_sll_epi32(_mm_and_si128(v14, si128), v12),
								v9),
							_mm_and_si128(v14, v10)),
						_mm_srl_epi32(_mm_and_si128(v14, v11), v12));
				} while (v4 < v5 - (v5 & 3));
			}
		}
		if (v4 < v5)
		{
			v15 = a1 - (_QWORD)a2;
			v16 = &a2[v4 / 4];
			v17 = v5 - v4;
			do
			{
				v18 = v16->m128i_i32[0];
				v19 = v16->m128i_u8[2];
				v16 = (const __m128i*)((char*)v16 + 4);
				*(__int32*)((char*)&v16->m128i_i32[-1] + v15) = v18 & 0xFF00 | v19 | ((v18 | 0xFFFFFF00) << 16);
				--v17;
			} while (v17);
		}
	}
}
// 140B7A9E0: using guessed type __int128 xmmword_140B7A9E0;
// 140B7AA40: using guessed type __int128 xmmword_140B7AA40;
// 140B7AAB0: using guessed type __int128 xmmword_140B7AAB0;
// 140B7B610: using guessed type __int128 xmmword_140B7B610;

