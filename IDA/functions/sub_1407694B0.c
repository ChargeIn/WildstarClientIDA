#include "../winhttp.h"

//----- (00000001407694B0) ----------------------------------------------------
__int64 __fastcall sub_1407694B0(__int64 a1)
{
	int v1; // eax
	unsigned int v3; // ecx
	int v4; // edx
	unsigned __int8 v5; // cf
	int v6; // edx
	_DWORD* v7; // rcx

	v1 = 0;
	if (*(_DWORD*)(qword_140C65B98 + 328)
		|| (v3 = *(_DWORD*)(qword_140C65B98 + 268), v3 > 8)
		|| (v4 = 278, v5 = _bittest(&v4, v3), v6 = 1, !v5))
	{
		v6 = 0;
	}
	v7 = *(_DWORD**)(a1 + 16);
	LOBYTE(v1) = v6 != 0;
	v7[2] = 1;
	*v7 = v1;
	*(_QWORD*)(a1 + 16) += 16i64;
	return 1i64;
}
// 140C65B98: using guessed type __int64 qword_140C65B98;

