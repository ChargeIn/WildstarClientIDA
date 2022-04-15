#include "../winhttp.h"

//----- (00000001400D8EB0) ----------------------------------------------------
__int64 __fastcall sub_1400D8EB0(_QWORD* a1)
{
	unsigned int v2; // edx
	unsigned __int64 v3; // rcx
	__int64 v4; // rax
	__int64 result; // rax
	__int64 v6; // rdx

	v2 = 0;
	v3 = *(_QWORD*)(qword_140C63650 + 768);
	if (v3)
	{
		v4 = 0i64;
		do
		{
			if (*(_QWORD**)(*(_QWORD*)(*(_QWORD*)(qword_140C63650 + 760) + 8 * v4) + 400i64) == a1)
				break;
			v4 = ++v2;
		} while (v2 < v3);
	}
	result = sub_1400D66A0(a1, 1u);
	if (result)
	{
		v6 = *(_QWORD*)(result + 440);
		if (!v6 || *(float*)(v6 + 224) == *(float*)(v6 + 232))
			return sub_14014EAB0(a1, result + 64);
		else
			return sub_14014EAB0(a1, v6 + 112);
	}
	return result;
}
// 140C63650: using guessed type __int64 qword_140C63650;

