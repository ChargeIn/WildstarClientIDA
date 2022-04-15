//----- (000000014094A830) ----------------------------------------------------
__int64 sub_14094A830()
{
	__int128 v0; // xmm0
	__int64 v1; // rcx
	__int128* v2; // rax

	v0 = xmmword_140C77810;
	v1 = 5i64;
	qword_140C53FB0 = 0i64;
	dword_140C53FB8 = 0;
	qword_140C53FC0 = 0i64;
	xmmword_140C53FA0 = xmmword_140C77810;
	v2 = (__int128*)&unk_140C53F30;
	while (1)
	{
		*v2++ = v0;
		if (!--v1)
			break;
		v0 = xmmword_140C53FA0;
	}
	return sub_1407DD89C(sub_140956530);
}
// 140C53FA0: using guessed type __int128 xmmword_140C53FA0;
// 140C53FB0: using guessed type __int64 qword_140C53FB0;
// 140C53FB8: using guessed type int dword_140C53FB8;
// 140C53FC0: using guessed type __int64 qword_140C53FC0;
// 140C77810: using guessed type __int128 xmmword_140C77810;

