#include "../winhttp.h"

//----- (0000000140842570) ----------------------------------------------------
__int64 __fastcall sub_140842570(__int64 a1)
{
	__int64* v2; // rdx
	unsigned __int64 v3; // rcx
	__int64 result; // rax

	while (1)
	{
		v2 = *(__int64**)a1;
		if (!*(_QWORD*)a1)
			break;
		*(_QWORD*)a1 = *v2;
		if (v2 == *(__int64**)(a1 + 8))
			*(_QWORD*)(a1 + 8) = 0i64;
		v3 = *(_QWORD*)(a1 + 40);
		if ((unsigned __int64)v2 < v3 || (unsigned __int64)v2 >= v3 + ((unsigned __int64)*(unsigned int*)(a1 + 24) << 6))
		{
			result = sub_140881720(dword_140C10F20, (__int64)v2);
			--* (_DWORD*)(a1 + 32);
		}
		else
		{
			result = *(_QWORD*)(a1 + 16);
			*v2 = result;
			--* (_DWORD*)(a1 + 32);
			*(_QWORD*)(a1 + 16) = v2;
		}
	}
	return result;
}
// 140C10F20: using guessed type int dword_140C10F20;

