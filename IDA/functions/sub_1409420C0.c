//----- (00000001409420C0) ----------------------------------------------------
__int64 sub_1409420C0()
{
	__int128 v0; // xmm6
	__int64 v1; // rcx
	__m128* v2; // rax

	v0 = xmmword_140B7B240;
	*(_QWORD*)sub_14019D520(qword_140C63750 + 8, (__int64*)&off_140C4A158) = &off_140C4A150;
	v1 = 5i64;
	xmmword_140C4A1E0 = xmmword_140B7B240;
	off_140C4A150 = (__int64(__fastcall*)())off_140B670A0;
	qword_140C4A1F0 = 0i64;
	dword_140C4A1F8 = 0;
	qword_140C4A200 = 0i64;
	v2 = stru_140C4A170;
	while (1)
	{
		*v2++ = (__m128)v0;
		if (!--v1)
			break;
		v0 = xmmword_140C4A1E0;
	}
	return sub_1407DD89C(sub_1409523F0);
}
// 140B670A0: using guessed type __int64 (__fastcall *off_140B670A0[7])();
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140C4A150: using guessed type __int64 (__fastcall *off_140C4A150)();
// 140C4A158: using guessed type wchar_t *off_140C4A158;
// 140C4A170: using guessed type __m128 stru_140C4A170[7];
// 140C4A1E0: using guessed type __int128 xmmword_140C4A1E0;
// 140C4A1F0: using guessed type __int64 qword_140C4A1F0;
// 140C4A1F8: using guessed type int dword_140C4A1F8;
// 140C4A200: using guessed type __int64 qword_140C4A200;
// 140C63750: using guessed type __int64 qword_140C63750;

