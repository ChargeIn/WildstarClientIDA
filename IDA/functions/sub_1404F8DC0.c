#include "../winhttp.h"

//----- (00000001404F8DC0) ----------------------------------------------------
__int64 __fastcall sub_1404F8DC0(_QWORD* a1)
{
	__int64 v1; // rax

	v1 = sub_1404F87C0(a1, 1u);
	if (*(_DWORD*)(v1 + 1048) == 278)
	{
		*(_DWORD*)(v1 + 1048) = 7864;
		sub_1404FFDD0(v1);
	}
	return 0i64;
}

