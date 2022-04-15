#include "../winhttp.h"

//----- (00000001402ED000) ----------------------------------------------------
void __fastcall sub_1402ED000(__int64 a1)
{
	__int64 v1; // rdx
	__int64 v2; // rdi
	__int64 v3; // rsi
	__int64 v4; // rbx
	int v5; // edi
	__int64 v6; // rbx
	__int64 v7; // rcx

	v1 = *(_QWORD*)(a1 + 8);
	if (v1)
	{
		v2 = *(int*)(v1 - 8);
		v3 = v1 - 8;
		v4 = 48 * v2 + 40;
		v5 = v2 - 1;
		if (v5 >= 0)
		{
			v6 = v1 + v4;
			do
			{
				v7 = *(_QWORD*)(v6 - 48);
				v6 -= 48i64;
				sub_14018B900(v7, 0);
				--v5;
			} while (v5 >= 0);
		}
		sub_14018B900(v3, 0);
	}
}

