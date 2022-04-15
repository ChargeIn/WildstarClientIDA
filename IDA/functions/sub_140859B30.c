#include "../winhttp.h"

//----- (0000000140859B30) ----------------------------------------------------
void sub_140859B30()
{
	struct _RTL_CRITICAL_SECTION* v0; // rbx

	v0 = (struct _RTL_CRITICAL_SECTION*)sub_140830ED0((__int64)qword_140C61BA8, 1);
	EnterCriticalSection(v0);
	qword_140C62458 = 0i64;
	LeaveCriticalSection(v0);
}
// 140C62458: using guessed type __int64 qword_140C62458;

