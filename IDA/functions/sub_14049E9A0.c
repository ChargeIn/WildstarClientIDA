#include "../winhttp.h"

//----- (000000014049E9A0) ----------------------------------------------------
__int64 __fastcall sub_14049E9A0(__int64 a1, __int64 a2, int a3)
{
	unsigned int v3; // edx
	__int64 v4; // rcx
	unsigned int v5; // ecx
	int v6; // r8d

	v3 = 0;
	v4 = *(_QWORD*)(qword_140C65898 + 27728);
	if (v4)
		v5 = (*(_DWORD*)(v4 + 8) >> 1) & 1;
	else
		v5 = 0;
	v6 = a3 - 1;
	if (!v6)
		return v5;
	if (v6 == 1)
		LOBYTE(v3) = v5 == 0;
	return v3;
}
// 140C65898: using guessed type __int64 qword_140C65898;

