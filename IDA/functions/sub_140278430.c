#include "../winhttp.h"

//----- (0000000140278430) ----------------------------------------------------
__int64 __fastcall sub_140278430(__int64 a1)
{
	__int64 v1; // r14
	int v2; // ebp
	__int64* v3; // rdi
	bool v4; // zf
	__int64* v5; // rbx
	unsigned __int64 i; // rsi

	v1 = a1 - 8;
	v2 = *(_DWORD*)(a1 - 8) - 1;
	if (v2 >= 0)
	{
		v3 = (__int64*)(a1 + 88i64 * *(int*)(a1 - 8) + 8);
		do
		{
			v4 = *(v3 - 11) == 0;
			v3 -= 11;
			if (!v4)
			{
				v5 = (__int64*)v3[5];
				for (i = v3[9] + 8; (unsigned __int64)v5 < i; ++v5)
					sub_14018B900(*v5, 0);
				sub_14018B900(*v3, 0);
			}
			--v2;
		} while (v2 >= 0);
	}
	sub_14018B900(v1, 0);
	return v1;
}

