#include "../winhttp.h"

//----- (0000000140956840) ----------------------------------------------------
void sub_140956840()
{
	if (qword_140C7F0F8)
	{
		sub_14001EA50((__int64)&unk_140C7F0E8, *(_QWORD**)(qword_140C7F0F0 + 8));
		*(_QWORD*)(qword_140C7F0F0 + 16) = qword_140C7F0F0;
		*(_QWORD*)(qword_140C7F0F0 + 8) = 0i64;
		*(_QWORD*)(qword_140C7F0F0 + 24) = qword_140C7F0F0;
		qword_140C7F0F8 = 0i64;
	}
	sub_14018B900(qword_140C7F0F0, 0);
}
// 140C7F0F0: using guessed type __int64 qword_140C7F0F0;
// 140C7F0F8: using guessed type __int64 qword_140C7F0F8;

