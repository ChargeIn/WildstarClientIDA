//----- (000000014062F960) ----------------------------------------------------
void sub_14062F960()
{
	__int64 v0; // rdi

	if (qword_140C7E570)
	{
		sub_14062FAD0(qword_140C7E570);
		v0 = qword_140C7E570;
		if (qword_140C7E570)
		{
			sub_140019490((_QWORD*)qword_140C7E570);
			sub_14018B900(*(_QWORD*)(v0 + 16), 0);
			*(_QWORD*)(v0 + 16) = 0i64;
			sub_14018B900(v0, 0);
		}
		qword_140C7E570 = 0i64;
	}
	else
	{
		qword_140C7E570 = 0i64;
	}
}
// 140C7E570: using guessed type __int64 qword_140C7E570;

