//----- (00000001400D40E0) ----------------------------------------------------
void __fastcall sub_1400D40E0(__int64 a1)
{
	__int64 v1; // rax
	int v3; // r9d
	unsigned __int64 v4; // rdi
	_DWORD* v5; // rax
	__int64 v6; // rax
	__int64 v7; // r10
	unsigned __int64 v8; // r8
	__m128i v9; // xmm1
	__m128i v10; // xmm3
	__int64 v11; // r10
	__int64 v12; // rdx
	_QWORD* v13; // rcx
	_QWORD* v14; // rax
	int v15; // r9d
	int v16; // r10d
	__m128 v17[2]; // [rsp+20h] [rbp-48h] BYREF
	__m128 v18; // [rsp+40h] [rbp-28h] BYREF
	__m128 v19; // [rsp+50h] [rbp-18h]

	v1 = *(_QWORD*)(a1 + 376);
	if (v1 != qword_140C77760)
	{
		v3 = -*(_DWORD*)(a1 + 380);
		v17[0].m128_i32[2] = qword_140C784C8 - v1;
		v17[0].m128_i32[1] = v3 + HIDWORD(qword_140C784C0);
		v17[0].m128_i32[0] = qword_140C784C0 - v1;
		v17[0].m128_i32[3] = v3 + HIDWORD(qword_140C784C8);
		sub_1400CC5C0(a1, v17);
	}
	v4 = 0i64;
	if (*(char*)(a1 + 29) >= 0)
	{
		v5 = sub_1400CB0E0(a1, v17, a1 + 64);
		*(_DWORD*)(a1 + 396) = *v5;
		*(_DWORD*)(a1 + 400) = v5[1];
		*(_DWORD*)(a1 + 404) = v5[2];
		*(_DWORD*)(a1 + 408) = v5[3];
		*(_BYTE*)(a1 + 29) |= 0x80u;
		v6 = a1;
		do
		{
			if (!*(_DWORD*)(v6 + 392))
				break;
			*(_DWORD*)(v6 + 392) = 0;
			v6 = *(_QWORD*)(v6 + 16);
		} while (v6);
	}
	v7 = *(_QWORD*)(a1 + 32);
	v8 = *(_QWORD*)(v7 + 3208);
	v9 = _mm_cvtsi32_si128(*(_DWORD*)(a1 + 400));
	v10 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD*)(a1 + 396)), _mm_cvtsi32_si128(0));
	v19 = _mm_cvtepi32_ps(
		_mm_unpacklo_epi32(
			_mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD*)(a1 + 404)), _mm_cvtsi32_si128(0)),
			_mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD*)(a1 + 408)), _mm_cvtsi32_si128(0))));
	v17[1] = v19;
	v18 = _mm_cvtepi32_ps(_mm_unpacklo_epi32(v10, _mm_unpacklo_epi32(v9, _mm_cvtsi32_si128(0))));
	v17[0] = v18;
	if (v8)
	{
		v11 = *(_QWORD*)(v7 + 3200);
		v12 = v11;
		while (1)
		{
			v13 = *(_QWORD**)(*(_QWORD*)v12 + 56i64);
			v14 = (_QWORD*)*v13;
			if ((_QWORD*)*v13 != v13)
				break;
		LABEL_12:
			++v4;
			v12 += 8i64;
			if (v4 >= v8)
				goto LABEL_13;
		}
		while (v14[2] != a1)
		{
			v14 = (_QWORD*)*v14;
			if (v14 == v13)
				goto LABEL_12;
		}
		sub_140157910(*(_QWORD*)(v11 + 8 * v4), v17, (__int64)&v18, a1);
	}
	else
	{
	LABEL_13:
		v17[0] = 0i64;
	}
	v15 = (int)v17[0].m128_f32[0];
	v16 = (int)v17[0].m128_f32[1];
	*(_DWORD*)(a1 + 376) = (int)v17[0].m128_f32[0];
	*(_DWORD*)(a1 + 380) = v16;
	v17[0].m128_i32[2] = v15 + qword_140C784C8;
	v17[0].m128_i32[1] = v16 + HIDWORD(qword_140C784C0);
	v17[0].m128_i32[0] = v15 + qword_140C784C0;
	v17[0].m128_i32[3] = v16 + HIDWORD(qword_140C784C8);
	sub_1400CC5C0(a1, v17);
}
// 140C77760: using guessed type __int64 qword_140C77760;
// 140C784C0: using guessed type __int64 qword_140C784C0;
// 140C784C8: using guessed type __int64 qword_140C784C8;

