#include "../winhttp.h"

//----- (0000000140280730) ----------------------------------------------------
__int64 __fastcall sub_140280730(__int64 a1, unsigned int a2)
{
	__int64 v2; // r8
	int v3; // eax
	__int64 v4; // rdx
	__int64 v6; // rax

	v2 = *(_QWORD*)(a1 + 8592);
	v3 = *(_DWORD*)(v2 + 24i64 * a2 + 8);
	v4 = v2 + 24i64 * a2;
	if (v3)
	{
		if ((unsigned int)(v3 - 1) > 2)
			return 27i64;
		else
			return *(unsigned int*)((*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(v4 + 16) + 24i64))(*(_QWORD*)(v4 + 16))
				+ 24);
	}
	else
	{
		v6 = *(_QWORD*)(v4 + 16);
		if (!v6)
			v6 = *(_QWORD*)(*(_QWORD*)v2 + 8584i64);
		return *(unsigned int*)(v6 + 32);
	}
}

