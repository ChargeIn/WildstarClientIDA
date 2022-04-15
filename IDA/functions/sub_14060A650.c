#include "../winhttp.h"

//----- (000000014060A650) ----------------------------------------------------
_BOOL8 __fastcall sub_14060A650(__int64* a1, __int64 a2)
{
	__int64 v3; // rcx
	_BOOL8 result; // rax
	__int64 v6; // rcx
	__int64 v7; // rcx

	v3 = *a1;
	result = 0;
	if (!v3 || (*(unsigned int(__fastcall**)(__int64, __int64, __int64))(*(_QWORD*)v3 + 24i64))(v3, a2, 1i64))
	{
		v6 = a1[1];
		if (!v6 || (*(unsigned int(__fastcall**)(__int64, __int64, __int64))(*(_QWORD*)v6 + 24i64))(v6, a2, 1i64))
		{
			v7 = a1[2];
			if (!v7 || (*(unsigned int(__fastcall**)(__int64, __int64, __int64))(*(_QWORD*)v7 + 24i64))(v7, a2, 1i64))
				return 1;
		}
	}
	return result;
}

