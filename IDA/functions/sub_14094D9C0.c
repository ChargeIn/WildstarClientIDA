#include "../winhttp.h"

//----- (000000014094D9C0) ----------------------------------------------------
void sub_14094D9C0()
{
	__int64 v0; // rbx
	__int64 v1; // rcx

	v0 = qword_140C63770;
	if (qword_140C63770)
	{
		v1 = *(_QWORD*)(qword_140C63770 + 16);
		if (v1)
			sub_1401B3420(v1);
		sub_14018B900(v0, 0);
	}
}
// 140C63770: using guessed type __int64 qword_140C63770;

