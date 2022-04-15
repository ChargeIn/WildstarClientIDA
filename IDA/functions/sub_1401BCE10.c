#include "../winhttp.h"

//----- (00000001401BCE10) ----------------------------------------------------
void __fastcall sub_1401BCE10(__int64* a1)
{
	unsigned __int64 v1; // rbx
	__int64 v3; // rdi
	__int64 v4; // rax
	__int64 v5; // rbp

	v1 = 0i64;
	if (a1[2])
	{
		v3 = 0i64;
		do
		{
			v4 = a1[1];
			v5 = *(_QWORD*)(v4 + v3 + 8);
			if (v5)
			{
				sub_1401BCE10(*(_QWORD*)(v4 + v3 + 8));
				sub_14018B900(v5, 0);
			}
			++v1;
			v3 += 16i64;
		} while (v1 < a1[2]);
	}
	sub_14018B900(a1[1], 0);
	sub_14018B900(a1[3], 0);
	sub_14018B900(a1[5], 0);
}

