#include "../winhttp.h"

//----- (0000000140340640) ----------------------------------------------------
__int64 __fastcall sub_140340640(__int64 a1, __int64 a2, __int64 a3)
{
	__int64 result; // rax

	result = 0i64;
	xmmword_140C7A040 = (__int128)_mm_sub_ps((__m128)0i64, *(__m128*)(a3 + 32));
	xmmword_140C7A030 = *(_OWORD*)(a3 + 16);
	xmmword_140C7A060 = *(_OWORD*)(a2 + 48);
	xmmword_140C7A050 = *(_OWORD*)(a3 + 48);
	return result;
}
// 140C7A030: using guessed type __int128 xmmword_140C7A030;
// 140C7A040: using guessed type __int128 xmmword_140C7A040;
// 140C7A050: using guessed type __int128 xmmword_140C7A050;
// 140C7A060: using guessed type __int128 xmmword_140C7A060;

