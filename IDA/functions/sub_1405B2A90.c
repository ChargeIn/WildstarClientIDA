#include "../winhttp.h"

//----- (00000001405B2A90) ----------------------------------------------------
__int64 __fastcall sub_1405B2A90(__int64 a1, float* a2, float* a3, unsigned int a4)
{
	__int64 result; // rax

	result = sub_14024B980(a4);
	if (result)
	{
		*a2 = *(float*)result;
		a2[1] = *(float*)(result + 4);
		a2[2] = *(float*)(result + 8);
		a2[3] = *(float*)(result + 12);
		a2[4] = *(float*)(result + 16);
		a2[5] = *(float*)(result + 20);
		a2[6] = *(float*)(result + 24);
		a2[7] = *(float*)(result + 28);
		a2[8] = *(float*)(result + 32);
		a2[9] = *(float*)(result + 36);
		a2[10] = *(float*)(result + 40);
		a2[11] = *(float*)(result + 44);
		a2[12] = *(float*)(result + 48);
		result = 1i64;
		a2[3] = a2[3] + *a3;
		a2[4] = a3[1] + a2[4];
		a2[5] = a3[2] + a2[5];
	}
	return result;
}

