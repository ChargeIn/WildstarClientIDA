//----- (000000014093FF30) ----------------------------------------------------
__int64 sub_14093FF30()
{
	int v0; // xmm6_4
	int v1; // xmm7_4
	__m128 v2; // xmm8

	v0 = dword_140C44C64;
	v1 = dword_140C44BD4;
	v2 = _mm_shuffle_ps((__m128)(unsigned int)dword_140C44CF4, (__m128)(unsigned int)dword_140C44CF4, 0);
	*(_QWORD*)sub_14019D520(qword_140C63750 + 8, (__int64*)&off_140C46748) = &off_140C46740;
	dword_140C46774 = v0;
	dword_140C46778 = v1;
	dword_140C4677C = v2.m128_i32[0];
	xmmword_140C46760 = (__int128)v2;
	off_140C46740 = (__int64(__fastcall*)())off_140B55190;
	qword_140C46780 = 0i64;
	dword_140C46770 = v2.m128_i32[0];
	qword_140C46790 = (__int64)sub_14043DDA0;
	dword_140C46788 = 1;
	return sub_1407DD89C(sub_140950D60);
}
// 140B55190: using guessed type __int64 (__fastcall *off_140B55190[35])();
// 140C44BD4: using guessed type int dword_140C44BD4;
// 140C44C64: using guessed type int dword_140C44C64;
// 140C44CF4: using guessed type int dword_140C44CF4;
// 140C46740: using guessed type __int64 (__fastcall *off_140C46740)();
// 140C46748: using guessed type wchar_t *off_140C46748;
// 140C46760: using guessed type __int128 xmmword_140C46760;
// 140C46770: using guessed type int dword_140C46770;
// 140C46774: using guessed type int dword_140C46774;
// 140C46778: using guessed type int dword_140C46778;
// 140C4677C: using guessed type int dword_140C4677C;
// 140C46780: using guessed type __int64 qword_140C46780;
// 140C46788: using guessed type int dword_140C46788;
// 140C46790: using guessed type __int64 qword_140C46790;
// 140C63750: using guessed type __int64 qword_140C63750;

