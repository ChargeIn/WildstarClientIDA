#include "../winhttp.h"

//----- (0000000140326F00) ----------------------------------------------------
__int64 __fastcall sub_140326F00(__int64* a1, unsigned __int64 a2)
{
	__int64 result; // rax
	__int64 v4; // rbp
	unsigned __int64 v5; // rsi
	__int64 v6; // r14
	__int64 v7; // rbx

	if (a1[1] > a2)
		a1[1] = a2;
	result = (__int64)sub_14018DBC0(*a1, a2, 112i64);
	v4 = result;
	if (*a1 != result)
	{
		v5 = 0i64;
		if (a1[1])
		{
			v6 = -result;
			v7 = result;
			do
			{
				if (v7)
					result = sub_140326FB0(v7, *a1 + v6 + v7);
				++v5;
				v7 += 112i64;
			} while (v5 < a1[1]);
		}
		if (*a1)
			result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)(*a1 - 16) + 8i64))(*a1 - 16);
		*a1 = v4;
	}
	return result;
}

