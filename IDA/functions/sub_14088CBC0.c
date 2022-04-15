#include "../winhttp.h"

//----- (000000014088CBC0) ----------------------------------------------------
__int64 __fastcall sub_14088CBC0(__int64 a1)
{
	int v1; // edi
	__int64 v3; // rcx
	__int64 result; // rax

	if (a1)
	{
		v1 = dword_140C10F20;
		*(_QWORD*)(a1 + 16) = 0i64;
		v3 = *(_QWORD*)(a1 + 24);
		if (v3)
		{
			sub_14088B630(v3);
			*(_QWORD*)(a1 + 24) = 0i64;
		}
		return sub_140881720(v1, a1);
	}
	return result;
}
// 140C10F20: using guessed type int dword_140C10F20;

