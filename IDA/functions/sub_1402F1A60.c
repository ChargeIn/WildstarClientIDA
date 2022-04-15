#include "../winhttp.h"

//----- (00000001402F1A60) ----------------------------------------------------
__int64 __fastcall sub_1402F1A60(__int64 a1, __int64 a2)
{
	__int64 result; // rax
	__int64 v3; // r8
	__int64 v4; // r10

	if (*(float*)(a1 + 8) < 0.0)
	{
		result = *(unsigned int*)(a1 + 76);
		if ((_DWORD)result)
		{
			v4 = (unsigned int)(result - 1);
			result = *(_QWORD*)(a1 + 32);
			if (*(_DWORD*)(*(_QWORD*)(a2 + 664) + 4 * v4) >= *(_DWORD*)(result + 12))
			{
				*(_DWORD*)(a1 + 76) = v4;
				return result;
			}
		}
		goto LABEL_4;
	}
	result = (unsigned int)++ * (_DWORD*)(a1 + 76);
	if ((unsigned int)result >= *(_DWORD*)(a2 + 656)
		|| (v3 = (unsigned int)result,
			result = *(_QWORD*)(a1 + 32),
			*(_DWORD*)(*(_QWORD*)(a2 + 664) + 4 * v3) >= *(_DWORD*)(result + 16)))
	{
	LABEL_4:
		*(_DWORD*)(a1 + 76) = -1;
	}
	return result;
}

