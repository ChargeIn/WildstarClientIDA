#include "../winhttp.h"

//----- (0000000140860560) ----------------------------------------------------
char __fastcall sub_140860560(__int64 a1, float a2)
{
	__int64 v3; // rcx
	__int64 v4; // rcx
	char result; // al

	if (a2 != *(float*)(a1 + 388))
	{
		v3 = *(_QWORD*)(a1 + 520);
		if (v3)
			sub_140855480(v3, a2, a1);
		v4 = *(_QWORD*)(a1 + 528);
		if (v4)
			sub_140855480(v4, a2, a1);
		result = sub_140855480((__int64)word_140C10F30, a2, a1);
		*(float*)(a1 + 388) = a2;
	}
	return result;
}
// 140C10F30: using guessed type _WORD word_140C10F30[12];

