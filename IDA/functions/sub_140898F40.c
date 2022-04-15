#include "../winhttp.h"

//----- (0000000140898F40) ----------------------------------------------------
__int64 __fastcall sub_140898F40(__int64 a1)
{
	int v1; // edi
	__int64 v3; // rcx
	__int64 v4; // rcx
	__int64 result; // rax

	if (a1)
	{
		v1 = dword_140C10F20;
		v3 = *(_QWORD*)(a1 + 8);
		*(_QWORD*)(a1 + 8) = 0i64;
		if (v3)
			sub_14088B630(v3);
		v4 = *(_QWORD*)(a1 + 8);
		if (v4)
		{
			sub_14088B630(v4);
			*(_QWORD*)(a1 + 8) = 0i64;
		}
		return sub_140881720(v1, a1);
	}
	return result;
}
// 140C10F20: using guessed type int dword_140C10F20;

