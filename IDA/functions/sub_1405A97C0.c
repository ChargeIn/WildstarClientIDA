#include "../winhttp.h"

//----- (00000001405A97C0) ----------------------------------------------------
__int64 __fastcall sub_1405A97C0(float* a1, float* a2, unsigned int a3)
{
	__int64 result; // rax

	result = sub_14024B980(a3);
	if (result)
	{
		*a1 = *(float*)result;
		a1[1] = *(float*)(result + 4);
		a1[2] = *(float*)(result + 8);
		a1[3] = *(float*)(result + 12);
		a1[4] = *(float*)(result + 16);
		a1[5] = *(float*)(result + 20);
		a1[6] = *(float*)(result + 24);
		a1[7] = *(float*)(result + 28);
		a1[8] = *(float*)(result + 32);
		a1[9] = *(float*)(result + 36);
		a1[10] = *(float*)(result + 40);
		a1[11] = *(float*)(result + 44);
		a1[12] = *(float*)(result + 48);
		result = 1i64;
		a1[3] = a1[3] + *a2;
		a1[4] = a2[1] + a1[4];
		a1[5] = a2[2] + a1[5];
	}
	return result;
}

