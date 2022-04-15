#include "../winhttp.h"

//----- (0000000140327080) ----------------------------------------------------
__int64 __fastcall sub_140327080(__int64 a1, unsigned int a2)
{
	unsigned int v2; // r9d
	__int64 v3; // r8
	__int64 v4; // rax

	v2 = *(_DWORD*)(a1 + 128);
	v3 = 0i64;
	while ((unsigned int)v3 < v2)
	{
		v4 = (unsigned int)v3 + ((v2 - (unsigned int)v3) >> 1);
		if (a2 > *(unsigned __int16*)(*(_QWORD*)(a1 + 136) + 48 * v4))
			v3 = (unsigned int)(v4 + 1);
		else
			v2 = v3 + ((v2 - (unsigned int)v3) >> 1);
	}
	if ((unsigned int)v3 < *(_DWORD*)(a1 + 128) && a2 == *(unsigned __int16*)(*(_QWORD*)(a1 + 136) + 48 * v3))
		return (unsigned int)v3;
	else
		return 0xFFFFFFFFi64;
}

