#include "../winhttp.h"

//----- (00000001409403D0) ----------------------------------------------------
__int64 sub_1409403D0()
{
	int v0; // xmm6_4
	int v1; // xmm7_4
	__m128 v2; // xmm8

	v0 = dword_140C44E1C;
	v1 = dword_140C44EAC;
	v2 = _mm_shuffle_ps((__m128)(unsigned int)dword_140C44D0C, (__m128)(unsigned int)dword_140C44D0C, 0);
	*(_QWORD*)sub_14019D520(qword_140C63750 + 8, (__int64*)&off_140C46478) = &off_140C46470;
	dword_140C464A4 = v0;
	dword_140C464A8 = v1;
	dword_140C464AC = v2.m128_i32[0];
	xmmword_140C46490 = (__int128)v2;
	off_140C46470 = (__int64(__fastcall*)())off_140B55190;
	qword_140C464B0 = 0i64;
	dword_140C464A0 = v2.m128_i32[0];
	qword_140C464C0 = (__int64)sub_14043DDA0;
	dword_140C464B8 = 1;
	return sub_1407DD89C(sub_140950EE0);
}
// 140B55190: using guessed type __int64 (__fastcall *off_140B55190[35])();
// 140C44D0C: using guessed type int dword_140C44D0C;
// 140C44E1C: using guessed type int dword_140C44E1C;
// 140C44EAC: using guessed type int dword_140C44EAC;
// 140C46470: using guessed type __int64 (__fastcall *off_140C46470)();
// 140C46478: using guessed type wchar_t *off_140C46478;
// 140C46490: using guessed type __int128 xmmword_140C46490;
// 140C464A0: using guessed type int dword_140C464A0;
// 140C464A4: using guessed type int dword_140C464A4;
// 140C464A8: using guessed type int dword_140C464A8;
// 140C464AC: using guessed type int dword_140C464AC;
// 140C464B0: using guessed type __int64 qword_140C464B0;
// 140C464B8: using guessed type int dword_140C464B8;
// 140C464C0: using guessed type __int64 qword_140C464C0;
// 140C63750: using guessed type __int64 qword_140C63750;

