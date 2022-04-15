//----- (0000000140942280) ----------------------------------------------------
__int64 sub_140942280()
{
	int* v0; // rax
	__m128i si128; // xmm0

	v0 = sub_14019D520(qword_140C63750 + 8, (__int64*)&off_140C4A298);
	si128 = _mm_load_si128((const __m128i*) & xmmword_140B7A8F0);
	*(_QWORD*)v0 = &off_140C4A290;
	off_140C4A290 = (__int64(__fastcall*)())off_140B55DD8;
	xmmword_140C4A2B0 = (__int128)si128;
	dword_140C4A2C8 = 5;
	dword_140C4A2CC = 1;
	dword_140C4A2D8 = 1;
	dword_140C4A2C4 = 0;
	qword_140C4A2D0 = 0i64;
	qword_140C4A2E0 = 0i64;
	dword_140C4A2C0 = 1;
	return sub_1407DD89C(sub_1409524B0);
}
// 140B55DD8: using guessed type __int64 (__fastcall *off_140B55DD8[16])();
// 140B7A8F0: using guessed type __int128 xmmword_140B7A8F0;
// 140C4A290: using guessed type __int64 (__fastcall *off_140C4A290)();
// 140C4A298: using guessed type wchar_t *off_140C4A298;
// 140C4A2B0: using guessed type __int128 xmmword_140C4A2B0;
// 140C4A2C0: using guessed type int dword_140C4A2C0;
// 140C4A2C4: using guessed type int dword_140C4A2C4;
// 140C4A2C8: using guessed type int dword_140C4A2C8;
// 140C4A2CC: using guessed type int dword_140C4A2CC;
// 140C4A2D0: using guessed type __int64 qword_140C4A2D0;
// 140C4A2D8: using guessed type int dword_140C4A2D8;
// 140C4A2E0: using guessed type __int64 qword_140C4A2E0;
// 140C63750: using guessed type __int64 qword_140C63750;

