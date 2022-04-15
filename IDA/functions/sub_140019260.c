#include "../winhttp.h"

//----- (0000000140019260) ----------------------------------------------------
__int64 __fastcall sub_140019260(__int64 a1)
{
	__int64 v1; // r8
	int v2; // eax
	float v3; // xmm0_4
	__int64 result; // rax

	v1 = *(_QWORD*)(a1 + 16);
	v2 = dword_140C3B3F0;
	if (*(_DWORD*)qword_140C63750 < dword_140C3B3F0)
		v2 = *(_DWORD*)qword_140C63750;
	v3 = *((float*)&xmmword_140C3B400 + v2);
	*(_DWORD*)(v1 + 8) = 3;
	result = 1i64;
	*(double*)v1 = v3;
	*(_QWORD*)(a1 + 16) += 16i64;
	return result;
}
// 140C3B3F0: using guessed type int dword_140C3B3F0;
// 140C3B400: using guessed type __int128 xmmword_140C3B400;
// 140C63750: using guessed type __int64 qword_140C63750;

