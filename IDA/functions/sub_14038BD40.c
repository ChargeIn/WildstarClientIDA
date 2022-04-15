#include "../winhttp.h"

//----- (000000014038BD40) ----------------------------------------------------
__int64 __fastcall sub_14038BD40(__int64 a1)
{
	_QWORD* v2; // rcx
	__int64 v3; // rcx
	__int64 result; // rax

	if (*(_QWORD*)(a1 + 1040))
	{
		sub_14038BDB0(a1);
		sub_14038C060(a1);
		v2 = *(_QWORD**)(a1 + 1040);
		if (v2)
			*v2 = *(_QWORD*)(a1 + 1048);
		v3 = *(_QWORD*)(a1 + 1048);
		if (v3)
			*(_QWORD*)(v3 + 1040) = *(_QWORD*)(a1 + 1040);
		result = 0i64;
		*(_QWORD*)(a1 + 1040) = 0i64;
		*(_QWORD*)(a1 + 1048) = 0i64;
	}
	return result;
}

