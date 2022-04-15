#include "../winhttp.h"

//----- (000000014091B490) ----------------------------------------------------
void __fastcall sub_14091B490(_DWORD* a1, __int64* a2, __int64 a3)
{
	_QWORD* v5; // rax
	__int64 v6; // rcx

	if (!*a1)
	{
		v5 = sub_14092D590((__int64)a1, 16i64);
		if (v5)
		{
			v6 = *a2;
			*v5 = a3;
			v5[1] = v6;
			*a2 = (__int64)v5;
		}
	}
}

