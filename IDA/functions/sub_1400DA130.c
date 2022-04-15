#include "../winhttp.h"

//----- (00000001400DA130) ----------------------------------------------------
__int64 __fastcall sub_1400DA130(_QWORD* a1)
{
	__int64 result; // rax
	unsigned int v3; // ecx
	int* v4; // rdx

	result = sub_1400D66A0(a1, 1u);
	if (result)
	{
		v3 = *(unsigned __int8*)(result + 28);
		v4 = (int*)a1[2];
		result = 1i64;
		v4[2] = 1;
		*v4 = (v3 >> 3) & 1;
		a1[2] += 16i64;
	}
	return result;
}

