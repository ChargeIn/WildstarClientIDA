#include "../winhttp.h"

//----- (000000014038A510) ----------------------------------------------------
__int64 __fastcall sub_14038A510(_QWORD* a1)
{
	__int64 result; // rax
	_QWORD* v3; // rcx
	__int64 v4; // rcx

	if (!a1[16] || (result = sub_14038A4A0((__int64)a1), (_DWORD)result))
	{
		sub_14038A680((__int64)a1);
		v3 = (_QWORD*)a1[18];
		if (v3)
			*v3 = a1[19];
		v4 = a1[19];
		if (v4)
			*(_QWORD*)(v4 + 144) = a1[18];
		a1[18] = 0i64;
		a1[19] = 0i64;
		return 1i64;
	}
	return result;
}

