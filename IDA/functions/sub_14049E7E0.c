#include "../winhttp.h"

//----- (000000014049E7E0) ----------------------------------------------------
__int64 __fastcall sub_14049E7E0(__int64 a1, int a2, int a3)
{
	unsigned int v3; // ecx
	__int64 v4; // r9
	int v5; // eax
	BOOL v6; // r8d
	int v7; // edx

	v3 = 0;
	v4 = *(_QWORD*)(qword_140C65898 + 29272);
	if (v4)
		v5 = *(_DWORD*)(v4 + 20);
	else
		v5 = 0;
	v6 = v5 == a3;
	v7 = a2 - 1;
	if (!v7)
		return v6;
	if (v7 == 1)
		LOBYTE(v3) = !v6;
	return v3;
}
// 140C65898: using guessed type __int64 qword_140C65898;

