#include "../winhttp.h"

//----- (00000001402F7AD0) ----------------------------------------------------
__int64 __fastcall sub_1402F7AD0(__int64 a1, unsigned int a2)
{
	unsigned int v2; // eax
	__int64 v3; // rax

	if (a2)
	{
		v3 = *(_QWORD*)(a1 + 64);
		if (a2 >= *(_DWORD*)(v3 + 400))
			v2 = -1;
		else
			v2 = *(unsigned __int16*)(*(_QWORD*)(v3 + 408) + 2i64 * (int)a2);
	}
	else
	{
		v2 = 0;
	}
	return *(_QWORD*)(*(_QWORD*)(a1 + 64) + 1440i64)
		+ 76i64 * *(unsigned __int16*)(*(_QWORD*)(*(_QWORD*)(a1 + 64) + 1456i64) + 2i64 * v2);
}

