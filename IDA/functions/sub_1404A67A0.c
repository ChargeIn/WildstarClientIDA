#include "../winhttp.h"

//----- (00000001404A67A0) ----------------------------------------------------
__int64 __fastcall sub_1404A67A0(__int64 a1, unsigned int* a2)
{
	__int64 v2; // rdi

	v2 = qword_140C659A8;
	if (!a2)
		return 2147500037i64;
	sub_1407DB590(*(int**)(qword_140C659A8 + 136), *((int**)a2 + 1), 12i64 * *a2);
	sub_1407DB590(*(int**)(v2 + 128), *((int**)a2 + 3), 12i64 * a2[4]);
	sub_1400A8020(*(_QWORD*)(qword_140C65898 + 29504) + 3856i64);
	return 0i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C659A8: using guessed type __int64 qword_140C659A8;

