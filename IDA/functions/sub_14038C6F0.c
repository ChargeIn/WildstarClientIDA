#include "../winhttp.h"

//----- (000000014038C6F0) ----------------------------------------------------
__int64 __fastcall sub_14038C6F0(_QWORD* a1, __int64 a2)
{
	__int64 v5; // rcx
	_QWORD* v6; // rcx
	__int64 v7; // rcx

	if (a1[148])
	{
		if (!(*(unsigned int(__fastcall**)(_QWORD*))(*a1 + 32i64))(a1))
			return 0i64;
		v5 = a1[4];
		if (v5)
		{
			if (!(*(unsigned int(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)v5 + 24i64))(v5, a2, 0i64))
				return 0i64;
		}
		v6 = (_QWORD*)a1[148];
		if (v6)
			*v6 = a1[149];
		v7 = a1[149];
		if (v7)
			*(_QWORD*)(v7 + 1184) = a1[148];
		a1[148] = 0i64;
		a1[149] = 0i64;
	}
	return 1i64;
}

