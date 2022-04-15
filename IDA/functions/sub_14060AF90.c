#include "../winhttp.h"

//----- (000000014060AF90) ----------------------------------------------------
__int64 __fastcall sub_14060AF90(int* a1)
{
	__int64 result; // rax

	result = (*(__int64(__fastcall**)(int*))(*(_QWORD*)a1 + 8i64))(a1);
	if ((_DWORD)result)
	{
		result = sub_1403D90D0(qword_140C65898, a1[2]);
		if (result)
		{
			result = sub_14047DCA0(result);
			if (result)
				return sub_14060AFE0(a1, a1[2]);
		}
	}
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

