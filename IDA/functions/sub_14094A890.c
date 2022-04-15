//----- (000000014094A890) ----------------------------------------------------
__int64 sub_14094A890()
{
	__int128 v0; // xmm0
	__int64 v1; // rcx
	__int128* v2; // rax

	v0 = xmmword_140C777F0;
	v1 = 5i64;
	qword_140C54070 = 0i64;
	dword_140C54078 = 0;
	qword_140C54080 = 0i64;
	xmmword_140C54060 = xmmword_140C777F0;
	v2 = (__int128*)&unk_140C53FF0;
	while (1)
	{
		*v2++ = v0;
		if (!--v1)
			break;
		v0 = xmmword_140C54060;
	}
	return sub_1407DD89C(sub_140956570);
}
// 140C54060: using guessed type __int128 xmmword_140C54060;
// 140C54070: using guessed type __int64 qword_140C54070;
// 140C54078: using guessed type int dword_140C54078;
// 140C54080: using guessed type __int64 qword_140C54080;
// 140C777F0: using guessed type __int128 xmmword_140C777F0;

