#include "../winhttp.h"

//----- (00000001408F3500) ----------------------------------------------------
__int64 __fastcall sub_1408F3500(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
	__int128 v4; // xmm0
	__int128 v5; // xmm1
	__int64 result; // rax
	__int128 v7; // xmm1
	__int128 v8; // xmm1

	*(_QWORD*)(a1 + 216) = a2;
	if (a4)
		return (*(__int64(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)a1 + 40i64))(a1, a3, a4);
	v4 = xmmword_140C1A960;
	v5 = xmmword_140C1A970;
	*(_DWORD*)(a1 + 232) = 63;
	result = 1i64;
	*(_OWORD*)(a1 + 120) = v4;
	*(_OWORD*)(a1 + 136) = v5;
	v7 = xmmword_140C1A990;
	*(_OWORD*)(a1 + 152) = xmmword_140C1A980;
	*(_OWORD*)(a1 + 168) = v7;
	v8 = xmmword_140C1A9B0;
	*(_OWORD*)(a1 + 184) = xmmword_140C1A9A0;
	*(_OWORD*)(a1 + 200) = v8;
	return result;
}
// 140C1A960: using guessed type __int128 xmmword_140C1A960;
// 140C1A970: using guessed type __int128 xmmword_140C1A970;
// 140C1A980: using guessed type __int128 xmmword_140C1A980;
// 140C1A990: using guessed type __int128 xmmword_140C1A990;
// 140C1A9A0: using guessed type __int128 xmmword_140C1A9A0;
// 140C1A9B0: using guessed type __int128 xmmword_140C1A9B0;

