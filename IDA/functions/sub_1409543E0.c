//----- (00000001409543E0) ----------------------------------------------------
void sub_1409543E0()
{
	__int64 v0; // rbx
	__int64 v1; // rcx

	v0 = qword_140C7DC90;
	if (qword_140C7DC90)
	{
		sub_14077C750((_QWORD*)qword_140C7DC90);
		sub_14018B900(v0, 0);
	}
	qword_140C7DC90 = 0i64;
	if (qword_140C7DCE0[0])
		sub_1401A4A00((const void***)qword_140C7DCE0);
	sub_140558BD0(&qword_140C7DCD0);
	nullsub_1(v1);
	if ((_QWORD)xmmword_140C7DCB0)
		sub_14018B900(xmmword_140C7DCB0, 0);
}
// 140954431: variable 'v1' is possibly undefined
// 140001B70: using guessed type __int64 __fastcall nullsub_1(_QWORD);
// 140C7DC90: using guessed type __int64 qword_140C7DC90;
// 140C7DCB0: using guessed type __int128 xmmword_140C7DCB0;
// 140C7DCD0: using guessed type __int64 qword_140C7DCD0;
// 140C7DCE0: using guessed type __int64 qword_140C7DCE0[32];

