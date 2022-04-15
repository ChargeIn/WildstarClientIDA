#include "../winhttp.h"

//----- (000000014045B800) ----------------------------------------------------
_BOOL8 __fastcall sub_14045B800(__int64 a1)
{
	__int64 v1; // rax
	int v2; // edx

	v1 = *(_QWORD*)(a1 + 24);
	return v1 && (v2 = *(_DWORD*)(v1 + 108)) != 0 && *(_DWORD*)(qword_140C65898 + 5780) == v2;
}
// 140C65898: using guessed type __int64 qword_140C65898;

