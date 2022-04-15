#include "../winhttp.h"

//----- (000000014086F270) ----------------------------------------------------
void __fastcall sub_14086F270(__int64 a1)
{
	struct _RTL_CRITICAL_SECTION* v2; // rbx
	__int64 v3; // rax

	v2 = (struct _RTL_CRITICAL_SECTION*)sub_140830ED0((__int64)qword_140C61BA8, 1);
	EnterCriticalSection(v2);
	v3 = qword_140C628A0;
	if (!qword_140C628A0)
	{
		if (a1)
			v3 = a1;
		qword_140C628A0 = v3;
	}
	LeaveCriticalSection(v2);
}
// 140C628A0: using guessed type __int64 qword_140C628A0;

