#include "../winhttp.h"

//----- (00000001402E2230) ----------------------------------------------------
__int64 __fastcall sub_1402E2230(__int64 a1, __int64 a2)
{
	__int64 i; // rbx
	__int64 result; // rax

	if (*(_QWORD*)(a2 + 200))
	{
		for (i = *(_QWORD*)(a2 + 80); i; i = *(_QWORD*)(i + 48))
		{
			if (a1 == *(_QWORD*)(i + 32))
				result = (*(__int64(__fastcall**)(__int64, _QWORD))(a2 + 200))(i, *(_QWORD*)(a2 + 224));
		}
	}
	return result;
}

