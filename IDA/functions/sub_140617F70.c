#include "../winhttp.h"

//----- (0000000140617F70) ----------------------------------------------------
__int64 __fastcall sub_140617F70(int* a1, int* a2)
{
	int* v2; // rbx
	__int64 v5; // rsi
	double v6; // xmm0_8
	int v7; // ecx
	__int64 v8; // rax
	__int64 v9; // rdx
	__int64 result; // rax

	if (a1 != a2)
	{
		v2 = a1 + 1;
		if (a1 + 1 != a2)
		{
			v5 = 4i64;
			do
			{
				v6 = (*(double(__fastcall**)(__int64*))(qword_140C77890 + 48))(&qword_140C77890);
				v7 = *v2;
				v8 = v5 >> 2;
				++v2;
				v5 += 4i64;
				v9 = (int)(v6 * ((double)(int)v8 + 1.0));
				result = (unsigned int)a1[v9];
				*(v2 - 1) = result;
				a1[v9] = v7;
			} while (v2 != a2);
		}
	}
	return result;
}
// 140C77890: using guessed type __int64 qword_140C77890;

