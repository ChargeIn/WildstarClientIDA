#include "../winhttp.h"

//----- (000000014063E440) ----------------------------------------------------
__int64 __fastcall sub_14063E440(__int64 a1)
{
	int v1; // eax
	unsigned __int64 v2; // rdx
	__int64 result; // rax
	__int64 v4; // rcx

	v1 = sub_1407DF510(*(WCHAR**)(a1 + 8));
	v2 = v1;
	if (v1)
		v2 = v1 - 1i64;
	result = qword_140C65898;
	if (qword_140C65898)
	{
		v4 = *(_QWORD*)(qword_140C65898 + 28048);
		if (v4)
			return sub_1405E7490(v4, v2, 1);
	}
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

