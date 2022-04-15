//----- (0000000140957B90) ----------------------------------------------------
__int64 sub_140957B90()
{
	__int64 result; // rax

	if (qword_140C62AD0)
		result = sub_140881720(dword_140C10F20, qword_140C62AD0);
	if ((_QWORD)xmmword_140C62A70)
	{
		*((_QWORD*)&xmmword_140C62A70 + 1) = xmmword_140C62A70;
		result = sub_140881720(dword_140C10F20, xmmword_140C62A70);
		dword_140C62A80 = 0;
		xmmword_140C62A70 = 0i64;
	}
	if (qword_140C62A88)
	{
		qword_140C62A90 = qword_140C62A88;
		result = sub_140881720(dword_140C10F20, qword_140C62A88);
		qword_140C62A88 = 0i64;
		qword_140C62A90 = 0i64;
		dword_140C62A98 = 0;
	}
	return result;
}
// 140C10F20: using guessed type int dword_140C10F20;
// 140C62A70: using guessed type __int128 xmmword_140C62A70;
// 140C62A80: using guessed type int dword_140C62A80;
// 140C62A88: using guessed type __int64 qword_140C62A88;
// 140C62A90: using guessed type __int64 qword_140C62A90;
// 140C62A98: using guessed type int dword_140C62A98;
// 140C62AD0: using guessed type __int64 qword_140C62AD0;

