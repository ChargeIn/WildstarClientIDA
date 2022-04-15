#include "../winhttp.h"

//----- (0000000140061DD0) ----------------------------------------------------
__int64 __fastcall sub_140061DD0(__int64 a1, __int64 a2)
{
	__int64 v2; // r8
	__int64 result; // rax

	v2 = *(_QWORD*)(a1 + 40);
	if (*(_BYTE*)(a1 + 10))
	{
		*(_BYTE*)(a1 + 10) = 0;
		if (*(_BYTE*)(**(_QWORD**)(v2 + 8) + 10i64))
		{
			if ((unsigned int)sub_140061C90(a1, a2))
				*(_QWORD*)(a1 + 16) = *(_QWORD*)(*(_QWORD*)(a1 + 40) + 16i64);
		}
		else
		{
			*(_QWORD*)(a1 + 24) = *(_QWORD*)v2;
		}
	}
	else
	{
		result = sub_1400618B0(a1, (char*)(a2 - 16), -1);
		if ((_DWORD)result)
			return result;
	}
	return sub_14005F800(a1, (*(_QWORD*)(a1 + 40) - *(_QWORD*)(a1 + 80)) / 40i64);
}

