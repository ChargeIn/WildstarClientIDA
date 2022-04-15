#include "../winhttp.h"

//----- (0000000140831300) ----------------------------------------------------
__int64 __fastcall sub_140831300(__int128* a1)
{
	__int64 result; // rax
	__int128 v2; // xmm3

	if (!a1)
		return sub_140833E90((__int64)&hWnd);
	v2 = *a1;
	*(_OWORD*)&hWnd = *a1;
	*(_OWORD*)&dwStackSize = a1[1];
	xmmword_140C61C90 = a1[2];
	result = (unsigned int)_mm_extract_epi16((__m128i)xmmword_140C61C90, 4);
	xmmword_140C61CA0 = a1[3];
	qword_140C61CB0 = *((_QWORD*)a1 + 8);
	if ((unsigned __int16)result < 2u)
	{
		result = 4i64;
		WORD4(xmmword_140C61C90) = 4;
	}
	*a1 = v2;
	a1[1] = *(_OWORD*)&dwStackSize;
	a1[2] = xmmword_140C61C90;
	a1[3] = xmmword_140C61CA0;
	*((_QWORD*)a1 + 8) = qword_140C61CB0;
	return result;
}
// 140C61C90: using guessed type __int128 xmmword_140C61C90;
// 140C61CA0: using guessed type __int128 xmmword_140C61CA0;
// 140C61CB0: using guessed type __int64 qword_140C61CB0;

