#include "../winhttp.h"

//----- (00000001401601D0) ----------------------------------------------------
char __fastcall sub_1401601D0(__int64 a1)
{
	int v1; // edi
	__int64 v3; // rsi
	__int64 v4; // rax
	__int64 v5; // rbp

	v1 = 0;
	if (*(int*)(a1 + 1160) > 0)
	{
		v3 = 0i64;
		do
		{
			v4 = *(_QWORD*)(a1 + 1152);
			v5 = *(_QWORD*)(v3 + v4);
			if (v5)
			{
				sub_14015D320(*(_QWORD*)(v3 + v4));
				sub_14018B900(v5, 0);
			}
			++v1;
			v3 += 8i64;
		} while (v1 < *(_DWORD*)(a1 + 1160));
	}
	*(_QWORD*)(a1 + 1160) = 0i64;
	*(_QWORD*)(a1 + 1032) = -1i64;
	*(_QWORD*)(a1 + 1040) = -1i64;
	*(_QWORD*)(a1 + 1048) = -1i64;
	return sub_14015F180(a1);
}

