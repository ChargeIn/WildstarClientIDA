#include "../winhttp.h"

//----- (000000014049C7B0) ----------------------------------------------------
__int64 __fastcall sub_14049C7B0(__int64 a1, __int64 a2, int a3)
{
	__int64 v3; // r9
	unsigned int v5; // ecx
	BOOL v6; // edx
	int v7; // r8d

	v3 = *(_QWORD*)(qword_140C65898 + 120);
	if (!v3)
		return a3 == 2;
	v5 = 0;
	v6 = *(_DWORD*)(v3 + 8) == *(_DWORD*)(a2 + 8);
	v7 = a3 - 1;
	if (v7)
	{
		if (v7 == 1)
		{
			LOBYTE(v5) = !v6;
			return v5;
		}
	}
	else
	{
		return v6;
	}
	return v5;
}
// 140C65898: using guessed type __int64 qword_140C65898;

