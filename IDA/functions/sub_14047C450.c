#include "../winhttp.h"

//----- (000000014047C450) ----------------------------------------------------
__int64 __fastcall sub_14047C450(__int64 a1)
{
	unsigned int v1; // eax
	__int64 v2; // rcx
	__int64 v3; // rax

	if (qword_140C65898
		&& qword_140C65970
		&& *(_QWORD*)(qword_140C65898 + 120) == a1
		&& (v1 = (*(__int64 (**)(void))(*(_QWORD*)qword_140C65970 + 24i64))(),
			(v3 = sub_140491D60(v2, *(_DWORD*)(qword_140C65970 + 8), v1)) != 0))
	{
		return *(unsigned int*)(*(_QWORD*)v3 + 8i64);
	}
	else
	{
		return 1i64;
	}
}
// 14047C488: variable 'v2' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65970: using guessed type __int64 qword_140C65970;

