#include "../winhttp.h"

//----- (0000000140019490) ----------------------------------------------------
void __fastcall sub_140019490(_QWORD* a1)
{
	unsigned __int64 v1; // rdi
	__int64 v3; // rbx
	__int64 v4; // rcx

	v1 = 0i64;
	if (a1[1])
	{
		do
		{
			v3 = a1[2];
			while (*(_QWORD*)(v3 + 8 * v1))
			{
				v4 = *(_QWORD*)(v3 + 8 * v1);
				*(_QWORD*)(v3 + 8 * v1) = *(_QWORD*)(v4 + 8);
				sub_14018B900(v4, 0);
			}
			++v1;
		} while (v1 < a1[1]);
		*a1 = 0i64;
	}
	else
	{
		*a1 = 0i64;
	}
}

