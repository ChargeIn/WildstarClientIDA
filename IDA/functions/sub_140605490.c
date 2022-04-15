#include "../winhttp.h"

//----- (0000000140605490) ----------------------------------------------------
_BOOL8 __fastcall sub_140605490(__int64 a1)
{
	__int64 v1; // rdx
	__int64 v2; // r8
	_BOOL8 result; // rax

	v1 = *(_QWORD*)(a1 + 64);
	result = 0;
	if (v1)
	{
		if (*(_QWORD*)(v1 + 96))
		{
			v2 = *(_QWORD*)(*(_QWORD*)(v1 + 88) + 8i64 * *(_QWORD*)(v1 + 104));
			if (v2)
			{
				if (*(_DWORD*)(v2 + 16) == *(_DWORD*)(v1 + 16) && *(_QWORD*)(v2 + 24) == *(_QWORD*)(v1 + 24))
					return 1;
			}
		}
	}
	return result;
}

