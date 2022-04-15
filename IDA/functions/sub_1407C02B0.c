#include "../winhttp.h"

//----- (00000001407C02B0) ----------------------------------------------------
__int64 __fastcall sub_1407C02B0(__int64 a1)
{
	__int64 v1; // rdi
	__int64 v2; // rsi
	__int64 v3; // rdx
	int v4; // edi
	__int64 v5; // rbx
	__int64 v6; // rcx

	v1 = *(int*)(a1 - 8);
	v2 = a1 - 8;
	v3 = 3 * v1;
	v4 = v1 - 1;
	if (v4 >= 0)
	{
		v5 = a1 + 8 + 8 * v3;
		do
		{
			v6 = *(_QWORD*)(v5 - 24);
			v5 -= 24i64;
			sub_14018B900(v6, 0);
			--v4;
		} while (v4 >= 0);
	}
	sub_14018B900(v2, 0);
	return v2;
}

