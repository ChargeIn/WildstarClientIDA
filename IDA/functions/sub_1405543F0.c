//----- (00000001405543F0) ----------------------------------------------------
void sub_1405543F0()
{
	__int64 v0; // rbx

	sub_140554EA0((__int64)&qword_140C7DC60, 1);
	sub_140558C90(&qword_140C7DCD0, 0i64);
	if (qword_140C7DC80)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C7DC80 + 8i64))(qword_140C7DC80);
		qword_140C7DC80 = 0i64;
	}
	v0 = qword_140C7DC90;
	if (qword_140C7DC90)
	{
		sub_14077C750((_QWORD*)qword_140C7DC90);
		sub_14018B900(v0, 0);
	}
	qword_140C7DC90 = 0i64;
}
// 140C7DC60: using guessed type __int64 qword_140C7DC60;
// 140C7DC80: using guessed type __int64 qword_140C7DC80;
// 140C7DC90: using guessed type __int64 qword_140C7DC90;
// 140C7DCD0: using guessed type __int64 qword_140C7DCD0;

