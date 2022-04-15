#include "../winhttp.h"

//----- (000000014012F5F0) ----------------------------------------------------
__int64 __fastcall sub_14012F5F0(__int64 a1)
{
	signed __int32 v1; // edx
	__int64 result; // rax
	__int64 v4; // rcx

	v1 = *(_DWORD*)a1;
	if (*(_DWORD*)a1)
	{
		while (1)
		{
			result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32*)a1, v1 - 1, v1);
			if (v1 == (_DWORD)result)
				break;
			v1 = *(_DWORD*)a1;
			if (!*(_DWORD*)a1)
				return result;
		}
		if (v1 == 1)
		{
			v4 = *(_QWORD*)(a1 + 8);
			if (v4)
			{
				result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v4 + 8i64))(v4);
				*(_QWORD*)(a1 + 8) = 0i64;
			}
		}
	}
	return result;
}

