#include "../winhttp.h"

//----- (000000014078A460) ----------------------------------------------------
__int64 __fastcall sub_14078A460(__int64 a1)
{
	int v1; // eax
	__int64 result; // rax
	__int64 v3; // rdx

	v1 = *(_DWORD*)(a1 + 92);
	if (v1 == 3)
	{
		v3 = *(_QWORD*)(a1 + 24);
		if (*(_QWORD*)(*(_QWORD*)(v3 + 1424) + 2896i64) || *(_QWORD*)(v3 + 1224) != a1)
		{
			result = 1118i64;
			if (*(_DWORD*)(a1 + 88))
				return 1122i64;
		}
		else
		{
			result = 1119i64;
			if (*(_DWORD*)(a1 + 88))
				return 1123i64;
		}
	}
	else if ((unsigned int)(v1 - 4) > 1)
	{
		return 0i64;
	}
	else
	{
		result = 1120i64;
		if (*(_DWORD*)(a1 + 88))
			return 6670i64;
	}
	return result;
}

