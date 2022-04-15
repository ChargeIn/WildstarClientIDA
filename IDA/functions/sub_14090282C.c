#include "../winhttp.h"

//----- (000000014090282C) ----------------------------------------------------
double __fastcall sub_14090282C(double a1, __int64 a2, __int16 a3)
{
	__int64 v4; // r8
	__int64 v6; // [rsp+60h] [rbp+8h]

	v6 = *(_QWORD*)&a1;
	v4 = *(_QWORD*)&a1;
	if ((*(_QWORD*)&a1 & 0x7FF0000000000000i64) == 0x7FF0000000000000i64)
	{
		if ((*(_QWORD*)&a1 & 0xFFFFFFFFFFFFFi64) != 0)
		{
			if ((*(_QWORD*)&a1 & 0x8000000000000i64) == 0)
			{
				v4 = *(_QWORD*)&a1 | 0x8000000000000i64;
				v6 = *(_QWORD*)&a1 | 0x8000000000000i64;
			}
			sub_1407EFC20(a2, a3, v4, 1, 0, 0x21u, *(__int64*)&a1, 0i64, 1);
		}
		else
		{
			v6 = 0xFFF8000000000000ui64;
			sub_1407EFC20(a2, a3, 0xFFF8000000000000ui64, 1, 8, 0x21u, *(__int64*)&a1, 0i64, 1);
		}
	}
	return *(double*)&v6;
}

