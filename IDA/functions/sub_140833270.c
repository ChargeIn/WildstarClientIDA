#include "../winhttp.h"

//----- (0000000140833270) ----------------------------------------------------
void __fastcall sub_140833270(int a1, float a2)
{
	__int64 i; // rbx
	__int64 v4; // rdi

	for (i = qword_140C61CC8; i != qword_140C61CD0; i += 8i64)
	{
		v4 = *(_QWORD*)i;
		if ((unsigned int)sub_14085CF90((__int64*)(*(_QWORD*)i + 1088i64)) == a1)
			sub_140863450(v4 + 32, a2);
	}
}
// 140C61CC8: using guessed type __int64 qword_140C61CC8;
// 140C61CD0: using guessed type __int64 qword_140C61CD0;

