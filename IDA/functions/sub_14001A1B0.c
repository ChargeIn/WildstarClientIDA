#include "../winhttp.h"

//----- (000000014001A1B0) ----------------------------------------------------
__int64 __fastcall sub_14001A1B0(_QWORD* a1)
{
	unsigned __int64 v1; // rsi
	__int64 v3; // r14
	unsigned __int64 v4; // rbx
	__int64* v5; // rdi
	__int64 result; // rax
	__int64 v7; // rcx

	v1 = 0i64;
	if (a1[1])
	{
		v3 = 0i64;
		do
		{
			v4 = 0i64;
			v5 = (__int64*)(v3 + *a1);
			if (v5[1])
			{
				do
				{
					result = *v5;
					v7 = *(_QWORD*)(*v5 + 8 * v4);
					if (v7)
						result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)(v7 - 16) + 8i64))(v7 - 16);
					++v4;
				} while (v4 < v5[1]);
			}
			if (*v5)
				result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)(*v5 - 16) + 8i64))(*v5 - 16);
			++v1;
			v3 += 16i64;
		} while (v1 < a1[1]);
		a1[1] = 0i64;
	}
	else
	{
		a1[1] = 0i64;
	}
	return result;
}

