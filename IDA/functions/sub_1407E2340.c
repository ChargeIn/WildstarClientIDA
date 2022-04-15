#include "../winhttp.h"

//----- (00000001407E2340) ----------------------------------------------------
void __fastcall sub_1407E2340(int a1)
{
	__int64 v1; // rbx

	v1 = 2i64 * a1;
	if (!qword_140C0F7D0[2 * a1] && !(unsigned int)sub_1407E240C(a1))
		sub_1407DBBD0(17);
	EnterCriticalSection((LPCRITICAL_SECTION)qword_140C0F7D0[v1]);
}
// 140C0F7D0: using guessed type _QWORD qword_140C0F7D0[1];

