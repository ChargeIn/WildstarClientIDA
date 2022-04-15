//----- (00000001409412F0) ----------------------------------------------------
__int64 sub_1409412F0()
{
	__int128 v0; // xmm0
	__int64 v1; // rcx
	__int128* v2; // rax

	v0 = xmmword_140B7AFF0;
	v1 = 5i64;
	qword_140C46CD0 = 0i64;
	dword_140C46CD8 = 0;
	qword_140C46CE0 = 0i64;
	xmmword_140C46CC0 = xmmword_140B7AFF0;
	v2 = xmmword_140C46C50;
	while (1)
	{
		*v2++ = v0;
		if (!--v1)
			break;
		v0 = xmmword_140C46CC0;
	}
	return sub_1407DD89C(sub_140951450);
}
// 140B7AFF0: using guessed type __int128 xmmword_140B7AFF0;
// 140C46C50: using guessed type _OWORD xmmword_140C46C50[7];
// 140C46CC0: using guessed type __int128 xmmword_140C46CC0;
// 140C46CD0: using guessed type __int64 qword_140C46CD0;
// 140C46CD8: using guessed type int dword_140C46CD8;
// 140C46CE0: using guessed type __int64 qword_140C46CE0;

