#include "../winhttp.h"

//----- (000000014094F2C0) ----------------------------------------------------
void sub_14094F2C0()
{
	if (qword_140C7ABB0)
	{
		sub_14001A270((__int64)&unk_140C7ABA0, *(_QWORD**)(qword_140C7ABA8 + 8));
		*(_QWORD*)(qword_140C7ABA8 + 16) = qword_140C7ABA8;
		*(_QWORD*)(qword_140C7ABA8 + 8) = 0i64;
		*(_QWORD*)(qword_140C7ABA8 + 24) = qword_140C7ABA8;
		qword_140C7ABB0 = 0i64;
	}
	sub_14018B900(qword_140C7ABA8, 0);
}
// 140C7ABA8: using guessed type __int64 qword_140C7ABA8;
// 140C7ABB0: using guessed type __int64 qword_140C7ABB0;

