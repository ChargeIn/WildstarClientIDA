//----- (000000014094A8F0) ----------------------------------------------------
__int64 sub_14094A8F0()
{
	__int128 v0; // xmm0
	__int64 v1; // rcx
	__int128* v2; // rax

	v0 = xmmword_140B7A4B0;
	v1 = 5i64;
	qword_140C54130 = 0i64;
	dword_140C54138 = 0;
	qword_140C54140 = 0i64;
	xmmword_140C54120 = xmmword_140B7A4B0;
	v2 = (__int128*)&unk_140C540B0;
	while (1)
	{
		*v2++ = v0;
		if (!--v1)
			break;
		v0 = xmmword_140C54120;
	}
	return sub_1407DD89C(sub_1409565B0);
}
// 140B7A4B0: using guessed type __int128 xmmword_140B7A4B0;
// 140C54120: using guessed type __int128 xmmword_140C54120;
// 140C54130: using guessed type __int64 qword_140C54130;
// 140C54138: using guessed type int dword_140C54138;
// 140C54140: using guessed type __int64 qword_140C54140;

