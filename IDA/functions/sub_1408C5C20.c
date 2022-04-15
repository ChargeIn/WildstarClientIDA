#include "../winhttp.h"

//----- (00000001408C5C20) ----------------------------------------------------
__int64 __fastcall sub_1408C5C20(__int64 a1, float** a2, unsigned int a3, float a4, unsigned int a5)
{
	__int64 v5; // rsi
	float* v7; // rbx
	__int64 result; // rax

	if (a3)
	{
		v5 = a3;
		v7 = (float*)(a1 + 104);
		do
		{
			result = sub_1408AAE50(v7, *a2, a5, a4);
			v7 += 3;
			++a2;
			--v5;
		} while (v5);
	}
	return result;
}

