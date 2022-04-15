#include "../winhttp.h"

//----- (00000001404A7EB0) ----------------------------------------------------
__int64 __fastcall sub_1404A7EB0(__int64 a1, unsigned int a2)
{
	__int64 v4; // rcx
	int v5; // eax

	v4 = *(_QWORD*)(qword_140C65898 + 7152);
	if (v4)
		v5 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v4 + 24i64))(v4);
	else
		v5 = 0;
	return sub_1404A9B30(a1, v5, a2);
}
// 140C65898: using guessed type __int64 qword_140C65898;

