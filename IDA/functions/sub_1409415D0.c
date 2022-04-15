//----- (00000001409415D0) ----------------------------------------------------
__int64 sub_1409415D0()
{
	__int128 v0; // xmm0
	__int64 v1; // rcx
	__int128* v2; // rax

	v0 = xmmword_140B7B210;
	v1 = 5i64;
	qword_140C47210 = 0i64;
	dword_140C47218 = 0;
	qword_140C47220 = 0i64;
	xmmword_140C47200 = xmmword_140B7B210;
	v2 = (__int128*)&unk_140C47190;
	while (1)
	{
		*v2++ = v0;
		if (!--v1)
			break;
		v0 = xmmword_140C47200;
	}
	return sub_1407DD89C(sub_140951610);
}
// 140B7B210: using guessed type __int128 xmmword_140B7B210;
// 140C47200: using guessed type __int128 xmmword_140C47200;
// 140C47210: using guessed type __int64 qword_140C47210;
// 140C47218: using guessed type int dword_140C47218;
// 140C47220: using guessed type __int64 qword_140C47220;

