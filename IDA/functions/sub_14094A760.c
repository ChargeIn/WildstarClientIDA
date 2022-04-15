//----- (000000014094A760) ----------------------------------------------------
__int64 sub_14094A760()
{
	__int128 v0; // xmm0
	__int64 v1; // rcx
	__int128* v2; // rax

	v0 = xmmword_140C777D0;
	v1 = 5i64;
	qword_140C53DF0 = 0i64;
	dword_140C53DF8 = 0;
	qword_140C53E00 = 0i64;
	xmmword_140C53DE0 = xmmword_140C777D0;
	v2 = (__int128*)&unk_140C53D70;
	while (1)
	{
		*v2++ = v0;
		if (!--v1)
			break;
		v0 = xmmword_140C53DE0;
	}
	return sub_1407DD89C(sub_140956470);
}
// 140C53DE0: using guessed type __int128 xmmword_140C53DE0;
// 140C53DF0: using guessed type __int64 qword_140C53DF0;
// 140C53DF8: using guessed type int dword_140C53DF8;
// 140C53E00: using guessed type __int64 qword_140C53E00;
// 140C777D0: using guessed type __int128 xmmword_140C777D0;

