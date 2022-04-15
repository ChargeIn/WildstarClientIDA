#include "../winhttp.h"

//----- (0000000140044800) ----------------------------------------------------
__int64 __fastcall sub_140044800(__int64 a1)
{
	int v1; // eax
	int v3; // edx
	_DWORD* v4; // rcx

	v1 = 0;
	if (!qword_140C63620 || (v3 = 1, !*(_QWORD*)(qword_140C63620 + 24)))
		v3 = 0;
	v4 = *(_DWORD**)(a1 + 16);
	LOBYTE(v1) = v3 != 0;
	v4[2] = 1;
	*v4 = v1;
	*(_QWORD*)(a1 + 16) += 16i64;
	return 1i64;
}
// 140C63620: using guessed type __int64 qword_140C63620;

