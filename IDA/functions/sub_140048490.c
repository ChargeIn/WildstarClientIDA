#include "../winhttp.h"

//----- (0000000140048490) ----------------------------------------------------
__int64 __fastcall sub_140048490(__int64 a1, __int64 a2)
{
	int* v4; // rax

	v4 = sub_14018B280(24i64, 0);
	if (v4)
	{
		*(_QWORD*)v4 = off_140B55048;
		v4[2] = 1;
		*((_QWORD*)v4 + 2) = a1;
		*(_QWORD*)v4 = off_140B55048;
	}
	else
	{
		v4 = 0i64;
	}
	*(_QWORD*)a1 = v4;
	*(_QWORD*)(a1 + 8) = 0i64;
	*(_QWORD*)(a1 + 16) = 0i64;
	*(_QWORD*)(a1 + 24) = 0i64;
	sub_14002E3F0(a1 + 32);
	*(_QWORD*)(a1 + 4912) = 0i64;
	*(_QWORD*)(a1 + 4920) = 0i64;
	*(_QWORD*)(a1 + 4928) = 0i64;
	*(_OWORD*)(a1 + 4944) = xmmword_140C78410;
	*(_OWORD*)(a1 + 4960) = xmmword_140C78420;
	*(_OWORD*)(a1 + 4976) = xmmword_140C78430;
	*(__m128*)(a1 + 4992) = _mm_unpacklo_ps(
		_mm_unpacklo_ps((__m128)0i64, _mm_shuffle_ps((__m128)0i64, (__m128)0i64, 170)),
		_mm_unpacklo_ps(_mm_shuffle_ps((__m128)0i64, (__m128)0i64, 85), (__m128)0x3F800000u));
	*(_OWORD*)(a1 + 5008) = xmmword_140C783D0;
	*(_DWORD*)(a1 + 5024) = dword_140C783E0;
	*(_QWORD*)(a1 + 5040) = 0i64;
	*(_QWORD*)(a1 + 5048) = 0i64;
	*(_QWORD*)(a1 + 5056) = 0i64;
	*(_QWORD*)(a1 + 5064) = 0i64;
	*(_QWORD*)(a1 + 5072) = 0i64;
	*(_QWORD*)(a1 + 5080) = 0i64;
	*(_QWORD*)(a1 + 5088) = a2;
	*(_QWORD*)(a1 + 5096) = 150i64;
	sub_1407E4830((int*)(a1 + 5104), 0i64, 0x60ui64);
	return a1;
}
// 140B55048: using guessed type __int64 (__fastcall *off_140B55048[5])();
// 140C783D0: using guessed type __int128 xmmword_140C783D0;
// 140C783E0: using guessed type int dword_140C783E0;
// 140C78410: using guessed type __int128 xmmword_140C78410;
// 140C78420: using guessed type __int128 xmmword_140C78420;
// 140C78430: using guessed type __int128 xmmword_140C78430;

