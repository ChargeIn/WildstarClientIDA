//----- (000000014063F5F0) ----------------------------------------------------
void sub_14063F5F0()
{
	__int64 v0; // rdx
	__int64 v1; // rcx

	v0 = qword_140C7E648;
	v1 = *(_QWORD*)(qword_140C7E648 + 8);
	if (qword_140C7E648 == qword_140C7E658 - 32)
	{
		if (v1)
			sub_14018B900(v1, 0);
		sub_14018B900(qword_140C7E650, 0);
		qword_140C7E660 += 8i64;
		qword_140C7E650 = *(_QWORD*)qword_140C7E660;
		qword_140C7E648 = qword_140C7E650;
		qword_140C7E658 = qword_140C7E650 + 480;
	}
	else
	{
		if (v1)
		{
			sub_14018B900(v1, 0);
			v0 = qword_140C7E648;
		}
		qword_140C7E648 = v0 + 32;
	}
}
// 140C7E648: using guessed type __int64 qword_140C7E648;
// 140C7E650: using guessed type __int64 qword_140C7E650;
// 140C7E658: using guessed type __int64 qword_140C7E658;
// 140C7E660: using guessed type __int64 qword_140C7E660;

