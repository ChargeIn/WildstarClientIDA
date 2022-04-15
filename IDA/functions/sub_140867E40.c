#include "../winhttp.h"

//----- (0000000140867E40) ----------------------------------------------------
__int64 __fastcall sub_140867E40(__int64 a1)
{
	__int64 v2; // rdx
	__int64 result; // rax
	__int64 v4; // rdx
	__int64 v5; // rdx

	*(_DWORD*)a1 = 0;
	v2 = *(_QWORD*)(a1 + 48);
	if (v2)
	{
		*(_QWORD*)(a1 + 56) = v2;
		result = sub_140881720(dword_140C10F20, v2);
		*(_QWORD*)(a1 + 48) = 0i64;
		*(_QWORD*)(a1 + 56) = 0i64;
		*(_DWORD*)(a1 + 64) = 0;
	}
	if ((*(_BYTE*)(a1 + 40) & 2) != 0)
	{
		v4 = *(_QWORD*)(a1 + 16);
		if (v4)
		{
			result = sub_140881720(dword_140C10F20, v4);
			*(_QWORD*)(a1 + 16) = 0i64;
		}
	}
	v5 = *(_QWORD*)(a1 + 136);
	if (v5)
		return sub_140881720(dword_140C10F20, v5);
	return result;
}
// 140C10F20: using guessed type int dword_140C10F20;

