#include "../winhttp.h"

//----- (00000001404F9260) ----------------------------------------------------
__int64 __fastcall sub_1404F9260(_QWORD* a1)
{
	__int64 v1; // rax

	v1 = sub_1404F87C0(a1, 1u);
	if (v1)
	{
		*(_DWORD*)(v1 + 1040) = 1;
		*(_QWORD*)(v1 + 2276) = 0i64;
		*(_QWORD*)(v1 + 2284) = 0i64;
	}
	return 0i64;
}

