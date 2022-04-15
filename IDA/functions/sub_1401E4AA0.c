#include "../winhttp.h"

//----- (00000001401E4AA0) ----------------------------------------------------
__int64 __fastcall sub_1401E4AA0(int* a1)
{
	__int64 v1; // r8
	__int64 result; // rax
	unsigned int* v3; // rdx
	__int64 v4; // rcx

	v1 = *((_QWORD*)a1 + 2);
	result = a1[2] + 2860486313i64 * (a1[1] + 2860486313i64 * *a1);
	if (v1)
	{
		v3 = (unsigned int*)(a1 + 8);
		do
		{
			v4 = *v3;
			v3 += 4;
			result = v4 + 2860486313i64 * (*((_QWORD*)v3 - 3) + 2860486313i64 * result);
			--v1;
		} while (v1);
	}
	return result;
}

