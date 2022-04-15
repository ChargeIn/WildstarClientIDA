#include "../winhttp.h"

//----- (00000001408660D0) ----------------------------------------------------
__int64 __fastcall sub_1408660D0(__int64 a1)
{
	__int64 i; // rbx
	__int64 v3; // rcx
	unsigned __int64 v4; // rdx
	__int64 result; // rax

	for (i = *(_QWORD*)a1; i != *(_QWORD*)(a1 + 8); i += 40i64)
	{
		v3 = *(_QWORD*)(i + 24);
		if (v3)
		{
			v4 = *(_QWORD*)(i + 32);
			if (v4)
				result = sub_140874450(v3, v4);
		}
	}
	if (*(_QWORD*)a1)
	{
		sub_140866030(a1);
		sub_140881720(dword_140C10F20, *(_QWORD*)a1);
		result = 0i64;
		*(_QWORD*)a1 = 0i64;
		*(_QWORD*)(a1 + 8) = 0i64;
		*(_DWORD*)(a1 + 16) = 0;
	}
	return result;
}
// 140C10F20: using guessed type int dword_140C10F20;

