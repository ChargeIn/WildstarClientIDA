#include "../winhttp.h"

//----- (0000000140115F50) ----------------------------------------------------
void __fastcall sub_140115F50(_QWORD* a1)
{
	unsigned __int64 v1; // rbx
	__int64 v3; // rdi
	__int64 v4; // rcx

	v1 = 0i64;
	if (a1[1])
	{
		v3 = 0i64;
		do
		{
			v4 = *(_QWORD*)(v3 + *a1 + 8);
			if (v4)
				sub_14018B900(v4, 0);
			++v1;
			v3 += 32i64;
		} while (v1 < a1[1]);
		a1[1] = 0i64;
	}
	else
	{
		a1[1] = 0i64;
	}
}

