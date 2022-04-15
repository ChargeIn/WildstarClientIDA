#include "../winhttp.h"

//----- (0000000140884080) ----------------------------------------------------
__int64 __fastcall sub_140884080(__int64 a1, _QWORD* a2)
{
	__int64 v3; // rdx
	__int64 result; // rax
	__int64 v6; // rcx

	v3 = a2[1];
	result = 0i64;
	a2[1] = 0i64;
	if (v3)
		result = sub_140889B30(a1 + 168, v3);
	v6 = *(_QWORD*)(a1 + 280);
	if (v6)
	{
		*a2 = v6;
		*(_QWORD*)(a1 + 280) = a2;
	}
	else
	{
		*(_QWORD*)(a1 + 280) = a2;
		*a2 = 0i64;
	}
	return result;
}

