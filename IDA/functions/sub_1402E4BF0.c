//----- (00000001402E4BF0) ----------------------------------------------------
__int64 __fastcall sub_1402E4BF0(__m128* a1, unsigned __int64 a2, unsigned __int32 a3)
{
	float v6; // xmm4_4
	__m128i v7; // xmm2
	__int64 v8; // rbx
	int CurrentThreadId; // edx
	__int64 v10; // rcx
	__m128** v11; // rcx
	unsigned __int64 v12; // rax
	HANDLE EventW; // rcx
	__m128 v15; // [rsp+A0h] [rbp-88h]
	__m128 v16; // [rsp+F0h] [rbp-38h]

	a1[1].m128_u64[0] = a2;
	(**(void(__fastcall***)(unsigned __int64))a2)(a2);
	v6 = *(float*)&dword_140C41D80;
	a1[2].m128_i32[0] = (a3 & 0xF) + *(_DWORD*)(a2 + 40);
	a1[2].m128_i32[1] = (a3 >> 4) + *(_DWORD*)(a2 + 44);
	a1[2].m128_i32[2] = *(_DWORD*)(a2 + 32);
	a1[2].m128_i32[3] = *(_DWORD*)(a2 + 36);
	a1[3].m128_i32[0] = a3;
	v7 = _mm_cvtsi32_si128(0);
	v16 = _mm_mul_ps(
		_mm_sub_ps(
			_mm_div_ps(
				_mm_cvtepi32_ps(
					_mm_unpacklo_epi32(
						_mm_unpacklo_epi32(_mm_cvtsi32_si128(a1[2].m128_u32[0]), v7),
						_mm_unpacklo_epi32(_mm_cvtsi32_si128(a1[2].m128_u32[1]), v7))),
				(__m128)xmmword_140B7B490),
			(__m128)xmmword_140B7AC50),
		(__m128)xmmword_140B7B4B0);
	a1[4] = _mm_unpacklo_ps(_mm_unpacklo_ps(v16, _mm_shuffle_ps(v16, v16, 85)), (__m128)0i64);
	a1[4].m128_f32[1] = -v6;
	v15 = _mm_mul_ps(
		_mm_sub_ps(
			_mm_div_ps(
				_mm_cvtepi32_ps(
					_mm_unpacklo_epi32(
						_mm_unpacklo_epi32(_mm_cvtsi32_si128(a1[2].m128_i32[0] + (int)qword_140C77768), v7),
						_mm_unpacklo_epi32(_mm_cvtsi32_si128(a1[2].m128_i32[1] + HIDWORD(qword_140C77768)), v7))),
				(__m128)xmmword_140B7B490),
			(__m128)xmmword_140B7AC50),
		(__m128)xmmword_140B7B4B0);
	a1[5] = _mm_unpacklo_ps(_mm_unpacklo_ps(v15, _mm_shuffle_ps(v15, v15, 85)), (__m128)0i64);
	v8 = a1[1].m128_u64[0] + 5312;
	a1[5].m128_f32[1] = v6;
	CurrentThreadId = GetCurrentThreadId();
	if (*(_DWORD*)v8 == CurrentThreadId)
	{
		++* (_QWORD*)(v8 + 8);
	}
	else
	{
		v10 = 0i64;
		while (_InterlockedCompareExchange64((volatile signed __int64*)(v8 + 8), 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v10 >= 0x400)
			{
				sub_14019FB60(v8, CurrentThreadId);
				goto LABEL_8;
			}
		}
		*(_DWORD*)v8 = CurrentThreadId;
	}
LABEL_8:
	*(_QWORD*)(a1[1].m128_u64[0] + 8i64 * a1[3].m128_u32[0] + 1208) = a1;
	v11 = (__m128**)(a1[1].m128_u64[0] + 5304);
	if (!a1[32].m128_u64[0])
	{
		a1[32].m128_u64[0] = (unsigned __int64)v11;
		a1[32].m128_u64[1] = (unsigned __int64)*v11;
		*v11 = a1;
		v12 = a1[32].m128_u64[1];
		if (v12)
			*(_QWORD*)(v12 + 512) = (char*)a1 + 520;
	}
	a1[9].m128_i32[0] = 0;
	if (*(_QWORD*)(v8 + 8) <= 1ui64)
	{
		*(_DWORD*)v8 = 0;
		_InterlockedExchange64((volatile __int64*)(v8 + 8), 0i64);
		if (*(_QWORD*)(v8 + 16))
		{
			if (!*(_QWORD*)(v8 + 24))
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)(v8 + 24), (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			SetEvent(*(HANDLE*)(v8 + 24));
		}
	}
	else
	{
		--* (_QWORD*)(v8 + 8);
	}
	return 0i64;
}
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;
// 140B7B490: using guessed type __int128 xmmword_140B7B490;
// 140B7B4B0: using guessed type __int128 xmmword_140B7B4B0;
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C41D80: using guessed type int dword_140C41D80;
// 140C77768: using guessed type __int64 qword_140C77768;

