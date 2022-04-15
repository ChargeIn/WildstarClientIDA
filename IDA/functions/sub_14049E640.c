#include "../winhttp.h"

//----- (000000014049E640) ----------------------------------------------------
__int64 __fastcall sub_14049E640(__int64 a1, __int64 a2, int a3, unsigned int a4)
{
	unsigned int v4; // edx
	int v5; // ecx
	unsigned int v6; // r10d
	int v7; // r8d

	v4 = 0;
	v5 = *(_DWORD*)(qword_140C65898 + 26448);
	v6 = _bittest(&v5, a4);
	v7 = a3 - 1;
	if (!v7)
		return v6;
	if (v7 == 1)
		LOBYTE(v4) = v6 == 0;
	return v4;
}
// 140C65898: using guessed type __int64 qword_140C65898;

