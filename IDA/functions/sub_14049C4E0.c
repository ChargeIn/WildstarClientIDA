#include "../winhttp.h"

//----- (000000014049C4E0) ----------------------------------------------------
__int64 __fastcall sub_14049C4E0(__int64 a1, __int64 a2, int a3, int a4)
{
	__int64 v4; // rcx
	int v5; // eax
	unsigned int v6; // ecx
	int v7; // r8d

	v4 = *(_QWORD*)(qword_140C65898 + 120);
	if (v4)
		v5 = *(_DWORD*)(v4 + 216);
	else
		v5 = 17;
	v6 = 0;
	v7 = a3 - 1;
	if (!v7)
		return v5 == a4;
	if (v7 == 1)
		LOBYTE(v6) = v5 != a4;
	return v6;
}
// 140C65898: using guessed type __int64 qword_140C65898;

