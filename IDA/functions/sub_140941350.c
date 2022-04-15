//----- (0000000140941350) ----------------------------------------------------
__int64 sub_140941350()
{
	__int128 v0; // xmm0
	__int64 v1; // rcx
	__int128* v2; // rax

	v0 = xmmword_140B7AFD0;
	v1 = 5i64;
	qword_140C46D90 = 0i64;
	dword_140C46D98 = 0;
	qword_140C46DA0 = 0i64;
	xmmword_140C46D80 = xmmword_140B7AFD0;
	v2 = (__int128*)&unk_140C46D10;
	while (1)
	{
		*v2++ = v0;
		if (!--v1)
			break;
		v0 = xmmword_140C46D80;
	}
	return sub_1407DD89C(sub_140951490);
}
// 140B7AFD0: using guessed type __int128 xmmword_140B7AFD0;
// 140C46D80: using guessed type __int128 xmmword_140C46D80;
// 140C46D90: using guessed type __int64 qword_140C46D90;
// 140C46D98: using guessed type int dword_140C46D98;
// 140C46DA0: using guessed type __int64 qword_140C46DA0;

