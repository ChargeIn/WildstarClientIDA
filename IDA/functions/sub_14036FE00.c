#include "../winhttp.h"

//----- (000000014036FE00) ----------------------------------------------------
__int64 __fastcall sub_14036FE00(__int64 a1, __int64 a2, _QWORD* a3)
{
	unsigned __int64 v6; // rdi
	_QWORD* v7; // rbx
	_QWORD* v9; // rbx

	v6 = (*(__int64(__fastcall**)(__int64))(a1 + 24))(a2);
	v7 = *(_QWORD**)(*(_QWORD*)(a1 + 16) + 8 * (v6 % *(_QWORD*)(a1 + 8)));
	if (!v7)
		return 0i64;
	while (v6 != *v7 || !(*(unsigned int(__fastcall**)(__int64, _QWORD*))(a1 + 32))(a2, v7 + 2))
	{
		v7 = (_QWORD*)v7[1];
		if (!v7)
			return 0i64;
	}
	v9 = v7 + 4;
	if (!v9)
		return 0i64;
	*v9 = *a3;
	v9[1] = a3[1];
	return 1i64;
}

