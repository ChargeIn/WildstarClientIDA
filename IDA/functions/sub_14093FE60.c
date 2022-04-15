//----- (000000014093FE60) ----------------------------------------------------
__int64 sub_14093FE60()
{
	int v0; // xmm6_4
	int v1; // xmm7_4
	__m128 v2; // xmm8

	v0 = dword_140C44C60;
	v1 = dword_140C44BD0;
	v2 = _mm_shuffle_ps((__m128)(unsigned int)dword_140C44CF0, (__m128)(unsigned int)dword_140C44CF0, 0);
	*(_QWORD*)sub_14019D520(qword_140C63750 + 8, (__int64*)&off_140C46418) = &off_140C46410;
	dword_140C46444 = v0;
	dword_140C46448 = v1;
	dword_140C4644C = v2.m128_i32[0];
	xmmword_140C46430 = (__int128)v2;
	off_140C46410 = (__int64(__fastcall*)())off_140B55190;
	qword_140C46450 = 0i64;
	dword_140C46440 = v2.m128_i32[0];
	qword_140C46460 = (__int64)sub_14043DDA0;
	dword_140C46458 = 1;
	return sub_1407DD89C(sub_140950D20);
}
// 140B55190: using guessed type __int64 (__fastcall *off_140B55190[35])();
// 140C44BD0: using guessed type int dword_140C44BD0;
// 140C44C60: using guessed type int dword_140C44C60;
// 140C44CF0: using guessed type int dword_140C44CF0;
// 140C46410: using guessed type __int64 (__fastcall *off_140C46410)();
// 140C46418: using guessed type wchar_t *off_140C46418;
// 140C46430: using guessed type __int128 xmmword_140C46430;
// 140C46440: using guessed type int dword_140C46440;
// 140C46444: using guessed type int dword_140C46444;
// 140C46448: using guessed type int dword_140C46448;
// 140C4644C: using guessed type int dword_140C4644C;
// 140C46450: using guessed type __int64 qword_140C46450;
// 140C46458: using guessed type int dword_140C46458;
// 140C46460: using guessed type __int64 qword_140C46460;
// 140C63750: using guessed type __int64 qword_140C63750;

