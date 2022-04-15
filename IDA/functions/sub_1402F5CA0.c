#include "../winhttp.h"

//----- (00000001402F5CA0) ----------------------------------------------------
__int64 __fastcall sub_1402F5CA0(__int64 a1, int a2)
{
	__int64 result; // rax
	int v3; // ecx

	result = *(unsigned int*)(a1 + 52);
	if (((unsigned int)result & a2) != 0)
	{
		_InterlockedExchange((volatile __int32*)(a1 + 52), result & ~a2);
		for (result = *(_QWORD*)(a1 + 1216); result; result = *(_QWORD*)(result + 1216))
		{
			v3 = *(_DWORD*)(result + 52);
			if ((v3 & 0x20) == 0)
				break;
			_InterlockedExchange((volatile __int32*)(result + 52), v3 & 0xFFFFFFDF);
		}
	}
	return result;
}

