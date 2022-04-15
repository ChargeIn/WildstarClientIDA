#include "../winhttp.h"

//----- (000000014010E4A0) ----------------------------------------------------
__int64 __fastcall sub_14010E4A0(__int64 a1, __int64 a2, __int64 a3, _QWORD* a4, _OWORD* a5, __int64 a6, __int64 a7)
{
	__int64 v8; // rcx
	int v9; // eax
	__int64 v10; // rcx
	int v11; // eax
	__int64 v12; // rcx
	int v13; // eax
	__int64 v14; // rcx
	int* v15; // rax
	__int64 v16; // rsi
	void(__fastcall * **v17)(_QWORD); // rsi
	__int64 v18; // r8
	__int64 result; // rax
	__m128 v21; // xmm4
	__int64 v22; // [rsp+70h] [rbp+8h] BYREF

	sub_1400C5920(a1, a2, a3, a4, a5, a6, a7);
	*(_QWORD*)(a1 + 1024) = 0i64;
	*(_QWORD*)(a1 + 1032) = -1i64;
	*(_QWORD*)(a1 + 1040) = 0i64;
	*(_QWORD*)(a1 + 1048) = 0i64;
	*(_QWORD*)(a1 + 1056) = 2048i64;
	*(_BYTE*)(a1 + 1064) = 0;
	*(_QWORD*)(a1 + 1068) = 0i64;
	*(_QWORD*)a1 = off_140B56CA0;
	*(_QWORD*)(a1 + 1080) = 0i64;
	*(_QWORD*)(a1 + 1088) = 0i64;
	sub_1401095E0(a1 + 1096);
	v8 = qword_140C63678;
	*(_QWORD*)(a1 + 1144) = 0i64;
	*(_QWORD*)(a1 + 1152) = 0i64;
	v9 = sub_140142170(v8, L"EditSelection");
	v10 = qword_140C63678;
	*(_DWORD*)(a1 + 1160) = v9;
	v11 = sub_140142170(v10, L"xkcdPeriwinkle");
	v12 = qword_140C63678;
	*(_DWORD*)(a1 + 1164) = v11;
	v13 = sub_140142170(v12, L"EditIMECompositionBG");
	v14 = qword_140C63678;
	*(_DWORD*)(a1 + 1168) = v13;
	*(_DWORD*)(a1 + 1172) = sub_140142170(v14, L"EditIMECandidateSelection");
	v15 = sub_14018B280(24i64, 0);
	*(_QWORD*)(a1 + 1224) = v15;
	*(_QWORD*)v15 = v15;
	*(_QWORD*)(*(_QWORD*)(a1 + 1224) + 8i64) = *(_QWORD*)(a1 + 1224);
	*(_BYTE*)(a1 + 1232) = 0;
	*(_QWORD*)(a1 + 1248) = 0i64;
	*(_QWORD*)(a1 + 1240) = 0i64;
	*(_DWORD*)(a1 + 1260) = 0;
	*(_QWORD*)(a1 + 1264) = 0i64;
	*(_QWORD*)(a1 + 1272) = 0i64;
	*(_QWORD*)(a1 + 1280) = 0i64;
	*(_QWORD*)(a1 + 1296) = 0i64;
	*(_QWORD*)(a1 + 1288) = 0i64;
	v16 = *(_QWORD*)(a1 + 32);
	*(_QWORD*)(a1 + 432) |= 4ui64;
	*(_QWORD*)(a1 + 1304) = 0i64;
	if (v16 && (!*(_QWORD*)(a1 + 1096) || !sub_14002C740(a1 + 1112, L"WhiteFill")))
	{
		v17 = (void(__fastcall***)(_QWORD))sub_140108E80(v16 + 240, (const __m128i*)L"WhiteFill");
		if (v17)
		{
			v18 = 0i64;
			while (aWhitefill_0[++v18] != 0)
				;
			sub_14001C480(a1 + 1112, (int*)L"WhiteFill", (int*)&aWhitefill_0[v18]);
		}
		sub_1401097F0((_QWORD*)(a1 + 1096), v17);
	}
	(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65680 + 48i64))(qword_140C65680, a1 + 1080);
	(*(void(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 1080) + 40i64))(
		*(_QWORD*)(a1 + 1080),
		*(_QWORD*)(*(_QWORD*)(a1 + 696) + 96i64));
	if ((*(_BYTE*)(a1 + 664) & 8) != 0)
		(*(void(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 1080) + 24i64))(*(_QWORD*)(a1 + 1080), 1i64);
	sub_1400DFF50(a1 + 992, &v22, off_140C2C600);
	if (v22 != *(_QWORD*)(a1 + 1000))
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65680 + 48i64))(qword_140C65680, a1 + 1088);
	result = a1;
	v21 = _mm_cvtepi32_ps(
		_mm_unpacklo_epi32(
			_mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD*)(a1 + 724)), _mm_cvtsi32_si128(0)),
			_mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD*)(a1 + 728)), _mm_cvtsi32_si128(0))));
	*(__m128*)(a1 + 1344) = _mm_cvtepi32_ps(
		_mm_unpacklo_epi32(
			_mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD*)(a1 + 716)), _mm_cvtsi32_si128(0)),
			_mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD*)(a1 + 720)), _mm_cvtsi32_si128(0))));
	*(__m128*)(a1 + 1360) = v21;
	return result;
}
// 140A1BEB0: using guessed type wchar_t aEditselection[14];
// 140A1BED0: using guessed type wchar_t aXkcdperiwinkle[15];
// 140A1BEF0: using guessed type wchar_t aEditimecomposi[21];
// 140A1BF20: using guessed type wchar_t aEditimecandida[26];
// 140A1BF58: using guessed type wchar_t aWhitefill_0[10];
// 140B56CA0: using guessed type __int64 (__fastcall *off_140B56CA0[25])();
// 140C2C600: using guessed type char *off_140C2C600[42];
// 140C63678: using guessed type __int64 qword_140C63678;
// 140C65680: using guessed type __int64 qword_140C65680;

