#include "../winhttp.h"

//----- (000000014086EDB0) ----------------------------------------------------
__int64 sub_14086EDB0()
{
	struct _RTL_CRITICAL_SECTION* v0; // rbx
	__int64 v1; // rdi

	v0 = (struct _RTL_CRITICAL_SECTION*)sub_140830ED0((__int64)qword_140C61BA8, 1);
	EnterCriticalSection(v0);
	v1 = qword_140C628A0;
	qword_140C628A0 = 0i64;
	if (v1)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v1 + 8i64))(v1);
	LeaveCriticalSection(v0);
	return v1;
}
// 140C628A0: using guessed type __int64 qword_140C628A0;

