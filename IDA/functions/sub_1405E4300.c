#include "../winhttp.h"

//----- (00000001405E4300) ----------------------------------------------------
__int64* __fastcall sub_1405E4300(__int64 a1, __int64 a2)
{
	__int64 v2; // rcx
	int v3; // eax

	qword_140C7E170 = (__int64)&off_140B5E6E8;
	v2 = *(_QWORD*)a2;
	dword_140C7E180 = 2;
	qword_140C7E178 = v2;
	v3 = *(_DWORD*)(a2 + 8);
	dword_140C7E188 = 0;
	dword_140C7E184 = v3;
	if (v2)
		*(_QWORD*)sub_14019D520(qword_140C63750 + 8, &qword_140C7E178) = &qword_140C7E170;
	qword_140C7E1B0 = 0i64;
	dword_140C7E1B8 = 0;
	qword_140C7E1C0 = 0i64;
	xmmword_140C7E190 = (__int128)_mm_load_si128((const __m128i*) & xmmword_140B7A9F0);
	qword_140C7E170 = (__int64)off_140B55DD8;
	dword_140C7E1AC = 300;
	dword_140C7E1A0 = 300;
	return &qword_140C7E170;
}
// 140B55DD8: using guessed type __int64 (__fastcall *off_140B55DD8[16])();
// 140B5E6E8: using guessed type __int64 (__fastcall *off_140B5E6E8)();
// 140B7A9F0: using guessed type __int128 xmmword_140B7A9F0;
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C7E170: using guessed type __int64 qword_140C7E170;
// 140C7E178: using guessed type __int64 qword_140C7E178;
// 140C7E180: using guessed type int dword_140C7E180;
// 140C7E184: using guessed type int dword_140C7E184;
// 140C7E188: using guessed type int dword_140C7E188;
// 140C7E190: using guessed type __int128 xmmword_140C7E190;
// 140C7E1A0: using guessed type int dword_140C7E1A0;
// 140C7E1AC: using guessed type int dword_140C7E1AC;
// 140C7E1B0: using guessed type __int64 qword_140C7E1B0;
// 140C7E1B8: using guessed type int dword_140C7E1B8;
// 140C7E1C0: using guessed type __int64 qword_140C7E1C0;

