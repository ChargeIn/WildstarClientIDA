#include "../winhttp.h"

//----- (00000001404409D0) ----------------------------------------------------
__int64* __fastcall sub_1404409D0(__int64* a1, __int64* a2)
{
	__int64* v2; // rdi
	__int64* v4; // rsi
	__int64* i; // rbx
	__int64* result; // rax

	if (a1 != a2)
	{
		v2 = a1 + 1;
		do
		{
			v4 = (__int64*)v2[1];
			for (i = (__int64*)*v2; i != v4; i += 10)
				sub_1404400D0(i);
			if (*v2)
				sub_14018B900(*v2, 0);
			v2 += 4;
			result = v2 - 1;
		} while (v2 - 1 != a2);
	}
	return result;
}

