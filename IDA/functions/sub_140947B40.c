#include "../winhttp.h"

//----- (0000000140947B40) ----------------------------------------------------
__int64 sub_140947B40()
{
	int* v0; // rax
	__m128i si128; // xmm0

	v0 = sub_14019D520(qword_140C63750 + 8, (__int64*)&off_140C4D458);
	si128 = _mm_load_si128((const __m128i*) & xmmword_140B7A8F0);
	*(_QWORD*)v0 = &off_140C4D450;
	off_140C4D450 = (__int64(__fastcall*)())off_140B55DD8;
	xmmword_140C4D470 = (__int128)si128;
	dword_140C4D484 = 1;
	dword_140C4D488 = 0x7FFFFFFF;
	dword_140C4D48C = 1;
	qword_140C4D490 = 0i64;
	qword_140C4D4A0 = 0i64;
	dword_140C4D498 = 1;
	dword_140C4D480 = 1;
	return sub_1407DD89C(sub_1409546A0);
}
// 140B55DD8: using guessed type __int64 (__fastcall *off_140B55DD8[16])();
// 140B7A8F0: using guessed type __int128 xmmword_140B7A8F0;
// 140C4D450: using guessed type __int64 (__fastcall *off_140C4D450)();
// 140C4D458: using guessed type wchar_t *off_140C4D458;
// 140C4D470: using guessed type __int128 xmmword_140C4D470;
// 140C4D480: using guessed type int dword_140C4D480;
// 140C4D484: using guessed type int dword_140C4D484;
// 140C4D488: using guessed type int dword_140C4D488;
// 140C4D48C: using guessed type int dword_140C4D48C;
// 140C4D490: using guessed type __int64 qword_140C4D490;
// 140C4D498: using guessed type int dword_140C4D498;
// 140C4D4A0: using guessed type __int64 qword_140C4D4A0;
// 140C63750: using guessed type __int64 qword_140C63750;

