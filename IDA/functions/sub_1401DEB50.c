#include "../winhttp.h"

//----- (00000001401DEB50) ----------------------------------------------------
int* __fastcall sub_1401DEB50(__int64 a1, int* a2)
{
	int* result; // rax

	result = sub_14018B280(56i64, 0);
	if (result != (int*)-32i64)
	{
		result[8] = *a2;
		result[9] = a2[1];
		result[10] = a2[2];
		result[11] = a2[3];
		result[12] = a2[4];
	}
	return result;
}

