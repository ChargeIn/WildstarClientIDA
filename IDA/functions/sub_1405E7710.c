#include "../winhttp.h"

//----- (00000001405E7710) ----------------------------------------------------
double __fastcall sub_1405E7710(__int64 a1, unsigned int a2)
{
	__int64 v2; // r8
	double v3; // xmm6_8
	double v4; // xmm0_8
	float v5; // xmm1_4
	double result; // xmm0_8

	if (a2 > 0xA)
		return 0.0;
	v2 = *(_QWORD*)(qword_140C65898 + 120);
	if (!v2)
		return 0.0;
	*(_QWORD*)&v3 = *(unsigned int*)(v2 + 4i64 * (int)a2 + 540);
	v4 = (*(double(__fastcall**)(__int64))(*(_QWORD*)a1 + 56i64))(a1);
	v5 = *(float*)&v4;
	result = 0.0;
	if (v5 != 0.0)
	{
		*(float*)&v3 = *(float*)&v3 / v5;
		return v3;
	}
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

