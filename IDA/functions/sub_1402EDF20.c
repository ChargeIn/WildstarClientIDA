#include "../winhttp.h"

//----- (00000001402EDF20) ----------------------------------------------------
__int64 __fastcall sub_1402EDF20(__int64 a1)
{
	__int64 v1; // rsi
	__int64 v2; // r14
	__int64 v3; // rbx
	int v4; // esi
	__int64* v5; // rbx
	__int64* v6; // rdi
	__int64 v7; // rdi

	v1 = *(int*)(a1 - 8);
	v2 = a1 - 8;
	v3 = 160 * v1 + 96;
	v4 = v1 - 1;
	if (v4 >= 0)
	{
		v5 = (__int64*)(a1 + v3);
		do
		{
			v6 = (__int64*)*(v5 - 13);
			v5 -= 20;
			if (v6)
			{
				sub_1402EEDD0(v6);
				sub_14018B900((__int64)v6, 0);
			}
			v7 = v5[6];
			if (v7)
			{
				sub_1402EE6D0((__int64*)v5[6]);
				sub_14018B900(v7, 0);
			}
			sub_14018B900(*(v5 - 1), 0);
			sub_14018B900(*v5, 0);
			sub_14018B900(*(v5 - 4), 0);
			sub_14018B900(*(v5 - 3), 0);
			--v4;
		} while (v4 >= 0);
	}
	sub_14018B900(v2, 0);
	return v2;
}

