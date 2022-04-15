//----- (00000001409419E0) ----------------------------------------------------
__int64 sub_1409419E0()
{
	__int128 v0; // xmm2
	__int128* v1; // rax
	__int64 v2; // rcx

	v0 = xmmword_140B7AD50;
	qword_140C47BE0 = 0i64;
	qword_140C47BF0 = 0i64;
	dword_140C47BE8 = 1;
	v1 = (__int128*)&unk_140C47B60;
	v2 = 5i64;
	xmmword_140C47BC0 = xmmword_140B7B240;
	xmmword_140C47BD0 = xmmword_140B7AD50;
	xmmword_140C47BB0 = 0i64;
	while (1)
	{
		*v1++ = v0;
		if (!--v2)
			break;
		v0 = xmmword_140C47BD0;
	}
	return sub_1407DD89C(sub_140951C50);
}
// 140B7AD50: using guessed type __int128 xmmword_140B7AD50;
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140C47BB0: using guessed type __int128 xmmword_140C47BB0;
// 140C47BC0: using guessed type __int128 xmmword_140C47BC0;
// 140C47BD0: using guessed type __int128 xmmword_140C47BD0;
// 140C47BE0: using guessed type __int64 qword_140C47BE0;
// 140C47BE8: using guessed type int dword_140C47BE8;
// 140C47BF0: using guessed type __int64 qword_140C47BF0;

