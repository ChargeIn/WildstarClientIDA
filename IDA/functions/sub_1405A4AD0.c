//----- (00000001405A4AD0) ----------------------------------------------------
void sub_1405A4AD0()
{
	__int64 v0; // rcx
	__int64 v1; // rcx

	if (qword_140C7DF98)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C7DF98 + 8i64))(qword_140C7DF98);
		v0 = qword_140C7DF98;
		if (qword_140C7DF98)
		{
			*(_QWORD*)qword_140C7DF98 = off_140B6CF40;
			sub_14018B900(v0, 0);
		}
		qword_140C7DF98 = 0i64;
	}
	if (qword_140C7DFA0)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C7DFA0 + 8i64))(qword_140C7DFA0);
		v1 = qword_140C7DFA0;
		if (qword_140C7DFA0)
		{
			*(_QWORD*)qword_140C7DFA0 = off_140B6CF40;
			sub_14018B900(v1, 0);
		}
		qword_140C7DFA0 = 0i64;
	}
}
// 140B6CF40: using guessed type void (__fastcall __noreturn *off_140B6CF40[2])();
// 140C7DF98: using guessed type __int64 qword_140C7DF98;
// 140C7DFA0: using guessed type __int64 qword_140C7DFA0;

