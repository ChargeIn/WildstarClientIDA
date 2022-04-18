#include "../winhttp.h"

//----- (000000014077A200) ----------------------------------------------------
__int64 __fastcall sub_14077A200(__int64 a1)
{
	__int64 result; // rax
	__int64 v3; // rcx
	int v4; // [rsp+20h] [rbp-18h]

	result = qword_140C65898;
	if (qword_140C65898)
	{
		v3 = *(_QWORD*)(qword_140C65898 + 29504);
		if (v3)
		{
			v4 = 0;
			return Apollo_LUAEvent(
				v3,
				"ProgressClickWindowCompletionLevel",
				byte_1409EC294,
				(unsigned int)(int)(float)(*(float*)(a1 + 180) * 100.0),
				v4);
		}
	}
	return result;
}
// 1409EC294: using guessed type _BYTE byte_1409EC294[64];
// 140C65898: using guessed type __int64 qword_140C65898;

