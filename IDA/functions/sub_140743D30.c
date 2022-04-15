#include "../winhttp.h"

//----- (0000000140743D30) ----------------------------------------------------
__int64 __fastcall sub_140743D30(__int64 a1)
{
	int v1; // eax
	int v3; // edx
	_DWORD* v4; // rcx

	v1 = 0;
	v3 = 0;
	if (*(_QWORD*)(qword_140C65898 + 27728))
		LOBYTE(v3) = *(_QWORD*)(qword_140C65898 + 27776) != 0i64;
	v4 = *(_DWORD**)(a1 + 16);
	LOBYTE(v1) = v3 != 0;
	v4[2] = 1;
	*v4 = v1;
	*(_QWORD*)(a1 + 16) += 16i64;
	return 1i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;

