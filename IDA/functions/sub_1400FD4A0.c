#include "../winhttp.h"

//----- (00000001400FD4A0) ----------------------------------------------------
__int64 __fastcall sub_1400FD4A0(__int64 a1, unsigned int a2, unsigned int a3, float* a4)
{
	int v5; // r9d
	int v6; // eax
	unsigned int(__fastcall * v7)(_QWORD, _QWORD, __int64*); // rax
	unsigned int v8; // eax
	__m128i v9; // xmm0
	unsigned int v10; // eax
	float v11; // xmm1_4
	__m128i v12; // xmm0
	__int64 result; // rax
	__int64 v14; // [rsp+30h] [rbp+8h] BYREF

	v14 = a1;
	v5 = dword_140C3CB80;
	v6 = dword_140C3CB80;
	if (*(_DWORD*)qword_140C63750 < dword_140C3CB80)
		v6 = *(_DWORD*)qword_140C63750;
	if (!*((_BYTE*)&off_140C3CB70 + v6 + 32) || !*(_QWORD*)(qword_140C63658 + 32) || !*(_DWORD*)(qword_140C63658 + 44))
		return 2147500037i64;
	if (*(_DWORD*)qword_140C63750 < dword_140C3CB80)
		v5 = *(_DWORD*)qword_140C63750;
	if (!*((_BYTE*)&off_140C3CB70 + v5 + 32))
		return 2147500037i64;
	v7 = *(unsigned int(__fastcall**)(_QWORD, _QWORD, __int64*))(qword_140C63658 + 136);
	if (!v7 || v7(a2, a3, &v14))
		return 2147500037i64;
	v8 = BYTE1(v14);
	*a4 = (float)(unsigned __int8)v14 * 0.0039215689;
	v9 = _mm_cvtsi32_si128(v8);
	v10 = BYTE3(v14);
	v11 = (float)BYTE2(v14);
	a4[1] = _mm_cvtepi32_ps(v9).m128_f32[0] * 0.0039215689;
	v12 = _mm_cvtsi32_si128(v10);
	result = 0i64;
	a4[2] = v11 * 0.0039215689;
	a4[3] = _mm_cvtepi32_ps(v12).m128_f32[0] * 0.0039215689;
	return result;
}
// 140C3CB70: using guessed type __int64 (__fastcall *off_140C3CB70)();
// 140C3CB80: using guessed type int dword_140C3CB80;
// 140C63658: using guessed type __int64 qword_140C63658;
// 140C63750: using guessed type __int64 qword_140C63750;

