#include "../winhttp.h"

//----- (0000000140116BF0) ----------------------------------------------------
char __fastcall sub_140116BF0(__int64 a1, unsigned int* a2)
{
	unsigned int* v2; // rdi
	__int64 v3; // rbx
	__int64 v4; // rax
	__m128i v5; // xmm2
	unsigned int v6; // eax
	__m128i v7; // xmm0
	__int64 v8; // rax
	int v9; // ecx
	__m128i v10; // xmm3
	__int64 v11; // rax
	__int64 v12; // rax
	__int64(__fastcall * **v13)(_QWORD); // rax
	__m128 v15; // [rsp+20h] [rbp-18h] BYREF

	v2 = a2;
	v3 = a1;
	if (*(char*)(a1 + 28) < 0)
	{
		v4 = *(_QWORD*)(a1 + 472);
		v5 = _mm_cvtsi32_si128(0);
		v15 = _mm_cvtepi32_ps(
			_mm_unpacklo_epi32(
				_mm_unpacklo_epi32(_mm_cvtsi32_si128(*a2), v5),
				_mm_unpacklo_epi32(_mm_cvtsi32_si128(a2[1]), v5)));
		if (v4)
			v6 = *(_DWORD*)(v4 + 1300);
		else
			v6 = 0;
		v7 = _mm_cvtsi32_si128(v6);
		v8 = *(_QWORD*)(a1 + 464);
		v15.m128_f32[1] = v15.m128_f32[1] + _mm_cvtepi32_ps(v7).m128_f32[0];
		if (v8)
			v9 = *(_DWORD*)(v8 + 1300);
		else
			v9 = 0;
		v10 = _mm_cvtsi32_si128(*(_DWORD*)(v3 + 716));
		v15.m128_f32[0] = v15.m128_f32[0] + (float)v9;
		v15 = _mm_sub_ps(
			v15,
			_mm_cvtepi32_ps(
				_mm_unpacklo_epi32(
					_mm_unpacklo_epi32(v10, _mm_cvtsi32_si128(0)),
					_mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD*)(v3 + 720)), _mm_cvtsi32_si128(0)))));
		v11 = sub_140141B00(v3 + 1024, &v15);
		if (v11)
		{
			v12 = sub_1401A6B80(v11, L"BrowserLink");
			if (v12)
			{
				if (sub_1401A4F40(v12 + 32))
				{
					v13 = (__int64(__fastcall***)(_QWORD))sub_1401545C0(
						*(_QWORD*)(*(_QWORD*)(v3 + 32) + 360i64),
						(int*)L"Link");
					sub_1400E6E20(*(_QWORD*)(v3 + 32), v13);
					return 1;
				}
			}
		}
		a2 = v2;
		a1 = v3;
	}
	return sub_1400D1710(a1, (int*)a2);
}
// 140A1CC78: using guessed type wchar_t aBrowserlink[12];
// 140A1CEC0: using guessed type wchar_t aLink[5];
// 140116BF0: using guessed type __m128 var_18;

