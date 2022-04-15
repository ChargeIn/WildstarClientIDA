#include "../winhttp.h"

//----- (000000014055C900) ----------------------------------------------------
__int64 __fastcall sub_14055C900(__int64 a1, __int64 a2)
{
	__int64 result; // rax

	result = 0i64;
	if (a2)
	{
		if (*(_QWORD*)(qword_140C65898 + 120) == a2)
		{
			return qword_140C65898;
		}
		else if (*(_QWORD*)(qword_140C65898 + 25744) == a2)
		{
			return qword_140C65898;
		}
	}
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

