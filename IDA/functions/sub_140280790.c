#include "../winhttp.h"

//----- (0000000140280790) ----------------------------------------------------
__int64 __fastcall sub_140280790(__int64 a1)
{
	__int64 v1; // rdx
	int v2; // eax
	__int64 v4; // rax

	v1 = *(_QWORD*)(a1 + 8600);
	v2 = *(_DWORD*)(v1 + 8);
	if (v2)
	{
		if ((unsigned int)(v2 - 1) > 1)
			return 27i64;
		else
			return *(unsigned int*)((*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(v1 + 16) + 24i64))(*(_QWORD*)(v1 + 16))
				+ 24);
	}
	else
	{
		v4 = *(_QWORD*)(v1 + 16);
		if (!v4)
			v4 = *(_QWORD*)(*(_QWORD*)v1 + 8584i64);
		return *(unsigned int*)(v4 + 36);
	}
}

