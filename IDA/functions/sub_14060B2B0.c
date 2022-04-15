#include "../winhttp.h"

//----- (000000014060B2B0) ----------------------------------------------------
__int64 __fastcall sub_14060B2B0(int* a1)
{
	__int64 result; // rax
	__int64 v3; // rax
	__int64 v4; // rsi
	__int64 v5; // rdi

	result = sub_14060B170((__int64)a1);
	if ((_DWORD)result)
	{
		result = sub_14060B250(a1);
		if ((_DWORD)result)
		{
			v3 = sub_1403D90D0(qword_140C65898, a1[2]);
			v4 = 0i64;
			if (v3)
				v5 = sub_14047DCA0(v3);
			else
				v5 = 0i64;
			result = sub_1403D90D0(qword_140C65898, a1[4]);
			if (result)
			{
				result = sub_14047DCA0(result);
				v4 = result;
			}
			if (v5)
				result = sub_14060AFE0(a1, a1[2]);
			if (v4)
			{
				if (v5 != v4)
				{
					result = *(_QWORD*)(v4 + 6304);
					if (!result || !v5 || *(_QWORD*)(v5 + 6304) != result)
						return sub_14060AFE0(a1, a1[4]);
				}
			}
		}
	}
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

