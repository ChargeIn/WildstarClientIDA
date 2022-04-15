#include "../winhttp.h"

//----- (0000000140743DF0) ----------------------------------------------------
__int64 __fastcall sub_140743DF0(__int64 a1)
{
	__int64 v2; // rcx
	int v3; // eax
	int v4; // ecx
	__int64 v5; // rax

	v2 = *(_QWORD*)(qword_140C65898 + 27728);
	if (v2)
	{
		v3 = *(_DWORD*)(v2 + 8);
		if ((v3 & 0x10) != 0)
			v4 = 0;
		else
			v4 = ((v3 & 0x20) != 0) + 1;
	}
	else
	{
		v4 = 3;
	}
	v5 = *(_QWORD*)(a1 + 16);
	*(_DWORD*)(v5 + 8) = 3;
	*(double*)v5 = (double)v4;
	*(_QWORD*)(a1 + 16) += 16i64;
	return 1i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;

