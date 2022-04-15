//----- (000000014094A950) ----------------------------------------------------
__int64 sub_14094A950()
{
	__int128 v0; // xmm0
	__int64 v1; // rcx
	__int128* v2; // rax

	v0 = xmmword_140B7B070;
	v1 = 5i64;
	qword_140C541F0 = 0i64;
	dword_140C541F8 = 0;
	qword_140C54200 = 0i64;
	xmmword_140C541E0 = xmmword_140B7B070;
	v2 = (__int128*)&unk_140C54170;
	while (1)
	{
		*v2++ = v0;
		if (!--v1)
			break;
		v0 = xmmword_140C541E0;
	}
	return sub_1407DD89C(sub_1409565F0);
}
// 140B7B070: using guessed type __int128 xmmword_140B7B070;
// 140C541E0: using guessed type __int128 xmmword_140C541E0;
// 140C541F0: using guessed type __int64 qword_140C541F0;
// 140C541F8: using guessed type int dword_140C541F8;
// 140C54200: using guessed type __int64 qword_140C54200;

