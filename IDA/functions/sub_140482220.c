#include "../winhttp.h"

//----- (0000000140482220) ----------------------------------------------------
__int64 __fastcall sub_140482220(_DWORD* a1, int a2)
{
	__int64 v2; // r8
	__int64 v3; // rax

	if (a1[13] != a2)
	{
		v2 = qword_140C65898;
		a1[13] = a2;
		a1[1578] = 1;
		v3 = *(_QWORD*)(v2 + 120);
		if (v3 && a1[2] == *(_DWORD*)(v3 + 8))
			*(_DWORD*)(v2 + 28568) = 1;
		sub_14045AEC0((__int64)a1);
	}
	return 0i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;

