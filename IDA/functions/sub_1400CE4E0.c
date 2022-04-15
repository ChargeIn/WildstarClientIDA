//----- (00000001400CE4E0) ----------------------------------------------------
void __fastcall sub_1400CE4E0(__int64* a1, double a2)
{
	__int64 v3; // rax
	__m128i v4; // xmm2
	__m128 v5; // xmm8
	__m128 v6; // xmm6
	__m128 v7; // xmm4
	__m128 v8; // xmm8
	__m128 v9; // xmm3
	float v10; // xmm8_4
	__int64 v11; // r8
	__m128 v12; // [rsp+20h] [rbp-88h] BYREF
	__m128 v13[2]; // [rsp+30h] [rbp-78h] BYREF

	if (*(float*)&a2 < 1.0 && *(float*)&a2 > 0.0)
	{
		v3 = *a1;
		if ((*((_BYTE*)a1 + 29) & 4) != 0)
		{
			(*(void (**)(void))(v3 + 256))();
		}
		else
		{
			(*(void (**)(void))(v3 + 248))();
			v4 = _mm_cvtsi32_si128(0);
			v5 = _mm_cvtepi32_ps(
				_mm_unpacklo_epi32(
					_mm_unpacklo_epi32(_mm_cvtsi32_si128(*((_DWORD*)a1 + 181)), v4),
					_mm_unpacklo_epi32(_mm_cvtsi32_si128(*((_DWORD*)a1 + 182)), v4)));
			v6 = _mm_cvtepi32_ps(
				_mm_unpacklo_epi32(
					_mm_unpacklo_epi32(_mm_cvtsi32_si128(*((_DWORD*)a1 + 179)), v4),
					_mm_unpacklo_epi32(_mm_cvtsi32_si128(*((_DWORD*)a1 + 180)), v4)));
			v7 = v5;
			v13[1] = v5;
			v13[0] = v6;
			v7.m128_f32[0] = (float)(v5.m128_f32[0] + v6.m128_f32[0]) * 0.5;
			v8 = _mm_shuffle_ps(v5, v5, 85);
			v6.m128_f32[0] = _mm_shuffle_ps(v6, v6, 85).m128_f32[0];
			v9 = v8;
			v9.m128_f32[0] = (float)(v8.m128_f32[0] + v6.m128_f32[0]) * 0.5;
			v12 = _mm_unpacklo_ps(_mm_unpacklo_ps(v7, (__m128)0i64), _mm_unpacklo_ps(v9, (__m128)0i64));
			sub_1408FDE98(*(float*)&a2, 1.0);
			v10 = (float)(v8.m128_f32[0] - v6.m128_f32[0]) * 2.5;
			if (*(float*)&a2 < 0.25)
			{
				(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65680 + 64i64))(qword_140C65680, 2i64);
				sub_1400CDE90((__int64)&v12, v10, v11, a2);
				(*(void(__fastcall**)(__int64*))(*a1 + 256))(a1);
				(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65680 + 72i64))(qword_140C65680);
			}
			if (*(float*)&a2 < 0.5)
			{
				(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65680 + 64i64))(qword_140C65680, 2i64);
				sub_1400CDFB0((__int64)&v12, v10, v13, a2);
				(*(void(__fastcall**)(__int64*))(*a1 + 256))(a1);
				(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65680 + 72i64))(qword_140C65680);
			}
			if (*(float*)&a2 < 0.75)
			{
				(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65680 + 64i64))(qword_140C65680, 2i64);
				sub_1400CE150((unsigned int*)&v12, v10, (unsigned int*)v13, a2);
				(*(void(__fastcall**)(__int64*))(*a1 + 256))(a1);
				(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65680 + 72i64))(qword_140C65680);
			}
			if (*(float*)&a2 > 0.0)
			{
				(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65680 + 64i64))(qword_140C65680, 2i64);
				sub_1400CE2F0((__int64)&v12, v10, v13, a2);
				(*(void(__fastcall**)(__int64*))(*a1 + 256))(a1);
				(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65680 + 72i64))(qword_140C65680);
			}
			(*(void(__fastcall**)(__int64*))(*a1 + 264))(a1);
		}
	}
}
// 1400CE647: variable 'v11' is possibly undefined
// 140C65680: using guessed type __int64 qword_140C65680;

