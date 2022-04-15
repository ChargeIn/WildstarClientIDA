#include "../winhttp.h"

//----- (000000014094DB00) ----------------------------------------------------
void sub_14094DB00()
{
	if (qword_140C79A50)
	{
		sub_140032150((__int64)&unk_140C79A40, *(_QWORD**)(qword_140C79A48 + 8));
		*(_QWORD*)(qword_140C79A48 + 16) = qword_140C79A48;
		*(_QWORD*)(qword_140C79A48 + 8) = 0i64;
		*(_QWORD*)(qword_140C79A48 + 24) = qword_140C79A48;
		qword_140C79A50 = 0i64;
	}
	sub_14018B900(qword_140C79A48, 0);
}
// 140C79A48: using guessed type __int64 qword_140C79A48;
// 140C79A50: using guessed type __int64 qword_140C79A50;

