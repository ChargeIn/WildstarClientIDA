#include "../winhttp.h"

//----- (000000014063F730) ----------------------------------------------------
void sub_14063F730()
{
	__int64 v0; // rcx
	__int64* v1; // rbx
	unsigned __int64 v2; // rdi

	v0 = qword_140C7E638;
	if (qword_140C7E638)
	{
		v1 = (__int64*)qword_140C7E660;
		v2 = qword_140C7E680 + 8;
		if (qword_140C7E660 < (unsigned __int64)(qword_140C7E680 + 8))
		{
			do
				sub_14018B900(*v1++, 0);
			while ((unsigned __int64)v1 < v2);
			v0 = qword_140C7E638;
		}
		sub_14018B900(v0, 0);
	}
}
// 140C7E638: using guessed type __int64 qword_140C7E638;
// 140C7E660: using guessed type __int64 qword_140C7E660;
// 140C7E680: using guessed type __int64 qword_140C7E680;

