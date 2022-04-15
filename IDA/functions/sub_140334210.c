#include "../winhttp.h"

//----- (0000000140334210) ----------------------------------------------------
void __fastcall sub_140334210(_QWORD* a1)
{
	unsigned __int64 v2; // rsi
	__int64 v3; // rdi
	__int64 v4; // rbx
	__int64 v5; // rcx
	__int64 v6; // rcx

	v2 = 0i64;
	if (a1[1])
	{
		do
		{
			v3 = a1[2] + 8 * v2;
			while (*(_QWORD*)v3)
			{
				v4 = *(_QWORD*)v3;
				*(_QWORD*)v3 = *(_QWORD*)(*(_QWORD*)v3 + 8i64);
				v5 = *(_QWORD*)(v4 + 160);
				if (v5)
				{
					sub_14018B900(v5, 0);
					*(_QWORD*)(v4 + 160) = 0i64;
				}
				v6 = *(_QWORD*)(v4 + 72);
				if (v6)
					sub_14018B900(v6, 0);
				sub_14018B900(v4, 0);
			}
			++v2;
		} while (v2 < a1[1]);
		*a1 = 0i64;
	}
	else
	{
		*a1 = 0i64;
	}
}

