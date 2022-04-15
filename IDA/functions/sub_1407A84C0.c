#include "../winhttp.h"

//----- (00000001407A84C0) ----------------------------------------------------
__int64 __fastcall sub_1407A84C0(_QWORD* a1, unsigned __int16* a2, int a3)
{
	_QWORD* v5; // r14
	int v6; // edi
	__int64 i; // rsi

	if (a3 == 1)
	{
		v5 = a1 + 13;
	}
	else
	{
		v5 = a1 + 15;
		if (a3 != 2)
			v5 = a1 + 17;
	}
	v6 = 0;
	if ((*(int(__fastcall**)(_QWORD*))(*a1 + 312i64))(a1) <= 0)
		return 0i64;
	for (i = 0i64; (unsigned int)sub_14018E2C0(*(_QWORD*)(i + a1[17]) + 68i64, a2); i += 8i64)
	{
		if (++v6 >= (*(int(__fastcall**)(_QWORD*))(*a1 + 312i64))(a1))
			return 0i64;
	}
	return *(_QWORD*)(*v5 + 8i64 * v6);
}

